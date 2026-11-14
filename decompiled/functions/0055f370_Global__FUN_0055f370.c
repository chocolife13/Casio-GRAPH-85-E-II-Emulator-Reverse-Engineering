// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055f370
// entry: 0055f370  size: 822


void FUN_0055f370(HWND param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  LRESULT LVar3;
  HWND pHVar4;
  HDC hDC;
  LONG LVar5;
  int iVar6;
  HWND hWndTo;
  uint uVar7;
  uint uVar8;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined1 auStack_30 [12];
  int iStack_24;
  tagRECT tStack_20;
  int aiStack_10 [4];
  
  uVar2 = GetWindowLongA(param_1,-0x10);
  if (((uVar2 & 0x10000000) != 0) &&
     (((param_3 != 3 || (((byte)uVar2 & 3) != 3)) ||
      (LVar3 = SendMessageA(param_1,0x157,0,0), LVar3 == 0)))) {
    if (param_2 != 0) {
      HideCaret(param_1);
    }
    GetWindowRect(param_1,(LPRECT)auStack_30);
    pHVar4 = GetParent(param_1);
    ScreenToClient(pHVar4,(LPPOINT)auStack_30);
    uVar8 = 0xf;
    ScreenToClient(pHVar4,(LPPOINT)(auStack_30 + 8));
    hDC = GetDC(pHVar4);
    uStack_38 = uVar2 & 0x100000;
    if (uStack_38 != 0) {
      uVar8 = 7;
    }
    uStack_34 = uVar2 & 0x200000;
    if (uStack_34 != 0) {
      uVar8 = uVar8 & 0xfffffffb;
    }
    LVar5 = GetWindowLongA(param_1,-0xc);
    hWndTo = pHVar4;
    if (param_2 - LVar5 == -1000) {
      iStack_3c = 0x29a;
      tStack_20.left = SendMessageA(pHVar4,0x1944,0,(LPARAM)&iStack_3c);
      if (iStack_3c == 0x29a) {
        tStack_20.left = SendMessageA(pHVar4,0x1943,0,(LPARAM)&iStack_3c);
      }
      GetClassNameA(pHVar4,(LPSTR)aiStack_10,0x10);
      iVar6 = lstrcmpA((LPCSTR)aiStack_10,"ComboBox");
      if ((iVar6 == 0) || ((iStack_3c == 1 && (tStack_20.left == 0x3eb)))) {
        hWndTo = GetParent(pHVar4);
        MapWindowPoints(pHVar4,hWndTo,(LPPOINT)auStack_30,2);
        ReleaseDC(pHVar4,hDC);
        hDC = GetDC(hWndTo);
        if (param_2 == 0) {
          uVar8 = uVar8 & 0xfffffffd;
          auStack_30._4_4_ = auStack_30._4_4_ + 1;
        }
        else {
          uVar7 = GetWindowLongA(pHVar4,-0x10);
          if (((uVar7 & 3) == 2) || ((uVar7 & 3) == 3)) {
            LVar3 = SendMessageA(pHVar4,0x157,0,0);
            if (LVar3 != 0) {
              ReleaseDC(hWndTo,hDC);
              ShowCaret(param_1);
              return;
            }
          }
          else {
            uVar8 = uVar8 & 0xfffffff7;
            pHVar4 = GetWindow(pHVar4,5);
            GetWindowRect(pHVar4,&tStack_20);
            auStack_30._8_4_ = auStack_30._8_4_ + (tStack_20.left - tStack_20.right);
            FUN_0055ce50(hDC,auStack_30,0x1008);
            auStack_30._8_4_ = auStack_30._8_4_ + (tStack_20.right - tStack_20.left);
          }
        }
      }
    }
    FUN_0055ce50(hDC,auStack_30,uVar8);
    uVar1 = auStack_30._8_4_;
    if ((param_3 == 3) && (((byte)uVar2 & 3) == 3)) {
      auStack_30._0_4_ = GetSystemMetrics(2);
      auStack_30._0_4_ = uVar1 - auStack_30._0_4_;
      FUN_0055cd10(hDC,auStack_30,7,7,0xc);
      FUN_0055e790(param_1);
    }
    else {
      if (uStack_34 != 0) {
        auStack_30._8_4_ = auStack_30._8_4_ + 1;
        FUN_0055cd10(hDC,auStack_30,0,0,4);
        iVar6 = auStack_30._8_4_ + -1;
        aiStack_10[0] = auStack_30._0_4_;
        auStack_30._8_4_ = iVar6;
        auStack_30._0_4_ = GetSystemMetrics(2);
        auStack_30._0_4_ = iVar6 - auStack_30._0_4_;
        FUN_0055cd10(hDC,auStack_30,7,7,8);
        auStack_30._0_4_ = aiStack_10[0];
      }
      if (uStack_38 != 0) {
        iStack_24 = iStack_24 + 1;
        FUN_0055cd10(hDC,auStack_30,0,0,8);
        iVar6 = iStack_24 + -1;
        iStack_24 = iVar6;
        auStack_30._4_4_ = GetSystemMetrics(0x15);
        auStack_30._4_4_ = iVar6 - auStack_30._4_4_;
        FUN_0055cd10(hDC,auStack_30,7,7,4);
      }
    }
    ReleaseDC(hWndTo,hDC);
    if (param_2 != 0) {
      ShowCaret(param_1);
    }
  }
  return;
}

