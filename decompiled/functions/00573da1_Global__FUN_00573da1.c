// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00573da1
// entry: 00573da1  size: 364


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573da1(void)

{
  HFONT h;
  int iVar1;
  HGDIOBJ h_00;
  BOOL BVar2;
  int unaff_EBP;
  bool bVar3;
  char *lpString2;
  
  FUN_00555ab8();
  if (DAT_005d510c != 0) goto LAB_00573f00;
  FUN_00576699(10);
  if (DAT_005d533c == (HBITMAP)0x0) {
    iVar1 = FUN_0057497f();
    DAT_005d533c = LoadBitmapA(*(HINSTANCE *)(iVar1 + 0xc),(LPCSTR)0x7912);
    iVar1 = GetObjectA(DAT_005d533c,0x18,(LPVOID)(unaff_EBP + -0x78));
    if (iVar1 != 0) {
      _DAT_005d5330 = *(undefined4 *)(unaff_EBP + -0x74);
      DAT_005d5334 = *(int *)(unaff_EBP + -0x70);
    }
  }
  if (DAT_005d5338 == (HFONT)0x0) {
    _memset((void *)(unaff_EBP + -0x60),0,0x3c);
    *(undefined1 *)(unaff_EBP + -0x49) = 1;
    *(undefined4 *)(unaff_EBP + -0x50) = 400;
    *(int *)(unaff_EBP + -0x60) = 1 - DAT_005d5334;
    iVar1 = GetSystemMetrics(0x2a);
    if (iVar1 == 0) {
      lpString2 = "Small Fonts";
    }
    else {
      lpString2 = "Terminal";
    }
    lstrcpyA((LPSTR)(unaff_EBP + -0x44),lpString2);
    iVar1 = FUN_0056c0b1(0xf233,unaff_EBP + -0x60);
    if (iVar1 == 0) {
      *(undefined1 *)(unaff_EBP + -0x45) = 0x20;
    }
    DAT_005d5338 = CreateFontIndirectA((LOGFONTA *)(unaff_EBP + -0x60));
    if (DAT_005d5338 != (HFONT)0x0) goto LAB_00573e82;
  }
  else {
LAB_00573e82:
    FUN_0056a43d(0);
    h = DAT_005d5338;
    bVar3 = DAT_005d5338 == (HFONT)0x0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (bVar3) {
      h_00 = (HGDIOBJ)0x0;
    }
    else {
      h_00 = SelectObject(*(HDC *)(unaff_EBP + -0x20),h);
    }
    BVar2 = GetTextMetricsA(*(HDC *)(unaff_EBP + -0x1c),(LPTEXTMETRICA)(unaff_EBP + -0xb0));
    *(BOOL *)(unaff_EBP + -0x10) = BVar2;
    if (h_00 != (HGDIOBJ)0x0) {
      SelectObject(*(HDC *)(unaff_EBP + -0x20),h_00);
    }
    if ((*(int *)(unaff_EBP + -0x10) == 0) ||
       (DAT_005d5334 < *(int *)(unaff_EBP + -0xb0) - *(int *)(unaff_EBP + -0xa4))) {
      AfxDeleteObject(&DAT_005d5338);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FID_conflict__CClientDC();
  }
  FUN_00576709(10);
LAB_00573f00:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

