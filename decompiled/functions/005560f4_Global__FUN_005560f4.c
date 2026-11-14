// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005560f4
// entry: 005560f4  size: 23


byte * FUN_005560f4(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 1;
  if (((&DAT_005da801)[*param_1] & 4) != 0) {
    pbVar1 = param_1 + 2;
  }
  return pbVar1;
}

