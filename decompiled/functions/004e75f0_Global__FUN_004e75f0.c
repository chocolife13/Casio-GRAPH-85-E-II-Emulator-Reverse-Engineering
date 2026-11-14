// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e75f0
// entry: 004e75f0  size: 39


void FUN_004e75f0(undefined4 *param_1,char *param_2)

{
  *(undefined4 *)param_2 = *param_1;
  *(undefined4 *)(param_2 + 4) = param_1[1];
  *(undefined4 *)(param_2 + 8) = param_1[2];
  if (*param_2 == 'j') {
    *param_2 = '\x1a';
  }
  return;
}

