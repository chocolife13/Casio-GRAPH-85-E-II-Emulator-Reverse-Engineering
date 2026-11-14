// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00571e17
// entry: 00571e17  size: 170


void __thiscall FUN_00571e17(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  HWND hWnd;
  UINT uCmd;
  
  uVar1 = FUN_005661de();
  iVar2 = param_1;
  if ((uVar1 & 0x40000000) == 0) {
    iVar2 = FUN_00564b13();
  }
  if ((param_2 & 0xc) != 0) {
    iVar3 = FUN_00566369();
    if ((((~param_2 & 8) == 0) || (iVar3 == 0)) || (iVar2 == param_1)) {
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0x86,0,0);
    }
    else {
      *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 2;
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0x86,1,0);
      *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xfd;
    }
  }
  uCmd = 5;
  hWnd = GetDesktopWindow();
  while (hWnd = GetWindow(hWnd,uCmd), hWnd != (HWND)0x0) {
    iVar3 = FUN_00571b1e(*(undefined4 *)(iVar2 + 0x1c),hWnd);
    if (iVar3 != 0) {
      SendMessageA(hWnd,0x36d,param_2,0);
    }
    uCmd = 2;
  }
  return;
}

