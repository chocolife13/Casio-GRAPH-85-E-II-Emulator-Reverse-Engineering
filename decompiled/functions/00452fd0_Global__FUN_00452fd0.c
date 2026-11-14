// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00452fd0
// entry: 00452fd0  size: 2726


int FUN_00452fd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_13c [12];
  undefined1 local_130 [12];
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
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [12];
  undefined4 local_ac [3];
  undefined1 local_a0 [12];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
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
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_004e5780(&local_94);
  FUN_004e57a0(local_13c);
  FUN_004e57c0(local_c);
  FUN_004e5a40(local_b8);
  local_7c = 1;
  local_78 = local_94;
  local_74 = local_90;
  local_70 = local_8c;
  local_6c = local_94;
  local_68 = local_90;
  local_64 = local_8c;
  local_60 = local_94;
  local_5c = local_90;
  local_58 = local_8c;
  local_48 = local_94;
  local_44 = local_90;
  local_40 = local_8c;
  iVar1 = FUN_00451850((undefined4 *)(param_2 + 4));
  if (iVar1 != 0) {
    return iVar1;
  }
  local_4c = *(undefined4 *)(param_2 + 0xc);
  local_54 = *(undefined4 *)(param_2 + 4);
  local_50 = *(undefined4 *)(param_2 + 8);
  if (param_1 == 0) {
    local_dc = *(undefined4 *)(param_2 + 0x10);
    local_d8 = *(undefined4 *)(param_2 + 0x14);
    local_f4 = *(undefined4 *)(param_2 + 0x1c);
    local_d4 = *(undefined4 *)(param_2 + 0x18);
    local_f0 = *(undefined4 *)(param_2 + 0x20);
    local_ec = *(undefined4 *)(param_2 + 0x24);
    local_118 = *(undefined4 *)(param_2 + 0x28);
    local_114 = *(undefined4 *)(param_2 + 0x2c);
    local_10c = *(undefined4 *)(param_2 + 0x34);
    local_110 = *(undefined4 *)(param_2 + 0x30);
    local_108 = *(undefined4 *)(param_2 + 0x38);
    local_104 = *(undefined4 *)(param_2 + 0x3c);
    iVar1 = FUN_004517d0(&local_118);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_00451710(param_2 + 0x40);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_004517d0(&local_10c);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_00451710(param_2 + 0x4c);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_0045e040((undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x58),
                         *(undefined4 *)(param_2 + 0x60),&local_dc,&local_118);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_0045e040((undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_2 + 0x5c),
                         *(undefined4 *)(param_2 + 100),&local_f4,&local_10c);
    if (iVar1 != 0) {
      return iVar1;
    }
    puVar6 = (undefined4 *)(param_2 + 0x90);
    *puVar6 = local_118;
    *(undefined4 *)(param_2 + 0x94) = local_114;
    *(undefined4 *)(param_2 + 0x98) = local_110;
    *(undefined4 *)(param_2 + 0x9c) = local_10c;
    *(undefined4 *)(param_2 + 0xa0) = local_108;
    *(undefined4 *)(param_2 + 0xa4) = local_104;
    *(undefined4 *)(param_2 + 0xa8) = local_dc;
    *(undefined4 *)(param_2 + 0xac) = local_d8;
    *(undefined4 *)(param_2 + 0xb0) = local_d4;
    *(undefined4 *)(param_2 + 0xb4) = local_f4;
    *(undefined4 *)(param_2 + 0xb8) = local_f0;
    *(undefined4 *)(param_2 + 0xbc) = local_ec;
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_2 + 0x54);
    FUN_004e7910(puVar6,puVar6);
    FUN_004e7910(param_2 + 0x9c,param_2 + 0x9c);
    FUN_004e7910(param_2 + 0xa8,param_2 + 0xa8);
    FUN_004e7910(param_2 + 0xb4,param_2 + 0xb4);
  }
  iVar4 = param_2 + 0x4c;
  iVar3 = param_2 + 0x40;
  iVar1 = FUN_004e71d0(iVar3,local_13c);
  if (iVar1 != 0) {
    return 3;
  }
  iVar1 = FUN_004e71d0(iVar4,local_13c);
  if (iVar1 != 0) {
    return 3;
  }
  if (*(int *)(param_2 + 0x68) == 0) {
    uVar2 = FUN_004e7390(iVar3,&local_160,&local_e8);
    FUN_004e6dd0(&local_118,uVar2);
    uVar2 = FUN_004e7390(iVar4,&local_160,&local_d0);
    FUN_004e6dd0(&local_10c,uVar2);
    iVar1 = FUN_004e7310(&local_e8,&local_d0);
    if (iVar1 == 0) {
      local_160 = local_d0;
      local_15c = local_cc;
      local_158 = local_c8;
      puVar6 = &local_d0;
      puVar5 = &local_e8;
    }
    else {
      local_160 = local_e8;
      local_15c = local_e4;
      local_158 = local_e0;
      puVar6 = &local_e8;
      puVar5 = &local_d0;
    }
    uVar2 = FUN_004e6dd0(puVar5,puVar6,&local_148,&local_148,&local_154);
    FUN_004e6d00(uVar2);
    uVar2 = FUN_004e6ab0(local_13c,&local_154,&local_148,&local_154);
    FUN_004e7390(uVar2);
    uVar2 = FUN_004e6dd0(local_b8,&local_154,&local_148);
    iVar1 = FUN_004e7290(&local_160,uVar2);
    if (iVar1 != 0) {
      return 3;
    }
    FUN_004e6d00(&local_160,&local_154,local_ac);
    uVar2 = FUN_004e6dd0(&local_e8,local_ac,&local_148,&local_148,local_88);
    FUN_004e6d00(uVar2);
    FUN_004e6d00(local_88,local_88,&local_154);
    uVar2 = FUN_004e6c30(iVar3,local_13c,&local_148,&local_160);
    FUN_004e6dd0(&local_154,uVar2);
    uVar2 = FUN_004e6c30(local_13c,local_88,local_130,local_130,&local_148);
    FUN_004e6d00(uVar2);
    uVar2 = FUN_004e6c30(iVar4,local_13c,local_130,&local_154);
    FUN_004e6dd0(&local_148,uVar2);
    FUN_004e6ab0(&local_160,&local_154,&local_148);
    uVar2 = FUN_004e6d00(&local_148,local_b8,local_130);
    iVar1 = FUN_004e7290(local_13c,uVar2);
    if (iVar1 != 0) {
      return 3;
    }
    FUN_004e6dd0(local_13c,&local_148,&local_124);
    puVar6 = (undefined4 *)(param_2 + 0x84);
    local_48 = local_124;
    *puVar6 = local_124;
    local_44 = local_120;
    local_40 = local_11c;
    *(undefined4 *)(param_2 + 0x88) = local_120;
    *(undefined4 *)(param_2 + 0x8c) = local_11c;
    FUN_004e7910(puVar6,puVar6);
    iVar1 = FUN_00454f00(0,&local_7c);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_100 = local_18;
    local_fc = local_14;
    local_f8 = local_10;
    iVar1 = FUN_004e7290(local_ac,local_13c);
    if (iVar1 != 0) {
      uVar2 = FUN_004e6dd0(local_b8,local_ac,&local_148);
      iVar1 = FUN_004e7290(&local_100,uVar2);
      if (iVar1 != 0) {
        return 3;
      }
    }
    puVar6 = local_ac;
  }
  else {
    uVar2 = FUN_004e6ab0(iVar3,iVar4,&local_160,local_c,&local_124);
    FUN_004e6c30(uVar2);
    local_40 = local_11c;
    puVar6 = (undefined4 *)(param_2 + 0x84);
    local_48 = local_124;
    local_44 = local_120;
    *puVar6 = local_124;
    *(undefined4 *)(param_2 + 0x88) = local_120;
    *(undefined4 *)(param_2 + 0x8c) = local_11c;
    FUN_004e7910(puVar6,puVar6);
    uVar2 = FUN_004e6c30(iVar3,local_13c,local_130,&local_124,&local_154);
    FUN_004e6dd0(uVar2);
    uVar2 = FUN_004e7390(&local_154,local_130,&local_118,&local_154);
    FUN_004e6d00(uVar2);
    uVar2 = FUN_004e6c30(iVar4,local_13c,local_130,&local_124,&local_148);
    FUN_004e6dd0(uVar2);
    uVar2 = FUN_004e7390(&local_148,local_130,&local_10c,&local_148);
    FUN_004e6d00(uVar2);
    iVar1 = FUN_004e7310(&local_154,&local_148);
    if (iVar1 == 0) {
      local_160 = local_148;
      local_15c = local_144;
      local_158 = local_140;
      puVar6 = &local_148;
      puVar5 = &local_154;
    }
    else {
      local_160 = local_154;
      local_15c = local_150;
      local_158 = local_14c;
      puVar6 = &local_154;
      puVar5 = &local_148;
    }
    uVar2 = FUN_004e6dd0(puVar5,puVar6,local_130,local_130,&local_154);
    FUN_004e6d00(uVar2);
    uVar2 = FUN_004e6ab0(local_13c,&local_154,&local_148,&local_154);
    FUN_004e7390(uVar2);
    uVar2 = FUN_004e6dd0(local_b8,&local_154,&local_148);
    iVar1 = FUN_004e7290(&local_160,uVar2);
    if (iVar1 != 0) {
      return 3;
    }
    FUN_004e6d00(&local_160,&local_154,&local_c4);
    iVar1 = FUN_004517d0(&local_c4);
    if (iVar1 != 0) {
      return iVar1;
    }
    puVar6 = (undefined4 *)(param_2 + 0xd8);
    *puVar6 = local_c4;
    *(undefined4 *)(param_2 + 0xdc) = local_c0;
    *(undefined4 *)(param_2 + 0xe0) = local_bc;
    FUN_004e7910(puVar6,puVar6);
    iVar1 = FUN_00454f00(0,&local_7c);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_100 = local_18;
    local_fc = local_14;
    local_f8 = local_10;
    FUN_004e6dd0(local_13c,iVar3,&local_160);
    uVar2 = FUN_004e6dd0(local_13c,iVar4,&local_154,&local_148);
    FUN_004e6ab0(&local_160,uVar2);
    uVar2 = FUN_004e7390(&local_148,&local_154,&local_160);
    FUN_004e6d00(&local_c4,uVar2);
    iVar1 = FUN_004e7290(&local_160,local_13c);
    if (iVar1 != 0) {
      uVar2 = FUN_004e6dd0(local_b8,&local_160,&local_154);
      iVar1 = FUN_004e7290(&local_100,uVar2);
      if (iVar1 != 0) {
        return 3;
      }
    }
    puVar6 = &local_160;
  }
  FUN_004e6d00(&local_100,puVar6,local_a0);
  uVar2 = FUN_004e6c30(&local_dc,&local_f4,&local_154,local_a0,&local_160);
  FUN_004e6c30(uVar2);
  iVar1 = FUN_004e4020(&local_160);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)(param_2 + 0x6c);
    *puVar6 = local_160;
    *(undefined4 *)(param_2 + 0x70) = local_15c;
    *(undefined4 *)(param_2 + 0x74) = local_158;
    FUN_004e7910(puVar6,puVar6);
    FUN_004e6ab0(&local_154,local_a0,&local_160);
    iVar1 = FUN_004e4020(&local_160);
    if (iVar1 == 0) {
      puVar6 = (undefined4 *)(param_2 + 0x78);
      *puVar6 = local_160;
      *(undefined4 *)(param_2 + 0x7c) = local_15c;
      *(undefined4 *)(param_2 + 0x80) = local_158;
      FUN_004e7910(puVar6,puVar6);
      iVar1 = 0;
    }
  }
  return iVar1;
}

