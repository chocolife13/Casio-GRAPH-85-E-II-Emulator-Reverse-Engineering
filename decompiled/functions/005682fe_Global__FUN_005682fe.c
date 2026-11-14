// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005682fe
// entry: 005682fe  size: 184


undefined4 * FUN_005682fe(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  puVar3 = PTR_DAT_005cba44;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[3] = puVar3;
  puVar3 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[4] = puVar3;
  extraout_ECX[7] = PTR_DAT_005cba44;
  iVar1 = *(int *)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_FUN_0059c86c;
  piVar4 = (int *)FUN_00566937(iVar1 * 4 + 4);
  *(int **)(unaff_EBP + -0x14) = piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar4 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    *piVar4 = iVar1;
    *(int **)(unaff_EBP + 0x14) = piVar4 + 1;
    FUN_00556cd8(piVar4 + 1,4,iVar1,&LAB_005532ce,FUN_00567398);
    uVar5 = *(undefined4 *)(unaff_EBP + 0x14);
  }
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[2] = uVar5;
  uVar5 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[1] = iVar1;
  extraout_ECX[5] = uVar5;
  FUN_005674d5(uVar2);
  FUN_005674d5(*(undefined4 *)(unaff_EBP + 0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[6] = *(undefined4 *)(unaff_EBP + 0x18);
  return extraout_ECX;
}

