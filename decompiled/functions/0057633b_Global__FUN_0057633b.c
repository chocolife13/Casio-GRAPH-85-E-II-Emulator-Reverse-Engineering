// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057633b
// entry: 0057633b  size: 75


int FUN_0057633b(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (*extraout_ECX == 0) {
    FUN_00576699(0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*extraout_ECX == 0) {
      iVar1 = (**(code **)(unaff_EBP + 8))();
      *extraout_ECX = iVar1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00576709(0x10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *extraout_ECX;
}

