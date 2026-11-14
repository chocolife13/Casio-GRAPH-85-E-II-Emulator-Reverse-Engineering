// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f800
// entry: 0041f800  size: 24


void FUN_0041f800(byte *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      *param_1 = ~*param_1;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

