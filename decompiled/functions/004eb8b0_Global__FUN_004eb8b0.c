// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004eb8b0
// entry: 004eb8b0  size: 2163


undefined4
FUN_004eb8b0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,int param_6
            ,int param_7)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int *local_94;
  int *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  int *local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_c [12];
  
  local_94 = *(int **)(param_2 + 8);
  local_80 = *(int **)(param_1 + 8);
  piVar2 = (int *)param_4[2];
  local_2c = (int *)param_3[2];
  local_48 = 0;
  local_90 = *(int **)(param_5 + 8);
  local_68 = *(int **)(param_6 + 8);
  piVar8 = *(int **)(param_7 + 8);
  local_28 = piVar8;
  FUN_004e5780(local_c);
  local_6c = (uint)*(ushort *)(param_1 + 4);
  uVar1 = *(ushort *)(param_1 + 2);
  uVar10 = (uint)uVar1;
  local_b0 = uVar10 * uVar10 * 2;
  if (0 < (int)local_b0) {
    iVar6 = 0;
    do {
      puVar3 = (undefined4 *)(iVar6 + *local_80);
      puVar7 = (undefined4 *)(iVar6 + *piVar2);
      iVar6 = iVar6 + 0xc;
      *puVar7 = *puVar3;
      puVar7[1] = puVar3[1];
      puVar7[2] = puVar3[2];
      local_b0 = local_b0 + -1;
    } while (local_b0 != 0);
  }
  if (uVar10 != 0) {
    iVar6 = 0;
    local_b0 = uVar10;
    do {
      puVar3 = (undefined4 *)(iVar6 + *local_94);
      puVar7 = (undefined4 *)(iVar6 + *local_90);
      *puVar7 = *puVar3;
      puVar7[1] = puVar3[1];
      puVar7[2] = puVar3[2];
      local_b0 = local_b0 - 1;
      iVar6 = iVar6 + 0xc;
    } while (local_b0 != 0);
  }
  iVar6 = FUN_004cd860(param_4,0,param_5,&local_48);
  if (iVar6 != 1) {
    *param_3 = *param_4;
    param_3[1] = param_4[1];
    param_3[2] = param_4[2];
    return 0;
  }
  iVar6 = FUN_0052f820();
  if (iVar6 != 0) {
    FUN_004e5630(1,param_3);
    return 0;
  }
  iVar6 = FUN_004cde80(param_4,param_5,&local_48);
  if (iVar6 == 1) {
    iVar6 = FUN_0052f820();
    if (iVar6 != 0) {
      FUN_004e5630(1,param_3);
      return 0;
    }
    puVar3 = (undefined4 *)*local_90;
    local_ac = *puVar3;
    local_a8 = puVar3[1];
    local_a4 = puVar3[2];
    puVar3 = (undefined4 *)*piVar2;
    local_60 = *puVar3;
    local_5c = puVar3[1];
    local_58 = puVar3[2];
    local_70 = local_6c * uVar10;
    iVar6 = *piVar2 + local_70 * 0xc;
    local_54 = *(undefined4 *)(*piVar2 + local_70 * 0xc);
    local_50 = *(undefined4 *)(iVar6 + 4);
    local_4c = *(undefined4 *)(iVar6 + 8);
    FUN_004e0ef0(&local_ac,&local_60,&local_ac,1);
    puVar3 = (undefined4 *)*piVar8;
    piVar9 = (int *)0x1;
    *puVar3 = local_ac;
    puVar3[1] = local_a8;
    local_74 = uVar10 * 0xc;
    puVar3[2] = local_a4;
    puVar3 = (undefined4 *)(local_74 + *piVar8);
    *puVar3 = local_a0;
    puVar3[1] = local_9c;
    puVar3[2] = local_98;
    if (1 < uVar1) {
      local_94 = (int *)0xc;
      local_b0 = (uVar10 + 1) * 0xc;
      local_8c = (local_6c + 1) * uVar10 * 0xc;
      local_7c = local_74;
      do {
        puVar3 = (undefined4 *)((int)local_94 + *local_90);
        local_24 = *puVar3;
        local_20 = puVar3[1];
        local_1c = puVar3[2];
        if (-1 < (int)piVar9 + -1) {
          local_64 = 0;
          local_88 = local_8c;
          local_78 = local_7c;
          local_84 = local_74;
          local_80 = piVar9;
          do {
            puVar3 = (undefined4 *)(local_78 + *piVar2);
            local_ac = *puVar3;
            local_a8 = puVar3[1];
            local_a4 = puVar3[2];
            puVar3 = (undefined4 *)(local_88 + *piVar2);
            local_a0 = *puVar3;
            local_9c = puVar3[1];
            local_98 = puVar3[2];
            puVar3 = (undefined4 *)(local_64 + *piVar8);
            local_60 = *puVar3;
            local_5c = puVar3[1];
            local_58 = puVar3[2];
            puVar3 = (undefined4 *)(local_84 + *piVar8);
            local_54 = *puVar3;
            local_50 = puVar3[1];
            local_4c = puVar3[2];
            FUN_004e0c40(&local_ac,&local_60,&local_ac,1);
            FUN_004e0b00(&local_24,&local_ac,&local_24,1);
            local_64 = local_64 + 0xc;
            local_78 = local_78 + 0xc;
            local_88 = local_88 + 0xc;
            local_84 = local_84 + 0xc;
            local_80 = (int *)((int)local_80 + -1);
          } while (local_80 != (int *)0x0);
        }
        iVar4 = (uVar10 + 1) * (int)piVar9;
        puVar3 = (undefined4 *)(*piVar2 + iVar4 * 0xc);
        local_ac = *puVar3;
        local_a8 = puVar3[1];
        local_a4 = puVar3[2];
        iVar4 = iVar4 + local_70;
        iVar6 = *piVar2 + iVar4 * 0xc;
        local_a0 = *(undefined4 *)(*piVar2 + iVar4 * 0xc);
        local_9c = *(undefined4 *)(iVar6 + 4);
        local_98 = *(undefined4 *)(iVar6 + 8);
        FUN_004e0ef0(&local_24,&local_ac,&local_ac,1);
        puVar3 = (undefined4 *)((int)local_94 + *piVar8);
        local_94 = local_94 + 3;
        *puVar3 = local_ac;
        puVar3[1] = local_a8;
        puVar3[2] = local_a4;
        puVar3 = (undefined4 *)(local_b0 + *piVar8);
        piVar9 = (int *)((int)piVar9 + 1);
        *puVar3 = local_a0;
        puVar3[1] = local_9c;
        puVar3[2] = local_98;
        local_7c = local_7c + local_74;
        local_8c = local_8c + local_74;
        local_b0 = local_b0 + 0xc;
      } while ((int)piVar9 < (int)uVar10);
    }
    puVar3 = (undefined4 *)(local_74 + -0xc + *piVar8);
    local_ac = *puVar3;
    local_a8 = puVar3[1];
    local_a4 = puVar3[2];
    local_70 = uVar10 * 0x18;
    iVar6 = local_70 + -0xc + *piVar8;
    local_a0 = *(undefined4 *)(local_70 + -0xc + *piVar8);
    local_9c = *(undefined4 *)(iVar6 + 4);
    local_98 = *(undefined4 *)(iVar6 + 8);
    FUN_004e3e70(&local_ac,&local_ac);
    puVar3 = (undefined4 *)(*local_68 + -0xc + local_74);
    *puVar3 = local_ac;
    puVar3[1] = local_a8;
    puVar3[2] = local_a4;
    puVar3 = (undefined4 *)(*local_68 + -0xc + local_70);
    *puVar3 = local_a0;
    puVar3[1] = local_9c;
    iVar6 = uVar10 - 2;
    puVar3[2] = local_98;
    piVar9 = local_68;
    if (-1 < iVar6) {
      local_7c = iVar6 * uVar10;
      local_70 = -uVar10;
      local_8c = uVar10 - 1;
      local_90 = (int *)((iVar6 + uVar10) * 0xc);
      local_88 = iVar6 * 0xc;
      local_84 = (iVar6 + local_6c) * uVar10;
      local_78 = local_8c;
      do {
        puVar3 = (undefined4 *)(local_88 + *piVar8);
        local_44 = *puVar3;
        local_40 = puVar3[1];
        local_3c = puVar3[2];
        puVar3 = (undefined4 *)((int)local_90 + *piVar8);
        local_38 = *puVar3;
        local_34 = puVar3[1];
        local_30 = puVar3[2];
        if (local_8c < (int)uVar10) {
          local_94 = local_90 + 3;
          iVar4 = (local_84 + local_8c) * 0xc;
          iVar6 = (local_8c + local_7c) * 0xc;
          local_80 = (int *)(uVar10 - local_8c);
          local_b0 = local_88;
          do {
            local_b0 = local_b0 + 0xc;
            puVar3 = (undefined4 *)(*piVar2 + iVar6);
            local_ac = *puVar3;
            local_a8 = puVar3[1];
            local_a4 = puVar3[2];
            puVar3 = (undefined4 *)(*piVar2 + iVar4);
            local_a0 = *puVar3;
            local_9c = puVar3[1];
            local_98 = puVar3[2];
            puVar3 = (undefined4 *)(*local_68 + local_b0);
            local_60 = *puVar3;
            local_5c = puVar3[1];
            local_58 = puVar3[2];
            puVar3 = (undefined4 *)(*local_68 + (int)local_94);
            local_54 = *puVar3;
            local_50 = puVar3[1];
            local_4c = puVar3[2];
            FUN_004e0c40(&local_ac,&local_60,&local_ac,1);
            FUN_004e0b00(&local_44,&local_ac,&local_44,1);
            iVar6 = iVar6 + 0xc;
            iVar4 = iVar4 + 0xc;
            local_94 = local_94 + 3;
            local_80 = (int *)((int)local_80 + -1);
          } while (local_80 != (int *)0x0);
          local_80 = (int *)0x0;
          piVar8 = local_28;
        }
        piVar9 = local_68;
        FUN_004e3e70(&local_44,&local_44);
        puVar3 = (undefined4 *)(*piVar9 + local_88);
        local_88 = local_88 + -0xc;
        *puVar3 = local_44;
        puVar3[1] = local_40;
        puVar3[2] = local_3c;
        puVar3 = (undefined4 *)(*piVar9 + (int)local_90);
        *puVar3 = local_38;
        puVar3[1] = local_34;
        puVar3[2] = local_30;
        local_8c = local_8c + -1;
        local_7c = local_7c + local_70;
        local_84 = local_84 + local_70;
        local_90 = local_90 + -3;
        local_78 = local_78 + -1;
      } while (local_78 != 0);
    }
    iVar6 = 0;
    if (0 < (int)local_6c) {
      iVar11 = 0;
      iVar4 = local_74;
      do {
        puVar3 = (undefined4 *)(*piVar9 + iVar11);
        local_ac = *puVar3;
        local_a8 = puVar3[1];
        local_a4 = puVar3[2];
        puVar3 = (undefined4 *)(iVar11 + *local_2c);
        *puVar3 = local_ac;
        puVar3[1] = local_a8;
        puVar3[2] = local_a4;
        puVar7 = (undefined4 *)(*piVar9 + iVar4);
        puVar3 = (undefined4 *)(iVar4 + *local_2c);
        *puVar3 = *puVar7;
        puVar3[1] = puVar7[1];
        puVar3[2] = puVar7[2];
        iVar5 = FUN_004e4020(&local_ac);
        if (iVar5 != 0) {
          *param_3 = local_ac;
          param_3[1] = local_a8;
          param_3[2] = local_a4;
          return 0;
        }
        iVar6 = iVar6 + 1;
        iVar11 = iVar11 + 0xc;
        iVar4 = iVar4 + 0xc;
      } while (iVar6 < (int)local_6c);
    }
    return 1;
  }
  *param_3 = *param_4;
  param_3[1] = param_4[1];
  param_3[2] = param_4[2];
  return 0;
}

