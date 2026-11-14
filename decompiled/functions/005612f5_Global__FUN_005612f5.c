// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005612f5
// entry: 005612f5  size: 80


void FUN_005612f5(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  iVar1 = FUN_00566937(0xa4);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_005612d6(*(undefined4 *)(extraout_ECX + 0x5c));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(extraout_ECX + 0x50);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(iVar1 + 0x3c) = 0x7009;
  return;
}

