// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045ad00
// entry: 0045ad00  size: 1682


int FUN_0045ad00(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
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
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_e8);
  FUN_004e5840(local_24);
  FUN_004e57a0(&local_118);
  FUN_004e7730(&local_118,&local_3c);
  FUN_004e57c0(local_30);
  FUN_004e5a40(local_c);
  FUN_004e5780(&local_dc);
  local_db = 0x99;
  local_da = 0x99;
  local_dc = 0x14;
  local_90 = local_e8;
  local_84 = local_e8;
  local_78 = local_e8;
  local_6c = local_e8;
  local_60 = local_e8;
  local_d9 = 0x49;
  local_d8 = 0x98;
  local_d7 = 0x75;
  local_94 = 1;
  local_8c = local_e4;
  local_88 = local_e0;
  local_80 = local_e4;
  local_7c = local_e0;
  local_74 = local_e4;
  local_70 = local_e0;
  local_68 = local_e4;
  local_64 = local_e0;
  local_5c = local_e4;
  local_58 = local_e0;
  if (param_1 == 0) {
    local_c4 = local_3c;
    local_ac = local_3c;
    local_c0 = local_38;
    local_a8 = local_38;
    local_bc = local_34;
    local_100 = *(undefined4 *)(param_2 + 0x18);
    local_a4 = local_34;
    local_fc = *(undefined4 *)(param_2 + 0x1c);
    local_10c = *(undefined4 *)(param_2 + 0x24);
    local_f8 = *(undefined4 *)(param_2 + 0x20);
    local_108 = *(undefined4 *)(param_2 + 0x28);
    local_104 = *(undefined4 *)(param_2 + 0x2c);
    iVar2 = FUN_004517d0(&local_100);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_00451710(param_2 + 0x30);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_004517d0(&local_10c);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_00451710(param_2 + 0x3c);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    iVar2 = FUN_0045e040((undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_2 + 0x10),&local_c4,&local_100);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_0045e040((undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0xc),
                         *(undefined4 *)(param_2 + 0x14),&local_ac,&local_10c);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar5 = (undefined4 *)(param_2 + 0x60);
    puVar1 = (undefined4 *)(param_2 + 0x6c);
    *puVar5 = local_100;
    *(undefined4 *)(param_2 + 100) = local_fc;
    *(undefined4 *)(param_2 + 0x68) = local_f8;
    *puVar1 = local_10c;
    *(undefined4 *)(param_2 + 0x70) = local_108;
    *(undefined4 *)(param_2 + 0x74) = local_104;
    *(undefined4 *)(param_2 + 0x78) = local_c4;
    *(undefined4 *)(param_2 + 0x7c) = local_c0;
    *(undefined4 *)(param_2 + 0x80) = local_bc;
    *(undefined4 *)(param_2 + 0x84) = local_ac;
    *(undefined4 *)(param_2 + 0x88) = local_a8;
    *(undefined4 *)(param_2 + 0x8c) = local_a4;
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0x44);
    FUN_004e7910(puVar5,puVar5);
    FUN_004e7910(puVar1,puVar1);
    FUN_004e7910(param_2 + 0x78,param_2 + 0x78);
    FUN_004e7910(param_2 + 0x84,param_2 + 0x84);
  }
  iVar2 = FUN_004e7250(&local_10c,&local_118);
  if (iVar2 != 0) {
    uVar3 = FUN_004e6d00(&local_dc,&local_10c,local_18);
    iVar2 = FUN_004e7310(&local_100,uVar3);
    if (iVar2 != 0) {
      return 3;
    }
  }
  FUN_004e6dd0(&local_100,&local_10c,&local_124);
  iVar2 = FUN_004e7310(&local_124,&local_dc);
  if (iVar2 == 0) {
    FUN_004e6d00(&local_124,&local_124,&local_124);
    puVar5 = (undefined4 *)(param_2 + 0x48);
    *puVar5 = local_124;
    *(undefined4 *)(param_2 + 0x4c) = local_120;
    *(undefined4 *)(param_2 + 0x50) = local_11c;
    FUN_004e7910(puVar5,puVar5);
    FUN_004e6c30(param_2 + 0x30,&local_118,&local_b8);
    FUN_004e6c30(param_2 + 0x3c,&local_118,&local_a0);
    local_6c = local_b8;
    local_68 = local_b4;
    local_60 = local_a0;
    local_64 = local_b0;
    iVar2 = *(int *)(param_2 + 4);
    local_84 = local_e8;
    local_5c = local_9c;
    local_58 = local_98;
    local_78 = local_124;
    local_80 = local_e4;
    local_7c = local_e0;
    local_74 = local_120;
    local_70 = local_11c;
    iVar4 = FUN_004556f0(0,&local_94);
    if (iVar4 == 0) {
      local_f4 = local_48;
      local_f0 = local_44;
      local_ec = local_40;
      iVar4 = FUN_004e7250(&local_f4,local_24);
      if (iVar4 == 0) {
        local_6c = local_a0;
        local_68 = local_9c;
        local_64 = local_98;
        local_60 = local_b8;
        local_5c = local_b4;
        local_58 = local_b0;
        local_84 = local_e8;
        local_80 = local_e4;
        local_7c = local_e0;
        FUN_004e6dd0(&local_118,&local_124,&local_78);
        iVar4 = FUN_004556f0(0,&local_94);
        if (iVar4 != 0) {
          return iVar4;
        }
        local_d0 = local_48;
        local_cc = local_44;
        local_c8 = local_40;
        FUN_004e6c30(&local_118,&local_d0,&local_f4);
        puVar5 = &local_d0;
      }
      else {
        FUN_004e6c30(&local_118,&local_f4,&local_d0);
        puVar5 = &local_f4;
      }
      FUN_004e6d00(local_30,puVar5,&local_130);
      if (iVar2 == 0) {
        iVar2 = FUN_004e7290(&local_130,&local_118);
        if (iVar2 != 0) {
          local_130 = local_118;
          local_12c = local_114;
          local_128 = local_110;
        }
      }
      else if (iVar2 == 1) {
        local_130 = local_f4;
        local_12c = local_f0;
        local_128 = local_ec;
      }
      else {
        local_130 = local_d0;
        local_12c = local_cc;
        local_128 = local_c8;
      }
      puVar5 = (undefined4 *)(param_2 + 0x54);
      *puVar5 = local_130;
      *(undefined4 *)(param_2 + 0x58) = local_12c;
      *(undefined4 *)(param_2 + 0x5c) = local_128;
      FUN_004e7910(puVar5,puVar5);
      iVar4 = FUN_004518b0(puVar5);
    }
    return iVar4;
  }
  return 3;
}

