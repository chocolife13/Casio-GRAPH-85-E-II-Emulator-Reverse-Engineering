// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00565709
// entry: 00565709  size: 94


void FUN_00565709(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  FUN_005657ab(extraout_ECX,*(undefined4 *)(unaff_EBP + 8));
  iVar1 = FUN_00574748();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + 0xb8);
  *(int *)(iVar1 + 0xb8) = extraout_ECX[7];
  (**(code **)(*extraout_ECX + 0x84))(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + 8) = 1;
  FUN_0056578e();
  return;
}

