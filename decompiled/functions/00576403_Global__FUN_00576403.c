// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00576403
// entry: 00576403  size: 65


void FUN_00576403(void)

{
  code *pcVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0059a9d0;
  pcVar1 = (code *)extraout_ECX[4];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0);
  }
  if ((HMODULE)extraout_ECX[2] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)extraout_ECX[2]);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

