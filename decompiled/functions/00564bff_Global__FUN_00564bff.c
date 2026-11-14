// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564bff
// entry: 00564bff  size: 125


void FUN_00564bff(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5,int param_6)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  
  for (hWnd = GetTopWindow(param_1); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    if (param_6 == 0) {
      SendMessageA(hWnd,param_2,param_3,param_4);
    }
    else {
      iVar1 = FUN_0056345a(hWnd);
      if (iVar1 != 0) {
        FUN_00563272(iVar1,*(undefined4 *)(iVar1 + 0x1c),param_2,param_3,param_4);
      }
    }
    if (param_5 != 0) {
      pHVar2 = GetTopWindow(hWnd);
      if (pHVar2 != (HWND)0x0) {
        FUN_00564bff(hWnd,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}

