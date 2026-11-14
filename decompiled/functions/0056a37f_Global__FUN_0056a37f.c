// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a37f
// entry: 0056a37f  size: 70


int __thiscall FUN_0056a37f(int param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = GetModuleHandleA("GDI32.DLL");
  iVar2 = 0;
  pFVar1 = GetProcAddress(hModule,"SetLayout");
  if (pFVar1 == (FARPROC)0x0) {
    if (param_2 != 0) {
      iVar2 = -1;
      SetLastError(0x78);
    }
  }
  else {
    iVar2 = (*pFVar1)(*(undefined4 *)(param_1 + 4),param_2);
  }
  return iVar2;
}

