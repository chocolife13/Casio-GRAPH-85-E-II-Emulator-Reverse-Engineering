// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056629b
// entry: 0056629b  size: 47


void __thiscall FUN_0056629b(int param_1,LPSTR param_2,int param_3)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowTextA(*(HWND *)(param_1 + 0x1c),param_2,param_3);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x84))(param_2,param_3);
  }
  return;
}

