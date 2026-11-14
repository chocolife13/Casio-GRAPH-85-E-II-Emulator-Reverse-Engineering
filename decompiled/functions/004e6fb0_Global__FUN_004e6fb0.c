// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e6fb0
// entry: 004e6fb0  size: 181


void FUN_004e6fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  iVar1 = FUN_004e7310(param_1,local_c);
  iVar2 = FUN_004e9680(param_2);
  if ((iVar1 == 0) && (iVar2 == 0)) {
    FUN_004e7070(param_1,param_2,param_3);
    return;
  }
  iVar1 = FUN_004e96c0(param_1);
  iVar2 = FUN_004e96c0(param_2);
  if (iVar1 != 0) {
    if (iVar2 != 0) {
      FUN_004e6f90(param_1,param_2,param_3);
      return;
    }
    iVar1 = FUN_004e9680(param_2);
    if (iVar1 == 1) {
      FUN_004e6f90(param_1,param_2,param_3);
      return;
    }
  }
  FUN_004e6ed0(param_1,param_2,param_3);
  return;
}

