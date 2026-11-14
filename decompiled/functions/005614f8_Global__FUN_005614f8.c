// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005614f8
// entry: 005614f8  size: 57


undefined4 * FUN_005614f8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00563012();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CMap<>(10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0059d14c;
  return extraout_ECX;
}

