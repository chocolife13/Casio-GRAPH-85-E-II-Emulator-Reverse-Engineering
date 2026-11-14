// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055c9e0
// entry: 0055c9e0  size: 29


HANDLE FUN_0055c9e0(HWND param_1)

{
  HANDLE pvVar1;
  
  if (param_1 == (HWND)0x0) {
    return (HANDLE)0x0;
  }
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da96e);
  return pvVar1;
}

