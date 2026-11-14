// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056f3ef
// entry: 0056f3ef  size: 72


void __fastcall FUN_0056f3ef(int param_1)

{
  int iVar1;
  WPARAM wParam;
  LRESULT LVar2;
  
  iVar1 = FUN_00566152(100);
  wParam = SendMessageA(*(HWND *)(iVar1 + 0x1c),0x188,0,0);
  if (wParam == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    LVar2 = SendMessageA(*(HWND *)(iVar1 + 0x1c),0x199,wParam,0);
    *(LRESULT *)(param_1 + 0x60) = LVar2;
  }
  FUN_00562e02();
  return;
}

