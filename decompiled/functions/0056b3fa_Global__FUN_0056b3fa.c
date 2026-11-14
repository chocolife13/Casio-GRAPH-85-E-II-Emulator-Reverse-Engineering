// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056b3fa
// entry: 0056b3fa  size: 478


void FUN_0056b3fa(void)

{
  LPCSTR pCVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  DWORD DVar6;
  undefined1 *puVar7;
  bool bVar8;
  
  FUN_00555ab8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_0056710d(extraout_ECX + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00568cb6();
  if (*(int *)(*(int *)(extraout_ECX + 0x10) + -8) == 0) goto LAB_0056b5ba;
  DVar6 = 0;
  *(undefined **)(unaff_EBP + -0x14) = PTR_DAT_005cba44;
  bVar8 = DAT_005d5100 == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = extraout_ECX;
  if (bVar8) {
    hModule = GetModuleHandleA("KERNEL32");
    pFVar2 = GetProcAddress(hModule,"ReplaceFile");
    *(FARPROC *)(unaff_EBP + -0x2c) = pFVar2;
    if (pFVar2 == (FARPROC)0x0) goto LAB_0056b581;
    uVar3 = FUN_0056b194(unaff_EBP + -0x28,*(undefined4 *)(extraout_ECX + 0x10),0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00567485(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00567398();
    pCVar1 = *(LPCSTR *)(unaff_EBP + -0x14);
    *(LPCSTR *)(unaff_EBP + -0x10) = pCVar1;
    if (pCVar1 == (LPCSTR)0x0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    else {
      iVar4 = lstrlenA(pCVar1);
      FUN_00553a90();
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffffd4;
      MultiByteToWideChar(0,0,*(LPCSTR *)(unaff_EBP + -0x10),-1,(LPWSTR)&stack0xffffffd4,iVar4 + 1);
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
    }
    pCVar1 = *(LPCSTR *)(iVar4 + 0x10);
    *(LPCSTR *)(unaff_EBP + -0x10) = pCVar1;
    if (pCVar1 == (LPCSTR)0x0) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    else {
      iVar4 = lstrlenA(pCVar1);
      FUN_00553a90();
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffffd4;
      MultiByteToWideChar(0,0,*(LPCSTR *)(unaff_EBP + -0x10),-1,(LPWSTR)&stack0xffffffd4,iVar4 + 1);
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x24);
    }
    pCVar1 = *(LPCSTR *)(unaff_EBP + -0x18);
    *(LPCSTR *)(unaff_EBP + -0x10) = pCVar1;
    if (pCVar1 == (LPCSTR)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      puVar7 = &stack0xffffffd4;
      iVar4 = lstrlenA(pCVar1);
      FUN_00553a90();
      MultiByteToWideChar(0,0,*(LPCSTR *)(unaff_EBP + -0x10),-1,(LPWSTR)&stack0xffffffd4,iVar4 + 1);
      iVar4 = *(int *)(unaff_EBP + -0x1c);
    }
    iVar5 = (**(code **)(unaff_EBP + -0x2c))
                      (puVar7,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       3,0,0);
    if (iVar5 == 0) {
      DVar6 = GetLastError();
      if ((DVar6 == 0x498) || (DVar6 == 0)) goto LAB_0056b581;
      goto LAB_0056b589;
    }
    FUN_00568de9(*(undefined4 *)(unaff_EBP + -0x14));
  }
  else {
LAB_0056b581:
    FUN_00568de9(*(undefined4 *)(unaff_EBP + -0x18));
LAB_0056b589:
    if (DVar6 == 0x499) {
      FUN_00568de9(*(undefined4 *)(unaff_EBP + -0x14));
    }
    FUN_00568dc7(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(unaff_EBP + -0x18));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
LAB_0056b5ba:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

