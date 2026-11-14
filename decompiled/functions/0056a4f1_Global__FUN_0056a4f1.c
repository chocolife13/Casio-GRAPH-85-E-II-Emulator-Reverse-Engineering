// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a4f1
// entry: 0056a4f1  size: 86


undefined4 * FUN_0056a4f1(void)

{
  HWND hWnd;
  HDC pHVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00569bbe();
  hWnd = *(HWND *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_0059add4;
  if (hWnd != (HWND)0x0) {
    hWnd = (HWND)hWnd[7].unused;
  }
  extraout_ECX[4] = hWnd;
  pHVar1 = GetWindowDC(hWnd);
  iVar2 = FUN_00569c75(pHVar1);
  if (iVar2 == 0) {
    FUN_0056a79c();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

