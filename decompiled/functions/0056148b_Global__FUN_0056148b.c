// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056148b
// entry: 0056148b  size: 103


HDC FUN_0056148b(HGLOBAL param_1,HGLOBAL param_2)

{
  ushort *puVar1;
  DEVMODEA *pdm;
  HDC pHVar2;
  
  if (param_1 != (HGLOBAL)0x0) {
    puVar1 = (ushort *)GlobalLock(param_1);
    if (param_2 == (HGLOBAL)0x0) {
      pdm = (DEVMODEA *)0x0;
    }
    else {
      pdm = (DEVMODEA *)GlobalLock(param_2);
    }
    if (puVar1 != (ushort *)0x0) {
      pHVar2 = CreateDCA((LPCSTR)((uint)*puVar1 + (int)puVar1),
                         (LPCSTR)((uint)puVar1[1] + (int)puVar1),
                         (LPCSTR)((uint)puVar1[2] + (int)puVar1),pdm);
      GlobalUnlock(param_1);
      if (param_2 == (HGLOBAL)0x0) {
        return pHVar2;
      }
      GlobalUnlock(param_2);
      return pHVar2;
    }
  }
  return (HDC)0x0;
}

