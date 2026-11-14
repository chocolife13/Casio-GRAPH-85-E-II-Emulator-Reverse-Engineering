// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004100a0
// entry: 004100a0  size: 76


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004100a0(short param_1,undefined2 *param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  if (_DAT_005abc80 != 0) {
    psVar2 = &DAT_005abc80;
    do {
      if (*psVar2 == param_1) break;
      piVar1 = (int *)(psVar2 + 4);
      psVar2 = psVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (*piVar1 != 0);
  }
  *param_2 = (&DAT_005abc86)[iVar3 * 4];
  return &DAT_005abc3c + (ushort)(&DAT_005abc84)[iVar3 * 4];
}

