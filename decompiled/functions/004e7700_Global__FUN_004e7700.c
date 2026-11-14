// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e7700
// entry: 004e7700  size: 46


void FUN_004e7700(undefined4 *param_1,char *param_2)

{
  *(undefined4 *)param_2 = *param_1;
  *(undefined4 *)(param_2 + 4) = param_1[1];
  *(undefined4 *)(param_2 + 8) = param_1[2];
  *param_2 = ((*param_2 != 'j') - 1U & 0xb0) + 0x6a;
  return;
}

