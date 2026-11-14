// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538410
// entry: 00538410  size: 109


void FUN_00538410(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = DAT_005d03d8;
  iVar3 = 0;
  piVar2 = &DAT_005d57e0;
  do {
    if (*piVar2 == -1) break;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x5d5860);
  if ((iVar3 != 0) && (iVar3 = iVar3 + -1, -1 < iVar3)) {
    piVar2 = &DAT_005d57e0 + iVar3;
    do {
      if (*piVar2 == -2) break;
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar3);
    if (0 < iVar3) {
      (&DAT_005d57e4)[iVar3] = param_1;
      *(undefined4 *)(&DAT_005d61fc + iVar1 * 4) = param_1;
      return;
    }
  }
  DAT_005d57e0 = param_1;
  *(undefined4 *)(&DAT_005d61fc + DAT_005d03d8 * 4) = param_1;
  return;
}

