// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e3720
// entry: 004e3720  size: 215


void FUN_004e3720(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
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
    FUN_004e0260(param_1,param_2,param_3);
    return;
  }
  if (iVar1 == 2) {
    FUN_004dd440(param_1,param_2,param_3);
    return;
  }
  iVar1 = FUN_004e4000(param_1);
  if (iVar1 == 0) {
    FUN_004e9030(param_1,param_2,param_3);
    return;
  }
  FUN_004e4080(param_1,local_18);
  FUN_004e9030(local_18,local_30,param_3);
  FUN_004e9030(local_c,local_24,param_3 + 0xc);
  FUN_004e4120(local_30,local_24,param_2);
  return;
}

