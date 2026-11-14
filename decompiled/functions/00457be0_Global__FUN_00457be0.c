// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00457be0
// entry: 00457be0  size: 1969


int FUN_00457be0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [12];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
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
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_d4);
  FUN_004e57a0(&local_134);
  FUN_004e7be0(&local_134,&local_14c,0xb);
  FUN_004e7730(&local_14c,&local_14c);
  FUN_004e5a40(local_c);
  local_78 = local_134;
  local_74 = local_130;
  local_70 = local_12c;
  local_b0 = 1;
  local_ac = 0;
  local_a8 = local_d4;
  local_a4 = local_d0;
  local_a0 = local_cc;
  local_9c = local_d4;
  local_98 = local_d0;
  local_94 = local_cc;
  local_90 = local_d4;
  local_8c = local_d0;
  local_88 = local_cc;
  local_84 = local_d4;
  local_80 = local_d0;
  local_7c = local_cc;
  local_6c = local_d4;
  local_68 = local_d0;
  local_64 = local_cc;
  iVar3 = FUN_00451810((undefined4 *)(param_2 + 8));
  if ((iVar3 == 0) && (iVar3 = FUN_00451810(param_2 + 0x14), iVar3 == 0)) {
    if (param_1 == 0) {
      local_140 = *(undefined4 *)(param_2 + 0x20);
      local_13c = *(undefined4 *)(param_2 + 0x24);
      local_158 = *(undefined4 *)(param_2 + 0x2c);
      local_138 = *(undefined4 *)(param_2 + 0x28);
      local_154 = *(undefined4 *)(param_2 + 0x30);
      local_150 = *(undefined4 *)(param_2 + 0x34);
      iVar3 = FUN_00451710(param_2 + 0x38);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00451710(param_2 + 0x44);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      iVar3 = FUN_0045e040((undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x50),
                           *(undefined4 *)(param_2 + 0x58),&local_140,&local_128);
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar5 = (undefined4 *)(param_2 + 0x90);
      *puVar5 = local_128;
      *(undefined4 *)(param_2 + 0x94) = local_124;
      *(undefined4 *)(param_2 + 0x98) = local_120;
      FUN_004e7910(puVar5,puVar5);
      *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_2 + 0x40);
      iVar3 = FUN_0045e040((undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x54),
                           *(undefined4 *)(param_2 + 0x5c),&local_158,&local_104);
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar5 = (undefined4 *)(param_2 + 0x9c);
      *puVar5 = local_104;
      *(undefined4 *)(param_2 + 0xa0) = local_100;
      *(undefined4 *)(param_2 + 0xa4) = local_fc;
      FUN_004e7910(puVar5,puVar5);
      *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0x4c);
    }
    puVar5 = (undefined4 *)(param_2 + 0x78);
    *puVar5 = local_140;
    *(undefined4 *)(param_2 + 0x7c) = local_13c;
    *(undefined4 *)(param_2 + 0x80) = local_138;
    FUN_004e7910(puVar5,puVar5);
    puVar5 = (undefined4 *)(param_2 + 0x84);
    *puVar5 = local_158;
    *(undefined4 *)(param_2 + 0x88) = local_154;
    *(undefined4 *)(param_2 + 0x8c) = local_150;
    FUN_004e7910(puVar5,puVar5);
    local_ec = *(undefined4 *)(param_2 + 8);
    local_e8 = *(undefined4 *)(param_2 + 0xc);
    local_e4 = *(undefined4 *)(param_2 + 0x10);
    local_c8 = *(undefined4 *)(param_2 + 0x38);
    local_c4 = *(undefined4 *)(param_2 + 0x3c);
    local_c0 = *(undefined4 *)(param_2 + 0x40);
    local_11c = *(undefined4 *)(param_2 + 0x14);
    local_118 = *(undefined4 *)(param_2 + 0x18);
    local_114 = *(undefined4 *)(param_2 + 0x1c);
    local_bc = *(undefined4 *)(param_2 + 0x44);
    local_b8 = *(undefined4 *)(param_2 + 0x48);
    local_b4 = *(undefined4 *)(param_2 + 0x4c);
    uVar4 = FUN_004e7390(&local_c8,&local_170,&local_194);
    FUN_004e6dd0(&local_ec,uVar4);
    uVar4 = FUN_004e7390(&local_bc,&local_188,&local_170);
    FUN_004e6dd0(&local_11c,uVar4);
    iVar3 = FUN_004e7250(&local_194,&local_170);
    uVar2 = local_18c;
    uVar1 = local_190;
    uVar4 = local_194;
    if (iVar3 != 0) {
      local_194 = local_170;
      local_190 = local_16c;
      local_188 = uVar4;
      local_184 = uVar1;
      local_180 = local_18c;
      local_18c = local_168;
      local_170 = uVar4;
      local_16c = uVar1;
      local_168 = uVar2;
    }
    FUN_004e6dd0(&local_170,&local_194,&local_188);
    uVar4 = FUN_004e6d00(&local_188,&local_188,local_110,local_18,local_110);
    uVar4 = FUN_004e6ab0(&local_134,uVar4);
    FUN_004e7390(uVar4);
    uVar4 = FUN_004e6dd0(local_c,local_110,local_18);
    iVar3 = FUN_004e7290(&local_194,uVar4);
    if (iVar3 != 0) {
      return 3;
    }
    FUN_004e6d00(&local_194,local_110,&local_188);
    iVar3 = FUN_004e7310(&local_188,&local_134);
    if (iVar3 == 0) {
      uVar4 = FUN_004e6c30(&local_140,&local_158,&local_194,&local_188,&local_1a0);
      FUN_004e6dd0(uVar4);
    }
    else {
      FUN_004e6dd0(&local_140,&local_188,&local_194);
      uVar4 = FUN_004e6dd0(&local_158,&local_188,&local_170,&local_1a0);
      FUN_004e6c30(&local_194,uVar4);
    }
    iVar3 = FUN_004e4020(&local_1a0);
    if (iVar3 != 0) {
      return 3;
    }
    puVar5 = (undefined4 *)(param_2 + 0x60);
    *puVar5 = local_1a0;
    *(undefined4 *)(param_2 + 100) = local_19c;
    *(undefined4 *)(param_2 + 0x68) = local_198;
    FUN_004e7910(puVar5,puVar5);
    if (*(int *)(param_2 + 4) == 0) {
      FUN_004e7620(&local_1a0,&local_1a0);
      FUN_004e7730(&local_1a0,&local_f8);
      local_9c = local_f8;
      local_98 = local_f4;
      local_90 = local_1a0;
      local_94 = local_f0;
      local_8c = local_19c;
      local_88 = local_198;
      iVar3 = FUN_00453c70(0,&local_b0);
      if (iVar3 != 0) {
        return iVar3;
      }
      local_17c = local_54;
      local_178 = local_50;
      local_174 = local_4c;
      FUN_004e6c30(&local_134,&local_17c,&local_e0);
      local_164 = local_e0;
      local_160 = local_dc;
      local_15c = local_d8;
    }
    else if (*(int *)(param_2 + 4) == 1) {
      local_9c = local_14c;
      local_98 = local_148;
      local_90 = local_1a0;
      local_94 = local_144;
      local_8c = local_19c;
      local_88 = local_198;
      iVar3 = FUN_00453c70(0,&local_b0);
      if (iVar3 != 0) {
        return iVar3;
      }
      local_17c = local_54;
      local_178 = local_50;
      local_174 = local_4c;
      local_164 = local_54;
      local_160 = local_50;
      local_15c = local_4c;
    }
    else {
      local_9c = local_14c;
      local_98 = local_148;
      local_90 = local_1a0;
      local_94 = local_144;
      local_8c = local_19c;
      local_88 = local_198;
      iVar3 = FUN_00453c70(0,&local_b0);
      if (iVar3 != 0) {
        return iVar3;
      }
      local_17c = local_54;
      local_178 = local_50;
      local_174 = local_4c;
      FUN_004e6c30(&local_134,&local_17c,&local_164);
    }
    puVar5 = (undefined4 *)(param_2 + 0x6c);
    *puVar5 = local_164;
    *(undefined4 *)(param_2 + 0x70) = local_160;
    *(undefined4 *)(param_2 + 0x74) = local_15c;
    FUN_004e7910(puVar5,puVar5);
    iVar3 = FUN_004518b0(puVar5);
  }
  return iVar3;
}

