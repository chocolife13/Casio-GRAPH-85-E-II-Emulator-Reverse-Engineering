// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00459290
// entry: 00459290  size: 3035


int FUN_00459290(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [12];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [12];
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
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
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
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_24);
  FUN_004e57a0(local_160);
  FUN_004e5840(local_c);
  FUN_004e57c0(local_18);
  FUN_004e5a60(&local_3c);
  FUN_004e5a40(&local_f4);
  local_a8 = local_24;
  local_9c = local_24;
  local_90 = local_24;
  local_84 = local_24;
  local_78 = local_24;
  local_ac = 1;
  local_a4 = local_20;
  local_a0 = local_1c;
  local_98 = local_20;
  local_94 = local_1c;
  local_8c = local_20;
  local_88 = local_1c;
  local_80 = local_20;
  local_7c = local_1c;
  local_74 = local_20;
  local_70 = local_1c;
  if (param_1 == 0) {
    local_130 = *(undefined4 *)(param_2 + 8);
    local_12c = *(undefined4 *)(param_2 + 0xc);
    local_124 = *(undefined4 *)(param_2 + 0x20);
    local_128 = *(undefined4 *)(param_2 + 0x10);
    local_120 = *(undefined4 *)(param_2 + 0x24);
    local_11c = *(undefined4 *)(param_2 + 0x28);
    local_13c = *(undefined4 *)(param_2 + 0x14);
    local_138 = *(undefined4 *)(param_2 + 0x18);
    local_118 = *(undefined4 *)(param_2 + 0x2c);
    local_134 = *(undefined4 *)(param_2 + 0x1c);
    local_114 = *(undefined4 *)(param_2 + 0x30);
    local_110 = *(undefined4 *)(param_2 + 0x34);
    iVar1 = FUN_004517d0(&local_124);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_00451710(param_2 + 0x38);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_004517d0(&local_118);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_00451710(param_2 + 0x44);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_0045e040((undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x50),
                         *(undefined4 *)(param_2 + 0x58),&local_130,&local_124);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_0045e040((undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x54),
                         *(undefined4 *)(param_2 + 0x5c),&local_13c,&local_118);
    if (iVar1 != 0) {
      return iVar1;
    }
    puVar4 = (undefined4 *)(param_2 + 0x88);
    puVar6 = (undefined4 *)(param_2 + 0xa0);
    *puVar4 = local_130;
    *(undefined4 *)(param_2 + 0x8c) = local_12c;
    *(undefined4 *)(param_2 + 0x90) = local_128;
    *puVar6 = local_124;
    *(undefined4 *)(param_2 + 0xa4) = local_120;
    *(undefined4 *)(param_2 + 0xa8) = local_11c;
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_2 + 0x94) = local_13c;
    *(undefined4 *)(param_2 + 0x98) = local_138;
    *(undefined4 *)(param_2 + 0x9c) = local_134;
    *(undefined4 *)(param_2 + 0xac) = local_118;
    *(undefined4 *)(param_2 + 0xb0) = local_114;
    *(undefined4 *)(param_2 + 0xb4) = local_110;
    *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_2 + 0x4c);
    FUN_004e7910(puVar4,puVar4);
    FUN_004e7910(param_2 + 0x94,param_2 + 0x94);
    FUN_004e7910(puVar6,puVar6);
    FUN_004e7910(param_2 + 0xac,param_2 + 0xac);
  }
  iVar5 = param_2 + 0x44;
  iVar1 = param_2 + 0x38;
  iVar2 = FUN_004e71d0(iVar1,local_160);
  if (iVar2 != 0) {
    return 3;
  }
  iVar2 = FUN_004e71d0(iVar5,local_160);
  if (iVar2 != 0) {
    return 3;
  }
  if (*(int *)(param_2 + 0x60) == 0) {
    uVar3 = FUN_004e7390(iVar1,&local_16c,&local_e8);
    FUN_004e6dd0(&local_124,uVar3);
    uVar3 = FUN_004e7390(iVar5,&local_184,&local_dc);
    FUN_004e6dd0(&local_118,uVar3);
    iVar2 = FUN_004e7310(&local_e8,&local_dc);
    if (iVar2 == 0) {
      local_16c = local_dc;
      local_168 = local_d8;
      local_164 = local_d4;
      puVar4 = &local_dc;
      puVar6 = &local_e8;
    }
    else {
      local_16c = local_e8;
      local_168 = local_e4;
      local_164 = local_e0;
      puVar4 = &local_e8;
      puVar6 = &local_dc;
    }
    uVar3 = FUN_004e6dd0(puVar6,puVar4,&local_178,&local_178,&local_184);
    FUN_004e6d00(uVar3);
    uVar3 = FUN_004e6ab0(local_160,&local_184,&local_178,&local_184);
    FUN_004e7390(uVar3);
    uVar3 = FUN_004e6dd0(&local_f4,&local_184,&local_178);
    iVar2 = FUN_004e7290(&local_16c,uVar3);
    if (iVar2 != 0) {
      return 3;
    }
    FUN_004e6d00(&local_16c,&local_184,local_b8);
    iVar2 = FUN_004e7310(local_b8,local_160);
    if (iVar2 == 0) {
      uVar3 = FUN_004e6c30(&local_130,&local_13c,&local_16c,local_b8,&local_154);
      FUN_004e6dd0(uVar3);
    }
    else {
      FUN_004e6dd0(&local_130,local_b8,&local_16c);
      uVar3 = FUN_004e6dd0(&local_13c,local_b8,&local_184,&local_154);
      FUN_004e6c30(&local_16c,uVar3);
    }
    iVar2 = FUN_004e4020(&local_154);
    if (iVar2 != 0) {
      return 3;
    }
    uVar3 = FUN_004e6dd0(&local_e8,local_b8,&local_178,&local_178,local_c4);
    FUN_004e6d00(uVar3);
    FUN_004e6d00(local_c4,local_c4,&local_184);
    uVar3 = FUN_004e6c30(iVar1,local_160,&local_178,&local_16c);
    FUN_004e6dd0(&local_184,uVar3);
    uVar3 = FUN_004e6c30(local_160,local_c4,local_148,local_148,&local_178);
    FUN_004e6d00(uVar3);
    uVar3 = FUN_004e6c30(iVar5,local_160,local_148,&local_184);
    FUN_004e6dd0(&local_178,uVar3);
    FUN_004e6ab0(&local_16c,&local_184,&local_178);
    uVar3 = FUN_004e6d00(&local_178,&local_f4,local_148);
    iVar1 = FUN_004e7290(local_160,uVar3);
    if (iVar1 != 0) {
      return 3;
    }
    FUN_004e6dd0(local_160,&local_178,&local_10c);
  }
  else {
    uVar3 = FUN_004e6ab0(iVar1,iVar5,&local_16c,local_18,&local_10c);
    FUN_004e6c30(uVar3);
    uVar3 = FUN_004e6c30(iVar1,local_160,local_148,&local_10c,&local_184);
    FUN_004e6dd0(uVar3);
    uVar3 = FUN_004e7390(&local_184,local_148,&local_124,&local_184);
    FUN_004e6d00(uVar3);
    uVar3 = FUN_004e6c30(iVar5,local_160,local_148,&local_10c,&local_178);
    FUN_004e6dd0(uVar3);
    uVar3 = FUN_004e7390(&local_178,local_148,&local_118,&local_178);
    FUN_004e6d00(uVar3);
    iVar2 = FUN_004e7310(&local_184,&local_178);
    if (iVar2 == 0) {
      local_16c = local_178;
      local_168 = local_174;
      local_164 = local_170;
      puVar4 = &local_178;
      puVar6 = &local_184;
    }
    else {
      local_16c = local_184;
      local_168 = local_180;
      local_164 = local_17c;
      puVar4 = &local_184;
      puVar6 = &local_178;
    }
    uVar3 = FUN_004e6dd0(puVar6,puVar4,local_148,local_148,&local_184);
    FUN_004e6d00(uVar3);
    uVar3 = FUN_004e6ab0(local_160,&local_184,&local_178,&local_184);
    FUN_004e7390(uVar3);
    uVar3 = FUN_004e6dd0(&local_f4,&local_184,&local_178);
    iVar2 = FUN_004e7290(&local_16c,uVar3);
    if (iVar2 != 0) {
      return 3;
    }
    FUN_004e6d00(&local_16c,&local_184,&local_100);
    iVar2 = FUN_004e7310(&local_100,local_160);
    if (iVar2 == 0) {
      uVar3 = FUN_004e6c30(&local_130,&local_13c,&local_178,&local_100,&local_16c);
      FUN_004e6dd0(uVar3);
    }
    else {
      FUN_004e6dd0(&local_130,&local_100,&local_184);
      uVar3 = FUN_004e6dd0(&local_13c,&local_100,&local_178,&local_16c);
      FUN_004e6c30(&local_184,uVar3);
    }
    iVar2 = FUN_004e4020(&local_16c);
    if (iVar2 != 0) {
      return 3;
    }
    FUN_004e6dd0(local_160,iVar1,&local_184);
    uVar3 = FUN_004e6dd0(local_160,iVar5,local_148,&local_178);
    FUN_004e6ab0(&local_184,uVar3);
    uVar3 = FUN_004e7390(&local_178,local_c4,&local_f4,&local_184);
    FUN_004e6d00(uVar3);
    iVar1 = FUN_004e7290(&local_16c,&local_184);
    if (iVar1 != 0) {
      return 3;
    }
    FUN_004e6dd0(&local_16c,local_c4,&local_154);
    puVar4 = (undefined4 *)(param_2 + 0xd0);
    *puVar4 = local_100;
    *(undefined4 *)(param_2 + 0xd4) = local_fc;
    *(undefined4 *)(param_2 + 0xd8) = local_f8;
    FUN_004e7910(puVar4,puVar4);
    iVar1 = FUN_004517d0(puVar4);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  puVar4 = (undefined4 *)(param_2 + 100);
  *puVar4 = local_154;
  *(undefined4 *)(param_2 + 0x68) = local_150;
  *(undefined4 *)(param_2 + 0x6c) = local_14c;
  FUN_004e7910(puVar4,puVar4);
  puVar4 = (undefined4 *)(param_2 + 0x7c);
  *puVar4 = local_10c;
  *(undefined4 *)(param_2 + 0x80) = local_108;
  *(undefined4 *)(param_2 + 0x84) = local_104;
  FUN_004e7910(puVar4,puVar4);
  local_78 = local_10c;
  local_74 = local_108;
  local_70 = local_104;
  if (*(int *)(param_2 + 4) == 0) {
    uVar3 = FUN_004e7620(&local_154,&local_30,&local_9c);
    FUN_004e7730(uVar3);
    local_90 = local_30;
    local_8c = local_2c;
    local_88 = local_28;
    iVar1 = FUN_00454b60(0,&local_ac);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_004e6c30(local_160,&local_60,&local_d0);
  }
  else {
    if (*(int *)(param_2 + 4) == 1) {
      local_9c = local_3c;
      local_98 = local_38;
      local_94 = local_34;
      local_90 = local_154;
      local_8c = local_150;
    }
    else {
      local_9c = local_154;
      local_98 = local_150;
      local_94 = local_14c;
      local_90 = local_f4;
      local_8c = local_f0;
      local_14c = local_ec;
    }
    local_88 = local_14c;
    iVar1 = FUN_00454b60(0,&local_ac);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_d0 = local_60;
    local_cc = local_5c;
    local_c8 = local_58;
  }
  puVar4 = (undefined4 *)(param_2 + 0x70);
  *puVar4 = local_d0;
  *(undefined4 *)(param_2 + 0x74) = local_cc;
  *(undefined4 *)(param_2 + 0x78) = local_c8;
  FUN_004e7910(puVar4,puVar4);
  iVar1 = FUN_004518b0(puVar4);
  return iVar1;
}

