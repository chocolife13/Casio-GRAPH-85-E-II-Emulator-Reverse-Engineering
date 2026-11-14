// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579392
// entry: 00579392  size: 83


undefined4 * FUN_00579392(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_005626cb();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_0059c15c;
  FUN_00562747(0x7802,uVar1);
  iVar2 = FUN_0057633b(FUN_0057434e);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

