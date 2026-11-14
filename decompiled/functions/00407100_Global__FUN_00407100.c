// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407100
// entry: 00407100  size: 40


void FUN_00407100(void)

{
  int *piVar1;
  
  piVar1 = &DAT_005cd53c;
  do {
    if (*piVar1 != 0) {
      FUN_00553b50(*piVar1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x5cd73c);
  return;
}

