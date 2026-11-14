// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00561e0d
// entry: 00561e0d  size: 55


void __thiscall FUN_00561e0d(int param_1,int *param_2)

{
  if (param_2 == *(int **)(param_1 + 4)) {
    *(int *)(param_1 + 4) = *param_2;
  }
  else {
    *(int *)param_2[1] = *param_2;
  }
  if (param_2 == *(int **)(param_1 + 8)) {
    *(int *)(param_1 + 8) = param_2[1];
  }
  else {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  FUN_00561da7(param_2);
  return;
}

