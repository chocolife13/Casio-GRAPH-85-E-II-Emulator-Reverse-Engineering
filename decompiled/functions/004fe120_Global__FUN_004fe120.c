// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fe120
// entry: 004fe120  size: 39


byte FUN_004fe120(byte *param_1)

{
  if ((*param_1 & 0x60) == 0x20) {
    FUN_004fd9e0(param_1);
    return 0;
  }
  return (byte)~*param_1 >> 7;
}

