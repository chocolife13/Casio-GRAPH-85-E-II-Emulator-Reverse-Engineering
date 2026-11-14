// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00451d90
// entry: 00451d90  size: 1909


int FUN_00451d90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
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
  undefined1 local_14c [12];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [12];
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
  undefined1 local_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [12];
  undefined1 local_b0 [12];
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
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_c [12];
  
  FUN_004e5780(&local_e0);
  FUN_004e57a0(&local_11c);
  FUN_004e57c0(local_c);
  FUN_004e5840(local_128);
  FUN_004e7730(&local_11c,&local_f8);
  FUN_004e5a60(&local_158);
  FUN_004e5a40(&local_17c);
  local_6c = local_11c;
  local_68 = local_118;
  local_64 = local_114;
  local_9c = local_e0;
  local_90 = local_e0;
  local_84 = local_e0;
  local_78 = local_e0;
  local_60 = local_e0;
  local_a4 = 1;
  local_a0 = 0xffffffff;
  local_98 = local_dc;
  local_94 = local_d8;
  local_8c = local_dc;
  local_88 = local_d8;
  local_80 = local_dc;
  local_7c = local_d8;
  local_74 = local_dc;
  local_70 = local_d8;
  local_5c = local_dc;
  local_58 = local_d8;
  iVar1 = FUN_00451850(param_2 + 4);
  if (((iVar1 == 0) && (iVar1 = FUN_00451810(param_2 + 0x10), iVar1 == 0)) &&
     (iVar1 = FUN_00451810(param_2 + 0x1c), iVar1 == 0)) {
    if (param_1 == 0) {
      *(undefined4 *)(param_2 + 0x80) = local_f8;
      *(undefined4 *)(param_2 + 0x84) = local_f4;
      *(undefined4 *)(param_2 + 0x88) = local_f0;
      *(undefined4 *)(param_2 + 0x8c) = local_f8;
      *(undefined4 *)(param_2 + 0x90) = local_f4;
      *(undefined4 *)(param_2 + 0x94) = local_f0;
      local_134 = *(undefined4 *)(param_2 + 0x28);
      local_130 = *(undefined4 *)(param_2 + 0x2c);
      local_140 = *(undefined4 *)(param_2 + 0x34);
      local_12c = *(undefined4 *)(param_2 + 0x30);
      local_13c = *(undefined4 *)(param_2 + 0x38);
      local_138 = *(undefined4 *)(param_2 + 0x3c);
      iVar1 = FUN_00451710(param_2 + 0x40);
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
                           *(undefined4 *)(param_2 + 0x60),&local_134,&local_c8);
      if (iVar1 != 0) {
        return iVar1;
      }
      puVar4 = (undefined4 *)(param_2 + 0x80);
      puVar3 = (undefined4 *)(param_2 + 0x98);
      *puVar4 = local_c8;
      *(undefined4 *)(param_2 + 0x84) = local_c4;
      *(undefined4 *)(param_2 + 0x88) = local_c0;
      *puVar3 = local_134;
      *(undefined4 *)(param_2 + 0x9c) = local_130;
      *(undefined4 *)(param_2 + 0xa0) = local_12c;
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0x48);
      FUN_004e7910(puVar4,puVar4);
      FUN_004e7910(puVar3,puVar3);
      iVar1 = FUN_0045e040((undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_2 + 0x5c),
                           *(undefined4 *)(param_2 + 100),&local_140,&local_d4);
      if (iVar1 != 0) {
        return iVar1;
      }
      puVar4 = (undefined4 *)(param_2 + 0x8c);
      *puVar4 = local_d4;
      *(undefined4 *)(param_2 + 0x90) = local_d0;
      *(undefined4 *)(param_2 + 0x94) = local_cc;
      *(undefined4 *)(param_2 + 0xa4) = local_140;
      *(undefined4 *)(param_2 + 0xa8) = local_13c;
      *(undefined4 *)(param_2 + 0xac) = local_138;
      *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0x54);
      FUN_004e7910(puVar4,puVar4);
      FUN_004e7910(param_2 + 0xa4,param_2 + 0xa4);
    }
    uVar2 = FUN_004e6d00(param_2 + 4,local_128,&local_188,&local_78);
    FUN_004e6ab0(local_128,uVar2);
    iVar1 = FUN_00454410(0,&local_a4,param_2 + 4,1);
    if (iVar1 == 0) {
      local_104 = local_3c;
      local_100 = local_38;
      local_fc = local_34;
      uVar2 = FUN_004e7390(param_2 + 0x40,&local_170,&local_188);
      FUN_004e6dd0(param_2 + 0x10,uVar2);
      uVar2 = FUN_004e7390(param_2 + 0x4c,&local_170,&local_164);
      FUN_004e6dd0(param_2 + 0x1c,uVar2);
      iVar1 = FUN_004e7310(&local_188,&local_164);
      if (iVar1 == 0) {
        local_170 = local_164;
        local_16c = local_160;
        puVar4 = &local_164;
        local_168 = local_15c;
        puVar3 = &local_188;
      }
      else {
        local_170 = local_188;
        local_16c = local_184;
        puVar4 = &local_188;
        local_168 = local_180;
        puVar3 = &local_164;
      }
      FUN_004e6dd0(puVar3,puVar4,local_14c);
      uVar2 = FUN_004e6d00(local_14c,local_14c,local_110,local_bc);
      FUN_004e6ab0(&local_11c,uVar2);
      FUN_004e7390(local_bc,local_110);
      uVar2 = FUN_004e6dd0(&local_17c,local_110,local_bc);
      iVar1 = FUN_004e7310(&local_170,uVar2);
      if (iVar1 != 0) {
        *(undefined4 *)(param_2 + 0x68) = local_158;
        *(undefined4 *)(param_2 + 0x6c) = local_154;
        *(undefined4 *)(param_2 + 0x74) = local_17c;
        *(undefined4 *)(param_2 + 0x70) = local_150;
        *(undefined4 *)(param_2 + 0x78) = local_178;
        *(undefined4 *)(param_2 + 0x7c) = local_174;
        return 0;
      }
      FUN_004e6d00(&local_170,local_110,&local_188);
      iVar1 = FUN_004e7310(&local_188,&local_11c);
      if (iVar1 != 0) {
        uVar2 = FUN_004e6dd0(&local_17c,&local_188,&local_164);
        iVar1 = FUN_004e7310(&local_104,uVar2);
        if (iVar1 != 0) {
          *(undefined4 *)(param_2 + 0x68) = local_158;
          *(undefined4 *)(param_2 + 0x6c) = local_154;
          *(undefined4 *)(param_2 + 0x74) = local_17c;
          *(undefined4 *)(param_2 + 0x70) = local_150;
          *(undefined4 *)(param_2 + 0x78) = local_178;
          *(undefined4 *)(param_2 + 0x7c) = local_174;
          return 0;
        }
      }
      FUN_004e6d00(&local_104,&local_188,local_ec);
      FUN_004e6d00(local_128,&local_134,&local_188);
      FUN_004e6d00(local_128,&local_140,&local_164);
      FUN_004e6c30(&local_188,&local_164,&local_170);
      uVar2 = FUN_004e6d00(local_128,&local_17c,local_110);
      uVar2 = FUN_004e7620(&local_170,local_14c,uVar2);
      iVar1 = FUN_004e7310(uVar2);
      if (iVar1 != 0) {
        return 3;
      }
      FUN_004e6c30(&local_134,&local_140,local_b0);
      FUN_004e6d00(local_128,local_ec,&local_164);
      FUN_004e6d00(local_128,&local_17c,&local_188);
      FUN_004e6ab0(&local_170,&local_164,local_14c);
      iVar1 = FUN_004e7310(local_14c,&local_188);
      if (iVar1 == 0) {
        iVar1 = param_2 + 0x74;
        FUN_004e6ab0(local_b0,local_ec,iVar1);
        FUN_004e7910(iVar1,iVar1);
      }
      else {
        *(undefined4 *)(param_2 + 0x74) = local_17c;
        *(undefined4 *)(param_2 + 0x78) = local_178;
        *(undefined4 *)(param_2 + 0x7c) = local_174;
      }
      FUN_004e6c30(&local_170,&local_164,local_14c);
      uVar2 = FUN_004e7620(local_14c,local_110,&local_188);
      iVar1 = FUN_004e7310(uVar2);
      if (iVar1 != 0) {
        *(undefined4 *)(param_2 + 0x68) = local_158;
        *(undefined4 *)(param_2 + 0x6c) = local_154;
        *(undefined4 *)(param_2 + 0x70) = local_150;
        return 0;
      }
      param_2 = param_2 + 0x68;
      FUN_004e6c30(local_b0,local_ec,param_2);
      FUN_004e7910(param_2,param_2);
      iVar1 = 0;
    }
  }
  return iVar1;
}

