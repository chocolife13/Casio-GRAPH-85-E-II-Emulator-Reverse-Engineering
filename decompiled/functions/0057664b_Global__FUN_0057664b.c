// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057664b
// entry: 0057664b  size: 78


void FUN_0057664b(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  
  if ((DAT_005d5314 != 0) && (DAT_005d5314 = DAT_005d5314 + -1, DAT_005d5310 == 0)) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_005d5160);
    piVar1 = &DAT_005d5118;
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_005d5178;
    do {
      if (*piVar1 != 0) {
        DeleteCriticalSection(lpCriticalSection);
        *piVar1 = *piVar1 + -1;
      }
      lpCriticalSection = lpCriticalSection + 1;
      piVar1 = piVar1 + 1;
    } while ((int)lpCriticalSection < 0x5d5310);
  }
  return;
}

