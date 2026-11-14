// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005572ff
// entry: 005572ff  size: 47


void FUN_005572ff(uint param_1)

{
  if ((0x5cc13f < param_1) && (param_1 < 0x5cc3a1)) {
    FUN_005585f1(((int)(param_1 - 0x5cc140) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

