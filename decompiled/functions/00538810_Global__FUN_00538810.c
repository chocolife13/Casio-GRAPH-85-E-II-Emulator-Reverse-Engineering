// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538810
// entry: 00538810  size: 68


void FUN_00538810(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_005d03d8;
  iVar3 = 0;
  iVar4 = 0;
  piVar2 = &DAT_005d57e0;
  do {
    if (*piVar2 == -1) break;
    if (*piVar2 == -2) {
      iVar4 = iVar3;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x5d5860);
  if (iVar4 != 0) {
    (&DAT_005d57e0)[iVar4] = 0xffffffff;
    if (1 < iVar1) {
      DAT_005d03d8 = iVar1 + -1;
    }
  }
  return;
}

