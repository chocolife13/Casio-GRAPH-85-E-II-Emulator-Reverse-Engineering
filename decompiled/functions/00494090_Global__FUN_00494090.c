// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00494090
// entry: 00494090  size: 42


int FUN_00494090(int *param_1,int param_2,int param_3)

{
  param_3 = *param_1 + param_3;
  *param_1 = param_3;
  if (param_2 < param_3) {
    *param_1 = 1;
    return *param_1;
  }
  if (param_3 == 0) {
    *param_1 = param_2;
  }
  return *param_1;
}

