// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005531bf
// entry: 005531bf  size: 40


void __fastcall FUN_005531bf(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FUN_00561e87();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}

