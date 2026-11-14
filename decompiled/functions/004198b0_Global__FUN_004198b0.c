// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004198b0
// entry: 004198b0  size: 834


void FUN_004198b0(uint *param_1,undefined1 param_2,uint param_3)

{
  switch(param_2) {
  case 0:
    *param_1 = *param_1 & 0x7fffffff | param_3 << 0x1f;
    return;
  case 1:
    *param_1 = (param_3 & 1) << 0x1e | *param_1 & 0xbfffffff;
    return;
  case 2:
    *param_1 = (param_3 & 1) << 0x1d | *param_1 & 0xdfffffff;
    return;
  case 3:
    *param_1 = (param_3 & 1) << 0x1c | *param_1 & 0xefffffff;
    return;
  case 4:
    *param_1 = (param_3 & 1) << 0x1b | *param_1 & 0xf7ffffff;
    return;
  case 5:
    *param_1 = (param_3 & 1) << 0x1a | *param_1 & 0xfbffffff;
    return;
  case 6:
    *param_1 = (param_3 & 1) << 0x19 | *param_1 & 0xfdffffff;
    return;
  case 7:
    *param_1 = (param_3 & 1) << 0x18 | *param_1 & 0xfeffffff;
    return;
  case 8:
    *param_1 = (param_3 & 1) << 0x17 | *param_1 & 0xff7fffff;
    return;
  case 9:
    *param_1 = (param_3 & 1) << 0x16 | *param_1 & 0xffbfffff;
    return;
  case 10:
    *param_1 = (param_3 & 1) << 0x15 | *param_1 & 0xffdfffff;
    return;
  case 0xb:
    *param_1 = (param_3 & 1) << 0x14 | *param_1 & 0xffefffff;
    return;
  case 0xc:
    *param_1 = (param_3 & 1) << 0x13 | *param_1 & 0xfff7ffff;
    return;
  case 0xd:
    *param_1 = (param_3 & 1) << 0x12 | *param_1 & 0xfffbffff;
    return;
  case 0xe:
    *param_1 = (param_3 & 1) << 0x11 | *param_1 & 0xfffdffff;
    return;
  case 0xf:
    *param_1 = (param_3 & 1) << 0x10 | *param_1 & 0xfffeffff;
    return;
  case 0x10:
    *param_1 = (param_3 & 1) << 0xf | *param_1 & 0xffff7fff;
    return;
  case 0x11:
    *param_1 = (param_3 & 1) << 0xe | *param_1 & 0xffffbfff;
    return;
  case 0x12:
    *param_1 = (param_3 & 1) << 0xd | *param_1 & 0xffffdfff;
    return;
  case 0x13:
    *param_1 = (param_3 & 1) << 0xc | *param_1 & 0xffffefff;
    return;
  case 0x14:
    *param_1 = (param_3 & 1) << 0xb | *param_1 & 0xfffff7ff;
    return;
  case 0x15:
    *param_1 = (param_3 & 1) << 10 | *param_1 & 0xfffffbff;
    return;
  case 0x16:
    *param_1 = (param_3 & 1) << 9 | *param_1 & 0xfffffdff;
    return;
  case 0x17:
    *param_1 = (param_3 & 1) << 8 | *param_1 & 0xfffffeff;
    return;
  case 0x18:
    *param_1 = (param_3 & 1) << 7 | *param_1 & 0xffffff7f;
    return;
  case 0x19:
    *param_1 = (param_3 & 1) << 6 | *param_1 & 0xffffffbf;
    return;
  case 0x1a:
    *param_1 = (param_3 & 1) << 5 | *param_1 & 0xffffffdf;
    return;
  case 0x1b:
    *param_1 = (param_3 & 1) << 4 | *param_1 & 0xffffffef;
    return;
  case 0x1c:
    *param_1 = (param_3 & 1) << 3 | *param_1 & 0xfffffff7;
    return;
  case 0x1d:
    *param_1 = (param_3 & 1) << 2 | *param_1 & 0xfffffffb;
    return;
  case 0x1e:
    *param_1 = (param_3 & 1) << 1 | *param_1 & 0xfffffffd;
    return;
  case 0x1f:
    *param_1 = (*param_1 ^ param_3) & 1 ^ *param_1;
  }
  return;
}

