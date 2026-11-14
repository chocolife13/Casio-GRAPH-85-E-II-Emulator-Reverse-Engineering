// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055e790
// entry: 0055e790  size: 110


void FUN_0055e790(HWND param_1)

{
  uint uVar1;
  HWND hWnd;
  undefined1 auStack_10 [16];
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  GetWindowRect(param_1,(LPRECT)auStack_10);
  InflateRect((LPRECT)auStack_10,1,1);
  hWnd = GetParent(param_1);
  ScreenToClient(hWnd,(LPPOINT)auStack_10);
  ScreenToClient(hWnd,(LPPOINT)(auStack_10 + 8));
  if ((uVar1 & 0x200000) != 0) {
    auStack_10._8_4_ = auStack_10._8_4_ + 1;
  }
  ValidateRect(hWnd,(RECT *)auStack_10);
  return;
}

