// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579967
// entry: 00579967  size: 389


void __fastcall FUN_00579967(int *param_1)

{
  HFONT h;
  int iVar1;
  tagTEXTMETRICA local_94;
  LOGFONTA local_5c;
  int local_20;
  HFONT local_1c;
  tagSIZE local_18;
  int local_10;
  tagSIZE local_c;
  
  if (param_1[2] != 0) {
    if ((HANDLE)param_1[0xb] == (HANDLE)0x0) {
      (**(code **)(*param_1 + 0x24))(0xe);
    }
    else if (param_1[1] != 0) {
      GetObjectA((HANDLE)param_1[0xb],0x3c,&local_5c);
      GetTextFaceA((HDC)param_1[2],0x20,local_5c.lfFaceName);
      GetTextMetricsA((HDC)param_1[2],&local_94);
      if (local_94.tmHeight < 0) {
        local_5c.lfHeight = local_94.tmHeight;
      }
      else {
        local_5c.lfHeight = local_94.tmInternalLeading - local_94.tmHeight;
      }
      local_5c.lfWidth = local_94.tmAveCharWidth;
      local_5c.lfWeight = local_94.tmWeight;
      local_5c.lfItalic = local_94.tmItalic;
      local_5c.lfUnderline = local_94.tmUnderlined;
      local_5c.lfStrikeOut = local_94.tmStruckOut;
      local_5c.lfCharSet = local_94.tmCharSet;
      local_5c.lfPitchAndFamily = local_94.tmPitchAndFamily;
      local_1c = CreateFontIndirectA(&local_5c);
      SelectObject((HDC)param_1[1],local_1c);
      GetTextMetricsA((HDC)param_1[1],&local_94);
      iVar1 = -local_5c.lfHeight;
      if (local_94.tmHeight < 0) {
        local_10 = -local_94.tmHeight;
      }
      else {
        local_10 = local_94.tmHeight - local_94.tmInternalLeading;
      }
      GetWindowExtEx((HDC)param_1[1],&local_c);
      GetViewportExtEx((HDC)param_1[1],&local_18);
      if (local_c.cy < 0) {
        local_c.cy = -local_c.cy;
      }
      if (local_18.cy < 0) {
        local_18.cy = -local_18.cy;
      }
      local_20 = MulDiv(iVar1,local_18.cy,local_c.cy);
      iVar1 = MulDiv(local_10,local_18.cy,local_c.cy);
      h = local_1c;
      if (local_20 < iVar1) {
        local_5c.lfFaceName[0] = '\0';
        local_5c.lfPitchAndFamily = ((local_5c.lfPitchAndFamily & 0xf0) != 0x50) - 1U & 0x50;
        h = CreateFontIndirectA(&local_5c);
        SelectObject((HDC)param_1[1],h);
        DeleteObject(local_1c);
      }
      AfxDeleteObject((void **)(param_1 + 10));
      param_1[10] = (int)h;
    }
  }
  return;
}

