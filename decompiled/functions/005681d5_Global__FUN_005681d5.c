// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005681d5
// entry: 005681d5  size: 88


void __fastcall FUN_005681d5(int param_1)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = GetSystemMetrics(0xb);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = GetSystemMetrics(0xc);
  *(int *)(param_1 + 0xc) = iVar1;
  if (*(int *)(param_1 + 0x68) == 0) {
    FUN_00576516();
  }
  else {
    FUN_005764e6();
  }
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = GetDeviceCaps(hdc,0x5a);
  *(int *)(param_1 + 0x1c) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  return;
}

