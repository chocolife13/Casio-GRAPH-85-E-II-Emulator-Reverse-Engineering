// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005382e0
// entry: 005382e0  size: 96


void FUN_005382e0(void)

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
  if (iVar2 != 0) {
    if (DAT_005d03d8 != 0) {
      (&DAT_005d57e4)[iVar3] = *(undefined4 *)(&DAT_005d61fc + DAT_005d03d8 * 4);
      (&DAT_005d57e8)[iVar3] = 0xffffffff;
      return;
    }
    (&DAT_005d57e4)[iVar3] = 0xffffffff;
  }
  return;
}

