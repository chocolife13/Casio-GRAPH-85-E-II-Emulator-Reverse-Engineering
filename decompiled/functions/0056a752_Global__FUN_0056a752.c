// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a752
// entry: 0056a752  size: 74


undefined4 * FUN_0056a752(void)

{
  COLORREF color;
  HBRUSH pHVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 0;
  color = *(COLORREF *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_0059aed4;
  pHVar1 = CreateSolidBrush(color);
  iVar2 = FUN_0056a6e5(pHVar1);
  if (iVar2 == 0) {
    FUN_0056a79c();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

