// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b8ce0
// entry: 004b8ce0  size: 6474


bool FUN_004b8ce0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int **ppiVar11;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int *local_188;
  int local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  int *local_174;
  int *local_170;
  uint local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  char local_14d;
  int local_14c;
  int local_148;
  int local_144;
  undefined4 *local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124 [6];
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90 [6];
  undefined1 local_78 [24];
  int *local_60 [6];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  local_17c = *(int **)(param_2 + 8);
  local_174 = *(int **)(param_1 + 8);
  FUN_0052f840();
  local_170 = (int *)0x0;
  if (param_3 == 0) {
    local_14c = 0;
  }
  else {
    local_14c = 1;
    if (*(short *)(param_3 + 2) != *(short *)(param_1 + 2)) {
      FUN_00501e90(param_5);
      return false;
    }
    local_170 = *(int **)(param_3 + 8);
  }
  uVar9 = (uint)*(ushort *)(param_1 + 2);
  local_16c = uVar9;
  FUN_004e5070(uVar9,&local_9c);
  if (uVar9 != *(ushort *)(param_2 + 2)) {
    FUN_00501e90(param_5);
    return false;
  }
  if ((int)uVar9 <= param_4) {
    FUN_00501ed0(param_5);
    return false;
  }
  if (param_4 == 1) {
    iVar1 = FUN_004c47e0(param_1,param_2,param_3,param_5);
    if (iVar1 == 0) {
      return false;
    }
    FUN_004e3e70(param_5,param_5);
    iVar1 = FUN_004e4020(param_5);
    return iVar1 == 0;
  }
  iVar1 = (uVar9 * 3 & 0x3fff) << 2;
  piVar2 = (int *)FUN_004ad630(iVar1);
  local_a0 = piVar2;
  if (piVar2 == (int *)0x0) {
    FUN_00501ef0(param_5);
    return false;
  }
  FUN_004f9690(local_18,piVar2,uVar9,1);
  piVar3 = (int *)FUN_004ad630(iVar1);
  local_180 = piVar3;
  if (piVar3 == (int *)0x0) {
    FUN_004ad6d0(piVar2);
    FUN_00501ef0(param_5);
    return false;
  }
  FUN_004f9690(local_30,piVar3,uVar9,1);
  local_14d = param_4 == 2;
  local_15c = 0;
  local_158 = 0;
  local_154 = 0;
  if ((bool)local_14d) {
    iVar1 = FUN_004b8b80(param_1,&local_15c,local_3c);
    if (iVar1 == 0) {
      FUN_004ad6d0(piVar2);
      FUN_004ad6d0(piVar3);
      *param_5 = local_15c;
      param_5[1] = local_158;
      param_5[2] = local_154;
      return false;
    }
    iVar1 = FUN_004b8b80(param_2,&local_b8,local_48);
    if (iVar1 == 0) {
      FUN_004ad6d0(piVar2);
      FUN_004ad6d0(piVar3);
      *param_5 = local_b8;
      param_5[1] = local_b4;
      param_5[2] = local_b0;
      return false;
    }
    local_184 = 0;
    if (uVar9 != 0) {
      iVar1 = 0;
      do {
        puVar10 = (undefined4 *)(iVar1 + *local_174);
        local_194 = *puVar10;
        local_190 = puVar10[1];
        local_18c = puVar10[2];
        puVar10 = (undefined4 *)(iVar1 + *local_17c);
        local_168 = *puVar10;
        local_164 = puVar10[1];
        local_160 = puVar10[2];
        FUN_004e6c30(&local_194,&local_15c,&local_194);
        FUN_004e6c30(&local_168,&local_b8,&local_168);
        puVar10 = (undefined4 *)(*piVar2 + iVar1);
        *puVar10 = local_194;
        puVar10[1] = local_190;
        puVar10[2] = local_18c;
        puVar10 = (undefined4 *)(iVar1 + *piVar3);
        *puVar10 = local_168;
        puVar10[1] = local_164;
        puVar10[2] = local_160;
        iVar4 = FUN_0052f820();
        if (iVar4 != 0) {
LAB_004b905e:
          FUN_004ad6d0(piVar2);
          FUN_004ad6d0(piVar3);
          FUN_004e5630(1,param_5);
          return false;
        }
        iVar1 = iVar1 + 0xc;
        local_184 = local_184 + 1;
      } while (local_184 < (int)uVar9);
    }
  }
  else {
    local_184 = 0;
    if (uVar9 != 0) {
      iVar1 = 0;
      do {
        puVar7 = (undefined4 *)(iVar1 + *local_174);
        puVar10 = (undefined4 *)(*piVar2 + iVar1);
        *puVar10 = *puVar7;
        puVar10[1] = puVar7[1];
        puVar10[2] = puVar7[2];
        puVar7 = (undefined4 *)(iVar1 + *local_17c);
        puVar10 = (undefined4 *)(iVar1 + *piVar3);
        *puVar10 = *puVar7;
        puVar10[1] = puVar7[1];
        puVar10[2] = puVar7[2];
        iVar4 = FUN_0052f820();
        if (iVar4 != 0) goto LAB_004b905e;
        iVar1 = iVar1 + 0xc;
        local_184 = local_184 + 1;
      } while (local_184 < (int)uVar9);
    }
  }
  piVar5 = (int *)FUN_004ad630(0x54);
  if (piVar5 == (int *)0x0) {
    FUN_004ad6d0(piVar2);
    FUN_004ad6d0(piVar3);
    FUN_00501ef0(param_5);
    return false;
  }
  FUN_004f9690(param_5,piVar5,7,1);
  puVar10 = (undefined4 *)*piVar5;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  iVar1 = param_4 + 1;
  local_188 = (int *)FUN_004ad630((iVar1 * iVar1 * 3 & 0x3fffU) << 2);
  if (local_188 == (int *)0x0) {
    FUN_004ad6d0(piVar2);
    FUN_004ad6d0(local_180);
    FUN_004ad6d0(piVar5);
    FUN_00501ef0(param_5);
    return false;
  }
  iVar4 = param_4 + 1;
  FUN_004f96c0(local_90,local_188,iVar4,iVar4,1);
  piVar3 = (int *)FUN_004ad630((iVar1 * 3 & 0x3fffU) << 2);
  local_178 = piVar3;
  if (piVar3 == (int *)0x0) {
    FUN_004ad6d0(piVar2);
    FUN_004ad6d0(local_180);
    FUN_004ad6d0(piVar5);
    FUN_004ad6d0(local_188);
    FUN_00501ef0(param_5);
    return false;
  }
  FUN_004f96c0(local_78,piVar3,iVar4,1,1);
  iVar1 = FUN_0052f820();
  if (iVar1 != 0) {
    FUN_004ad6d0(piVar2);
    FUN_004ad6d0(local_180);
    FUN_004ad6d0(piVar5);
    FUN_004ad6d0(local_188);
    FUN_004ad6d0(piVar3);
    FUN_004e5630(1,param_5);
    return false;
  }
  if (local_14c == 1) {
    iVar1 = 0;
    if (local_170 == (int *)0x0) {
      FUN_004ad6d0(piVar2);
      FUN_004ad6d0(local_180);
      FUN_004ad6d0(piVar5);
      FUN_004ad6d0(local_188);
      goto LAB_004b9b8e;
    }
    local_1a0 = 0;
    local_19c = 0;
    local_198 = 0;
    if (0 < (int)local_16c) {
      local_17c = (int *)0x0;
      do {
        puVar10 = (undefined4 *)(*local_170 + (int)local_17c);
        local_c4 = *puVar10;
        local_c0 = puVar10[1];
        local_bc = puVar10[2];
        FUN_004e6ab0(&local_1a0,&local_c4,&local_1a0);
        iVar4 = FUN_004e4020(&local_1a0);
        if (iVar4 != 0) {
          FUN_004ad6d0(piVar2);
          FUN_004ad6d0(local_180);
          FUN_004ad6d0(piVar5);
          FUN_004ad6d0(local_188);
          FUN_004ad6d0(piVar3);
          FUN_00501ed0(param_5);
          return false;
        }
        iVar1 = iVar1 + 1;
        local_17c = local_17c + 3;
      } while (iVar1 < (int)local_16c);
    }
  }
  else {
    local_1a0 = local_9c;
    local_19c = local_98;
    local_198 = local_94;
  }
  FUN_004e9030(&local_1a0,&local_1a0,&local_c4);
  iVar1 = param_4 + -1;
  puVar10 = (undefined4 *)(*local_188 + (param_4 + 2) * param_4 * 0xc);
  *puVar10 = local_1a0;
  puVar10[1] = local_19c;
  puVar10[2] = local_198;
  if (-1 < iVar1) {
    local_184 = param_4 - iVar1;
    do {
      iVar4 = FUN_0052f820();
      if (iVar4 != 0) {
        FUN_004ad6d0(piVar2);
        FUN_004ad6d0(local_180);
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(local_188);
        FUN_004ad6d0(local_178);
        FUN_00501d80(param_5);
        return false;
      }
      local_1a0 = 0;
      local_19c = 0;
      local_198 = 0;
      local_17c = (int *)0x0;
      if (0 < (int)local_16c) {
        iVar4 = 0;
        do {
          puVar10 = (undefined4 *)(*piVar2 + iVar4);
          local_194 = *puVar10;
          local_190 = puVar10[1];
          local_18c = puVar10[2];
          FUN_004ba630(&local_194,local_184,&local_194);
          if (local_14c == 1) {
            if (local_170 == (int *)0x0) goto LAB_004b9853;
            puVar10 = (undefined4 *)(*local_170 + iVar4);
            local_168 = *puVar10;
            local_164 = puVar10[1];
            local_160 = puVar10[2];
            FUN_004e6d00(&local_194,&local_168,&local_194);
          }
          FUN_004e6ab0(&local_1a0,&local_194,&local_1a0);
          iVar6 = FUN_004e4020(&local_1a0);
          if (iVar6 != 0) goto LAB_004b989a;
          local_17c = (int *)((int)local_17c + 1);
          iVar4 = iVar4 + 0xc;
        } while ((int)local_17c < (int)local_16c);
      }
      FUN_004e9030(&local_1a0,&local_1a0,&local_c4);
      iVar4 = (param_4 + 1) * param_4 + iVar1;
      iVar1 = iVar1 + -1;
      puVar10 = (undefined4 *)(*local_188 + iVar4 * 0xc);
      *puVar10 = local_1a0;
      puVar10[1] = local_19c;
      puVar10[2] = local_198;
      local_184 = local_184 + 1;
    } while (-1 < iVar1);
  }
  iVar1 = param_4 + 1;
  local_184 = param_4 + -1;
  if (-1 < local_184) {
    local_144 = local_184 * iVar1 * 0xc;
    local_17c = (int *)((local_184 * iVar1 + param_4) * 0xc);
    local_174 = (int *)((param_4 * iVar1 + param_4) * 0xc);
    do {
      if (0 < param_4) {
        local_148 = param_4;
        piVar2 = local_174;
        piVar3 = local_17c;
        do {
          puVar10 = (undefined4 *)((int)piVar2 + *local_188 + -0xc);
          puVar7 = (undefined4 *)(*local_188 + (int)piVar3);
          piVar2 = piVar2 + -3;
          piVar3 = piVar3 + -3;
          *puVar7 = *puVar10;
          puVar7[1] = puVar10[1];
          puVar7[2] = puVar10[2];
          local_148 = local_148 + -1;
        } while (local_148 != 0);
        local_148 = 0;
        piVar2 = local_a0;
      }
      iVar4 = FUN_0052f820();
      if (iVar4 != 0) goto LAB_004b9b22;
      local_1a0 = 0;
      local_19c = 0;
      local_198 = 0;
      local_148 = 0;
      if (0 < (int)local_16c) {
        local_140 = (undefined4 *)(param_4 * 2 - local_184);
        iVar4 = 0;
        do {
          puVar10 = (undefined4 *)(*piVar2 + iVar4);
          local_194 = *puVar10;
          local_190 = puVar10[1];
          local_18c = puVar10[2];
          FUN_004ba630(&local_194,local_140,&local_194);
          if (local_14c == 1) {
            if (local_170 == (int *)0x0) goto LAB_004b9b69;
            puVar10 = (undefined4 *)(*local_170 + iVar4);
            local_168 = *puVar10;
            local_164 = puVar10[1];
            local_160 = puVar10[2];
            FUN_004e6d00(&local_194,&local_168,&local_194);
          }
          FUN_004e6ab0(&local_1a0,&local_194,&local_1a0);
          iVar6 = FUN_004e4020(&local_1a0);
          if (iVar6 != 0) goto LAB_004b9bb0;
          local_148 = local_148 + 1;
          iVar4 = iVar4 + 0xc;
        } while (local_148 < (int)local_16c);
      }
      FUN_004e9030(&local_1a0,&local_1a0,&local_c4);
      puVar10 = (undefined4 *)(*local_188 + local_144);
      local_144 = local_144 + iVar1 * -0xc;
      local_17c = local_17c + iVar1 * -3;
      *puVar10 = local_1a0;
      puVar10[1] = local_19c;
      puVar10[2] = local_198;
      local_184 = local_184 + -1;
      local_174 = local_174 + iVar1 * -3;
    } while (-1 < local_184);
  }
  local_1a0 = 0;
  iVar1 = 0;
  local_19c = 0;
  local_198 = 0;
  local_184 = 0;
  if (0 < (int)local_16c) {
    do {
      puVar10 = (undefined4 *)(iVar1 + *local_180);
      local_194 = *puVar10;
      local_190 = puVar10[1];
      local_18c = puVar10[2];
      if (local_14c == 1) {
        if (local_170 == (int *)0x0) {
LAB_004b9853:
          FUN_004ad6d0(piVar2);
          FUN_004ad6d0(local_180);
          FUN_004ad6d0(piVar5);
          FUN_004ad6d0(local_188);
          FUN_004ad6d0(local_178);
          FUN_00501ef0(param_5);
          return false;
        }
        puVar10 = (undefined4 *)(iVar1 + *local_170);
        local_168 = *puVar10;
        local_164 = puVar10[1];
        local_160 = puVar10[2];
        FUN_004e6d00(&local_194,&local_168,&local_194);
      }
      FUN_004e6ab0(&local_1a0,&local_194,&local_1a0);
      iVar4 = FUN_004e4020(&local_1a0);
      if (iVar4 != 0) {
LAB_004b989a:
        FUN_004ad6d0(piVar2);
        FUN_004ad6d0(local_180);
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(local_188);
        FUN_004ad6d0(local_178);
        *param_5 = local_1a0;
        param_5[1] = local_19c;
        param_5[2] = local_198;
        return false;
      }
      local_184 = local_184 + 1;
      iVar1 = iVar1 + 0xc;
    } while (local_184 < (int)local_16c);
  }
  FUN_004e9030(&local_1a0,&local_1a0,&local_c4);
  puVar10 = (undefined4 *)(*local_178 + param_4 * 0xc);
  *puVar10 = local_1a0;
  puVar10[1] = local_19c;
  puVar10[2] = local_198;
  local_184 = param_4 + -1;
  if (-1 < local_184) {
    local_144 = local_184 * 0xc;
    iVar1 = param_4 - local_184;
    do {
      iVar4 = FUN_0052f820();
      if (iVar4 != 0) {
LAB_004b9b22:
        FUN_004ad6d0(piVar2);
        FUN_004ad6d0(local_180);
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(local_188);
        FUN_004ad6d0(local_178);
        FUN_00501d80(param_5);
        return false;
      }
      local_1a0 = 0;
      local_19c = 0;
      local_198 = 0;
      local_17c = (int *)0x0;
      if (0 < (int)local_16c) {
        iVar4 = 0;
        do {
          puVar10 = (undefined4 *)(*piVar2 + iVar4);
          local_194 = *puVar10;
          local_190 = puVar10[1];
          local_18c = puVar10[2];
          FUN_004ba630(&local_194,iVar1,&local_194);
          puVar10 = (undefined4 *)(iVar4 + *local_180);
          local_168 = *puVar10;
          local_164 = puVar10[1];
          local_160 = puVar10[2];
          FUN_004e6d00(&local_194,&local_168,&local_194);
          if (local_14c == 1) {
            if (local_170 == (int *)0x0) goto LAB_004b9b69;
            puVar10 = (undefined4 *)(iVar4 + *local_170);
            local_168 = *puVar10;
            local_164 = puVar10[1];
            local_160 = puVar10[2];
            FUN_004e6d00(&local_194,&local_168,&local_194);
          }
          FUN_004e6ab0(&local_1a0,&local_194,&local_1a0);
          iVar6 = FUN_004e4020(&local_1a0);
          if (iVar6 != 0) {
LAB_004b9bb0:
            FUN_004ad6d0(piVar2);
            FUN_004ad6d0(local_180);
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(local_188);
            FUN_004ad6d0(local_178);
            *param_5 = local_1a0;
            param_5[1] = local_19c;
            param_5[2] = local_198;
            return false;
          }
          local_17c = (int *)((int)local_17c + 1);
          iVar4 = iVar4 + 0xc;
        } while ((int)local_17c < (int)local_16c);
      }
      FUN_004e9030(&local_1a0,&local_1a0,&local_c4);
      puVar10 = (undefined4 *)(*local_178 + local_144);
      local_144 = local_144 + -0xc;
      *puVar10 = local_1a0;
      puVar10[1] = local_19c;
      puVar10[2] = local_198;
      local_184 = local_184 + -1;
      iVar1 = iVar1 + 1;
    } while (-1 < local_184);
  }
  FUN_004ad6d0(piVar2);
  FUN_004ad6d0(local_180);
  iVar1 = param_4 + 1;
  iVar4 = FUN_004eab60(iVar1,local_90,local_78);
  if (iVar4 == 0) {
    puVar10 = local_90;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_5 = *puVar10;
      puVar10 = puVar10 + 1;
      param_5 = param_5 + 1;
    }
    FUN_004ad6d0(piVar5);
    FUN_004ad6d0(local_188);
    FUN_004ad6d0(local_178);
    return false;
  }
  iVar4 = FUN_004eaee0(iVar1,local_90,local_78,local_60);
  FUN_004ad6d0(local_188);
  FUN_004ad6d0(local_178);
  if (iVar4 == 0) {
    ppiVar11 = local_60;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_5 = *ppiVar11;
      ppiVar11 = ppiVar11 + 1;
      param_5 = param_5 + 1;
    }
    FUN_004ad6d0(piVar5);
    return false;
  }
  local_174 = local_60[2];
  puVar10 = local_124;
  for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  iVar4 = 1;
  if (0 < iVar1) {
    iVar6 = 0xc;
    local_140 = &local_130;
    do {
      iVar8 = *local_174 + -0xc + iVar6;
      local_130 = *(undefined4 *)(*local_174 + -0xc + iVar6);
      local_12c = *(undefined4 *)(iVar8 + 4);
      local_128 = *(undefined4 *)(iVar8 + 8);
      iVar8 = FUN_004e4020(&local_130);
      if (iVar8 != 0) {
        FUN_004e5630(3,param_5);
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(local_174);
        return false;
      }
      FUN_004e5640(&local_130,&local_130);
      FUN_004e7910(&local_130,&local_130);
      puVar10 = (undefined4 *)((int)local_140 + iVar6);
      iVar4 = iVar4 + 1;
      *puVar10 = local_130;
      iVar6 = iVar6 + 0xc;
      puVar10[1] = local_12c;
      puVar10[2] = local_128;
    } while (iVar4 <= iVar1);
  }
  FUN_004ad6d0(local_174);
  iVar4 = iVar4 + -1;
  if (iVar4 < 7) {
    local_124[iVar4 * 3] = 0;
    local_124[iVar4 * 3 + 1] = 0;
    local_124[iVar4 * 3 + 2] = 0;
    puVar10 = local_124 + iVar4 * 3;
    puVar7 = local_124 + iVar4 * 3 + 3;
    for (uVar9 = iVar4 * -0xc + 0x48U >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if (local_14d != '\x01') {
    if (-1 < param_4) {
      iVar4 = 0;
      do {
        puVar10 = (undefined4 *)(iVar4 + *piVar5);
        iVar1 = iVar1 + -1;
        *puVar10 = *(undefined4 *)((int)local_124 + iVar4);
        puVar10[1] = *(undefined4 *)((int)local_124 + iVar4 + 4);
        puVar10[2] = *(undefined4 *)((int)local_124 + iVar4 + 8);
        iVar4 = iVar4 + 0xc;
      } while (iVar1 != 0);
    }
    goto LAB_004ba603;
  }
  puVar10 = (undefined4 *)*piVar5;
  *puVar10 = local_124[0];
  puVar10[1] = local_124[1];
  puVar10[2] = local_124[2];
  local_13c = local_15c;
  local_138 = local_158;
  local_134 = local_154;
  FUN_004e6d00(&local_13c,&local_15c,&local_13c);
  local_d0 = local_15c;
  local_cc = local_158;
  local_c8 = local_154;
  FUN_004e6d00(&local_d0,&local_13c,&local_d0);
  local_ac = local_15c;
  local_a8 = local_158;
  local_a4 = local_154;
  FUN_004e6d00(&local_ac,&local_d0,&local_ac);
  if (param_4 == 2) {
    FUN_004e5070(2,&local_1a0);
    FUN_004e6d00(&local_1a0,local_124,&local_1a0);
    FUN_004e6d00(&local_1a0,&local_15c,&local_1a0);
    iVar1 = *piVar5;
    *(undefined4 *)(iVar1 + 0xc) = local_124[3];
    *(undefined4 *)(iVar1 + 0x10) = local_124[4];
    *(undefined4 *)(iVar1 + 0x14) = local_124[5];
    FUN_004e6c30(*piVar5 + 0xc,&local_1a0,*piVar5 + 0xc);
    local_1a0 = local_124[0];
    local_19c = local_124[1];
    local_198 = local_124[2];
    FUN_004e6d00(&local_1a0,&local_13c,&local_1a0);
    local_194 = local_124[3];
    local_190 = local_124[4];
    local_18c = local_124[5];
    FUN_004e6d00(&local_194,&local_15c,&local_194);
    FUN_004e6c30(&local_1a0,&local_194,&local_1a0);
    iVar1 = *piVar5;
    *(undefined4 *)(iVar1 + 0x18) = local_10c;
    *(undefined4 *)(iVar1 + 0x1c) = local_108;
    *(undefined4 *)(iVar1 + 0x20) = local_104;
    FUN_004e6ab0(*piVar5 + 0x18,&local_1a0,*piVar5 + 0x18);
    iVar1 = *piVar5 + 0x18;
  }
  else {
    if (param_4 == 3) {
      FUN_004e5070(3,&local_1a0);
      FUN_004e6d00(&local_1a0,local_124,&local_1a0);
      FUN_004e6d00(&local_1a0,&local_15c,&local_1a0);
      iVar1 = *piVar5;
      *(undefined4 *)(iVar1 + 0xc) = local_124[3];
      *(undefined4 *)(iVar1 + 0x10) = local_124[4];
      *(undefined4 *)(iVar1 + 0x14) = local_124[5];
      FUN_004e6c30(*piVar5 + 0xc,&local_1a0,*piVar5 + 0xc);
      FUN_004e5070(3,&local_1a0);
      FUN_004e6d00(&local_1a0,local_124,&local_1a0);
      FUN_004e6d00(&local_1a0,&local_13c,&local_1a0);
      FUN_004e5070(2,&local_194);
      FUN_004e6d00(&local_194,local_124 + 3,&local_194);
      FUN_004e6d00(&local_194,&local_15c,&local_194);
      FUN_004e6c30(&local_1a0,&local_194,&local_1a0);
      iVar1 = *piVar5;
      *(undefined4 *)(iVar1 + 0x18) = local_10c;
      *(undefined4 *)(iVar1 + 0x1c) = local_108;
      *(undefined4 *)(iVar1 + 0x20) = local_104;
      FUN_004e6ab0(*piVar5 + 0x18,&local_1a0,*piVar5 + 0x18);
      local_1a0 = local_124[0];
      local_19c = local_124[1];
      local_198 = local_124[2];
      FUN_004e6d00(&local_1a0,&local_d0,&local_1a0);
      local_194 = local_124[3];
      local_190 = local_124[4];
      local_18c = local_124[5];
      FUN_004e6d00(&local_194,&local_13c,&local_194);
      FUN_004e6c30(&local_194,&local_1a0,&local_194);
      local_1a0 = local_10c;
      local_19c = local_108;
      local_198 = local_104;
      FUN_004e6d00(&local_1a0,&local_15c,&local_1a0);
      FUN_004e6c30(&local_194,&local_1a0,&local_194);
      iVar1 = *piVar5;
      *(undefined4 *)(iVar1 + 0x24) = local_100;
      *(undefined4 *)(iVar1 + 0x28) = local_fc;
      *(undefined4 *)(iVar1 + 0x2c) = local_f8;
      FUN_004e6ab0(*piVar5 + 0x24,&local_194,*piVar5 + 0x24);
      FUN_004e6ab0(*piVar5 + 0x24,&local_b8,*piVar5 + 0x24);
      goto LAB_004ba603;
    }
    if (param_4 != 4) goto LAB_004ba603;
    FUN_004e5070(4,&local_1a0);
    FUN_004e6d00(&local_1a0,local_124,&local_1a0);
    FUN_004e6d00(&local_1a0,&local_15c,&local_1a0);
    iVar1 = *piVar5;
    *(undefined4 *)(iVar1 + 0xc) = local_124[3];
    *(undefined4 *)(iVar1 + 0x10) = local_124[4];
    *(undefined4 *)(iVar1 + 0x14) = local_124[5];
    FUN_004e6c30(*piVar5 + 0xc,&local_1a0,*piVar5 + 0xc);
    FUN_004e5070(6,&local_1a0);
    FUN_004e6d00(&local_1a0,local_124,&local_1a0);
    FUN_004e6d00(&local_1a0,&local_13c,&local_1a0);
    FUN_004e5070(3,&local_194);
    FUN_004e6d00(&local_194,local_124 + 3,&local_194);
    FUN_004e6d00(&local_194,&local_15c,&local_194);
    FUN_004e6c30(&local_1a0,&local_194,&local_1a0);
    iVar1 = *piVar5;
    *(undefined4 *)(iVar1 + 0x18) = local_10c;
    *(undefined4 *)(iVar1 + 0x1c) = local_108;
    *(undefined4 *)(iVar1 + 0x20) = local_104;
    FUN_004e6ab0(*piVar5 + 0x18,&local_1a0,*piVar5 + 0x18);
    FUN_004e5070(4,&local_1a0);
    FUN_004e6d00(&local_1a0,local_124,&local_1a0);
    FUN_004e6d00(&local_1a0,&local_d0,&local_1a0);
    FUN_004e5070(3,&local_194);
    FUN_004e6d00(&local_194,local_124 + 3,&local_194);
    FUN_004e6d00(&local_194,&local_13c,&local_194);
    FUN_004e6c30(&local_194,&local_1a0,&local_194);
    FUN_004e5070(2,&local_1a0);
    FUN_004e6d00(&local_1a0,local_124 + 6,&local_1a0);
    FUN_004e6d00(&local_1a0,&local_15c,&local_1a0);
    FUN_004e6c30(&local_194,&local_1a0,&local_194);
    iVar1 = *piVar5;
    *(undefined4 *)(iVar1 + 0x24) = local_100;
    *(undefined4 *)(iVar1 + 0x28) = local_fc;
    *(undefined4 *)(iVar1 + 0x2c) = local_f8;
    FUN_004e6ab0(*piVar5 + 0x24,&local_194,*piVar5 + 0x24);
    local_1a0 = local_124[0];
    local_19c = local_124[1];
    local_198 = local_124[2];
    FUN_004e6d00(&local_1a0,&local_ac,&local_1a0);
    local_194 = local_124[3];
    local_190 = local_124[4];
    local_18c = local_124[5];
    FUN_004e6d00(&local_194,&local_d0,&local_194);
    FUN_004e6c30(&local_1a0,&local_194,&local_1a0);
    local_194 = local_10c;
    local_190 = local_108;
    local_18c = local_104;
    FUN_004e6d00(&local_194,&local_13c,&local_194);
    FUN_004e6ab0(&local_1a0,&local_194,&local_1a0);
    local_194 = local_100;
    local_190 = local_fc;
    local_18c = local_f8;
    FUN_004e6d00(&local_194,&local_15c,&local_194);
    FUN_004e6c30(&local_1a0,&local_194,&local_1a0);
    iVar1 = *piVar5;
    *(undefined4 *)(iVar1 + 0x30) = local_f4;
    *(undefined4 *)(iVar1 + 0x34) = local_f0;
    *(undefined4 *)(iVar1 + 0x38) = local_ec;
    FUN_004e6ab0(*piVar5 + 0x30,&local_1a0,*piVar5 + 0x30);
    iVar1 = *piVar5 + 0x30;
  }
  FUN_004e6ab0(iVar1,&local_b8,iVar1);
LAB_004ba603:
  FUN_004e3e70(param_5,param_5);
  iVar1 = FUN_004e4020(param_5);
  return iVar1 == 0;
LAB_004b9b69:
  FUN_004ad6d0(piVar2);
  FUN_004ad6d0(local_180);
  FUN_004ad6d0(piVar5);
  FUN_004ad6d0(local_188);
  piVar3 = local_178;
LAB_004b9b8e:
  FUN_004ad6d0(piVar3);
  FUN_00501ef0(param_5);
  return false;
}

