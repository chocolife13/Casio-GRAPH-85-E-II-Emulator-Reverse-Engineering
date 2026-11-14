// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005246b0
// entry: 005246b0  size: 157


undefined4 FUN_005246b0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((0x2f < param_1) && (param_1 < 0x3a)) {
    uVar1 = 1;
  }
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    uVar1 = 1;
  }
  if (param_1 < 0x9c) {
    if (param_1 != 0x9b) {
      switch(param_1) {
      case 0xf:
      case 0x28:
      case 0x29:
      case 0x2e:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x89:
      case 0x8b:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x95:
      case 0x96:
      case 0x99:
        break;
      default:
        goto switchD_005246f1_caseD_10;
      }
    }
  }
  else if (param_1 < 0xbc) {
    if (param_1 != 0xbb) {
      switch(param_1) {
      case 0xa5:
      case 0xa8:
      case 0xa9:
      case 0xb5:
      case 0xb8:
      case 0xb9:
        break;
      default:
        goto switchD_005246f1_caseD_10;
      }
    }
  }
  else if (param_1 < 0x7f51) {
    if (param_1 != 0x7f50) {
      if (param_1 < 0xcd) {
        return uVar1;
      }
      if ((0xce < param_1) && (param_1 != 0xd0)) {
        return uVar1;
      }
    }
  }
  else if (param_1 != 0x7f54) {
    return uVar1;
  }
  uVar1 = 1;
switchD_005246f1_caseD_10:
  return uVar1;
}

