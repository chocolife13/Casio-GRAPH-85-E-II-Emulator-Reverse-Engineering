// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056617c
// entry: 0056617c  size: 47


void __thiscall FUN_0056617c(int param_1,int param_2,LPCSTR param_3)

{
  if (*(int **)(param_1 + 0x34) == (int *)0x0) {
    SetDlgItemTextA(*(HWND *)(param_1 + 0x1c),param_2,param_3);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x84))(param_2,param_3);
  }
  return;
}

