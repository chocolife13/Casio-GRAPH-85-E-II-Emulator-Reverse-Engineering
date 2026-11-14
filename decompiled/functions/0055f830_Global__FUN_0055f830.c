// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055f830
// entry: 0055f830  size: 558


LRESULT FUN_0055f830(HWND param_1,uint param_2,WPARAM param_3,LONG *param_4,undefined4 param_5)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  HWND pHVar4;
  LONG *lParam;
  undefined1 auStack_20 [12];
  int iStack_14;
  tagRECT tStack_10;
  
  if (param_2 == 0x82) {
    LVar1 = FUN_0055cc30(param_1,0x82,param_3,param_4,param_5);
    return LVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da974);
  if (pvVar2 == (HANDLE)0x0) {
    if (param_2 < 0x19) {
      if (param_2 == 0x18) {
        if ((DAT_005da980 < 0x30a) && (param_3 == 0)) {
          FUN_0055e6d0(param_1,0);
        }
      }
      else if (param_2 == 0xf) {
        pHVar4 = param_1;
        pWVar3 = (WNDPROC)FUN_0055ca00(param_1,param_5);
        LVar1 = CallWindowProcA(pWVar3,pHVar4,param_2,param_3,(LPARAM)param_4);
        FUN_0055f370(param_1,0,param_5);
        return LVar1;
      }
    }
    else if (param_2 < 0x84) {
      if (param_2 == 0x83) {
        if (DAT_005da980 < 0x30a) {
          GetWindowRect(param_1,&tStack_10);
          pHVar4 = param_1;
          lParam = param_4;
          pWVar3 = (WNDPROC)FUN_0055ca00(param_1,param_5);
          LVar1 = CallWindowProcA(pWVar3,pHVar4,param_2,param_3,(LPARAM)lParam);
          auStack_20._0_4_ = *param_4;
          auStack_20._4_4_ = param_4[1];
          auStack_20._8_4_ = param_4[2];
          iStack_14 = param_4[3];
          InflateRect((LPRECT)auStack_20,2,1);
          if (iStack_14 < tStack_10.bottom) {
            auStack_20._4_4_ = iStack_14 + 1;
            iStack_14 = tStack_10.bottom + 1;
            pHVar4 = GetParent(param_1);
            ScreenToClient(pHVar4,(LPPOINT)auStack_20);
            ScreenToClient(pHVar4,(LPPOINT)(auStack_20 + 8));
            InvalidateRect(pHVar4,(RECT *)auStack_20,1);
          }
          return LVar1;
        }
      }
      else if ((param_2 == 0x46) && (0x309 < DAT_005da980)) {
        FUN_0055e6d0(param_1,param_4);
      }
    }
    else if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      *param_4 = 1;
      return 0x3e9;
    }
    pWVar3 = (WNDPROC)FUN_0055ca00(param_1,param_5);
    LVar1 = CallWindowProcA(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
    return LVar1;
  }
  pWVar3 = (WNDPROC)FUN_0055ca00(param_1,param_5);
  LVar1 = CallWindowProcA(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
  return LVar1;
}

