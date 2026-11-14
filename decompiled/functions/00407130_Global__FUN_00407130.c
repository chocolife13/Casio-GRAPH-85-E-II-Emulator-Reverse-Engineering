// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407130
// entry: 00407130  size: 58


void * FUN_00407130(uint param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  if (param_1 < 0x10000) {
    iVar3 = 0;
    piVar1 = &DAT_005cd53c;
    do {
      if (*piVar1 == 0) {
        pvVar2 = _malloc(param_1);
        (&DAT_005cd53c)[iVar3] = pvVar2;
        return pvVar2;
      }
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + 1;
    } while ((int)piVar1 < 0x5cd73c);
  }
  return (void *)0x0;
}

