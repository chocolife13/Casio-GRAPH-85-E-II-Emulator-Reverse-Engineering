// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ff69
// entry: 0056ff69  size: 56


void FUN_0056ff69(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059cf1c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0056ea1f();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0056e289();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

