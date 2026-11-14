// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e3430
// entry: 004e3430  size: 195


void FUN_004e3430(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004e4040(param_1);
  iVar2 = FUN_004e4040(param_2);
  if (iVar1 == -1) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
    return;
  }
  if (iVar2 == -1) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    }
    return;
  }
  if ((iVar1 == 3) || (iVar2 == 3)) {
    FUN_004e5630(3,param_3);
    return;
  }
  if ((iVar1 != 2) && (iVar2 != 2)) {
    iVar1 = FUN_004e4000(param_1);
    iVar2 = FUN_004e4000(param_2);
    if ((iVar1 == 0) && (iVar2 == 0)) {
      FUN_004e8200(param_1,param_2,param_3);
      return;
    }
    FUN_004e5630(3,param_3);
    return;
  }
  FUN_004e5630(3,param_3);
  return;
}

