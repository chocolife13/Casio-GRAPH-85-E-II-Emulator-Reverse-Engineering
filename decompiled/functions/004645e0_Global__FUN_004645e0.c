// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004645e0
// entry: 004645e0  size: 76


int FUN_004645e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00516800(param_1);
  if (iVar1 != 0) {
    FUN_0052b240(4);
    return -2;
  }
  iVar1 = FUN_00466240(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00464660(param_1,param_2);
    FUN_005167a0(param_1);
  }
  return iVar1;
}

