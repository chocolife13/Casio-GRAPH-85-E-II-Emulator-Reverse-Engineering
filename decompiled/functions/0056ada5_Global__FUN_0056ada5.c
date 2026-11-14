// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ada5
// entry: 0056ada5  size: 313


undefined4 FUN_0056ada5(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00555ab8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  FUN_00567406(*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + -8) == 0) {
    piVar1 = (int *)extraout_ECX[9];
    FUN_00567485(extraout_ECX + 8);
    if ((*(int *)(unaff_EBP + 0xc) != 0) && (*(int *)(*(int *)(unaff_EBP + -0x14) + -8) == 0)) {
      FUN_00567485(extraout_ECX + 7);
      iVar2 = FUN_00567799(" #%;/\\");
      if (iVar2 != -1) {
        FUN_00567716(iVar2);
      }
      *(undefined **)(unaff_EBP + -0x18) = PTR_DAT_005cba44;
      iVar2 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar2 = (**(code **)(iVar2 + 100))(unaff_EBP + -0x18,4);
      if ((iVar2 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x18) + -8) != 0)) {
        FUN_005676af(unaff_EBP + -0x18);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00567398();
    }
    FUN_0057497f();
    iVar2 = FUN_0056de49(unaff_EBP + -0x14,
                         (-(uint)(*(int *)(unaff_EBP + 0xc) != 0) & 0xfffffffd) + 0xf004,0x804,0,
                         piVar1);
    if (iVar2 != 0) goto LAB_0056ae88;
  }
  else {
LAB_0056ae88:
    FUN_0057497f();
    FUN_00566672();
    iVar2 = *extraout_ECX;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = (**(code **)(iVar2 + 0x78))(*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar2 != 0) {
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        (**(code **)(*extraout_ECX + 0x54))(*(undefined4 *)(unaff_EBP + -0x14),1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0057497f();
      FUN_00566687();
      uVar3 = 1;
      goto LAB_0056af07;
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00568de9(*(undefined4 *)(unaff_EBP + -0x14));
      uVar3 = FUN_0056aeca();
      return uVar3;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0057497f();
    FUN_00566687();
  }
  uVar3 = 0;
LAB_0056af07:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}

