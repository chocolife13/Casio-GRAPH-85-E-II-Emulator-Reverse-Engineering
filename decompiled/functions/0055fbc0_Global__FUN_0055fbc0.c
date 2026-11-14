// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055fbc0
// entry: 0055fbc0  size: 356


void FUN_0055fbc0(HWND param_1,HDC param_2)

{
  uint uVar1;
  HGDIOBJ pvVar2;
  HWND hWnd;
  HGDIOBJ h;
  UINT Msg;
  HDC wParam;
  HWND lParam;
  tagRECT tStack_10;
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  if ((uVar1 & 0x10000000) != 0) {
    GetClientRect(param_1,&tStack_10);
    switch(uVar1 & 0x1f) {
    case 0:
    case 1:
    case 2:
    case 0xc:
      pvVar2 = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
      if (pvVar2 == (HGDIOBJ)0x0) {
        pvVar2 = (HGDIOBJ)0x0;
      }
      else {
        pvVar2 = SelectObject(param_2,pvVar2);
      }
      SetBkMode(param_2,2);
      Msg = 0x138;
      wParam = param_2;
      lParam = param_1;
      hWnd = GetParent(param_1);
      h = (HGDIOBJ)SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)lParam);
      if (h != (HGDIOBJ)0x0) {
        h = SelectObject(param_2,h);
      }
      FUN_0055fae0(param_1,param_2,&tStack_10,uVar1);
      if (pvVar2 != (HGDIOBJ)0x0) {
        SelectObject(param_2,pvVar2);
      }
      if (h != (HGDIOBJ)0x0) {
        SelectObject(param_2,h);
        return;
      }
      break;
    case 4:
    case 7:
      FUN_0055cd10(param_2,&tStack_10,2,0,0xf);
      return;
    case 5:
    case 8:
    case 0x10:
    case 0x11:
    case 0x12:
      tStack_10.left = tStack_10.left + 1;
      tStack_10.top = tStack_10.top + 1;
      FUN_0055cd10(param_2,&tStack_10,0,0,0xf);
      OffsetRect(&tStack_10,-1,-1);
      FUN_0055cd10(param_2,&tStack_10,2,2,0xf);
      return;
    case 6:
    case 9:
      FUN_0055cd10(param_2,&tStack_10,0,2,0xf);
    }
  }
  return;
}

