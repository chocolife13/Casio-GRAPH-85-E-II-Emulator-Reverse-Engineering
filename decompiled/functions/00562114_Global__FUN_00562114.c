// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562114
// entry: 00562114  size: 41


void FUN_00562114(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059c52c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  RemoveAll(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

