// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e62d0
// entry: 004e62d0  size: 211


undefined4 FUN_004e62d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = FUN_004e4020(param_2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_004e4020(param_3);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  FUN_004e5b70(param_2,local_18);
  FUN_004e5b70(param_3,local_c);
  sVar1 = FUN_0042cf20(local_18,local_c);
  if (sVar1 == 0xf0) {
    FUN_004e5bf0(local_18,param_2);
    return 0xffffffff;
  }
  switch(param_1) {
  case 5:
    goto switchD_004e635a_caseD_5;
  case 6:
    if (sVar1 == 1) {
      return 0;
    }
    return 1;
  case 7:
    bVar3 = sVar1 == 2;
    break;
  case 8:
    bVar3 = sVar1 == 4;
    break;
  case 9:
    bVar3 = sVar1 == 2;
    goto LAB_004e6388;
  case 10:
    bVar3 = sVar1 == 4;
LAB_004e6388:
    if (bVar3) {
      return 1;
    }
switchD_004e635a_caseD_5:
    bVar3 = sVar1 == 1;
    break;
  default:
    goto switchD_004e635a_default;
  }
  if (bVar3) {
    return 1;
  }
switchD_004e635a_default:
  return 0;
}

