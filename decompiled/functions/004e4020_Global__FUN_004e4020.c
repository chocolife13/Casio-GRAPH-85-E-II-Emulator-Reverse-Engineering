// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e4020
// entry: 004e4020  size: 25


byte FUN_004e4020(byte *param_1)

{
  if ((*param_1 & 0xf0) != 0xf0) {
    return 0;
  }
  return param_1[1];
}

