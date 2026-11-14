// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e0d0
// entry: 0056e0d0  size: 56


void FUN_0056e0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0057497f();
  if (*(int **)(iVar1 + 4) == (int *)0x0) {
    FUN_0056dfe9(param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)(iVar1 + 4) + 0x8c))(param_1,param_2,param_3);
  }
  return;
}

