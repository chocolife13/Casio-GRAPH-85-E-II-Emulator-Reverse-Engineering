// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a0620
// entry: 004a0620  size: 441


void FUN_004a0620(uint *param_1,undefined1 param_2,byte param_3)

{
  switch(param_2) {
  case 0:
    *param_1 = param_3 & 0xf | *param_1 & 0xfffffff0;
    return;
  case 1:
    *param_1 = (param_3 & 0xf) << 4 | *param_1 & 0xffffff0f;
    return;
  case 2:
    *param_1 = (param_3 & 0xf) << 8 | *param_1 & 0xfffff0ff;
    return;
  case 3:
    *param_1 = (param_3 & 0xf) << 0xc | *param_1 & 0xffff0fff;
    return;
  case 4:
    *param_1 = (param_3 & 0xf) << 0x10 | *param_1 & 0xfff0ffff;
    return;
  case 5:
    *param_1 = (param_3 & 0xf) << 0x14 | *param_1 & 0xff0fffff;
    return;
  case 6:
    *param_1 = (uint)(param_3 != 0) << 0x18 | *param_1 & 0xfeffffff;
    return;
  case 7:
    *param_1 = (uint)(param_3 != 0) << 0x19 | *param_1 & 0xfdffffff;
    return;
  case 8:
    *param_1 = (uint)(param_3 != 0) << 0x1a | *param_1 & 0x7bffffff;
    return;
  case 9:
    *param_1 = (uint)(param_3 != 0) << 0x1b | *param_1 & 0xf7ffffff;
    return;
  case 10:
    *param_1 = (uint)(param_3 != 0) << 0x1c | *param_1 & 0xefffffff;
    return;
  case 0xb:
    *param_1 = (uint)(param_3 != 0) << 0x1d | *param_1 & 0xdfffffff;
    return;
  case 0xc:
    *param_1 = (uint)(param_3 != 0) << 0x1e | *param_1 & 0xbfffffff;
    return;
  case 0xd:
    *param_1 = (uint)(param_3 != 0) << 0x1f | *param_1 & 0x7fffffff;
  }
  return;
}

