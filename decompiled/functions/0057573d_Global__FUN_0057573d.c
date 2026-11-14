// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057573d
// entry: 0057573d  size: 48


void __fastcall FUN_0057573d(int param_1)

{
  if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x10))();
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_0056dd19("Settings","PreviewPages",*(int *)(param_1 + 0xb4));
  }
  return;
}

