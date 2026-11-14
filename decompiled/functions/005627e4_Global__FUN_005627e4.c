// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005627e4
// entry: 005627e4  size: 68


void FUN_005627e4(LPCSTR param_1,undefined4 param_2)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  pvVar2 = (LPVOID)0x0;
  iVar1 = FUN_0057497f();
  hModule = *(HMODULE *)(iVar1 + 0xc);
  hResInfo = FindResourceA(hModule,param_1,(LPCSTR)0x5);
  hResData = LoadResource(hModule,hResInfo);
  if (hResData != (HGLOBAL)0x0) {
    pvVar2 = LockResource(hResData);
  }
  FUN_00562828(pvVar2,param_2,hModule);
  return;
}

