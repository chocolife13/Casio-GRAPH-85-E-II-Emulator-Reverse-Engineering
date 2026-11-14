// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ca98
// entry: 0056ca98  size: 66


void __fastcall FUN_0056ca98(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00566960(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

