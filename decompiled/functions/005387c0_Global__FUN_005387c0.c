// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005387c0
// entry: 005387c0  size: 46


void FUN_005387c0(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_005d57e0;
  do {
    if (*piVar1 == -1) break;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5d5860);
  (&DAT_005d57e0)[iVar2] = 0xfffffffe;
  (&DAT_005d57e4)[iVar2] = 0xffffffff;
  return;
}

