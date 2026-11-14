// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569858
// entry: 00569858  size: 130


undefined4 FUN_00569858(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00555ab8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00569909(unaff_EBP + -300);
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
  uVar2 = 0x100;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_005676c7(0x100);
  FUN_0056937c(unaff_EBP + -0x11a,uVar1,uVar2);
  FUN_00567716(0xffffffff);
  FUN_0056710d(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

