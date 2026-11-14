// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005663ab
// entry: 005663ab  size: 33


void __fastcall FUN_005663ab(int param_1)

{
  HWND pHVar1;
  
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    pHVar1 = SetFocus(*(HWND *)(param_1 + 0x1c));
    FUN_00563433(pHVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005663c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xac))();
  return;
}

