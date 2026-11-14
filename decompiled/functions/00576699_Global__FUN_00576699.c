// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00576699
// entry: 00576699  size: 112


void FUN_00576699(int param_1)

{
  int *piVar1;
  
  if (DAT_005d5314 == 0) {
    FUN_00576606();
  }
  if (DAT_005d5310 == 0) {
    piVar1 = &DAT_005d5118 + param_1;
    if ((&DAT_005d5118)[param_1] == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005d5160);
      if (*piVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_005d5178 + param_1 * 0x18));
        *piVar1 = *piVar1 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005d5160);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_005d5178 + param_1 * 0x18));
  }
  return;
}

