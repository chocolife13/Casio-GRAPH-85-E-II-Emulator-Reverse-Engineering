// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056206f
// entry: 0056206f  size: 55


void __thiscall FUN_0056206f(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 8) - param_2) - param_3;
  if (iVar1 != 0) {
    FUN_00554ab0(*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 4) + (param_2 + param_3) * 4
                 ,iVar1 * 4);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_3;
  return;
}

