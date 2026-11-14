// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e1fc0
// entry: 004e1fc0  size: 130


void FUN_004e1fc0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004e4040(param_1);
  if (iVar1 == -1) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  if (iVar1 == 3) {
    FUN_004e5630(3,param_2);
    return;
  }
  if (iVar1 == 2) {
    FUN_004dbdc0(param_1,param_2,param_3);
    return;
  }
  iVar1 = FUN_004e4000(param_1);
  if (iVar1 == 0) {
    FUN_004e7510(param_1,param_2);
    return;
  }
  FUN_004e5630(3,param_2);
  return;
}

