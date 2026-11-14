// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004976f0
// entry: 004976f0  size: 112


undefined4 FUN_004976f0(uint param_1)

{
  if (param_1 < 0xad) {
    if (param_1 < 0xa8) {
      switch(param_1) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xe:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x98:
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
        break;
      default:
        goto switchD_00497712_caseD_c;
      }
    }
  }
  else if (param_1 < 0x7f55) {
    if (param_1 != 0x7f54) {
      switch(param_1) {
      case 0xb9:
      case 0xba:
      case 0xbc:
      case 0xcb:
      case 0xcc:
        break;
      default:
        goto switchD_00497712_caseD_c;
      }
    }
  }
  else if ((0xf907 < param_1) || ((param_1 < 0xf901 && ((param_1 < 0x7fb0 || (0x7fb1 < param_1))))))
  {
switchD_00497712_caseD_c:
    return 0;
  }
  return 1;
}

