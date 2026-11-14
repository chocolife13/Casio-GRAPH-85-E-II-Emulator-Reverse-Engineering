// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f96c0
// entry: 004f96c0  size: 47


void FUN_004f96c0(char *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,int param_5
                 )

{
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  *param_1 = (-(param_5 != 1) & 0x80U) + 0x30;
  *(undefined2 *)(param_1 + 4) = param_4;
  return;
}

