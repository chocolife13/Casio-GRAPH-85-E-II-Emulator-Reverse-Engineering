// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577fc2
// entry: 00577fc2  size: 144


undefined4 FUN_00577fc2(void)

{
  int *piVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00555ab8();
  DVar2 = GetSysColor(0xc);
  FUN_0056a752(DVar2);
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_00569e09(unaff_EBP + -0x14);
  (**(code **)(*piVar1 + 0x50))(unaff_EBP + -0x24);
  PatBlt((HDC)piVar1[1],*(int *)(unaff_EBP + -0x24),*(int *)(unaff_EBP + -0x20),
         *(int *)(unaff_EBP + -0x1c) - *(int *)(unaff_EBP + -0x24),
         *(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x20),0xf00021);
  FUN_00569e09(uVar3);
  *(undefined ***)(unaff_EBP + -0x14) = &PTR_LAB_0059aee4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0056a73c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}

