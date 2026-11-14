// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00553302
// entry: 00553302  size: 41


void FUN_00553302(void)

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

