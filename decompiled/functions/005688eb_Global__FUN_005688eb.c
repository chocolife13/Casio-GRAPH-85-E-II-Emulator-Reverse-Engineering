// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005688eb
// entry: 005688eb  size: 158


void FUN_005688eb(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_00555ab8();
  uVar2 = FUN_00566937(*(int *)(*(int *)(extraout_ECX + 0x10) + -8) + 5);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iVar3 = FUN_0057497f();
  iVar4 = 0;
  iVar1 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar3 + 4);
  if (0 < iVar1) {
    do {
      iVar4 = iVar4 + 1;
      wsprintfA(*(LPSTR *)(unaff_EBP + -0x10),*(LPCSTR *)(extraout_ECX + 0x10),iVar4);
      uVar2 = FUN_005750a1(unaff_EBP + -0x18,*(undefined4 *)(extraout_ECX + 0xc),
                           *(undefined4 *)(unaff_EBP + -0x10),&DAT_005d4ee0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00567485(uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00567398();
    } while (iVar4 < *(int *)(extraout_ECX + 4));
  }
  FUN_00566960(*(undefined4 *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

