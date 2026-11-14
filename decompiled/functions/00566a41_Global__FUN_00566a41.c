// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00566a41
// entry: 00566a41  size: 106


bool __thiscall FUN_00566a41(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2;
  if (param_2 < 1) {
    FUN_00566cbd(param_2);
    param_2 = 0;
    if (*(int **)(param_1 + 0x80) != (int *)0x0) {
      param_2 = (**(code **)(**(int **)(param_1 + 0x80) + 0x10))();
      while (param_2 != 0) {
        piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x80) + 0x14))(&param_2);
        (**(code **)(*piVar2 + 0x88))();
      }
    }
  }
  else if (param_2 == 1) {
    FUN_00566cbd(1);
  }
  return iVar1 < 1;
}

