// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e161
// entry: 0056e161  size: 156


HWND FUN_0056e161(HWND param_1,undefined4 *param_2)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  HWND hWnd_00;
  BOOL BVar3;
  uint uVar4;
  HWND hWnd_01;
  
  hWnd_01 = param_1;
  if (param_1 != (HWND)0x0) goto LAB_0056e1da;
  iVar1 = FUN_0056e1fd();
  if ((iVar1 == 0) && (iVar1 = FUN_00552b70(), iVar1 == 0)) {
    hWnd_01 = (HWND)0x0;
    pHVar2 = hWnd_01;
    hWnd_00 = hWnd_01;
  }
  else {
    for (hWnd_01 = *(HWND *)(iVar1 + 0x1c); pHVar2 = hWnd_01, hWnd_00 = hWnd_01,
        hWnd_01 != (HWND)0x0; hWnd_01 = GetParent(hWnd_01)) {
LAB_0056e1da:
      uVar4 = GetWindowLongA(hWnd_01,-0x10);
      pHVar2 = hWnd_01;
      hWnd_00 = hWnd_01;
      if ((uVar4 & 0x40000000) == 0) break;
    }
  }
  while (hWnd = pHVar2, hWnd != (HWND)0x0) {
    pHVar2 = GetParent(hWnd);
    hWnd_01 = hWnd;
  }
  if ((param_1 == (HWND)0x0) && (hWnd_00 != (HWND)0x0)) {
    hWnd_00 = GetLastActivePopup(hWnd_00);
  }
  if (param_2 != (undefined4 *)0x0) {
    if (((hWnd_01 == (HWND)0x0) || (BVar3 = IsWindowEnabled(hWnd_01), BVar3 == 0)) ||
       (hWnd_01 == hWnd_00)) {
      *param_2 = 0;
    }
    else {
      *param_2 = hWnd_01;
      EnableWindow(hWnd_01,0);
    }
  }
  return hWnd_00;
}

