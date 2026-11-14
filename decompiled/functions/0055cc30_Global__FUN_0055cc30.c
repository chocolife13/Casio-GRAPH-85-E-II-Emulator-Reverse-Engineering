// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055cc30
// entry: 0055cc30  size: 82


LRESULT FUN_0055cc30(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,undefined4 param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  
  lpPrevWndFunc = (WNDPROC)FUN_0055ca00(param_1,param_5);
  LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  RemovePropA(param_1,(LPCSTR)(uint)DAT_005da96e);
  RemovePropA(param_1,(LPCSTR)(uint)DAT_005da974);
  return LVar1;
}

