// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f870
// entry: 0041f870  size: 38


void FUN_0041f870(undefined2 *param_1,uint param_2)

{
  for (param_2 = param_2 & 0xffff; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    param_1 = param_1 + 1;
  }
  return;
}

