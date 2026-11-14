// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055569d
// entry: 0055569d  size: 83


DWORD FUN_0055569d(uint param_1,LPDWORD param_2)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  LPCSTR lpRootPathName;
  
  if (param_1 == 0) {
    lpRootPathName = (LPCSTR)0x0;
  }
  else {
    if (0x1a < param_1) {
      return 0x57;
    }
    cVar1 = (char)param_1;
    lpRootPathName = (LPCSTR)&param_1;
    param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
  }
  BVar2 = GetDiskFreeSpaceA(lpRootPathName,param_2 + 2,param_2 + 3,param_2 + 1,param_2);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    return DVar3;
  }
  return 0;
}

