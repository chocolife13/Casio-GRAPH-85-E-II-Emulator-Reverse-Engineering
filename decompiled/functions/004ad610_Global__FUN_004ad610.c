// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad610
// entry: 004ad610  size: 31


int FUN_004ad610(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_005d5b80;
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x5d5f80);
  return -1;
}

