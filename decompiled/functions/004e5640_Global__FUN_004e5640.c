// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e5640
// entry: 004e5640  size: 126


undefined4 * FUN_004e5640(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004e96c0(param_1);
  if (iVar1 == 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return param_2;
  }
  FUN_004e48e0(param_1,&local_28);
  uVar2 = FUN_004e6d90(local_18,local_c,param_2,param_2);
  FUN_004e69c0(local_24,uVar2);
  if (local_28 == -1) {
    FUN_004e7730(param_2,param_2);
  }
  return param_2;
}

