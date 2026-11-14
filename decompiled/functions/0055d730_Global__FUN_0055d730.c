// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055d730
// entry: 0055d730  size: 678


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_0055d730(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  BOOL BVar2;
  uint uVar3;
  HDC hdc;
  int iVar4;
  bool bVar5;
  int iStack_38;
  HGDIOBJ pvStack_34;
  tagRECT tStack_30;
  tagRECT tStack_20;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_5 == 0) {
    lpPrevWndFunc = (WNDPROC)FUN_0055ca00(param_1,6);
  }
  else {
    lpPrevWndFunc = (WNDPROC)0x0;
  }
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  }
  if (DAT_005da960 == 0) {
    return LVar1;
  }
  BVar2 = IsIconic(param_1);
  if (BVar2 != 0) {
    return LVar1;
  }
  iStack_38 = 1;
  SendMessageA(param_1,0x11ef,0,(LPARAM)&iStack_38);
  uVar3 = GetWindowLongA(param_1,-0x10);
  if ((iStack_38 != 0) && ((uVar3 & 0x10400080) == 0x10400080)) {
    bVar5 = (uVar3 & 0xc00000) == 0xc00000;
    iVar4 = DAT_005db458 - (uint)bVar5;
    hdc = GetWindowDC(param_1);
    GetWindowRect(param_1,&tStack_30);
    tStack_30.right = tStack_30.right - tStack_30.left;
    tStack_30.bottom = tStack_30.bottom - tStack_30.top;
    tStack_30.top = 0;
    tStack_30.left = 0;
    FUN_0055cd10(hdc,&tStack_30,2,7,0xf);
    InflateRect(&tStack_30,-1,-1);
    FUN_0055cd10(hdc,&tStack_30,0,2,0xf);
    InflateRect(&tStack_30,-1,-1);
    pvStack_34 = SelectObject(hdc,DAT_005da9a8);
    tStack_20.left = tStack_30.left;
    tStack_20.top = tStack_30.top;
    tStack_20.bottom = tStack_30.bottom;
    tStack_20.right = tStack_30.left + _DAT_005db454;
    FUN_0055cce0(hdc,&tStack_20);
    OffsetRect(&tStack_20,(tStack_30.right - tStack_30.left) - _DAT_005db454,0);
    FUN_0055cce0(hdc,&tStack_20);
    tStack_20.left = tStack_30.left + _DAT_005db454;
    tStack_20.right = tStack_30.right - _DAT_005db454;
    tStack_20.bottom = tStack_20.top + iVar4;
    FUN_0055cce0(hdc,&tStack_20);
    if (bVar5) {
      iStack_c = iVar4 + tStack_20.top;
      iStack_10 = tStack_20.left;
      iStack_8 = tStack_20.right;
      iStack_4 = DAT_005db45c + iStack_c;
      FUN_0055cd10(hdc,&iStack_10,2,0,0xf);
    }
    tStack_20.top = tStack_20.top + ((tStack_30.bottom - tStack_30.top) - _DAT_005db454);
    tStack_20.bottom = tStack_20.top + DAT_005db458;
    FUN_0055cce0(hdc,&tStack_20);
    SelectObject(hdc,pvStack_34);
    ReleaseDC(param_1,hdc);
  }
  return LVar1;
}

