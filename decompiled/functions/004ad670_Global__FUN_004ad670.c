// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad670
// entry: 004ad670  size: 82


int * FUN_004ad670(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004ad610(*param_1);
  piVar1 = &DAT_005d5b80 + iVar2;
  iVar3 = FUN_004071b0((&DAT_005d5b80)[iVar2],param_2);
  if (iVar3 == 0) {
    FUN_004ad6d0(*piVar1);
    return (int *)0x0;
  }
  *piVar1 = iVar3;
  (&DAT_005d5880)[iVar2] = (short)param_2;
  return piVar1;
}

