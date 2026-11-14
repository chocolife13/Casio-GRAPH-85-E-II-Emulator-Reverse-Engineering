// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527410
// entry: 00527410  size: 37


void FUN_00527410(undefined4 *param_1,undefined2 param_2,int param_3)

{
  *(undefined2 *)(param_1 + 2) = param_2;
  param_1[3] = 0;
  if (param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

