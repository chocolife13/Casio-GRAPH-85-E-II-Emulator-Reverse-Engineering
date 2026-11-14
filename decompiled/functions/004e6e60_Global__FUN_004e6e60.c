// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e6e60
// entry: 004e6e60  size: 107


void FUN_004e6e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004e96c0(param_1);
  iVar2 = FUN_004e96c0(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_004e9680(param_1);
    if (iVar1 != 1) goto LAB_004e6ea3;
  }
  if (iVar2 == 0) {
    iVar1 = FUN_004e9680(param_2);
    if (iVar1 != 1) {
LAB_004e6ea3:
      FUN_004e6d90(param_1,param_2,param_3);
      return;
    }
  }
  FUN_004e6db0(param_1,param_2,param_3);
  return;
}

