// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e3f30
// entry: 004e3f30  size: 196


void FUN_004e3f30(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
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
    FUN_004e02a0(param_1,param_2,param_3);
    return;
  }
  if (iVar1 == 2) {
    FUN_004dd4a0(param_1,param_2,param_3);
    return;
  }
  iVar1 = FUN_004e4000(param_1);
  if (iVar1 == 0) {
    FUN_004e7d00(param_1,param_2,param_3);
    return;
  }
  FUN_004e4080(param_1,local_18);
  FUN_004eab30(local_18,local_30,param_3);
  FUN_004e4120(local_30,local_24,param_2);
  return;
}

