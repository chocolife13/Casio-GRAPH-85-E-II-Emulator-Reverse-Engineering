// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a3b0
// entry: 0042a3b0  size: 30


void FUN_0042a3b0(undefined1 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = param_1[param_2];
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

