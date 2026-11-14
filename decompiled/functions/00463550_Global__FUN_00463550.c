// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00463550
// entry: 00463550  size: 60


void FUN_00463550(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_1 = param_2;
  param_1[5] = param_5;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 7) = 2;
  param_1[6] = param_6;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}

