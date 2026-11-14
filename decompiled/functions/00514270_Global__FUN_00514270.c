// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514270
// entry: 00514270  size: 163


undefined4 FUN_00514270(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)*param_1;
  *param_1 = (undefined1 *)*param_1 + 1;
  switch(uVar1) {
  case 0x26:
  case 0x27:
    if (*param_2 != 0) {
      return 2;
    }
    *param_2 = 3;
    break;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    return 2;
  default:
    goto switchD_0051429c_caseD_2d;
  case 0x51:
    uVar2 = FUN_005144d0(param_1,param_2);
    return uVar2;
  case 0x85:
    if (*param_2 != 0) {
      return 2;
    }
    *param_2 = 7;
    break;
  case 0x86:
    if (*param_2 != 0) {
      return 2;
    }
    *param_2 = 9;
  }
  param_2[2] = param_2[1];
  iVar3 = param_2[1] + 1;
  param_2[1] = iVar3;
  if (0x1a < iVar3) {
    return 7;
  }
switchD_0051429c_caseD_2d:
  return 0;
}

