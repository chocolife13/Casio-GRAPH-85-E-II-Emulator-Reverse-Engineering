// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056b5d8
// entry: 0056b5d8  size: 114


int * FUN_0056b5d8(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00555ab8();
  piVar1 = (int *)FUN_00566937(0x14);
  *(int **)(unaff_EBP + -0x10) = piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00568989();
    piVar1[4] = (int)PTR_DAT_005cba44;
    *piVar1 = (int)&PTR_LAB_0059bdc0;
  }
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = (**(code **)(iVar2 + 0x20))
                    (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                     *(undefined4 *)(unaff_EBP + 0x10));
  if (iVar2 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    piVar1 = (int *)0x0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar1;
}

