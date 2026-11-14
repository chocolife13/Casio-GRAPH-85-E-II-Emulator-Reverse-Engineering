// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562c77
// entry: 00562c77  size: 35


void __thiscall FUN_00562c77(int *param_1,INT_PTR param_2)

{
  if ((*(byte *)(param_1 + 9) & 0x18) != 0) {
    (**(code **)(*param_1 + 0x74))(param_2);
  }
  EndDialog((HWND)param_1[7],param_2);
  return;
}

