// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054e6e0
// entry: 0054e6e0  size: 99


int FUN_0054e6e0(short *param_1)

{
  short sVar1;
  
  if (param_1[9] < *param_1) {
    return (param_1[9] * 0x3fffffff + (int)param_1[1] + (int)*param_1) * 4 + 4;
  }
  sVar1 = param_1[0xb];
  if (sVar1 == 0) {
    return param_1[1] * 4 + 4;
  }
  if (sVar1 < param_1[1]) {
    return (sVar1 * 0x3fffffff + (int)param_1[1]) * 4;
  }
  return 0;
}

