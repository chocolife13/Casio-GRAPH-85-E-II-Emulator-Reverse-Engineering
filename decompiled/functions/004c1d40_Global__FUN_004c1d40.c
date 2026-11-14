// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c1d40
// entry: 004c1d40  size: 5074


undefined4 FUN_004c1d40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  int *local_214;
  int *local_210;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  uint local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_1b8;
  int *local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int *local_1a8;
  int *local_198;
  undefined4 local_194;
  undefined4 local_190;
  int *local_18c;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  int *local_164;
  undefined4 local_160;
  undefined4 local_15c;
  int *local_158;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int *local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  int *local_88;
  undefined1 local_78 [8];
  int *local_70;
  undefined1 local_60 [8];
  int *local_58;
  undefined1 local_48 [24];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_18 [24];
  
  local_164 = (int *)param_1[2];
  local_1b4 = (int *)param_2[2];
  local_118 = (int *)param_3[2];
  FUN_004e5780(&local_b4);
  local_c8 = local_b0;
  local_110 = local_b0;
  local_f8 = local_b0;
  local_12c = local_b0;
  local_a4 = local_b0;
  local_cc = local_b4;
  local_c4 = local_ac;
  local_114 = local_b4;
  local_10c = local_ac;
  local_fc = local_b4;
  local_f4 = local_ac;
  local_130 = local_b4;
  local_128 = local_ac;
  local_a8 = local_b4;
  local_a0 = local_ac;
  FUN_004e5840(local_48);
  iVar3 = FUN_004e4020(param_1);
  if (iVar3 != 0) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return 0;
  }
  iVar3 = FUN_004e4020(param_2);
  if (iVar3 != 0) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    return 0;
  }
  iVar3 = FUN_004e4000(param_1);
  if (iVar3 == 0) {
    iVar3 = FUN_004e4000(param_2);
    if (iVar3 == 0) {
      uVar10 = (uint)*(ushort *)((int)param_1 + 2);
      local_1d4 = uVar10;
      if ((uVar10 == 0) || (uVar10 != *(ushort *)((int)param_2 + 2))) {
        uVar12 = 9;
        goto LAB_004c30fd;
      }
      if (*(ushort *)((int)param_1 + 2) < 3) {
        uVar12 = 3;
        goto LAB_004c30fd;
      }
      iVar9 = (uVar10 * 3 & 0x3fff) << 2;
      iVar3 = FUN_004ad630(iVar9);
      if (iVar3 == 0) {
        uVar12 = 4;
        goto LAB_004c30fd;
      }
      FUN_004f9690(&local_194,iVar3,uVar10,1);
      iVar4 = FUN_004ad630(iVar9);
      if (iVar4 == 0) {
        FUN_004e5630(4,param_3);
        FUN_004ad6d0(iVar3);
        return 0;
      }
      FUN_004f9690(&local_160,iVar4,uVar10,1);
      iVar5 = FUN_004ad630(iVar9);
      if (iVar5 == 0) {
        FUN_004e5630(4,param_3);
        FUN_004ad6d0(iVar3);
        FUN_004ad6d0(iVar4);
        return 0;
      }
      FUN_004f9690(&local_1b0,iVar5,uVar10,1);
      iVar9 = FUN_004ad630(iVar9);
      if (iVar9 == 0) {
        FUN_004e5630(4,param_3);
        FUN_004ad6d0(iVar3);
        FUN_004ad6d0(iVar4);
        FUN_004ad6d0(iVar5);
        return 0;
      }
      FUN_004f9690(local_30,iVar9,uVar10,1);
      iVar6 = FUN_004ad630(0x30);
      if (iVar6 == 0) {
        FUN_004e5630(4,param_3);
        FUN_004ad6d0(iVar3);
        FUN_004ad6d0(iVar4);
        FUN_004ad6d0(iVar5);
        FUN_004ad6d0(iVar9);
        return 0;
      }
      FUN_004f96c0(local_60,iVar6,2,2,1);
      iVar7 = FUN_004ad630(0x18);
      if (iVar7 == 0) {
        FUN_004e5630(4,param_3);
        FUN_004ad6d0(iVar3);
        FUN_004ad6d0(iVar4);
        FUN_004ad6d0(iVar5);
        FUN_004ad6d0(iVar9);
        FUN_004ad6d0(iVar6);
        return 0;
      }
      FUN_004f96c0(local_78,iVar7,2,1,1);
      piVar2 = local_158;
      piVar13 = local_18c;
      piVar1 = local_1a8;
      local_210 = local_1a8;
      local_214 = local_158;
      iVar3 = *local_164;
      local_198 = local_70;
      local_1d0 = *(undefined4 *)(iVar3 + 0xc);
      local_1cc = *(undefined4 *)(iVar3 + 0x10);
      local_1c8 = *(undefined4 *)(iVar3 + 0x14);
      puVar8 = (undefined4 *)*local_164;
      local_17c = *puVar8;
      local_178 = puVar8[1];
      local_174 = puVar8[2];
      FUN_004e0b00(&local_1d0,&local_17c,&local_1d0,0);
      FUN_004e0c40(local_48,&local_1d0,&local_130,0);
      iVar3 = *local_1b4;
      local_1ec = *(undefined4 *)(iVar3 + 0xc);
      local_1e8 = *(undefined4 *)(iVar3 + 0x10);
      local_1e4 = *(undefined4 *)(iVar3 + 0x14);
      puVar8 = (undefined4 *)*local_1b4;
      local_1d0 = *puVar8;
      local_1cc = puVar8[1];
      local_1c8 = puVar8[2];
      FUN_004e0880(&local_1ec,&local_1d0,&local_17c,0);
      FUN_004e0c40(&local_130,&local_17c,&local_17c,0);
      puVar8 = (undefined4 *)*piVar13;
      *puVar8 = local_17c;
      puVar8[1] = local_178;
      puVar8[2] = local_174;
      FUN_004e2770(&local_1ec,&local_1ec,0);
      FUN_004e2770(&local_1d0,&local_1d0,0);
      FUN_004e0880(&local_1ec,&local_1d0,&local_1ec,0);
      FUN_004e0c40(&local_130,&local_1ec,&local_1ec,0);
      puVar8 = (undefined4 *)*piVar2;
      *puVar8 = local_1ec;
      puVar8[1] = local_1e8;
      puVar8[2] = local_1e4;
      piVar11 = local_70;
      if (0 < (int)(local_1d4 - 2)) {
        iVar3 = 0xc;
        local_1b8 = local_1d4 - 2;
        do {
          iVar9 = iVar3 + 0xc;
          puVar8 = (undefined4 *)(*local_164 + iVar9);
          local_1d0 = *puVar8;
          local_1cc = puVar8[1];
          local_1c8 = puVar8[2];
          puVar8 = (undefined4 *)(iVar3 + *local_164);
          local_17c = *puVar8;
          local_178 = puVar8[1];
          local_174 = puVar8[2];
          FUN_004e0b00(&local_1d0,&local_17c,&local_1d0,0);
          FUN_004e0c40(local_48,&local_1d0,&local_130,0);
          puVar8 = (undefined4 *)(*local_1b4 + iVar9);
          local_1d0 = *puVar8;
          local_1cc = puVar8[1];
          local_1c8 = puVar8[2];
          puVar8 = (undefined4 *)(iVar3 + *local_1b4);
          local_17c = *puVar8;
          local_178 = puVar8[1];
          local_174 = puVar8[2];
          iVar4 = iVar3 + -0xc + *piVar13;
          local_e4 = *(undefined4 *)(iVar3 + -0xc + *piVar13);
          local_e0 = *(undefined4 *)(iVar4 + 4);
          local_dc = *(undefined4 *)(iVar4 + 8);
          FUN_004e0880(&local_1d0,&local_17c,&local_148,0);
          FUN_004e0c40(&local_130,&local_148,&local_148,0);
          FUN_004e0880(&local_148,&local_e4,&local_148,0);
          puVar8 = (undefined4 *)(iVar3 + *piVar13);
          *puVar8 = local_148;
          puVar8[1] = local_144;
          puVar8[2] = local_140;
          iVar4 = iVar3 + -0xc + *piVar2;
          local_e4 = *(undefined4 *)(iVar3 + -0xc + *piVar2);
          local_e0 = *(undefined4 *)(iVar4 + 4);
          local_dc = *(undefined4 *)(iVar4 + 8);
          FUN_004e2770(&local_1d0,&local_1d0,0);
          FUN_004e2770(&local_17c,&local_17c,0);
          FUN_004e0880(&local_1d0,&local_17c,&local_148,0);
          FUN_004e26b0(&local_130,local_18,0);
          FUN_004e0c40(local_18,&local_148,&local_148,0);
          FUN_004e0880(&local_148,&local_e4,&local_148,0);
          puVar8 = (undefined4 *)(iVar3 + *piVar2);
          *puVar8 = local_148;
          puVar8[1] = local_144;
          puVar8[2] = local_140;
          local_1b8 = local_1b8 + -1;
          iVar3 = iVar9;
        } while (local_1b8 != 0);
        local_1b8 = 0;
        piVar11 = local_198;
      }
      local_198 = (int *)(local_1d4 - 1);
      local_194 = CONCAT22((short)local_198,(undefined2)local_194);
      local_160 = CONCAT22((short)local_198,(undefined2)local_160);
      FUN_004e0c40(&local_194,&local_194,&local_204,0);
      iVar3 = FUN_004e4020(&local_204);
      if (iVar3 != 0) {
        *param_3 = local_204;
        param_3[1] = local_200;
        param_3[2] = local_1fc;
        FUN_004ad6d0(piVar13);
        FUN_004ad6d0(piVar2);
        FUN_004ad6d0(piVar1);
        goto LAB_004c2e82;
      }
      FUN_004c7060(&local_204,&local_1ec);
      puVar8 = (undefined4 *)*local_58;
      *puVar8 = local_1ec;
      puVar8[1] = local_1e8;
      puVar8[2] = local_1e4;
      FUN_004ad6d0(local_1fc);
      FUN_004e0c40(&local_194,&local_160,&local_204,0);
      iVar3 = FUN_004e4020(&local_204);
      if (iVar3 != 0) {
        *param_3 = local_204;
        param_3[1] = local_200;
        param_3[2] = local_1fc;
        FUN_004ad6d0(piVar13);
        FUN_004ad6d0(piVar2);
        FUN_004ad6d0(piVar1);
        goto LAB_004c2e82;
      }
      FUN_004c7060(&local_204,&local_1ec);
      iVar3 = *local_58;
      *(undefined4 *)(iVar3 + 0xc) = local_1ec;
      *(undefined4 *)(iVar3 + 0x10) = local_1e8;
      *(undefined4 *)(iVar3 + 0x14) = local_1e4;
      iVar3 = *local_58;
      *(undefined4 *)(iVar3 + 0x18) = local_1ec;
      *(undefined4 *)(iVar3 + 0x1c) = local_1e8;
      *(undefined4 *)(iVar3 + 0x20) = local_1e4;
      FUN_004ad6d0(local_1fc);
      FUN_004e0c40(&local_160,&local_160,&local_204,0);
      iVar3 = FUN_004e4020(&local_204);
      if (iVar3 != 0) {
        *param_3 = local_204;
        param_3[1] = local_200;
        param_3[2] = local_1fc;
        local_88 = piVar13;
        goto LAB_004c2e64;
      }
      FUN_004c7060(&local_204,&local_1ec);
      iVar3 = *local_58;
      *(undefined4 *)(iVar3 + 0x24) = local_1ec;
      *(undefined4 *)(iVar3 + 0x28) = local_1e8;
      *(undefined4 *)(iVar3 + 0x2c) = local_1e4;
      FUN_004ad6d0(local_1fc);
      puVar8 = (undefined4 *)*local_1b4;
      local_1ec = *puVar8;
      local_1e8 = puVar8[1];
      local_1e4 = puVar8[2];
      iVar3 = local_1d4 - 1;
      if (0 < iVar3) {
        local_1d4 = 0xc;
        local_1b8 = iVar3;
        do {
          puVar8 = (undefined4 *)(*local_1b4 + local_1d4);
          local_1d0 = *puVar8;
          local_1cc = puVar8[1];
          local_1c8 = puVar8[2];
          FUN_004e0b00(&local_1d0,&local_1ec,&local_1d0,0);
          puVar8 = (undefined4 *)(*piVar1 + -0xc + local_1d4);
          local_1d4 = local_1d4 + 0xc;
          *puVar8 = local_1d0;
          puVar8[1] = local_1cc;
          local_1b8 = local_1b8 + -1;
          puVar8[2] = local_1c8;
        } while (local_1b8 != 0);
      }
      local_1b0 = CONCAT22(local_198._0_2_,(undefined2)local_1b0);
      FUN_004e0c40(&local_194,&local_1b0,&local_204,0);
      iVar3 = FUN_004e4020(&local_204);
      if (iVar3 != 0) {
        *param_3 = local_204;
        param_3[1] = local_200;
        param_3[2] = local_1fc;
        FUN_004ad6d0(piVar13);
        FUN_004ad6d0(piVar2);
        FUN_004ad6d0(piVar1);
        goto LAB_004c2e82;
      }
      FUN_004c7060(&local_204,&local_1ec);
      puVar8 = (undefined4 *)*piVar11;
      *puVar8 = local_1ec;
      puVar8[1] = local_1e8;
      puVar8[2] = local_1e4;
      FUN_004ad6d0(local_1fc);
      FUN_004e0c40(&local_160,&local_1b0,&local_204,0);
      iVar3 = FUN_004e4020(&local_204);
      if (iVar3 != 0) {
        *param_3 = local_204;
        param_3[1] = local_200;
        param_3[2] = local_1fc;
        FUN_004ad6d0(piVar13);
        FUN_004ad6d0(piVar2);
        FUN_004ad6d0(piVar1);
        goto LAB_004c2e82;
      }
      FUN_004c7060(&local_204,&local_1ec);
      iVar3 = *piVar11;
      *(undefined4 *)(iVar3 + 0xc) = local_1ec;
      *(undefined4 *)(iVar3 + 0x10) = local_1e8;
      *(undefined4 *)(iVar3 + 0x14) = local_1e4;
      FUN_004ad6d0(local_1fc);
      FUN_004eab60(2,local_60,local_78);
      iVar3 = FUN_004eaee0(2,local_60,local_78,&local_90);
      if (iVar3 == 0) {
        *param_3 = local_90;
        param_3[1] = local_8c;
        param_3[2] = local_88;
        local_88 = piVar13;
LAB_004c2e64:
        FUN_004ad6d0(local_88);
        piVar13 = local_214;
LAB_004c2e6e:
        FUN_004ad6d0(piVar13);
      }
      else {
        puVar8 = (undefined4 *)*local_88;
        local_114 = *puVar8;
        local_110 = puVar8[1];
        local_10c = puVar8[2];
        iVar3 = *local_88;
        local_1ec = *(undefined4 *)(iVar3 + 0xc);
        local_1e8 = *(undefined4 *)(iVar3 + 0x10);
        local_1e4 = *(undefined4 *)(iVar3 + 0x14);
        FUN_004e0dd0(&local_114,&local_1ec,&local_fc,0);
        FUN_004ad6d0(piVar2);
        FUN_004e26b0(&local_114,&local_1ec,0);
        FUN_004e0c40(&local_1ec,param_1,&local_160,0);
        FUN_004e1880(&local_160,&local_160,0);
        iVar3 = FUN_004e4020(&local_160);
        if (iVar3 != 0) {
          *param_3 = local_160;
          param_3[1] = local_15c;
          param_3[2] = local_158;
          FUN_004ad6d0(local_88);
          goto LAB_004c2e6e;
        }
        local_214 = local_158;
        FUN_004ad6d0(piVar1);
        FUN_004e0c40(param_2,&local_160,&local_1b0,0);
        iVar3 = FUN_004e4020(&local_1b0);
        piVar1 = local_1a8;
        if (iVar3 == 0) {
          FUN_004e0b00(&local_fc,param_2,&local_204,0);
          FUN_004e0c40(&local_204,&local_1b0,&local_204,0);
          iVar3 = FUN_004e4020(&local_204);
          if (iVar3 != 0) {
            *param_3 = local_204;
            param_3[1] = local_200;
            param_3[2] = local_1fc;
            FUN_004ad6d0(local_88);
            FUN_004ad6d0(piVar13);
            FUN_004ad6d0(local_158);
            FUN_004ad6d0(piVar1);
            FUN_004ad6d0(local_28);
            FUN_004ad6d0(local_58);
            FUN_004ad6d0(piVar11);
            return 0;
          }
          FUN_004c7060(&local_204,&local_1ec);
          FUN_004ad6d0(local_1fc);
          FUN_004e0c40(&local_1b0,&local_1b0,&local_204,0);
          iVar3 = FUN_004e4020(&local_204);
          if (iVar3 != 0) {
            *param_3 = local_204;
            param_3[1] = local_200;
            param_3[2] = local_1fc;
            FUN_004ad6d0(local_88);
            FUN_004ad6d0(piVar13);
            FUN_004ad6d0(local_158);
            FUN_004ad6d0(piVar1);
            FUN_004ad6d0(local_28);
            FUN_004ad6d0(local_58);
            FUN_004ad6d0(piVar11);
            return 0;
          }
          FUN_004c7060(&local_204,&local_1d0);
          FUN_004ad6d0(local_1fc);
          FUN_004e0dd0(&local_1ec,&local_1d0,&local_cc,0);
          FUN_004ad6d0(piVar1);
          FUN_004e57a0(&local_1ec);
          FUN_004e0c40(&local_cc,&local_160,&local_1b0,0);
          FUN_004e0880(&local_1ec,&local_1b0,&local_1b0,0);
          FUN_004e0dd0(&local_1ec,&local_1b0,&local_1b0,0);
          iVar3 = FUN_004e4020(&local_1b0);
          if (iVar3 != 0) {
            *param_3 = local_1b0;
            param_3[1] = local_1ac;
            param_3[2] = local_1a8;
            FUN_004ad6d0(local_88);
            FUN_004ad6d0(piVar13);
            FUN_004ad6d0(local_158);
            FUN_004ad6d0(local_28);
            FUN_004ad6d0(local_58);
            FUN_004ad6d0(piVar11);
            return 0;
          }
          local_210 = local_1a8;
          FUN_004e0c40(param_2,&local_1b0,&local_204,0);
          iVar3 = FUN_004e4020(&local_204);
          if (iVar3 != 0) {
            *param_3 = local_204;
            param_3[1] = local_200;
            param_3[2] = local_1fc;
            FUN_004ad6d0(local_88);
            FUN_004ad6d0(piVar13);
            FUN_004ad6d0(local_158);
            FUN_004ad6d0(local_1a8);
            FUN_004ad6d0(local_28);
            FUN_004ad6d0(local_58);
            FUN_004ad6d0(piVar11);
            return 0;
          }
          FUN_004c7060(&local_204,&local_1ec);
          FUN_004ad6d0(local_1fc);
          FUN_004e0c40(&local_1b0,&local_1b0,&local_204,0);
          iVar3 = FUN_004e4020(&local_204);
          if (iVar3 != 0) {
            *param_3 = local_204;
            param_3[1] = local_200;
            param_3[2] = local_1fc;
            FUN_004ad6d0(local_88);
            FUN_004ad6d0(piVar13);
            FUN_004ad6d0(local_158);
            FUN_004ad6d0(local_1a8);
            FUN_004ad6d0(local_28);
            FUN_004ad6d0(local_58);
            FUN_004ad6d0(piVar11);
            return 0;
          }
          FUN_004c7060(&local_204,&local_1d0);
          FUN_004ad6d0(local_1fc);
          FUN_004e0dd0(&local_1ec,&local_1d0,&local_fc,0);
          FUN_004ad6d0(piVar13);
          FUN_004e0c40(&local_fc,&local_1b0,&local_194,0);
          iVar3 = FUN_004e4020(&local_194);
          piVar1 = local_18c;
          if (iVar3 == 0) {
            FUN_004e0b00(&local_194,param_2,&local_194,0);
            FUN_004e0c40(&local_194,&local_194,&local_204,0);
            iVar3 = FUN_004e4020(&local_204);
            if (iVar3 != 0) {
              *param_3 = local_204;
              param_3[1] = local_200;
              param_3[2] = local_1fc;
              FUN_004ad6d0(local_88);
              FUN_004ad6d0(piVar1);
              FUN_004ad6d0(local_158);
              FUN_004ad6d0(local_1a8);
              FUN_004ad6d0(local_28);
              FUN_004ad6d0(local_58);
              FUN_004ad6d0(piVar11);
              return 0;
            }
            FUN_004c7060(&local_204,&local_a8);
            FUN_004ad6d0(local_1fc);
            iVar3 = FUN_004e4020(&local_194);
            if (iVar3 != 0) {
              *param_3 = local_194;
              param_3[1] = local_190;
              param_3[2] = local_18c;
              FUN_004ad6d0(local_88);
              FUN_004ad6d0(local_158);
              FUN_004ad6d0(local_1a8);
              FUN_004ad6d0(local_28);
              FUN_004ad6d0(local_58);
              FUN_004ad6d0(piVar11);
              return 0;
            }
            puVar8 = (undefined4 *)*local_118;
            *puVar8 = local_cc;
            puVar8[1] = local_c8;
            puVar8[2] = local_c4;
            iVar3 = *local_118;
            *(undefined4 *)(iVar3 + 0xc) = local_114;
            *(undefined4 *)(iVar3 + 0x10) = local_110;
            *(undefined4 *)(iVar3 + 0x14) = local_10c;
            iVar3 = *local_118;
            *(undefined4 *)(iVar3 + 0x18) = local_fc;
            *(undefined4 *)(iVar3 + 0x1c) = local_f8;
            *(undefined4 *)(iVar3 + 0x20) = local_f4;
            iVar3 = *local_118;
            *(undefined4 *)(iVar3 + 0x24) = local_130;
            *(undefined4 *)(iVar3 + 0x28) = local_12c;
            *(undefined4 *)(iVar3 + 0x2c) = local_128;
            iVar3 = *local_118;
            *(undefined4 *)(iVar3 + 0x30) = local_a8;
            *(undefined4 *)(iVar3 + 0x34) = local_a4;
            *(undefined4 *)(iVar3 + 0x38) = local_a0;
            FUN_004ad6d0(local_88);
            FUN_004ad6d0(local_18c);
            FUN_004ad6d0(local_158);
            FUN_004ad6d0(local_1a8);
            FUN_004ad6d0(local_28);
            FUN_004ad6d0(local_58);
            FUN_004ad6d0(piVar11);
            iVar3 = FUN_0052f820();
            if (iVar3 == 0) {
              return 1;
            }
            uVar12 = 1;
            goto LAB_004c30fd;
          }
          *param_3 = local_194;
          param_3[1] = local_190;
          param_3[2] = local_18c;
          goto LAB_004c2e64;
        }
        *param_3 = local_1b0;
        param_3[1] = local_1ac;
        param_3[2] = local_1a8;
        FUN_004ad6d0(local_88);
        FUN_004ad6d0(piVar13);
        local_210 = local_158;
      }
      FUN_004ad6d0(local_210);
LAB_004c2e82:
      FUN_004ad6d0(local_28);
      FUN_004ad6d0(local_58);
      FUN_004ad6d0(piVar11);
      return 0;
    }
  }
  uVar12 = 0x19;
LAB_004c30fd:
  FUN_004e5630(uVar12,param_3);
  return 0;
}

