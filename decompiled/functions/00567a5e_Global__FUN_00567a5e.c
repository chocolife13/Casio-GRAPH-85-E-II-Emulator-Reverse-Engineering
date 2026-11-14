// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567a5e
// entry: 00567a5e  size: 56


undefined4 FUN_00567a5e(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  uVar2 = 0;
  iVar1 = *(int *)(extraout_ECX + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar2 = (**(code **)(extraout_ECX + 0xc))();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

