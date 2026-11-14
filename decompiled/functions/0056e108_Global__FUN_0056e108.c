// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e108
// entry: 0056e108  size: 89


undefined4 FUN_0056e108(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_005677ee(*(undefined4 *)(unaff_EBP + 8));
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (iVar1 == -1) {
    iVar1 = *(int *)(unaff_EBP + 8);
  }
  uVar2 = FUN_0056e0d0(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc),iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

