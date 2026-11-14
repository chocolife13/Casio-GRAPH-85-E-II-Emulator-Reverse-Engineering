// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057a532
// entry: 0057a532  size: 45


void FUN_0057a532(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0059b8d4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  AfxDeleteObject((void **)(extraout_ECX + 1));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

