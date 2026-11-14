// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005572ad
// entry: 005572ad  size: 47


void FUN_005572ad(uint param_1)

{
  if ((0x5cc13f < param_1) && (param_1 < 0x5cc3a1)) {
    FUN_00558590(((int)(param_1 - 0x5cc140) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

