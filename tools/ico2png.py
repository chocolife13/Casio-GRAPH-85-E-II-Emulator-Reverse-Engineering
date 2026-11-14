#!/usr/bin/env python3
"""Convert the 4bpp/8bpp ICO resources of the Graph 85 emulator to PNG.

Only the subset of the ICO format used by this binary is implemented:
uncompressed BITMAPINFOHEADER images (1/4/8/24/32 bpp) with an AND mask.
"""
import struct
import sys
import zlib


def decode_dib(dib, width, height, bitcount, has_mask):
    hdr_size = struct.unpack_from("<I", dib, 0)[0]
    compression = struct.unpack_from("<I", dib, 16)[0]
    clr_used = struct.unpack_from("<I", dib, 32)[0]
    if compression != 0:
        raise ValueError("compressed icons are not supported")
    if bitcount <= 8:
        ncolors = clr_used or (1 << bitcount)
        palette_off = hdr_size
        palette = []
        for i in range(ncolors):
            b, g, r, _ = struct.unpack_from("<BBBB", dib, palette_off + 4 * i)
            palette.append((r, g, b, 255))
        pix_off = palette_off + 4 * ncolors
    else:
        palette = []
        pix_off = hdr_size
    stride = ((width * bitcount + 31) // 32) * 4
    pixels = []
    for y in range(height):
        row = []
        base = pix_off + (height - 1 - y) * stride
        if bitcount == 4:
            for x in range(width):
                byte = dib[base + x // 2]
                idx = (byte >> 4) if x % 2 == 0 else (byte & 0xF)
                row.append(palette[idx] if idx < len(palette) else (0, 0, 0, 255))
        elif bitcount == 8:
            for x in range(width):
                idx = dib[base + x]
                row.append(palette[idx] if idx < len(palette) else (0, 0, 0, 255))
        elif bitcount == 24:
            for x in range(width):
                b, g, r = dib[base + 3 * x:base + 3 * x + 3]
                row.append((r, g, b, 255))
        elif bitcount == 32:
            for x in range(width):
                b, g, r, a = dib[base + 4 * x:base + 4 * x + 4]
                row.append((r, g, b, a or 255))
        else:
            raise ValueError("unsupported bit count %d" % bitcount)
        pixels.append(row)
    if has_mask:
        # Apply the 1bpp AND mask: set bits mean transparent.
        mask_stride = ((width + 31) // 32) * 4
        mask_off = pix_off + height * stride
        for y in range(height):
            base = mask_off + (height - 1 - y) * mask_stride
            for x in range(width):
                if dib[base + x // 8] & (0x80 >> (x % 8)):
                    r, g, b, _ = pixels[y][x]
                    pixels[y][x] = (r, g, b, 0)
    return pixels


def read_image(path, index=0):
    data = open(path, "rb").read()
    if len(data) >= 6 and data[:4] == b"\x00\x00\x01\x00":
        # ICO container. Some resources extracted from PE files carry
        # directory offsets that are 4 bytes short; recompute them from the
        # directory size and the recorded entry sizes.
        rsv, typ, count = struct.unpack_from("<HHH", data, 0)
        entries = []
        cursor = 6 + 16 * count
        for i in range(count):
            w, h, colors, rsv2, planes, bpp, size, off = struct.unpack_from(
                "<BBBBHHII", data, 6 + 16 * i)
            if off < cursor:
                off = cursor
            entries.append((w or 256, h or 256, bpp, size, off))
            cursor = off + size
        w, h, bpp, size, off = entries[index]
        dib = data[off:off + size]
        bw, bh, planes, bitcount = struct.unpack_from("<iiHH", dib, 4)
        height = abs(bh) // 2  # XOR bitmap + AND mask
        return bw, height, decode_dib(dib, bw, height, bitcount, True)
    else:
        # Raw BITMAPINFOHEADER resource (the ICON resource data). Like the
        # DIB inside an ICO, it stores the XOR bitmap followed by the AND
        # mask, hence the doubled height.
        bw, bh, planes, bitcount = struct.unpack_from("<iiHH", data, 4)
        height = abs(bh) // 2
        return bw, height, decode_dib(data, bw, height, bitcount, True)


def write_png(path, width, height, rows):
    raw = b"".join(b"\x00" + b"".join(bytes(px) for px in row) for row in rows)

    def chunk(tag, payload):
        c = struct.pack(">I", len(payload)) + tag + payload
        return c + struct.pack(">I", zlib.crc32(tag + payload) & 0xFFFFFFFF)

    png = b"\x89PNG\r\n\x1a\n"
    png += chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 6, 0, 0, 0))
    png += chunk(b"IDAT", zlib.compress(raw, 9))
    png += chunk(b"IEND", b"")
    open(path, "wb").write(png)


def main():
    src, dst = sys.argv[1], sys.argv[2]
    idx = int(sys.argv[3]) if len(sys.argv) > 3 else 0
    w, h, pix = read_image(src, idx)
    write_png(dst, w, h, pix)
    print("%s: %dx%d -> %s" % (src, w, h, dst))


if __name__ == "__main__":
    main()
