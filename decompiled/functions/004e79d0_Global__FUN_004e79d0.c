// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e79d0
// entry: 004e79d0  size: 163


undefined4 *
FUN_004e79d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004e4020(param_2);
  if (iVar1 != 0) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    return param_3;
  }
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return param_3;
  }
  FUN_004e5b70(param_2,local_18);
  FUN_004e5b70(param_1,local_c);
  FUN_0042dde0(local_18,local_c,param_4);
  FUN_004e5bf0(local_18,param_3);
  return param_3;
}

