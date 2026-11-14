// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d9af
// entry: 0056d9af  size: 195


void __thiscall FUN_0056d9af(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  HGDIOBJ h;
  int iVar1;
  tagTEXTMETRICA local_70;
  HDC local_34;
  HDC local_30;
  tagRECT local_24;
  undefined1 local_14 [4];
  int local_10;
  HGDIOBJ local_8;
  
  FUN_0056a43d(0);
  h = (HGDIOBJ)SendMessageA((HWND)param_1[7],0x31,0,0);
  local_8 = (HGDIOBJ)0x0;
  if (h != (HGDIOBJ)0x0) {
    local_8 = SelectObject(local_34,h);
  }
  GetTextMetricsA(local_30,&local_70);
  if (local_8 != (HGDIOBJ)0x0) {
    SelectObject(local_34,local_8);
  }
  FID_conflict__CClientDC();
  SetRectEmpty(&local_24);
  FUN_00574d70(&local_24,param_4);
  (**(code **)(*param_1 + 0xa0))(0x407,0,local_14);
  iVar1 = GetSystemMetrics(6);
  iVar1 = (((iVar1 + local_10) * 2 - (local_24.bottom - local_24.top)) - local_70.tmInternalLeading)
          + -1 + local_70.tmHeight;
  if (iVar1 < param_1[0x1e]) {
    iVar1 = param_1[0x1e];
  }
  *param_2 = 0x7fff;
  param_2[1] = iVar1;
  return;
}

