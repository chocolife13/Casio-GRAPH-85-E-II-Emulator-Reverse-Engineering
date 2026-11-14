// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad720
// entry: 004ad720  size: 33


void FUN_004ad720(void)

{
  int *piVar1;
  
  piVar1 = &DAT_005d5b80;
  do {
    if (*piVar1 != 0) {
      FUN_004ad6d0(piVar1);
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x5d5f80);
  return;
}

