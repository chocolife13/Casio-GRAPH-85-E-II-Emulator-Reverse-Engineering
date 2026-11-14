// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056af26
// entry: 0056af26  size: 255


undefined4 FUN_0056af26(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00555ab8();
  iVar1 = (**(code **)(*extraout_ECX + 0x58))();
  if (iVar1 == 0) {
    uVar2 = 1;
    goto LAB_0056b018;
  }
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
  iVar1 = *(int *)(extraout_ECX[8] + -8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    FUN_00567485(extraout_ECX + 7);
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0) {
      FUN_005677ee(0xf003);
    }
  }
  else {
    FUN_00567485(extraout_ECX + 8);
    if (DAT_005d5110 != 0) {
      iVar1 = extraout_ECX[8];
      uVar3 = 0x104;
      uVar2 = FUN_005676c7(0x104);
      FUN_0056937c(iVar1,uVar2,uVar3);
      FUN_00567716(0xffffffff);
    }
  }
  *(undefined **)(unaff_EBP + -0x14) = PTR_DAT_005cba44;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0056ff16(unaff_EBP + -0x14,0xf103,*(undefined4 *)(unaff_EBP + -0x10));
  iVar1 = FUN_0056e0d0(*(undefined4 *)(unaff_EBP + -0x14),3,0xf103);
  if (iVar1 == 2) {
LAB_0056affb:
    uVar2 = 0;
  }
  else {
    if (iVar1 == 6) {
      iVar1 = (**(code **)(*extraout_ECX + 0x9c))();
      if (iVar1 == 0) goto LAB_0056affb;
    }
    uVar2 = 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
LAB_0056b018:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

