// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056841d
// entry: 0056841d  size: 93


void FUN_0056841d(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0059c86c;
  iVar1 = extraout_ECX[2];
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_005683d2(3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00567398();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

