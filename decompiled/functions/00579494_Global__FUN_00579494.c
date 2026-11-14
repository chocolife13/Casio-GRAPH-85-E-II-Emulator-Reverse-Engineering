// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579494
// entry: 00579494  size: 91


void FUN_00579494(void)

{
  int iVar1;
  HDC hdc;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 != 0) && (hdc = *(HDC *)(*(int *)(iVar1 + 0x5c) + 0x10), hdc != (HDC)0x0)) {
    DeleteDC(hdc);
    *(undefined4 *)(*(int *)(*extraout_ECX + 0x5c) + 0x10) = 0;
  }
  if ((int *)*extraout_ECX != (int *)0x0) {
    (**(code **)(*(int *)*extraout_ECX + 4))(1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

