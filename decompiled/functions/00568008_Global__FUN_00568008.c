// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568008
// entry: 00568008  size: 101


undefined4 * FUN_00568008(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  CMap<>(10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CMap<>(4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_0059c4f8;
  FUN_0056234f(7,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xf] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x10] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x11] = *(undefined4 *)(unaff_EBP + 0x10);
  return extraout_ECX;
}

