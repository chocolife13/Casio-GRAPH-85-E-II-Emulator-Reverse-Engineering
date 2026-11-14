// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055d230
// entry: 0055d230  size: 46


undefined4 FUN_0055d230(void)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
  DVar1 = GetCurrentThreadId();
  iVar3 = 0;
  if (0 < DAT_005da9bc) {
    pDVar2 = &DAT_005da9c4;
    do {
      if (*pDVar2 == DVar1) {
        return 1;
      }
      pDVar2 = pDVar2 + 5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_005da9bc);
  }
  return 0;
}

