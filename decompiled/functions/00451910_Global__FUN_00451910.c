// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00451910
// entry: 00451910  size: 1152


int FUN_00451910(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134 [12];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c [12];
  undefined1 local_110 [12];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [12];
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
  
  FUN_004e5780(&local_ec);
  FUN_004e57a0(&local_128);
  FUN_004e57c0(local_c);
  FUN_004e5840(local_11c);
  FUN_004e7730(&local_128,&local_c8);
  FUN_004e5a60(&local_140);
  FUN_004e5a40(&local_14c);
  local_6c = local_128;
  local_68 = local_124;
  local_64 = local_120;
  local_9c = local_ec;
  local_90 = local_ec;
  local_84 = local_ec;
  local_78 = local_ec;
  local_60 = local_ec;
  local_a4 = 1;
  local_a0 = 0xffffffff;
  local_98 = local_e8;
  local_94 = local_e4;
  local_8c = local_e8;
  local_88 = local_e4;
  local_80 = local_e8;
  local_7c = local_e4;
  local_74 = local_e8;
  local_70 = local_e4;
  local_5c = local_e8;
  local_58 = local_e4;
  iVar4 = FUN_00451850(param_2 + 4);
  if ((iVar4 == 0) && (iVar4 = FUN_00451810(param_2 + 0x10), iVar4 == 0)) {
    puVar1 = (undefined4 *)(param_2 + 0x28);
    if (param_1 == 0) {
      iVar4 = FUN_00451710(puVar1);
      if (iVar4 != 0) {
        return iVar4;
      }
      *(undefined4 *)(param_2 + 0x54) = local_c8;
      *(undefined4 *)(param_2 + 0x58) = local_c4;
      *(undefined4 *)(param_2 + 0x5c) = local_c0;
      local_158 = *(undefined4 *)(param_2 + 0x1c);
      local_154 = *(undefined4 *)(param_2 + 0x20);
      local_150 = *(undefined4 *)(param_2 + 0x24);
    }
    else {
      iVar4 = FUN_0045e040(puVar1,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                           &local_158,&local_104);
      if (iVar4 != 0) {
        return iVar4;
      }
      puVar2 = (undefined4 *)(param_2 + 0x54);
      puVar3 = (undefined4 *)(param_2 + 0x60);
      *puVar2 = local_104;
      *(undefined4 *)(param_2 + 0x58) = local_100;
      *(undefined4 *)(param_2 + 0x5c) = local_fc;
      *puVar3 = local_158;
      *(undefined4 *)(param_2 + 100) = local_154;
      *(undefined4 *)(param_2 + 0x68) = local_150;
      *(undefined4 *)(param_2 + 0x6c) = *puVar1;
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x30);
      FUN_004e7910(puVar2,puVar2);
      FUN_004e7910(puVar3,puVar3);
    }
    uVar5 = FUN_004e6d00(param_2 + 4,local_11c,local_134,&local_78);
    FUN_004e6ab0(local_11c,uVar5);
    iVar4 = FUN_00454410(0,&local_a4,param_2 + 4,1);
    if (iVar4 == 0) {
      local_d4 = local_3c;
      local_d0 = local_38;
      local_cc = local_34;
      uVar5 = FUN_004e7390(puVar1,local_bc,local_134);
      FUN_004e6dd0(&local_d4,uVar5);
      iVar4 = param_2 + 0x10;
      iVar6 = FUN_004e7310(iVar4,&local_128);
      if (iVar6 != 0) {
        FUN_004e6dd0(&local_14c,iVar4,local_110);
        iVar6 = FUN_004e7310(local_134,local_110);
        if (iVar6 != 0) {
          *(undefined4 *)(param_2 + 0x3c) = local_140;
          *(undefined4 *)(param_2 + 0x40) = local_13c;
          *(undefined4 *)(param_2 + 0x48) = local_14c;
          *(undefined4 *)(param_2 + 0x44) = local_138;
          *(undefined4 *)(param_2 + 0x4c) = local_148;
          *(undefined4 *)(param_2 + 0x50) = local_144;
          return 0;
        }
      }
      FUN_004e6d00(local_134,iVar4,local_e0);
      FUN_004e6d00(&local_158,local_11c,local_134);
      FUN_004e6d00(local_e0,local_11c,local_bc);
      FUN_004e6d00(&local_14c,local_11c,local_110);
      FUN_004e6ab0(local_134,local_bc,local_f8);
      uVar5 = FUN_004e7620(local_f8,local_b0,local_110);
      iVar4 = FUN_004e7310(uVar5);
      if (iVar4 == 0) {
        iVar4 = param_2 + 0x48;
        FUN_004e6ab0(&local_158,local_e0,iVar4);
        FUN_004e7910(iVar4,iVar4);
      }
      else {
        *(undefined4 *)(param_2 + 0x48) = local_14c;
        *(undefined4 *)(param_2 + 0x4c) = local_148;
        *(undefined4 *)(param_2 + 0x50) = local_144;
      }
      FUN_004e6c30(local_134,local_bc,local_f8);
      uVar5 = FUN_004e7620(local_f8,local_b0,local_110);
      iVar4 = FUN_004e7310(uVar5);
      if (iVar4 != 0) {
        *(undefined4 *)(param_2 + 0x3c) = local_140;
        *(undefined4 *)(param_2 + 0x40) = local_13c;
        *(undefined4 *)(param_2 + 0x44) = local_138;
        return 0;
      }
      param_2 = param_2 + 0x3c;
      FUN_004e6c30(&local_158,local_e0,param_2);
      FUN_004e7910(param_2,param_2);
      iVar4 = 0;
    }
  }
  return iVar4;
}

