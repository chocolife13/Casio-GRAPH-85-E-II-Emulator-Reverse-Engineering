// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560d0f
// entry: 00560d0f  size: 98


undefined4 FUN_00560d0f(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int unaff_EBP;
  
  FUN_00555ab8();
  puVar3 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined **)(unaff_EBP + -0x10) = puVar3;
  iVar1 = **(int **)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(iVar1 + -8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_005674fc(uVar2,iVar1,1,unaff_EBP + 0x10);
  FUN_0056710d(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

