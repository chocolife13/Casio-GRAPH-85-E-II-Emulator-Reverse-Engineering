// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00555fd0
// entry: 00555fd0  size: 29


int FUN_00555fd0(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1 + 1;
  while (sVar1 != 0) {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}

