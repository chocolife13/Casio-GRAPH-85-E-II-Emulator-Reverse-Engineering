// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560d71
// entry: 00560d71  size: 124


undefined4 FUN_00560d71(void)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_00555ab8();
  iVar3 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar1 = *extraout_ECX;
  if (iVar3 < *(int *)(iVar1 + -8)) {
    *(undefined **)(unaff_EBP + 0xc) = PTR_DAT_005cba44;
    iVar1 = *(int *)(iVar1 + -8);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_005673c2(unaff_EBP + 0xc,iVar3,iVar1 - iVar3,0);
    FUN_0056710d(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    FUN_00567398();
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
  }
  else {
    FUN_0056710d(extraout_ECX);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

