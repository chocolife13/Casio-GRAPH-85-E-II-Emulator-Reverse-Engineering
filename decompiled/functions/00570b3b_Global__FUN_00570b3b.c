// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00570b3b
// entry: 00570b3b  size: 73


void __fastcall FUN_00570b3b(int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  FUN_00570b84(1);
  ReleaseCapture();
  pHVar1 = GetDesktopWindow();
  iVar2 = FUN_00563433(pHVar1);
  LockWindowUpdate((HWND)0x0);
  if (*(int *)(param_1 + 0x84) != 0) {
    ReleaseDC(*(HWND *)(iVar2 + 0x1c),*(HDC *)(*(int *)(param_1 + 0x84) + 4));
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}

