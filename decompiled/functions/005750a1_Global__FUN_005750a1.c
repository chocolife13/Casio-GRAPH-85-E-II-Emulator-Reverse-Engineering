// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005750a1
// entry: 005750a1  size: 273


undefined4 FUN_005750a1(void)

{
  HKEY hKey;
  LSTATUS LVar1;
  LPBYTE lpData;
  int extraout_ECX;
  int unaff_EBP;
  LPDWORD lpcbData;
  int iVar2;
  
  FUN_00555ab8();
  FUN_00553a90();
  iVar2 = *(int *)(extraout_ECX + 0x7c);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 == 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      *(undefined **)(unaff_EBP + 0x14) = &DAT_005d4ee0;
    }
    GetPrivateProfileStringA
              (*(LPCSTR *)(unaff_EBP + 0xc),*(LPCSTR *)(unaff_EBP + 0x10),
               *(LPCSTR *)(unaff_EBP + 0x14),(LPSTR)(unaff_EBP + -0x1018),0x1000,
               *(LPCSTR *)(extraout_ECX + 0x90));
    iVar2 = unaff_EBP + -0x1018;
  }
  else {
    hKey = (HKEY)GetSectionKey(*(undefined4 *)(unaff_EBP + 0xc));
    *(HKEY *)(unaff_EBP + -0x10) = hKey;
    if (hKey != (HKEY)0x0) {
      *(undefined **)(unaff_EBP + 0xc) = PTR_DAT_005cba44;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      LVar1 = RegQueryValueExA(hKey,*(LPCSTR *)(unaff_EBP + 0x10),(LPDWORD)0x0,
                               (LPDWORD)(unaff_EBP + -0x14),(LPBYTE)0x0,(LPDWORD)(unaff_EBP + -0x18)
                              );
      if (LVar1 == 0) {
        lpcbData = (LPDWORD)(unaff_EBP + -0x18);
        lpData = (LPBYTE)FUN_005676c7(*(undefined4 *)(unaff_EBP + -0x18));
        LVar1 = RegQueryValueExA(*(HKEY *)(unaff_EBP + -0x10),*(LPCSTR *)(unaff_EBP + 0x10),
                                 (LPDWORD)0x0,(LPDWORD)(unaff_EBP + -0x14),lpData,lpcbData);
        FUN_00567716(0xffffffff);
      }
      RegCloseKey(*(HKEY *)(unaff_EBP + -0x10));
      if (LVar1 == 0) {
        FUN_0056710d(unaff_EBP + 0xc);
      }
      else {
        FUN_00567406(*(undefined4 *)(unaff_EBP + 0x14));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00567398();
      goto LAB_005751a0;
    }
    iVar2 = *(int *)(unaff_EBP + 0x14);
  }
  FUN_00567406(iVar2);
LAB_005751a0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

