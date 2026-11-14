// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e2470
// entry: 004e2470  size: 186


void FUN_004e2470(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

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
    FUN_004dfc00(param_1,param_2,param_3);
    return;
  }
  if (iVar1 == 2) {
    FUN_004dcc30(param_1,param_2,param_3);
    return;
  }
  iVar1 = FUN_004e4000(param_1);
  if (iVar1 == 0) {
    FUN_004e7680(param_1,param_2);
    return;
  }
  FUN_004e4080(param_1,local_18);
  FUN_004eaa40(local_18,local_30);
  FUN_004e4120(local_30,local_24,param_2);
  return;
}

