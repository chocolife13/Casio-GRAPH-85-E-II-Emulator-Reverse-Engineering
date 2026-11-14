// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00565976
// entry: 00565976  size: 80


undefined4 FUN_00565976(LPCSTR param_1)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  undefined4 uVar2;
  LPVOID pvVar3;
  
  pvVar3 = (LPVOID)0x0;
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = FUN_0057497f();
    hModule = *(HMODULE *)(iVar1 + 0xc);
    hResInfo = FindResourceA(hModule,param_1,(LPCSTR)0xf0);
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(hModule,hResInfo);
      if (hResData == (HGLOBAL)0x0) {
        return 0;
      }
      pvVar3 = LockResource(hResData);
    }
  }
  uVar2 = FUN_005659c6(pvVar3);
  return uVar2;
}

