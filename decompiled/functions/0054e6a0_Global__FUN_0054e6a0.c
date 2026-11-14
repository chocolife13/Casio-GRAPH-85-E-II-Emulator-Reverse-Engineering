// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054e6a0
// entry: 0054e6a0  size: 56


int FUN_0054e6a0(short *param_1)

{
  if (param_1[8] < *param_1) {
    return (param_1[8] * 0x3fffffff + (int)*param_1) * 4 + 0x80;
  }
  return (-(uint)(param_1[10] != 0) & 0xffffff80) + 0x80;
}

