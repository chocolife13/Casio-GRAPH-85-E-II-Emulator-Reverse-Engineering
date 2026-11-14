// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056f204
// entry: 0056f204  size: 215


void FUN_0056f204(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00555ab8();
  puVar3 = PTR_DAT_005cba44;
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
  *(undefined **)(unaff_EBP + -0x14) = puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = *(int **)(unaff_EBP + 0x10);
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = (**(code **)(iVar4 + 100))(unaff_EBP + -0x10,4);
  if ((iVar4 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) != 0)) {
    iVar4 = (**(code **)(*piVar1 + 100))(unaff_EBP + -0x14,3);
    if ((iVar4 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x14) + -8) != 0)) {
      iVar4 = *(int *)(unaff_EBP + 0xc);
      puVar2 = *(undefined4 **)(unaff_EBP + 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_005674d5(*(int *)(unaff_EBP + -0x10) + 1);
        *(undefined4 *)(iVar4 + 0x3c) = *puVar2;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x14) + 1;
      }
      FUN_005676af(unaff_EBP + -0x14);
      FUN_0056769a(0);
      FUN_0056769a(0x2a);
      FUN_005676af(unaff_EBP + -0x10);
      FUN_0056769a(0);
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

