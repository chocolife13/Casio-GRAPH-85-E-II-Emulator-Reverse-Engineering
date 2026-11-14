// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056944d
// entry: 0056944d  size: 160


undefined4 FUN_0056944d(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    **(int **)(unaff_EBP + 0x10) = *(int *)(extraout_ECX + 8) + 0xf1a0;
  }
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0056710d(extraout_ECX + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(*(int *)(unaff_EBP + 0x10) + -8) == 0) {
    FUN_005677ee(0xf006);
  }
  FUN_0056ff16(unaff_EBP + -0x10,*(int *)(extraout_ECX + 8) + 0xf1a0,
               *(undefined4 *)(unaff_EBP + 0x10));
  lstrcpynA(*(LPSTR *)(unaff_EBP + 8),*(LPCSTR *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}

