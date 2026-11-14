// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005572dc
// entry: 005572dc  size: 35


void FUN_005572dc(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_00558590(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

