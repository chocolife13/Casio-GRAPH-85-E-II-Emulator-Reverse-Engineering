// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055e800
// entry: 0055e800  size: 831


void FUN_0055e800(HWND param_1,HDC param_2,RECT *param_3,LPCSTR param_4,int param_5,short param_6,
                 int param_7)

{
  BOOL BVar1;
  HGDIOBJ pvVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  int iStack_18;
  int iStack_14;
  tagRECT local_10;
  
  local_10.left = param_3->left;
  local_10.top = param_3->top;
  local_10.right = param_3->right;
  local_10.bottom = param_3->bottom;
  FUN_0055cd10(param_2,param_3,7,7,0xf);
  InflateRect(&local_10,-1,-1);
  if ((param_6 == 1) && (BVar1 = IsWindowEnabled(param_1), BVar1 != 0)) {
    FUN_0055cd10(param_2,&local_10,7,7,0xf);
    InflateRect(&local_10,-1,-1);
  }
  PatBlt(param_2,param_3->left,param_3->top,1,1,0xf00021);
  PatBlt(param_2,param_3->right + -1,param_3->top,1,1,0xf00021);
  PatBlt(param_2,param_3->left,param_3->bottom + -1,1,1,0xf00021);
  PatBlt(param_2,param_3->right + -1,param_3->bottom + -1,1,1,0xf00021);
  iVar4 = (param_7 == 0) + 1;
  pvVar2 = DAT_005da9a4;
  if (param_7 != 0) {
    pvVar2 = DAT_005da9ac;
  }
  pvVar2 = SelectObject(param_2,pvVar2);
  PatBlt(param_2,local_10.left,local_10.top,iVar4,local_10.bottom - local_10.top,0xf00021);
  PatBlt(param_2,local_10.left,local_10.top,local_10.right - local_10.left,iVar4,0xf00021);
  if (param_7 == 0) {
    iVar5 = 0;
    SelectObject(param_2,DAT_005da9ac);
    local_10.bottom = local_10.bottom + -1;
    local_10.right = local_10.right + -1;
    if (iVar4 != 0) {
      do {
        PatBlt(param_2,local_10.left,local_10.bottom,(local_10.right - local_10.left) + 1,1,0xf00021
              );
        PatBlt(param_2,local_10.right,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
        if (iVar5 < (int)(uint)(param_7 == 0)) {
          InflateRect(&local_10,-1,-1);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  local_10.left = local_10.left + 1;
  local_10.top = local_10.top + 1;
  SelectObject(param_2,DAT_005da9a8);
  PatBlt(param_2,local_10.left,local_10.top,local_10.right - local_10.left,
         local_10.bottom - local_10.top,0xf00021);
  BVar1 = IsWindowEnabled(param_1);
  if (BVar1 == 0) {
    SetTextColor(param_2,DAT_005da99c);
  }
  FUN_0055cf00(param_2,param_4,&iStack_18,&iStack_14);
  local_10.top = local_10.top + ((local_10.bottom - local_10.top) - iStack_14) / 2;
  local_10.left = local_10.left + ((local_10.right - local_10.left) - iStack_18) / 2;
  iVar4 = local_10.top + iStack_14;
  if (local_10.bottom <= local_10.top + iStack_14) {
    iVar4 = local_10.bottom;
  }
  iVar5 = local_10.left + iStack_18;
  if (local_10.right <= local_10.left + iStack_18) {
    iVar5 = local_10.right;
  }
  local_10.right = iVar5;
  if (param_7 != 0) {
    local_10.bottom = iVar4;
    OffsetRect(&local_10,1,1);
    iVar5 = param_3->right + -3;
    if (local_10.right <= iVar5) {
      iVar5 = local_10.right;
    }
    iVar4 = param_3->bottom + -3;
    local_10.right = iVar5;
    if (local_10.bottom <= iVar4) {
      iVar4 = local_10.bottom;
    }
  }
  local_10.bottom = iVar4;
  DrawTextA(param_2,param_4,param_5,&local_10,0x20);
  pHVar3 = GetFocus();
  if (pHVar3 == param_1) {
    InflateRect(&local_10,1,1);
    IntersectRect(&local_10,&local_10,param_3);
    DrawFocusRect(param_2,&local_10);
  }
  if (pvVar2 != (HGDIOBJ)0x0) {
    SelectObject(param_2,pvVar2);
  }
  return;
}

