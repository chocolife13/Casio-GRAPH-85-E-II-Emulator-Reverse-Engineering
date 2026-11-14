// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005675a0
// entry: 005675a0  size: 116


undefined4 FUN_005675a0(void)

{
  undefined *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00555ab8();
  puVar1 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenA(*(LPCSTR *)(unaff_EBP + 0x10));
  }
  FUN_005674fc(*(undefined4 *)(**(int **)(unaff_EBP + 0xc) + -8),**(int **)(unaff_EBP + 0xc),iVar2,
               *(undefined4 *)(unaff_EBP + 0x10));
  FUN_0056710d(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

