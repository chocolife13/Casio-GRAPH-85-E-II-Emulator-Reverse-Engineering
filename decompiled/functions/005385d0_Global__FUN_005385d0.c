// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005385d0
// entry: 005385d0  size: 194


int FUN_005385d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = &DAT_005d57e0;
  do {
    if (*piVar2 == -1) break;
    piVar2 = piVar2 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)piVar2 < 0x5d5860);
  if (iVar4 == 0) {
    return -1;
  }
  iVar1 = (&DAT_005d57dc)[iVar4];
  if (param_1 == 1) {
    (&DAT_005d57dc)[iVar4] = 0xffffffff;
    if (iVar1 == -2) {
      FUN_00538480();
      return -2;
    }
  }
  else {
    if (param_1 == 3) {
      iVar3 = iVar4 + -1;
      if (-1 < iVar3) {
        piVar2 = &DAT_005d57e0 + iVar3;
        do {
          if (*piVar2 == -2) break;
          iVar3 = iVar3 + -1;
          piVar2 = piVar2 + -1;
        } while (-1 < iVar3);
      }
      if (iVar4 + -2 == iVar3) {
        return -2;
      }
      (&DAT_005d57dc)[iVar4] = 0xffffffff;
      return iVar1;
    }
    if ((param_1 == 4) && (iVar4 = iVar4 + -1, -1 < iVar4)) {
      piVar2 = &DAT_005d57e0 + iVar4;
      while (*piVar2 != -2) {
        iVar4 = iVar4 + -1;
        piVar2 = piVar2 + -1;
        if (iVar4 < 0) {
          return iVar1;
        }
      }
      if (-1 < iVar4) {
        (&DAT_005d57e4)[iVar4] = 0xffffffff;
      }
    }
  }
  return iVar1;
}

