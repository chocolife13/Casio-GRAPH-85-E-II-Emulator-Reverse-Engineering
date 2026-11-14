// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005745f3
// entry: 005745f3  size: 41


void FUN_005745f3(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059aee4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0056a73c(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

