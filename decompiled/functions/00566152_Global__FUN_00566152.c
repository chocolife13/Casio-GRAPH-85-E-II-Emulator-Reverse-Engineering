// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00566152
// entry: 00566152  size: 42


void __thiscall FUN_00566152(int param_1,int param_2)

{
  HWND pHVar1;
  
  if (*(int **)(param_1 + 0x34) == (int *)0x0) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x1c),param_2);
    FUN_00563433(pHVar1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x70))(param_2);
  }
  return;
}

