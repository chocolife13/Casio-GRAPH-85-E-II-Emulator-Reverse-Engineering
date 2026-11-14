// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043c040
// entry: 0043c040  size: 199


uint FUN_0043c040(uint param_1,int param_2)

{
  if ((*(int *)(param_2 + 0x34) == 1) &&
     ((*(int *)(param_2 + 0x30) != 1 ||
      ((((param_1 != 0x8b && (param_1 != 0xb8)) && (param_1 != 0x9b)) && (param_1 != 0xa8)))))) {
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
          goto switchD_0043c0aa_caseD_c;
        }
      }
    }
    else if (param_1 < 0x7f55) {
      if (param_1 != 0x7f54) {
        switch(param_1) {
        case 0xb8:
        case 0xb9:
        case 0xba:
        case 0xbb:
        case 0xbc:
        case 0xcb:
        case 0xcc:
          break;
        default:
          goto switchD_0043c0aa_caseD_c;
        }
      }
    }
    else {
      if (0xf907 < param_1) {
        return param_1;
      }
      if (param_1 < 0xf901) {
        if (param_1 < 0x7fb0) {
          return param_1;
        }
        if (0x7fb1 < param_1) {
          return param_1;
        }
      }
    }
    FUN_00438c70(0xc0,param_2);
  }
switchD_0043c0aa_caseD_c:
  return param_1;
}

