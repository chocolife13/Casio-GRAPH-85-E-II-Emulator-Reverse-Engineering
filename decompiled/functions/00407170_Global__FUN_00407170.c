// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407170
// entry: 00407170  size: 51


void FUN_00407170(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_005cd53c;
  do {
    if (*piVar1 == param_1) {
      FUN_00553b50(param_1);
      (&DAT_005cd53c)[iVar2] = 0;
      return;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5cd73c);
  return;
}

