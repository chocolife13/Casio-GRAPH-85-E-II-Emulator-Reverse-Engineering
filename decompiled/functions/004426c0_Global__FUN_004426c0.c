// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004426c0
// entry: 004426c0  size: 196


undefined4 FUN_004426c0(uint param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00526090(0x30);
  uVar3 = 2;
  if ((param_1 & 0x100) == 0) {
    iVar2 = FUN_00442920(param_1,param_2);
  }
  else {
    if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
      switch(param_1) {
      case 0x110:
      case 0x111:
      case 0x113:
      case 0x114:
      case 0x116:
      case 0x117:
      case 0x119:
      case 0x11a:
      case 0x11b:
      case 0x11c:
      case 0x11d:
        goto switchD_00442760_caseD_110;
      default:
        return 2;
      }
    }
    if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      switch(param_1) {
      case 0x110:
      case 0x113:
      case 0x116:
      case 0x119:
      case 0x11a:
      case 0x11b:
      case 0x11c:
      case 0x11d:
        break;
      default:
        goto switchD_00442729_caseD_111;
      }
    }
    else {
      if ((int)param_1 < 0x119) {
        return 2;
      }
      if (0x11d < (int)param_1) {
        return 2;
      }
    }
    iVar2 = FUN_00442b00(param_1,param_2);
  }
  uVar3 = 0;
  if (iVar2 != 0) {
    return 4;
  }
switchD_00442729_caseD_111:
  return uVar3;
switchD_00442760_caseD_110:
  iVar2 = FUN_00442b00(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  return 4;
}

