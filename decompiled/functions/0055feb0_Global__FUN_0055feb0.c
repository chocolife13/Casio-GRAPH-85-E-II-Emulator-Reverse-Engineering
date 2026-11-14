// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055feb0
// entry: 0055feb0  size: 203


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0055feb0(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  DWORD DVar2;
  int iVar3;
  
  if (param_2 == 1) {
    hModule = GetModuleHandleA(s_KERNEL32_DLL_005ccb40);
    pFVar1 = GetProcAddress(hModule,s_DisableThreadLibraryCalls_005ccb24);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
    DAT_005da97c = param_1;
    DAT_005da978 = param_1;
    DVar2 = GetVersion();
    DAT_005da980 = CONCAT11((char)DVar2,(char)(DVar2 >> 8));
    if (((DVar2 & 0x80000000) == 0) || (DAT_005da982 = 0x10, 0x35e < DAT_005da980)) {
      DAT_005da982 = 0x20;
    }
    _DAT_005db454 = GetSystemMetrics(7);
    _DAT_005db454 = _DAT_005db454 + -1;
    iVar3 = GetSystemMetrics(8);
    DAT_005db458 = iVar3 + -1;
    DAT_005db45c = GetSystemMetrics(4);
    _DAT_005db460 = GetSystemMetrics(0x1e);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  }
  return 1;
}

