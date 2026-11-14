// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00561fb6
// entry: 00561fb6  size: 39


void __thiscall FUN_00561fb6(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 8) <= param_2) {
    FUN_00561e9d(param_2 + 1,0xffffffff);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}

