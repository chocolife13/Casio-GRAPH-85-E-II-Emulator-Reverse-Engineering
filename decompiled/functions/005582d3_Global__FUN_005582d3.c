// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005582d3
// entry: 005582d3  size: 103


DWORD * FUN_005582d3(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = (DWORD *)TlsGetValue(DAT_005cc3d0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_00553d5c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_005cc3d0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_005582c0(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_0055832e;
      }
    }
    __amsg_exit(0x10);
  }
LAB_0055832e:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

