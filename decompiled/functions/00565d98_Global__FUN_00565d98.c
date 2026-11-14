// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00565d98
// entry: 00565d98  size: 119


HMODULE FUN_00565d98(undefined4 param_1,HMODULE param_2)

{
  HMODULE pHVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  HMODULE pHVar4;
  
  pHVar1 = GetModuleHandleA("COMCTL32.DLL");
  hModule = LoadLibraryA("COMCTL32.DLL");
  pHVar4 = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"InitCommonControlsEx");
    pHVar4 = (HMODULE)0x0;
    if (pFVar2 == (FARPROC)0x0) {
      if ((HMODULE)((uint)param_2 & 0x3fc0) == param_2) {
        Ordinal_17();
        pHVar4 = (HMODULE)0x3fc0;
      }
    }
    else {
      iVar3 = (*pFVar2)(param_1);
      if ((iVar3 != 0) && (pHVar4 = param_2, pHVar1 == (HMODULE)0x0)) {
        Ordinal_17();
        pHVar4 = (HMODULE)((uint)param_2 | 0x3fc0);
      }
    }
    FreeLibrary(hModule);
  }
  return pHVar4;
}

