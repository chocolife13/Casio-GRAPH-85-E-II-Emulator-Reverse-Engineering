// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564a5e
// entry: 00564a5e  size: 68


undefined4 __fastcall FUN_00564a5e(int param_1)

{
  uint uVar1;
  HWND hWnd;
  undefined4 uVar2;
  HWND hWnd_00;
  
  if ((param_1 == 0) || (hWnd_00 = *(HWND *)(param_1 + 0x1c), hWnd_00 == (HWND)0x0)) {
    return 0;
  }
  uVar1 = GetWindowLongA(hWnd_00,-0x10);
  while ((uVar1 & 0x40000000) != 0) {
    hWnd = GetParent(hWnd_00);
    if (hWnd == (HWND)0x0) break;
    uVar1 = GetWindowLongA(hWnd,-0x10);
    hWnd_00 = hWnd;
  }
  uVar2 = FUN_00563433(hWnd_00);
  return uVar2;
}

