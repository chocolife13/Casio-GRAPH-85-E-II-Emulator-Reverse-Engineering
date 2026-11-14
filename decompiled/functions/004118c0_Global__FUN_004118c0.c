// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004118c0
// entry: 004118c0  size: 579


/* WARNING: Type propagation algorithm not settling */

int FUN_004118c0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c [3];
  
  puVar5 = param_1;
  piVar4 = DAT_005d67e8;
  iVar13 = 0;
  iVar12 = 0;
  local_1c = 0;
  local_c[2] = 0;
  local_18 = 0;
  local_c[1] = 0;
  *param_1 = 1;
  do {
    iVar6 = FUN_00411b10(*puVar5,local_c,&local_10);
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = *puVar5;
    iVar12 = iVar12 + local_10;
    iVar13 = iVar13 + (local_c[0] & 0xffff);
    *puVar5 = uVar8 + 1;
  } while (uVar8 + 1 < 0x94);
  local_14 = iVar12;
  if (iVar13 == 0) {
    piVar7 = DAT_005d67e8 + 0x28c;
  }
  else {
    FUN_00411d40(&param_1);
    *puVar5 = 1;
    do {
      if ((short)param_1[3] != 0) break;
      uVar8 = *puVar5;
      param_1 = param_1 + -4;
      *puVar5 = uVar8 + 1;
    } while (uVar8 + 1 < 0x94);
    uVar8 = param_1[2];
    piVar7 = (int *)(*(int *)((uVar8 - 8) + (uint)(ushort)param_1[3] * 0x14) +
                     *(int *)((uVar8 - 0xc) + (uint)(ushort)param_1[3] * 0x14) + uVar8);
  }
  if ((int *)*piVar4 != piVar7) {
    return 0xd2;
  }
  param_1 = (uint *)(DAT_005d67e8 + 0x40);
  uVar8 = DAT_005d67e8[0x42];
  *puVar5 = 1;
  do {
    uVar2 = ((int *)param_1)[2];
    if (uVar2 < uVar8) {
      return 0xc3;
    }
    if ((uVar2 - uVar8 & 3) != 0) {
      return 0xc4;
    }
    uVar3 = *puVar5;
    param_1 = (uint *)((int *)param_1 + 4);
    *puVar5 = uVar3 + 1;
    piVar7 = DAT_005d67e8;
    uVar8 = uVar2;
  } while (uVar3 + 1 < 0x94);
  iVar12 = piVar4[3];
  iVar13 = iVar12 - piVar4[2];
  *puVar5 = 0;
  piVar10 = piVar7 + 0x3ffe;
  uVar8 = (uint)((int)piVar7 + (0x10000 - iVar12)) >> 3;
  if ((int *)piVar4[3] <= piVar10) {
    puVar9 = (uint *)(piVar7 + 0x3fff);
    do {
      if (puVar9[-1] != 0) {
        local_1c = local_1c + *puVar9;
      }
      if (*puVar9 == 0) {
        return 0xc9;
      }
      if ((*puVar9 & 3) != 0) {
        return 0xca;
      }
      *puVar5 = *puVar5 + 1;
      puVar1 = puVar9 + -3;
      puVar9 = puVar9 + -2;
    } while ((uint *)piVar4[3] <= puVar1);
  }
  if (local_1c != iVar13) {
    return 0xcb;
  }
  iVar12 = piVar4[3];
  *puVar5 = 1;
  if (uVar8 != 0) {
    do {
      iVar6 = *piVar10;
      if ((iVar6 != 0) && (iVar11 = iVar12 - piVar10[1], iVar12 = iVar6, iVar6 != iVar11)) {
        return 0xcc;
      }
      uVar2 = *puVar5;
      piVar10 = piVar10 + -2;
      *puVar5 = uVar2 + 1;
    } while (uVar2 + 1 <= uVar8);
  }
  iVar12 = FUN_00411870(local_c + 2,&local_18,local_c + 1);
  if ((iVar12 == 0) && (local_14 + 0xa30 + uVar8 * 8 + iVar13 != local_18)) {
    return 0xcd;
  }
  return iVar12;
}

