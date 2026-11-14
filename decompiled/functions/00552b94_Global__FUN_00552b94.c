// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00552b94
// entry: 00552b94  size: 216


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00552b94(void)

{
  HMODULE hModule;
  bool bVar1;
  
  if (DAT_005d4c80 == 0) {
    hModule = GetModuleHandleA("USER32");
    if ((((hModule != (HMODULE)0x0) &&
         (_DAT_005d4c68 = GetProcAddress(hModule,"GetSystemMetrics"), _DAT_005d4c68 != (FARPROC)0x0)
         ) && (DAT_005d4c6c = GetProcAddress(hModule,"MonitorFromWindow"),
              DAT_005d4c6c != (FARPROC)0x0)) &&
       (((DAT_005d4c70 = GetProcAddress(hModule,"MonitorFromRect"), DAT_005d4c70 != (FARPROC)0x0 &&
         (_DAT_005d4c74 = GetProcAddress(hModule,"MonitorFromPoint"), _DAT_005d4c74 != (FARPROC)0x0)
         ) && ((_DAT_005d4c7c = GetProcAddress(hModule,"EnumDisplayMonitors"),
               _DAT_005d4c7c != (FARPROC)0x0 &&
               (DAT_005d4c78 = GetProcAddress(hModule,"GetMonitorInfoA"),
               DAT_005d4c78 != (FARPROC)0x0)))))) {
      DAT_005d4c80 = 1;
      return true;
    }
    _DAT_005d4c68 = (FARPROC)0x0;
    DAT_005d4c6c = (FARPROC)0x0;
    DAT_005d4c70 = (FARPROC)0x0;
    _DAT_005d4c74 = (FARPROC)0x0;
    DAT_005d4c78 = (FARPROC)0x0;
    _DAT_005d4c7c = (FARPROC)0x0;
    DAT_005d4c80 = 1;
    bVar1 = false;
  }
  else {
    bVar1 = DAT_005d4c78 != (FARPROC)0x0;
  }
  return bVar1;
}

