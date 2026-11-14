#!/usr/bin/env python3
"""Extract Win32 resources from a PE32/PE32+ image without external deps.

Usage: extract_resources.py <pe-file> <out-dir>
"""
import os
import struct
import sys

TYPES = {
    1: "CURSOR", 2: "BITMAP", 3: "ICON", 4: "MENU", 5: "DIALOG",
    6: "STRING", 9: "ACCEL", 10: "RCDATA", 11: "MESSAGETABLE",
    12: "GROUP_CURSOR", 14: "GROUP_ICON", 16: "VERSION", 24: "MANIFEST",
}


def align(v, a=4):
    return (v + a - 1) & ~(a - 1)


class PE:
    def __init__(self, data):
        self.d = data
        e = struct.unpack_from("<I", data, 0x3C)[0]
        if data[e:e + 4] != b"PE\0\0":
            raise ValueError("not a PE image")
        self.num_sections = struct.unpack_from("<H", data, e + 6)[0]
        opt_size = struct.unpack_from("<H", data, e + 20)[0]
        self.opt_off = e + 24
        self.opt_size = opt_size
        self.sections = []
        for i in range(self.num_sections):
            off = self.opt_off + opt_size + i * 40
            name = data[off:off + 8].rstrip(b"\0").decode("latin-1")
            vsize, vaddr, rsize, rptr = struct.unpack_from("<IIII", data, off + 8)
            self.sections.append((name, vsize, vaddr, rsize, rptr))
        magic = struct.unpack_from("<H", data, self.opt_off)[0]
        dd_off = self.opt_off + (96 if magic == 0x10B else 112)
        self.dirs = [struct.unpack_from("<II", data, dd_off + i * 8)
                     for i in range(16)]

    def off(self, rva):
        for _n, vsize, vaddr, rsize, rptr in self.sections:
            if vaddr <= rva < vaddr + max(vsize, rsize):
                return rptr + (rva - vaddr)
        raise ValueError("RVA not mapped: %#x" % rva)

    def resource_root(self):
        rva, size = self.dirs[2]
        if not rva:
            raise ValueError("image has no resource directory")
        return self.off(rva), size


def res_name(pe, name, base):
    if name & 0x80000000:
        off = base + (name & 0x7FFFFFFF)
        n = struct.unpack_from("<H", pe.d, off)[0]
        return pe.d[off + 2:off + 2 + n * 2].decode("utf-16-le", "replace")
    return str(name)


def walk(pe, base, off, path, out):
    named, ids = struct.unpack_from("<HH", pe.d, off + 12)
    for i in range(named + ids):
        name, sub = struct.unpack_from("<II", pe.d, off + 16 + i * 8)
        name = res_name(pe, name, base)
        if sub & 0x80000000:
            walk(pe, base, base + (sub & 0x7FFFFFFF), path + [name], out)
        else:
            data_rva, size, cp, _res = struct.unpack_from("<IIII", pe.d, base + sub)
            out.append((path + [name], size, pe.off(data_rva), cp))


def bmp_from_resource(raw):
    if len(raw) < 40:
        return None
    hdr_size = struct.unpack_from("<I", raw, 0)[0]
    if hdr_size < 40 or hdr_size > len(raw):
        return None
    bit_count = struct.unpack_from("<H", raw, 14)[0]
    clr_used = struct.unpack_from("<I", raw, 32)[0]
    palette = 0
    if bit_count <= 8:
        palette = (clr_used or (1 << bit_count)) * 4
    offset = 14 + hdr_size + palette
    return b"BM" + struct.pack("<IHHI", 14 + len(raw), 0, 0, offset) + raw


def ico_from_group(raw, images):
    if len(raw) < 6:
        return None
    _res, typ, count = struct.unpack_from("<HHH", raw, 0)
    entries = []
    payload = []
    offset = 6 + count * 14
    for i in range(count):
        w, h, colors, res, planes, bpp, size, rid = struct.unpack_from(
            "<BBBBHHIH", raw, 6 + i * 14)
        data = images.get(rid)
        if data is None:
            return None
        entries.append(struct.pack("<BBBBHHII", w, h, colors, res, planes, bpp,
                                   size, offset))
        payload.append(data)
        offset += len(data)
    return struct.pack("<HHH", 0, typ, count) + b"".join(entries) + b"".join(payload)


def main():
    src, outdir = sys.argv[1], sys.argv[2]
    data = open(src, "rb").read()
    pe = PE(data)
    base, _size = pe.resource_root()
    leaves = []
    walk(pe, base, base, [], leaves)

    icons_by_id = {}
    for path, size, off, cp in leaves:
        if len(path) == 3 and path[0] == "3":
            icons_by_id[int(path[1])] = data[off:off + size]

    manifest = []
    for path, size, off, cp in leaves:
        kind = TYPES.get(int(path[0]), path[0]) if path[0].isdigit() else path[0]
        subdir = os.path.join(outdir, kind)
        os.makedirs(subdir, exist_ok=True)
        base_name = "_".join(path)
        blob = data[off:off + size]

        if kind == "BITMAP":
            bmp = bmp_from_resource(blob)
            if bmp:
                open(os.path.join(subdir, base_name + ".bmp"), "wb").write(bmp)
                manifest.append((kind, "/".join(path), size, base_name + ".bmp"))
                continue
        elif kind == "GROUP_ICON":
            ico = ico_from_group(blob, icons_by_id)
            if ico:
                open(os.path.join(subdir, base_name + ".ico"), "wb").write(ico)
                manifest.append((kind, "/".join(path), size, base_name + ".ico"))
                continue

        ext = {"STRING": ".bin", "MENU": ".bin", "DIALOG": ".bin",
               "ACCEL": ".bin", "VERSION": ".bin", "ICON": ".ico",
               "CURSOR": ".cur", "RCDATA": ".bin", "GROUP_CURSOR": ".bin"}.get(kind, ".bin")
        open(os.path.join(subdir, base_name + ext), "wb").write(blob)
        manifest.append((kind, "/".join(path), size, base_name + ext))

    with open(os.path.join(outdir, "MANIFEST.tsv"), "w", encoding="utf-8") as f:
        f.write("type\tresource\tbytes\tfile\n")
        for row in manifest:
            f.write("\t".join(map(str, row)) + "\n")
    print("extracted %d resources to %s" % (len(manifest), outdir))


if __name__ == "__main__":
    main()
