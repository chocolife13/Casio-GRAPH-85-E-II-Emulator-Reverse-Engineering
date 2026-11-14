// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056b194
// entry: 0056b194  size: 166


undefined4 FUN_0056b194(void)

{
  undefined *puVar1;
  LPSTR lpTempFileName;
  int unaff_EBP;
  
  FUN_00555ab8();
  puVar1 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  GetFullPathNameA(*(LPCSTR *)(unaff_EBP + 0xc),0x104,(LPSTR)(unaff_EBP + -0x118),
                   (LPSTR *)(unaff_EBP + 0xc));
  **(undefined1 **)(unaff_EBP + 0xc) = 0;
  lpTempFileName = (LPSTR)FUN_005676c7(0x105);
  GetTempFileNameA((LPCSTR)(unaff_EBP + -0x118),"MFC",0,lpTempFileName);
  FUN_00567716(0xffffffff);
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_00568de9(*(undefined4 *)(unaff_EBP + -0x10));
  }
  FUN_0056710d(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

