// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00576976
// entry: 00576976  size: 52


undefined4 * FUN_00576976(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00561cc7(10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0059c9e8;
  return extraout_ECX;
}

