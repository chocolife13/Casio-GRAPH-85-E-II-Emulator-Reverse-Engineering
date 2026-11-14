// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004071b0
// entry: 004071b0  size: 62


undefined4 FUN_004071b0(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 < 0x10000) {
    iVar3 = 0;
    piVar1 = &DAT_005cd53c;
    do {
      if (*piVar1 == param_1) {
        uVar2 = FUN_00553c24(param_1,param_2);
        (&DAT_005cd53c)[iVar3] = uVar2;
        return uVar2;
      }
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + 1;
    } while ((int)piVar1 < 0x5cd73c);
  }
  return 0;
}

