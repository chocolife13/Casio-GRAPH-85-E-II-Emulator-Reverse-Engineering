// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00566369
// entry: 00566369  size: 27


void __fastcall FUN_00566369(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    IsWindowEnabled(*(HWND *)(param_1 + 0x1c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0056637e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xa4))();
  return;
}

