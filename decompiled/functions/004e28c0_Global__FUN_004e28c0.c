// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e28c0
// entry: 004e28c0  size: 166


void FUN_004e28c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
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
    FUN_004e5630(3,param_2);
    return;
  }
  if (iVar1 == 2) {
    FUN_004dd100(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_004e4080(param_1,local_18);
  FUN_004eab00(local_18,&local_30,param_3);
  *param_2 = local_30;
  param_2[1] = local_2c;
  param_2[2] = local_28;
  return;
}

