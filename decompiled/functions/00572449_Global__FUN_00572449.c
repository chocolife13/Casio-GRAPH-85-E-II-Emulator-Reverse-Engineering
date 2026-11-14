// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00572449
// entry: 00572449  size: 168


undefined4 FUN_00572449(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  iVar2 = FUN_00574748();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  uVar1 = *(undefined4 *)(iVar2 + 0xc4);
  *(undefined4 *)(iVar2 + 0xc4) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar3 = (int *)FUN_005729b9();
  if (piVar3 == (int *)0x0) {
LAB_0057249e:
    iVar4 = FUN_00566555(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
    if (iVar4 == 0) {
      iVar4 = FUN_0057497f();
      if (*(int **)(iVar4 + 4) != (int *)0x0) {
        iVar4 = (**(code **)(**(int **)(iVar4 + 4) + 0xc))
                          (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                           *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
        if (iVar4 != 0) goto LAB_00572499;
      }
      uVar5 = 0;
      goto LAB_005724da;
    }
  }
  else {
    iVar4 = (**(code **)(*piVar3 + 0xc))
                      (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
    if (iVar4 == 0) goto LAB_0057249e;
  }
LAB_00572499:
  uVar5 = 1;
LAB_005724da:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(iVar2 + 0xc4) = uVar1;
  return uVar5;
}

