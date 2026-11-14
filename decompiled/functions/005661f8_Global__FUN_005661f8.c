// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005661f8
// entry: 005661f8  size: 26


void __fastcall FUN_005661f8(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowLongA(*(HWND *)(param_1 + 0x1c),-0x14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0056620f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x74))();
  return;
}

