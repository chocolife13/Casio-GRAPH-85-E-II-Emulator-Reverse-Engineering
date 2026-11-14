// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055eb40
// entry: 0055eb40  size: 1315


void FUN_0055eb40(HWND param_1,HDC param_2,uint param_3)

{
  uint uVar1;
  HWND hWnd;
  DWORD DVar2;
  HGDIOBJ pvVar3;
  HDC hdc;
  int x;
  HGDIOBJ pvStack_154;
  int iStack_150;
  int iStack_14c;
  uint uStack_144;
  int iStack_140;
  int iStack_13c;
  HGDIOBJ pvStack_138;
  uint uStack_134;
  tagRECT tStack_130;
  tagRECT tStack_120;
  undefined1 auStack_110 [12];
  int iStack_104;
  CHAR aCStack_100 [256];
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  uStack_144 = uVar1 & 0x20;
  uVar1 = uVar1 & 0x1f;
  hWnd = GetParent(param_1);
  SetBkMode(param_2,2);
  GetClientRect(param_1,&tStack_120);
  tStack_130.left = tStack_120.left;
  tStack_130.top = tStack_120.top;
  tStack_130.right = tStack_120.right;
  tStack_130.bottom = tStack_120.bottom;
  pvStack_154 = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
  if (pvStack_154 != (HGDIOBJ)0x0) {
    pvStack_154 = SelectObject(param_2,pvStack_154);
  }
  DVar2 = GetSysColor(0xf);
  SetBkColor(param_2,DVar2);
  DVar2 = GetSysColor(0x12);
  SetTextColor(param_2,DVar2);
  pvVar3 = (HGDIOBJ)SendMessageA(hWnd,0x135,(WPARAM)param_2,(LPARAM)param_1);
  pvStack_138 = SelectObject(param_2,pvVar3);
  IntersectClipRect(param_2,tStack_130.left,tStack_130.top,tStack_130.right,tStack_130.bottom);
  if (((param_3 & 0x10) != 0) && (uVar1 != 7)) {
    PatBlt(param_2,tStack_130.left,tStack_130.top,tStack_130.right - tStack_130.left,
           tStack_130.bottom - tStack_130.top,0xf00021);
  }
  iStack_13c = IsWindowEnabled(param_1);
  auStack_110._0_4_ = SendMessageA(param_1,0xf2,0,0);
  iStack_14c = 0;
  uStack_134 = auStack_110._0_4_ & 3;
  auStack_110._0_4_ = auStack_110._0_4_ & 4;
  iStack_150 = ((int)auStack_110._0_4_ >> 1 | -(uint)(uStack_134 == 0) + 1) * 0xe;
  if (iStack_13c == 0) {
    iStack_150 = iStack_150 + (-(uint)(uStack_134 == 0) + 3) * 0xe;
  }
  if ((((param_3 & 10) != 0) || (uVar1 == 0)) || (uVar1 == 1)) {
    iStack_140 = GetWindowTextA(param_1,aCStack_100,0x100);
  }
  switch(uVar1) {
  case 0:
  case 1:
    FUN_0055e800(param_1,param_2,&tStack_120,aCStack_100,iStack_140,uVar1,auStack_110._0_4_);
    goto switchD_0055ecfc_caseD_8;
  case 2:
  case 3:
    break;
  case 4:
  case 9:
    iStack_14c = 0xd;
    break;
  case 5:
  case 6:
    if (uStack_134 == 2) {
      iStack_14c = 0x1a;
    }
    break;
  case 7:
    if ((param_3 & 6) != 0) {
      FUN_0055cf00(param_2,aCStack_100,&uStack_134,&uStack_144);
      if (uStack_144 == 0) {
        FUN_0055cf00(param_2,&DAT_005be980,auStack_110,&uStack_144);
      }
      tStack_130.left = tStack_130.left + 4;
      tStack_130.right = uStack_134 + tStack_130.left + 4;
      tStack_130.bottom = uStack_144 + tStack_130.top;
      if ((param_3 & 0x20) != 0) {
        auStack_110._4_4_ = tStack_130.top;
        auStack_110._8_4_ = tStack_120.right;
        auStack_110._0_4_ = tStack_130.left;
        iStack_104 = tStack_130.bottom;
        ClientToScreen(param_1,(LPPOINT)auStack_110);
        ClientToScreen(param_1,(LPPOINT)(auStack_110 + 8));
        ScreenToClient(hWnd,(LPPOINT)auStack_110);
        ScreenToClient(hWnd,(LPPOINT)(auStack_110 + 8));
        InvalidateRect(hWnd,(RECT *)auStack_110,1);
        return;
      }
      tStack_120.right = tStack_120.right + -1;
      tStack_120.bottom = tStack_120.bottom + -1;
      tStack_120.top = tStack_120.top + (int)uStack_144 / 2;
      FUN_0055cd10(param_2,&tStack_120,2,2,0xf);
      OffsetRect(&tStack_120,1,1);
      FUN_0055cd10(param_2,&tStack_120,0,0,0xf);
      if (iStack_13c == 0) {
        SetTextColor(param_2,DAT_005da99c);
      }
      DrawTextA(param_2,aCStack_100,iStack_140,&tStack_130,0x20);
    }
  default:
    goto switchD_0055ecfc_caseD_8;
  }
  if (((param_3 & 4) != 0) && (hdc = CreateCompatibleDC(param_2), hdc != (HDC)0x0)) {
    pvVar3 = SelectObject(hdc,DAT_005da9b0);
    if (pvVar3 != (HGDIOBJ)0x0) {
      x = tStack_130.left;
      if (uStack_144 != 0) {
        x = tStack_130.right + -0xe;
      }
      BitBlt(param_2,x,tStack_130.top + ((tStack_130.bottom - tStack_130.top) + -0xd) / 2,0xe,0xd,
             hdc,iStack_150,iStack_14c,0xcc0020);
      SelectObject(hdc,pvVar3);
    }
    DeleteDC(hdc);
  }
  if ((param_3 & 2) != 0) {
    if (uStack_144 == 0) {
      tStack_130.left = tStack_120.left + 0x12;
    }
    else {
      tStack_130.right = tStack_120.right + -0x12;
    }
    if (iStack_13c == 0) {
      SetTextColor(param_2,DAT_005da99c);
    }
    DrawTextA(param_2,aCStack_100,iStack_140,&tStack_130,0x24);
  }
  if ((param_3 & 8) != 0) {
    FUN_0055cf00(param_2,aCStack_100,auStack_110,&uStack_134);
    tStack_130.top = (int)((tStack_130.bottom - tStack_130.top) - uStack_134) / 2;
    tStack_130.bottom = uStack_134 + tStack_130.top;
    if (uStack_144 == 0) {
      tStack_130.left = tStack_120.left + 0x12;
    }
    else {
      tStack_120.right = tStack_120.right + -0x12;
      tStack_130.left = tStack_120.left;
    }
    tStack_130.right = auStack_110._0_4_ + tStack_130.left;
    InflateRect(&tStack_130,1,1);
    IntersectRect(&tStack_130,&tStack_130,&tStack_120);
    DrawFocusRect(param_2,&tStack_130);
  }
switchD_0055ecfc_caseD_8:
  SelectObject(param_2,pvStack_138);
  if (pvStack_154 != (HGDIOBJ)0x0) {
    SelectObject(param_2,pvStack_154);
  }
  return;
}

