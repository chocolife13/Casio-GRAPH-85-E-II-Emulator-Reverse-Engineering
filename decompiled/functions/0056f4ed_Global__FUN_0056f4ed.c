// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056f4ed
// entry: 0056f4ed  size: 418


bool FUN_0056f4ed(void)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar6;
  
  FUN_00555ab8();
  FUN_005603ea(*(undefined4 *)(unaff_EBP + 0x14),0,0,6,0,0);
  puVar3 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined **)(unaff_EBP + -0x14) = puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_005677ee(*(undefined4 *)(unaff_EBP + 0xc));
  *(uint *)(unaff_EBP + -0x180) = *(uint *)(unaff_EBP + -0x180) | *(uint *)(unaff_EBP + 0x10);
  puVar3 = PTR_DAT_005cba44;
  *(undefined **)(unaff_EBP + 0x14) = PTR_DAT_005cba44;
  *(undefined **)(unaff_EBP + -0x10) = puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    bVar2 = 1;
    puVar6 = *(undefined4 **)(extraout_ECX + 8);
    while (puVar6 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar6;
      FUN_0056f204(unaff_EBP + 0x14,unaff_EBP + -0x1b4,puVar6[2],-(uint)bVar2 & unaff_EBP - 0x10U);
      bVar2 = 0;
      puVar6 = puVar1;
    }
  }
  else {
    FUN_0056f204(unaff_EBP + 0x14,unaff_EBP + -0x1b4,*(undefined4 *)(unaff_EBP + 0x18),
                 unaff_EBP + -0x10);
  }
  *(undefined **)(unaff_EBP + -0x18) = PTR_DAT_005cba44;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_005677ee(0xf002);
  FUN_005676af(unaff_EBP + -0x18);
  FUN_0056769a(0);
  FUN_00567673(&DAT_005bfef0);
  FUN_0056769a(0);
  *(int *)(unaff_EBP + -0x1a0) = *(int *)(unaff_EBP + -0x1a0) + 1;
  *(undefined4 *)(unaff_EBP + -0x1a8) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x184) = *(undefined4 *)(unaff_EBP + -0x14);
  uVar4 = FUN_005676c7(0x104);
  *(undefined4 *)(unaff_EBP + -0x198) = uVar4;
  iVar5 = FUN_0056054c();
  FUN_00567716(0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00567398();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00567398();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00567398();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x210));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5 == 1;
}

