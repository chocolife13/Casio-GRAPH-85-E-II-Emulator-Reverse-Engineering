// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e7af0
// entry: 004e7af0  size: 99


undefined4 * FUN_004e7af0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return param_2;
  }
  FUN_004e5b70(param_1,local_c);
  FUN_0042e720(local_c,param_3);
  FUN_004e5bf0(local_c,param_2);
  return param_2;
}

