// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577818
// entry: 00577818  size: 163


undefined4 * FUN_00577818(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_0056cca7();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00569bbe();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX + 0x25;
  *(undefined4 *)(unaff_EBP + -0x14) = 2;
  do {
    FUN_005778d7();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
    piVar1 = (int *)(unaff_EBP + -0x14);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1b] = 0;
  extraout_ECX[0x45] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x40] = 0;
  extraout_ECX[0x39] = 0;
  extraout_ECX[0x3b] = 0;
  extraout_ECX[0x19] = 1;
  extraout_ECX[0x10] = 1;
  *extraout_ECX = &PTR_LAB_0059c044;
  extraout_ECX[0x24] = extraout_ECX + 0x25;
  extraout_ECX[0x3c] = 2;
  return extraout_ECX;
}

