// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c6300
// entry: 004c6300  size: 293


undefined4 FUN_004c6300(undefined4 *param_1,char *param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  uint local_4;
  
  puVar6 = param_1;
  iVar3 = FUN_004e4020(param_2);
  if (iVar3 != 0) {
    return 0;
  }
  piVar2 = *(int **)(param_2 + 8);
  uVar1 = *(ushort *)(param_2 + 2);
  local_4 = (uint)uVar1;
  iVar3 = FUN_004e4000(param_2);
  iVar4 = FUN_004e4000(param_1);
  if ((iVar3 == 0) && (iVar4 == 0)) {
    if (local_4 != 0) {
      iVar3 = 0;
      param_1 = (undefined4 *)local_4;
      do {
        puVar5 = (undefined4 *)(*piVar2 + iVar3);
        iVar3 = iVar3 + 0xc;
        *puVar5 = *puVar6;
        puVar5[1] = puVar6[1];
        puVar5[2] = puVar6[2];
        param_1 = (undefined4 *)((int)param_1 - 1);
      } while (param_1 != (undefined4 *)0x0);
    }
    *(ushort *)(param_2 + 2) = uVar1;
    *param_2 = ' ';
    return 1;
  }
  if (local_4 != 0) {
    local_8 = 0;
    iVar3 = local_4 * 0xc;
    do {
      puVar6 = (undefined4 *)(*piVar2 + local_8);
      *puVar6 = *param_1;
      puVar6[1] = param_1[1];
      puVar6[2] = param_1[2];
      puVar6 = (undefined4 *)(*piVar2 + iVar3);
      iVar3 = iVar3 + 0xc;
      *puVar6 = param_1[3];
      puVar6[1] = param_1[4];
      local_8 = local_8 + 0xc;
      puVar6[2] = param_1[5];
      local_4 = local_4 - 1;
    } while (local_4 != 0);
  }
  *(ushort *)(param_2 + 2) = uVar1;
  *param_2 = (-(iVar4 != 0) & 0x80U) + 0x20;
  return 1;
}

