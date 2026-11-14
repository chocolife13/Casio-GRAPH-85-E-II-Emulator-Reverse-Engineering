// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560627
// entry: 00560627  size: 272


undefined4 FUN_00560627(void)

{
  byte bVar1;
  HWND pHVar2;
  int iVar3;
  LPARAM LVar4;
  LRESULT LVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  bVar1 = *(byte *)(extraout_ECX + 0x92);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar3 = extraout_ECX;
  if (((bVar1 & 8) != 0) && (pHVar2 = *(HWND *)(extraout_ECX + 0x1c), pHVar2 != (HWND)0x0)) {
    *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pHVar2 = GetParent(pHVar2);
    iVar3 = FUN_00563433(pHVar2);
    LVar4 = FUN_005676c7(0x104);
    LVar5 = SendMessageA(*(HWND *)(iVar3 + 0x1c),0x464,0x104,LVar4);
    if (LVar5 < 0) {
      FUN_00567323();
    }
    else {
      FUN_00567716(0xffffffff);
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) != 0) {
      pHVar2 = GetParent(*(HWND *)(*(int *)(unaff_EBP + -0x14) + 0x1c));
      iVar3 = FUN_00563433(pHVar2);
      LVar4 = FUN_005676c7(0x104);
      LVar5 = SendMessageA(*(HWND *)(iVar3 + 0x1c),0x465,0x104,LVar4);
      if (-1 < LVar5) {
        FUN_00567716(0xffffffff);
        FUN_0056710d(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00567398();
        goto LAB_005606ff;
      }
      FUN_00567323();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00567398();
    iVar3 = *(int *)(unaff_EBP + -0x14);
  }
  FUN_00567406(*(undefined4 *)(iVar3 + 0x78));
LAB_005606ff:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

