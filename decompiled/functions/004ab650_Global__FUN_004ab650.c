// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab650
// entry: 004ab650  size: 32


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ab650(uint *param_1)

{
  _DAT_005d6cd0 = *param_1;
  DAT_005d6cd4 = param_1[1];
  DAT_005d6cd8 = (char)param_1[2];
  return *param_1 & 0xffffff00;
}

