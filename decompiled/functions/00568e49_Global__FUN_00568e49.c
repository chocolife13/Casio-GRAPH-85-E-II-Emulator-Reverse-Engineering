// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568e49
// entry: 00568e49  size: 157


int FUN_00568e49(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  int unaff_EBP;
  
  FUN_00555ab8();
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00568ee6(unaff_EBP + -0x10,uVar2);
  puVar3 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined **)(unaff_EBP + 0x10) = puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00568f55(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + 0x10);
  if (iVar4 != 0) {
    hModule = LoadLibraryA(*(LPCSTR *)(unaff_EBP + 0x10));
    if (hModule != (HMODULE)0x0) {
      pFVar5 = GetProcAddress(hModule,"DllGetClassObject");
      if (pFVar5 == (FARPROC)0x0) {
        iVar4 = -0x7ffbfe07;
      }
      else {
        iVar4 = (*pFVar5)(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),puVar1);
      }
      goto LAB_00568ebd;
    }
  }
  iVar4 = -0x7ffbfeac;
LAB_00568ebd:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}

