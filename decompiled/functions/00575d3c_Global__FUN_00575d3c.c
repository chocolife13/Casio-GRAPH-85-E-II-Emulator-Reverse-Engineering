// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00575d3c
// entry: 00575d3c  size: 41


void FUN_00575d3c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059c3d4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00567a0d(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

