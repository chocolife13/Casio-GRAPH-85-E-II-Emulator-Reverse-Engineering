// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00575b0b
// entry: 00575b0b  size: 210


LSTATUS FUN_00575b0b(void)

{
  LSTATUS LVar1;
  int unaff_EBP;
  HKEY hKey;
  
  FUN_00555ab8();
  LVar1 = RegOpenKeyA(*(HKEY *)(unaff_EBP + 8),(LPCSTR)**(undefined4 **)(unaff_EBP + 0xc),
                      (PHKEY)(unaff_EBP + -0x14));
  if (LVar1 == 0) {
    hKey = *(HKEY *)(unaff_EBP + -0x14);
    while( true ) {
      LVar1 = RegEnumKeyA(hKey,0,(LPSTR)(unaff_EBP + -0x118),0xff);
      if (LVar1 != 0) break;
      FUN_00567406(unaff_EBP + -0x118);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      LVar1 = FUN_00575b0b(*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x18);
      *(bool *)(unaff_EBP + -0xd) = LVar1 != 0;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00567398();
      if (*(char *)(unaff_EBP + -0xd) != '\0') break;
      hKey = *(HKEY *)(unaff_EBP + -0x14);
    }
    if ((LVar1 == 0x103) || (LVar1 == 0x3f2)) {
      LVar1 = RegDeleteKeyA(*(HKEY *)(unaff_EBP + 8),(LPCSTR)**(undefined4 **)(unaff_EBP + 0xc));
    }
  }
  RegCloseKey(*(HKEY *)(unaff_EBP + -0x14));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return LVar1;
}

