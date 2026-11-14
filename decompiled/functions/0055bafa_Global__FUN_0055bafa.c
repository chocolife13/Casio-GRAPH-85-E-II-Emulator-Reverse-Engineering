// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055bafa
// entry: 0055bafa  size: 41


byte FUN_0055bafa(uint param_1)

{
  if (DAT_005d96a0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_005d95a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

