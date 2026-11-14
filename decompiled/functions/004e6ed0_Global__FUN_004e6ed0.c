// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e6ed0
// entry: 004e6ed0  size: 185


void FUN_004e6ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = FUN_004e9680(param_2);
  if (iVar1 == 1) {
    FUN_004e57c0(local_c);
    iVar1 = FUN_004e71d0(param_2,local_c);
    if (iVar1 != 0) {
      FUN_004e6cc0(param_1,param_1,param_3);
      return;
    }
    FUN_004e57a0(local_c);
    FUN_004e7730(local_c,local_c);
    iVar1 = FUN_004e71d0(param_2,local_c);
    if (iVar1 != 0) {
      FUN_004e57a0(local_c);
      FUN_004e6d90(local_c,param_1,param_3);
      return;
    }
  }
  FUN_004e5c90(4,param_1,param_2,param_3);
  return;
}

