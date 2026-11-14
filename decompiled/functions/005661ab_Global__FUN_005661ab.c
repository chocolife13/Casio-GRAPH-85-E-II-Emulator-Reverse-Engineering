// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005661ab
// entry: 005661ab  size: 51


void __thiscall FUN_005661ab(int param_1,LPMSG param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x25) & 1) == 0) {
    IsDialogMessageA(*(HWND *)(param_1 + 0x1c),param_2);
  }
  else {
    iVar1 = FUN_0057497f();
    (**(code **)(**(int **)(iVar1 + 0x1038) + 0x24))(param_1,param_2);
  }
  return;
}

