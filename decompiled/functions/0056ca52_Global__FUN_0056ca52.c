// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ca52
// entry: 0056ca52  size: 70


void FUN_0056ca52(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int *)(extraout_ECX + 0x20) != 0) && ((*(byte *)(extraout_ECX + 0x14) & 2) == 0)) {
    FUN_0056cada();
  }
  FUN_0056ca98();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

