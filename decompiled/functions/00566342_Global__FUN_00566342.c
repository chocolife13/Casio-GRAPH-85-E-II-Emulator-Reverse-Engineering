// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00566342
// entry: 00566342  size: 39


void __thiscall FUN_00566342(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    ShowWindow(*(HWND *)(param_1 + 0x1c),param_2);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0xa0))(param_2);
  }
  return;
}

