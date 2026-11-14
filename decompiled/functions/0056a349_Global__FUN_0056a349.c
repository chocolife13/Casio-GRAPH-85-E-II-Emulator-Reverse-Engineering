// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a349
// entry: 0056a349  size: 54


int __fastcall FUN_0056a349(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = GetModuleHandleA("GDI32.DLL");
  pFVar1 = GetProcAddress(hModule,"GetLayout");
  if (pFVar1 == (FARPROC)0x0) {
    iVar2 = -1;
    SetLastError(0x78);
  }
  else {
    iVar2 = (*pFVar1)(*(undefined4 *)(param_1 + 4));
  }
  return iVar2;
}

