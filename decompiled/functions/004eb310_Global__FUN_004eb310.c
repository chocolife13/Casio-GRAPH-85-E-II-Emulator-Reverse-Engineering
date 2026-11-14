// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004eb310
// entry: 004eb310  size: 1440


undefined4
FUN_004eb310(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,int param_6
            ,int param_7)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int *local_70;
  int *local_6c;
  int local_68;
  int *local_64;
  undefined4 local_60;
  uint local_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_c [12];
  
  piVar10 = *(int **)(param_2 + 8);
  local_58 = (int *)param_3[2];
  piVar2 = *(int **)(param_5 + 8);
  piVar12 = (int *)param_4[2];
  local_70 = *(int **)(param_6 + 8);
  local_6c = *(int **)(param_7 + 8);
  piVar3 = *(int **)(param_1 + 8);
  local_60 = 0;
  local_64 = piVar12;
  FUN_004e5780(local_c);
  local_5c = (uint)*(ushort *)(param_1 + 4);
  uVar1 = *(ushort *)(param_1 + 2);
  uVar14 = (uint)uVar1;
  local_98 = uVar14 * uVar14;
  if (0 < local_98) {
    iVar5 = 0;
    do {
      puVar4 = (undefined4 *)(iVar5 + *piVar3);
      puVar7 = (undefined4 *)(*piVar12 + iVar5);
      iVar5 = iVar5 + 0xc;
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar7[2] = puVar4[2];
      local_98 = local_98 + -1;
    } while (local_98 != 0);
  }
  if (uVar14 != 0) {
    iVar5 = 0;
    uVar6 = uVar14;
    do {
      puVar4 = (undefined4 *)(iVar5 + *piVar10);
      puVar7 = (undefined4 *)(*piVar2 + iVar5);
      iVar5 = iVar5 + 0xc;
      uVar6 = uVar6 - 1;
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar7[2] = puVar4[2];
    } while (uVar6 != 0);
  }
  iVar5 = FUN_004cd860(param_4,0,param_5,&local_60);
  if (iVar5 != 1) {
    *param_3 = *param_4;
    param_3[1] = param_4[1];
    param_3[2] = param_4[2];
    return 0;
  }
  iVar5 = FUN_0052f820();
  if (iVar5 == 0) {
    iVar5 = FUN_004cde80(param_4,param_5,&local_60);
    if (iVar5 != 1) {
      *param_3 = *param_4;
      param_3[1] = param_4[1];
      param_3[2] = param_4[2];
      return 0;
    }
    iVar5 = FUN_0052f820();
    if (iVar5 == 0) {
      puVar4 = (undefined4 *)*piVar2;
      local_88 = *puVar4;
      local_84 = puVar4[1];
      local_80 = puVar4[2];
      puVar4 = (undefined4 *)*piVar12;
      local_54 = *puVar4;
      local_50 = puVar4[1];
      local_4c = puVar4[2];
      FUN_004e0ef0(&local_88,&local_54,&local_88,0);
      iVar5 = 1;
      puVar4 = (undefined4 *)*local_6c;
      *puVar4 = local_88;
      puVar4[1] = local_84;
      puVar4[2] = local_80;
      piVar10 = local_6c;
      if (1 < uVar1) {
        local_98 = 0xc;
        local_90 = uVar14 * 0xc;
        local_68 = local_90;
        do {
          puVar4 = (undefined4 *)(*piVar2 + local_98);
          local_24 = *puVar4;
          local_20 = puVar4[1];
          local_1c = puVar4[2];
          if (-1 < iVar5 + -1) {
            iVar8 = 0;
            iVar11 = local_90;
            local_94 = iVar5;
            do {
              puVar4 = (undefined4 *)(*local_64 + iVar11);
              local_88 = *puVar4;
              local_84 = puVar4[1];
              local_80 = puVar4[2];
              puVar4 = (undefined4 *)(iVar8 + *local_6c);
              local_54 = *puVar4;
              local_50 = puVar4[1];
              local_4c = puVar4[2];
              FUN_004e0c40(&local_88,&local_54,&local_88,0);
              FUN_004e0b00(&local_24,&local_88,&local_24,0);
              iVar8 = iVar8 + 0xc;
              iVar11 = iVar11 + 0xc;
              local_94 = local_94 + -1;
              piVar10 = local_6c;
              piVar12 = local_64;
            } while (local_94 != 0);
          }
          iVar8 = (uVar14 + 1) * iVar5;
          iVar11 = *piVar12 + iVar8 * 0xc;
          local_88 = *(undefined4 *)(*piVar12 + iVar8 * 0xc);
          local_84 = *(undefined4 *)(iVar11 + 4);
          local_80 = *(undefined4 *)(iVar11 + 8);
          FUN_004e0ef0(&local_24,&local_88,&local_88,0);
          puVar4 = (undefined4 *)(local_98 + *piVar10);
          iVar5 = iVar5 + 1;
          local_98 = local_98 + 0xc;
          *puVar4 = local_88;
          puVar4[1] = local_84;
          puVar4[2] = local_80;
          local_90 = local_90 + local_68;
        } while (iVar5 < (int)uVar14);
      }
      iVar8 = uVar14 * 0xc;
      iVar5 = iVar8 + -0xc + *piVar10;
      local_88 = *(undefined4 *)(iVar8 + -0xc + *piVar10);
      local_84 = *(undefined4 *)(iVar5 + 4);
      local_80 = *(undefined4 *)(iVar5 + 8);
      FUN_004e7910(&local_88,&local_88);
      iVar11 = *local_70 + -0xc + iVar8;
      *(undefined4 *)(*local_70 + -0xc + iVar8) = local_88;
      *(undefined4 *)(iVar11 + 4) = local_84;
      iVar5 = uVar14 - 2;
      *(undefined4 *)(iVar11 + 8) = local_80;
      if (-1 < iVar5) {
        iVar8 = iVar5 * uVar14;
        iVar5 = iVar5 * 0xc;
        iVar11 = uVar14 - 1;
        local_68 = -uVar14;
        local_94 = iVar11;
        do {
          puVar4 = (undefined4 *)(iVar5 + *piVar10);
          local_3c = *puVar4;
          local_38 = puVar4[1];
          local_34 = puVar4[2];
          if (iVar11 < (int)uVar14) {
            iVar15 = (iVar11 + iVar8) * 0xc;
            iVar9 = uVar14 - iVar11;
            iVar13 = iVar5;
            do {
              iVar13 = iVar13 + 0xc;
              puVar4 = (undefined4 *)(iVar15 + *local_64);
              local_88 = *puVar4;
              local_84 = puVar4[1];
              local_80 = puVar4[2];
              puVar4 = (undefined4 *)(*local_70 + iVar13);
              local_54 = *puVar4;
              local_50 = puVar4[1];
              local_4c = puVar4[2];
              FUN_004e0c40(&local_88,&local_54,&local_88,0);
              FUN_004e0b00(&local_3c,&local_88,&local_3c,0);
              iVar15 = iVar15 + 0xc;
              iVar9 = iVar9 + -1;
              piVar10 = local_6c;
            } while (iVar9 != 0);
          }
          FUN_004e7910(&local_3c,&local_3c);
          puVar4 = (undefined4 *)(*local_70 + iVar5);
          iVar5 = iVar5 + -0xc;
          *puVar4 = local_3c;
          iVar11 = iVar11 + -1;
          puVar4[1] = local_38;
          puVar4[2] = local_34;
          iVar8 = iVar8 + local_68;
          local_94 = local_94 + -1;
        } while (local_94 != 0);
      }
      uVar14 = local_5c;
      piVar10 = local_70;
      iVar5 = 0;
      if (0 < (int)local_5c) {
        iVar11 = 0;
        do {
          puVar4 = (undefined4 *)(*piVar10 + iVar11);
          local_88 = *puVar4;
          local_84 = puVar4[1];
          local_80 = puVar4[2];
          puVar4 = (undefined4 *)(iVar11 + *local_58);
          *puVar4 = local_88;
          puVar4[1] = local_84;
          puVar4[2] = local_80;
          iVar8 = FUN_004e4020(&local_88);
          if (iVar8 != 0) {
            *param_3 = local_88;
            param_3[1] = local_84;
            param_3[2] = local_80;
            return 0;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0xc;
        } while (iVar5 < (int)uVar14);
      }
      return 1;
    }
  }
  FUN_004e5630(1,param_3);
  return 0;
}

