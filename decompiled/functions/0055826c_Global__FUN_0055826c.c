// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055826c
// entry: 0055826c  size: 84


undefined4 FUN_0055826c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_00558567();
  DAT_005cc3d0 = TlsAlloc();
  if (DAT_005cc3d0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_00553d5c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_005cc3d0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_005582c0(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

