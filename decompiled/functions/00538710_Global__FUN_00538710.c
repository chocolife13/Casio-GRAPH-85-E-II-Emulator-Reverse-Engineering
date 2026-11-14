// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538710
// entry: 00538710  size: 62


void FUN_00538710(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = -1;
  piVar1 = &DAT_005d57e0;
  do {
    if (*piVar1 == -1) break;
    if (*piVar1 == -2) {
      iVar3 = iVar2;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5d5860);
  if (iVar3 == -1) {
    DAT_005d57e4 = iVar3;
    return;
  }
  (&DAT_005d57e8)[iVar3] = 0xffffffff;
  return;
}

