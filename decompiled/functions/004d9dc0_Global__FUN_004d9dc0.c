// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d9dc0
// entry: 004d9dc0  size: 295


int FUN_004d9dc0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  iVar1 = FUN_004e7250(param_1,local_c);
  if (iVar1 != 0) {
    FUN_004e5630(3,param_2);
    return 3;
  }
  FUN_004e57a0(local_30);
  iVar1 = FUN_004e7250(local_30,param_1);
  if (iVar1 != 0) {
    FUN_004e5630(3,param_2);
    return 3;
  }
  FUN_004e6b80(local_30,param_1,local_24);
  FUN_004e5780(local_18);
  local_18[0] = 0x75;
  iVar1 = FUN_004e7250(local_24,local_18);
  if (iVar1 != 0) {
    FUN_004e5780(param_2);
    *param_2 = 0x91;
    return 0;
  }
  iVar1 = FUN_004e71d0(local_30,local_24);
  if (iVar1 != 0) {
    FUN_004e5780(param_2);
    *param_2 = 0x11;
    return 0;
  }
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0052f820();
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_004d9ef0(local_24,param_1,param_2);
  }
  return iVar1;
}

