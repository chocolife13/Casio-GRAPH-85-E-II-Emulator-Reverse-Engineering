// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057434e
// entry: 0057434e  size: 49


void FUN_0057434e(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00555ab8();
  uVar2 = extraout_ECX;
  iVar1 = FUN_00575e74(0x10);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_005751b2(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

