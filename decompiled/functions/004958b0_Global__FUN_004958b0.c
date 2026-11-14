// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004958b0
// entry: 004958b0  size: 183


void FUN_004958b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *local_8;
  undefined1 local_4 [4];
  
  cVar4 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,local_4,&local_8);
  if (cVar4 == '\0') {
    iVar5 = FUN_00495670(param_1);
    uVar2 = local_8[param_1 + 1];
    FUN_004acb90(4,param_1 * 4 + 4);
    iVar3 = local_8[1];
    piVar6 = local_8;
    while (iVar3 != 0) {
      piVar6[1] = iVar3 + -4;
      iVar3 = piVar6[2];
      piVar6 = piVar6 + 1;
    }
    piVar6 = local_8 + param_1 + 1;
    iVar3 = *piVar6;
    while (iVar3 != 0) {
      *piVar6 = iVar3 - iVar5;
      piVar1 = piVar6 + 1;
      piVar6 = piVar6 + 1;
      iVar3 = *piVar1;
    }
    FUN_004acb90(iVar5,(uVar2 & 0xffffff) - 4);
    *local_8 = *local_8 + -1;
    DAT_005d6dbc = DAT_005d6dbc + -1;
  }
  return;
}

