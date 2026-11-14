// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055313b
// entry: 0055313b  size: 72


void FUN_0055313b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0059c4f8;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0056812c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00562114();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00562114();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

