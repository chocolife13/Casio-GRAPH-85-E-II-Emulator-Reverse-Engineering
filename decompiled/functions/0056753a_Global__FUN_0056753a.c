// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056753a
// entry: 0056753a  size: 102


undefined4 FUN_0056753a(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int unaff_EBP;
  
  FUN_00555ab8();
  puVar3 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined **)(unaff_EBP + -0x10) = puVar3;
  iVar1 = **(int **)(unaff_EBP + 0x10);
  iVar2 = **(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_005674fc(*(undefined4 *)(iVar2 + -8),iVar2,*(undefined4 *)(iVar1 + -8),iVar1);
  FUN_0056710d(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

