// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055d580
// entry: 0055d580  size: 116


undefined4 FUN_0055d580(HWND param_1,undefined2 param_2)

{
  HWND hWnd;
  HWND hWnd_00;
  
  if (DAT_005da960 != 0) {
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      FUN_0055d4d0(hWnd,param_2,0);
      for (hWnd_00 = GetWindow(hWnd,5); hWnd_00 != (HWND)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
        FUN_0055d4d0(hWnd_00,param_2,hWnd);
      }
    }
    return 1;
  }
  return 0;
}

