// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005623e6
// entry: 005623e6  size: 41


void FUN_005623e6(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059d27c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00562394(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

