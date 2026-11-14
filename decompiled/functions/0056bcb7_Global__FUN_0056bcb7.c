// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056bcb7
// entry: 0056bcb7  size: 125


undefined4 FUN_0056bcb7(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  iVar3 = FUN_00566555(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
  if (iVar3 == 0) {
    if (*(int *)(extraout_ECX + 0x3c) == 0) {
      uVar4 = 0;
    }
    else {
      iVar3 = FUN_00574748();
      *(int *)(unaff_EBP + -0x10) = iVar3;
      uVar1 = *(undefined4 *)(iVar3 + 0xc0);
      *(int *)(iVar3 + 0xc0) = extraout_ECX;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
      piVar2 = *(int **)(extraout_ECX + 0x3c);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar4 = (**(code **)(*piVar2 + 0xc))
                        (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
      *(undefined4 *)(iVar3 + 0xc0) = uVar1;
    }
  }
  else {
    uVar4 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}

