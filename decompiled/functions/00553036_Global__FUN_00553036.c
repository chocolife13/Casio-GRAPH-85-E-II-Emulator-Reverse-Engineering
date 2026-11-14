// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00553036
// entry: 00553036  size: 44


void FUN_00553036(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059be18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00567398(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

