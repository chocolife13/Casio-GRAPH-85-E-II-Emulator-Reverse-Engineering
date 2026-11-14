// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00438b40
// entry: 00438b40  size: 117


undefined4 FUN_00438b40(uint param_1)

{
  if (param_1 < 0x97) {
    if (param_1 != 0x96) {
      switch(param_1) {
      case 0xf:
      case 0x2c:
      case 0x2e:
      case 0x5b:
      case 0x5d:
      case 0x7b:
      case 0x7d:
      case 0x86:
      case 0x87:
      case 0x8b:
      case 0x91:
      case 0x92:
      case 0x93:
        break;
      default:
switchD_00438b5f_caseD_10:
        return 0;
      }
    }
  }
  else if (param_1 < 0xbc) {
    if (param_1 != 0xbb) {
      switch(param_1) {
      case 0x9b:
      case 0xa5:
      case 0xa8:
      case 0xb5:
      case 0xb8:
        break;
      default:
        goto switchD_00438b5f_caseD_10;
      }
    }
  }
  else if (param_1 < 0x7f52) {
    if (((param_1 < 0x7f50) && (param_1 != 0xd0)) && (param_1 != 0x7f40)) {
      return 0;
    }
  }
  else if (param_1 != 0x7f54) {
    return 0;
  }
  return 0xffffffff;
}

