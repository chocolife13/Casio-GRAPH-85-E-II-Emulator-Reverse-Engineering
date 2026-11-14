// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e6a00
// entry: 004e6a00  size: 144


void FUN_004e6a00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004e96c0(param_1);
  iVar2 = FUN_004e96c0(param_2);
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      iVar1 = FUN_004e9680(param_1);
      if (iVar1 == 1) {
        FUN_004e69e0(param_1,param_2,param_3);
        return;
      }
    }
  }
  else {
    if (iVar2 != 0) {
      FUN_004e69e0(param_1,param_2,param_3);
      return;
    }
    iVar1 = FUN_004e9680(param_2);
    if (iVar1 == 1) {
      FUN_004e69e0(param_1,param_2,param_3);
      return;
    }
  }
  FUN_004e69c0(param_1,param_2,param_3);
  return;
}

