// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c9820
// entry: 004c9820  size: 3350


undefined4 FUN_004c9820(uint param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  uint local_98;
  ushort *local_94;
  ushort *local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  ushort *local_68;
  undefined4 local_64;
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
  int local_34;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  uVar9 = param_1 & 0xffff;
  local_34 = uVar9 * 2;
  local_94 = (ushort *)0x1;
  local_84 = 0;
  piVar5 = (int *)FUN_004ad630((param_1 & 0x3fff) << 2);
  if (piVar5 == (int *)0x0) {
    FUN_004e5630(4,param_3);
    return 4;
  }
  piVar2 = *(int **)(param_3 + 8);
  local_98 = uVar9;
  if (param_2 == 0) {
    iVar6 = 1;
    puVar3 = param_4;
    if (uVar9 != 0) {
      do {
        puVar3[1] = (short)iVar6;
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 <= (int)uVar9);
    }
LAB_004c98ca:
    while (6 < (int)(local_98 - (int)local_94)) {
      iVar7 = (int)(local_98 + (int)local_94) >> 1;
      iVar6 = (int)local_94 + 1;
      if (param_4[iVar7] != param_4[(int)local_94 + 1]) {
        uVar4 = param_4[(int)local_94 + 1] ^ param_4[iVar7];
        param_4[iVar7] = uVar4;
        param_4[iVar6] = param_4[iVar6] ^ uVar4;
        param_4[iVar7] = param_4[iVar7] ^ param_4[iVar6];
      }
      iVar7 = *piVar2 + -0xc + (uint)(ushort)param_4[iVar6] * 0xc;
      local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[iVar6] * 0xc);
      local_7c = *(undefined4 *)(iVar7 + 4);
      local_78 = *(undefined4 *)(iVar7 + 8);
      iVar7 = *piVar2 + -0xc + (uint)(ushort)param_4[local_98] * 0xc;
      local_64 = *(undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[local_98] * 0xc);
      local_60 = *(undefined4 *)(iVar7 + 4);
      local_5c = *(undefined4 *)(iVar7 + 8);
      iVar7 = FUN_004e7290(&local_80,&local_64);
      if (iVar7 == 1) {
        if (param_4[iVar6] != param_4[local_98]) {
          uVar4 = param_4[local_98] ^ param_4[iVar6];
          param_4[iVar6] = uVar4;
          param_4[local_98] = param_4[local_98] ^ uVar4;
          param_4[iVar6] = param_4[iVar6] ^ param_4[local_98];
        }
      }
      else if (iVar7 == -1) goto LAB_004ca50a;
      iVar7 = *piVar2 + -0xc + (uint)(ushort)param_4[(int)local_94] * 0xc;
      local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[(int)local_94] * 0xc);
      local_7c = *(undefined4 *)(iVar7 + 4);
      local_78 = *(undefined4 *)(iVar7 + 8);
      iVar7 = *piVar2 + -0xc + (uint)(ushort)param_4[local_98] * 0xc;
      local_64 = *(undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[local_98] * 0xc);
      local_60 = *(undefined4 *)(iVar7 + 4);
      local_5c = *(undefined4 *)(iVar7 + 8);
      iVar7 = FUN_004e7290(&local_80,&local_64);
      if (iVar7 == 1) {
        if (param_4[(int)local_94] != param_4[local_98]) {
          uVar4 = param_4[(int)local_94] ^ param_4[local_98];
          param_4[(int)local_94] = uVar4;
          param_4[local_98] = param_4[local_98] ^ uVar4;
          param_4[(int)local_94] = param_4[(int)local_94] ^ param_4[local_98];
        }
      }
      else if (iVar7 == -1) goto LAB_004ca4de;
      iVar7 = *piVar2 + -0xc + (uint)(ushort)param_4[iVar6] * 0xc;
      local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[iVar6] * 0xc);
      local_7c = *(undefined4 *)(iVar7 + 4);
      local_78 = *(undefined4 *)(iVar7 + 8);
      iVar7 = *piVar2 + -0xc + (uint)(ushort)param_4[(int)local_94] * 0xc;
      local_64 = *(undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[(int)local_94] * 0xc);
      local_60 = *(undefined4 *)(iVar7 + 4);
      local_5c = *(undefined4 *)(iVar7 + 8);
      iVar7 = FUN_004e7290(&local_80,&local_64);
      if (iVar7 == 1) {
        if (param_4[iVar6] != param_4[(int)local_94]) {
          uVar4 = param_4[(int)local_94] ^ param_4[iVar6];
          param_4[iVar6] = uVar4;
          param_4[(int)local_94] = param_4[(int)local_94] ^ uVar4;
          param_4[iVar6] = param_4[iVar6] ^ param_4[(int)local_94];
        }
      }
      else if (iVar7 == -1) goto LAB_004ca4f4;
      local_68 = (ushort *)(uint)(ushort)param_4[(int)local_94];
      iVar7 = *piVar2 + -0xc + (int)local_68 * 0xc;
      local_4c = *(undefined4 *)(*piVar2 + -0xc + (int)local_68 * 0xc);
      local_48 = *(undefined4 *)(iVar7 + 4);
      local_44 = *(undefined4 *)(iVar7 + 8);
      uVar9 = local_98;
      while( true ) {
        local_8c = param_4 + iVar6;
        do {
          local_8c = local_8c + 1;
          iVar6 = iVar6 + 1;
          iVar7 = *piVar2 + -0xc + (uint)*local_8c * 0xc;
          local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)*local_8c * 0xc);
          local_7c = *(undefined4 *)(iVar7 + 4);
          local_78 = *(undefined4 *)(iVar7 + 8);
          iVar7 = FUN_004e7250(&local_80,&local_4c);
        } while (iVar7 == 1);
        if (iVar7 == -1) goto LAB_004ca50a;
        local_8c = param_4 + uVar9;
        do {
          uVar10 = uVar9;
          local_8c = local_8c + -1;
          uVar9 = uVar10 - 1;
          iVar7 = *piVar2 + -0xc + (uint)*local_8c * 0xc;
          local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)*local_8c * 0xc);
          local_7c = *(undefined4 *)(iVar7 + 4);
          local_78 = *(undefined4 *)(iVar7 + 8);
          iVar7 = FUN_004e7290(&local_80,&local_4c);
        } while (iVar7 == 1);
        if (iVar7 == -1) goto LAB_004ca4de;
        if ((int)uVar9 < iVar6) break;
        if (param_4[iVar6] != param_4[uVar9]) {
          uVar4 = param_4[iVar6] ^ param_4[uVar9];
          param_4[iVar6] = uVar4;
          param_4[uVar9] = param_4[uVar9] ^ uVar4;
          param_4[iVar6] = param_4[iVar6] ^ param_4[uVar9];
        }
      }
      param_4[(int)local_94] = param_4[uVar9];
      param_4[uVar9] = local_68._0_2_;
      local_84 = local_84 + 2;
      if (local_34 < local_84) goto LAB_004ca4f4;
      if ((int)((local_98 - iVar6) + 1) < (int)(uVar9 - (int)local_94)) {
        *(uint *)(*piVar5 + local_84 * 4) = uVar10 - 2;
        *(ushort **)(*piVar5 + -4 + local_84 * 4) = local_94;
        local_94 = (ushort *)iVar6;
      }
      else {
        *(uint *)(*piVar5 + local_84 * 4) = local_98;
        *(int *)(*piVar5 + -4 + local_84 * 4) = iVar6;
        local_98 = uVar10 - 2;
      }
    }
    iVar6 = (int)local_94 + 1;
    if (iVar6 <= (int)local_98) {
      local_68 = param_4 + iVar6;
      do {
        uVar4 = *local_68;
        puVar1 = (undefined4 *)(*piVar2 + -0xc + (uint)uVar4 * 0xc);
        local_4c = *puVar1;
        local_48 = puVar1[1];
        local_88 = iVar6 + -1;
        local_44 = puVar1[2];
        puVar11 = local_68;
        if (1 < iVar6) {
          do {
            puVar8 = puVar11 + -1;
            iVar7 = *piVar2 + -0xc + (uint)*puVar8 * 0xc;
            local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)*puVar8 * 0xc);
            local_7c = *(undefined4 *)(iVar7 + 4);
            local_78 = *(undefined4 *)(iVar7 + 8);
            iVar7 = FUN_004e72d0(&local_80,&local_4c);
            if (iVar7 == 1) break;
            if (iVar7 == -1) goto LAB_004ca4f4;
            *puVar11 = *puVar8;
            local_88 = local_88 + -1;
            puVar11 = puVar8;
          } while (0 < local_88);
        }
        iVar6 = iVar6 + 1;
        local_68 = local_68 + 1;
        param_4[local_88 + 1] = uVar4;
      } while (iVar6 <= (int)local_98);
    }
    if (local_84 != 0) {
      local_84 = local_84 + -2;
      local_98 = *(uint *)(*piVar5 + 8 + local_84 * 4);
      local_94 = (ushort *)*(int *)(*piVar5 + 4 + local_84 * 4);
      goto LAB_004c98ca;
    }
  }
  else {
    iVar6 = 1;
    puVar3 = param_4;
    if (uVar9 != 0) {
      do {
        puVar3[1] = (short)iVar6;
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 <= (int)uVar9);
    }
LAB_004c9d66:
    while (6 < (int)(local_98 - (int)local_94)) {
      iVar6 = (int)(local_98 + (int)local_94) >> 1;
      local_88 = (int)local_94 + 1;
      if (param_4[iVar6] != param_4[(int)local_94 + 1]) {
        uVar4 = param_4[(int)local_94 + 1] ^ param_4[iVar6];
        param_4[iVar6] = uVar4;
        param_4[local_88] = param_4[local_88] ^ uVar4;
        param_4[iVar6] = param_4[iVar6] ^ param_4[local_88];
      }
      iVar6 = *piVar2 + -0xc + (uint)(ushort)param_4[local_88] * 0xc;
      local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[local_88] * 0xc);
      local_7c = *(undefined4 *)(iVar6 + 4);
      local_78 = *(undefined4 *)(iVar6 + 8);
      iVar6 = *piVar2 + -0xc + ((ushort)param_4[local_88] + uVar9) * 0xc;
      local_74 = *(undefined4 *)(*piVar2 + -0xc + ((ushort)param_4[local_88] + uVar9) * 0xc);
      local_70 = *(undefined4 *)(iVar6 + 4);
      local_6c = *(undefined4 *)(iVar6 + 8);
      puVar1 = (undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[local_98] * 0xc);
      local_64 = *puVar1;
      local_60 = puVar1[1];
      local_5c = puVar1[2];
      iVar6 = *piVar2 + -0xc + ((ushort)param_4[local_98] + uVar9) * 0xc;
      local_58 = *(undefined4 *)(*piVar2 + -0xc + ((ushort)param_4[local_98] + uVar9) * 0xc);
      local_54 = *(undefined4 *)(iVar6 + 4);
      local_50 = *(undefined4 *)(iVar6 + 8);
      FUN_004e23b0(&local_80,local_18,1);
      FUN_004e23b0(&local_64,local_30,1);
      iVar6 = FUN_004e7290(local_18,local_30);
      if (iVar6 == 1) {
        if (param_4[local_88] != param_4[local_98]) {
          uVar4 = param_4[local_98] ^ param_4[local_88];
          param_4[local_88] = uVar4;
          param_4[local_98] = param_4[local_98] ^ uVar4;
          param_4[local_88] = param_4[local_88] ^ param_4[local_98];
        }
      }
      else if (iVar6 == -1) goto LAB_004ca4de;
      puVar1 = (undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[(int)local_94] * 0xc);
      local_80 = *puVar1;
      local_7c = puVar1[1];
      local_78 = puVar1[2];
      iVar6 = *piVar2 + -0xc + ((ushort)param_4[(int)local_94] + uVar9) * 0xc;
      local_74 = *(undefined4 *)(*piVar2 + -0xc + ((ushort)param_4[(int)local_94] + uVar9) * 0xc);
      local_70 = *(undefined4 *)(iVar6 + 4);
      local_6c = *(undefined4 *)(iVar6 + 8);
      puVar1 = (undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[local_98] * 0xc);
      local_64 = *puVar1;
      local_60 = puVar1[1];
      local_5c = puVar1[2];
      iVar6 = *piVar2 + -0xc + ((ushort)param_4[local_98] + uVar9) * 0xc;
      local_58 = *(undefined4 *)(*piVar2 + -0xc + ((ushort)param_4[local_98] + uVar9) * 0xc);
      local_54 = *(undefined4 *)(iVar6 + 4);
      local_50 = *(undefined4 *)(iVar6 + 8);
      FUN_004e23b0(&local_80,local_18,1);
      FUN_004e23b0(&local_64,local_30,1);
      iVar6 = FUN_004e7290(local_18,local_30);
      if (iVar6 == 1) {
        if (param_4[(int)local_94] != param_4[local_98]) {
          uVar4 = param_4[(int)local_94] ^ param_4[local_98];
          param_4[(int)local_94] = uVar4;
          param_4[local_98] = param_4[local_98] ^ uVar4;
          param_4[(int)local_94] = param_4[(int)local_94] ^ param_4[local_98];
        }
      }
      else if (iVar6 == -1) goto LAB_004ca4f4;
      iVar6 = *piVar2 + -0xc + (uint)(ushort)param_4[local_88] * 0xc;
      local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[local_88] * 0xc);
      local_7c = *(undefined4 *)(iVar6 + 4);
      local_78 = *(undefined4 *)(iVar6 + 8);
      iVar6 = *piVar2 + -0xc + ((ushort)param_4[local_88] + uVar9) * 0xc;
      local_74 = *(undefined4 *)(*piVar2 + -0xc + ((ushort)param_4[local_88] + uVar9) * 0xc);
      local_70 = *(undefined4 *)(iVar6 + 4);
      local_6c = *(undefined4 *)(iVar6 + 8);
      puVar1 = (undefined4 *)(*piVar2 + -0xc + (uint)(ushort)param_4[(int)local_94] * 0xc);
      local_64 = *puVar1;
      local_60 = puVar1[1];
      local_5c = puVar1[2];
      iVar6 = *piVar2 + -0xc + ((ushort)param_4[(int)local_94] + uVar9) * 0xc;
      local_58 = *(undefined4 *)(*piVar2 + -0xc + ((ushort)param_4[(int)local_94] + uVar9) * 0xc);
      local_54 = *(undefined4 *)(iVar6 + 4);
      local_50 = *(undefined4 *)(iVar6 + 8);
      FUN_004e23b0(&local_80,local_18,1);
      FUN_004e23b0(&local_64,local_30,1);
      iVar6 = FUN_004e7290(local_18,local_30);
      if (iVar6 == 1) {
        if (param_4[local_88] != param_4[(int)local_94]) {
          uVar4 = param_4[(int)local_94] ^ param_4[local_88];
          param_4[local_88] = uVar4;
          param_4[(int)local_94] = param_4[(int)local_94] ^ uVar4;
          param_4[local_88] = param_4[local_88] ^ param_4[(int)local_94];
        }
      }
      else if (iVar6 == -1) goto LAB_004ca50a;
      local_8c = (ushort *)local_98;
      local_68 = (ushort *)(uint)(ushort)param_4[(int)local_94];
      puVar1 = (undefined4 *)(*piVar2 + -0xc + (int)local_68 * 0xc);
      local_4c = *puVar1;
      local_48 = puVar1[1];
      local_44 = puVar1[2];
      iVar6 = *piVar2 + -0xc + ((int)local_68 + uVar9) * 0xc;
      local_40 = *(undefined4 *)(*piVar2 + -0xc + ((int)local_68 + uVar9) * 0xc);
      local_3c = *(undefined4 *)(iVar6 + 4);
      local_38 = *(undefined4 *)(iVar6 + 8);
      FUN_004e23b0(&local_4c,local_18,1);
      while( true ) {
        puVar11 = param_4 + local_88;
        do {
          puVar11 = puVar11 + 1;
          local_88 = local_88 + 1;
          iVar6 = *piVar2 + -0xc + (uint)*puVar11 * 0xc;
          local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)*puVar11 * 0xc);
          local_7c = *(undefined4 *)(iVar6 + 4);
          local_78 = *(undefined4 *)(iVar6 + 8);
          iVar6 = *piVar2 + -0xc + (*puVar11 + uVar9) * 0xc;
          local_74 = *(undefined4 *)(*piVar2 + -0xc + (*puVar11 + uVar9) * 0xc);
          local_70 = *(undefined4 *)(iVar6 + 4);
          local_6c = *(undefined4 *)(iVar6 + 8);
          FUN_004e23b0(&local_80,local_30,1);
          iVar6 = FUN_004e7250(local_30,local_18);
        } while (iVar6 == 1);
        if (iVar6 == -1) goto LAB_004ca4de;
        puVar11 = param_4 + (int)local_8c;
        puVar8 = local_8c;
        do {
          local_8c = puVar8;
          puVar8 = (ushort *)((int)local_8c - 1);
          puVar11 = puVar11 + -1;
          iVar6 = *piVar2 + -0xc + (uint)*puVar11 * 0xc;
          local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)*puVar11 * 0xc);
          local_7c = *(undefined4 *)(iVar6 + 4);
          local_78 = *(undefined4 *)(iVar6 + 8);
          iVar6 = *piVar2 + -0xc + (*puVar11 + uVar9) * 0xc;
          local_74 = *(undefined4 *)(*piVar2 + -0xc + (*puVar11 + uVar9) * 0xc);
          local_70 = *(undefined4 *)(iVar6 + 4);
          local_6c = *(undefined4 *)(iVar6 + 8);
          FUN_004e23b0(&local_80,local_30,1);
          iVar6 = FUN_004e7290(local_30,local_18);
        } while (iVar6 == 1);
        if (iVar6 == -1) goto LAB_004ca4f4;
        if ((int)puVar8 < local_88) break;
        local_8c = puVar8;
        if (param_4[local_88] != param_4[(int)puVar8]) {
          uVar4 = param_4[local_88] ^ param_4[(int)puVar8];
          param_4[local_88] = uVar4;
          param_4[(int)puVar8] = param_4[(int)puVar8] ^ uVar4;
          param_4[local_88] = param_4[local_88] ^ param_4[(int)puVar8];
        }
      }
      param_4[(int)local_94] = param_4[(int)puVar8];
      param_4[(int)puVar8] = local_68._0_2_;
      local_84 = local_84 + 2;
      if (local_34 < local_84) goto LAB_004ca50a;
      if ((int)((local_98 - local_88) + 1) < (int)puVar8 - (int)local_94) {
        *(uint *)(*piVar5 + local_84 * 4) = (int)local_8c - 2;
        *(ushort **)(*piVar5 + -4 + local_84 * 4) = local_94;
        local_94 = (ushort *)local_88;
      }
      else {
        *(uint *)(*piVar5 + local_84 * 4) = local_98;
        *(int *)(*piVar5 + -4 + local_84 * 4) = local_88;
        local_98 = (int)local_8c - 2;
      }
    }
    iVar6 = (int)local_94 + 1;
    if (iVar6 <= (int)local_98) {
      local_94 = param_4 + iVar6;
      do {
        uVar4 = *local_94;
        local_68 = (ushort *)(uint)uVar4;
        puVar1 = (undefined4 *)(*piVar2 + -0xc + (int)local_68 * 0xc);
        local_4c = *puVar1;
        local_48 = puVar1[1];
        local_44 = puVar1[2];
        puVar1 = (undefined4 *)(*piVar2 + -0xc + (uVar9 + (int)local_68) * 0xc);
        local_40 = *puVar1;
        local_3c = puVar1[1];
        local_38 = puVar1[2];
        local_88 = iVar6 + -1;
        puVar11 = local_94;
        if (1 < iVar6) {
          do {
            puVar8 = puVar11 + -1;
            iVar7 = *piVar2 + -0xc + (uint)*puVar8 * 0xc;
            local_80 = *(undefined4 *)(*piVar2 + -0xc + (uint)*puVar8 * 0xc);
            local_7c = *(undefined4 *)(iVar7 + 4);
            local_78 = *(undefined4 *)(iVar7 + 8);
            iVar7 = *piVar2 + -0xc + (*puVar8 + uVar9) * 0xc;
            local_74 = *(undefined4 *)(*piVar2 + -0xc + (*puVar8 + uVar9) * 0xc);
            local_70 = *(undefined4 *)(iVar7 + 4);
            local_6c = *(undefined4 *)(iVar7 + 8);
            FUN_004e23b0(&local_4c,local_18,1);
            FUN_004e23b0(&local_80,local_30,1);
            iVar7 = FUN_004e72d0(local_30,local_18);
            if (iVar7 == 1) break;
            if (iVar7 == -1) goto LAB_004ca4de;
            *puVar11 = *puVar8;
            local_88 = local_88 + -1;
            puVar11 = puVar8;
          } while (0 < local_88);
          uVar4 = (ushort)local_68;
        }
        iVar6 = iVar6 + 1;
        param_4[local_88 + 1] = uVar4;
        local_94 = local_94 + 1;
      } while (iVar6 <= (int)local_98);
    }
    if (local_84 != 0) {
      local_84 = local_84 + -2;
      local_98 = *(uint *)(*piVar5 + 8 + local_84 * 4);
      local_94 = (ushort *)*(int *)(*piVar5 + 4 + local_84 * 4);
      goto LAB_004c9d66;
    }
  }
  FUN_004ad6d0(piVar5);
  return 0;
LAB_004ca50a:
  FUN_004e5630(3,param_3);
  goto LAB_004ca51e;
LAB_004ca4de:
  FUN_004e5630(3,param_3);
  goto LAB_004ca51e;
LAB_004ca4f4:
  FUN_004e5630(3,param_3);
LAB_004ca51e:
  FUN_004ad6d0(piVar5);
  return 3;
}

