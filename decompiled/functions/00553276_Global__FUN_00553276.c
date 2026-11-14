// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00553276
// entry: 00553276  size: 44


void __thiscall FUN_00553276(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 **)(param_1 + 0xc) = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}

