// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00457760
// entry: 00457760  size: 1151


int FUN_00457760(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
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
  
  FUN_004e5780(&local_bc);
  FUN_004e57a0(&local_ec);
  FUN_004e57c0(local_18);
  FUN_004e5a60(&local_d4);
  FUN_004e5a40(&local_104);
  local_78 = local_ec;
  local_74 = local_e8;
  local_70 = local_e4;
  local_b0 = 1;
  local_ac = 0;
  local_a8 = local_bc;
  local_a4 = local_b8;
  local_a0 = local_b4;
  local_9c = local_bc;
  local_98 = local_b8;
  local_94 = local_b4;
  local_90 = local_bc;
  local_8c = local_b8;
  local_88 = local_b4;
  local_84 = local_bc;
  local_80 = local_b8;
  local_7c = local_b4;
  local_6c = local_bc;
  local_68 = local_b8;
  local_64 = local_b4;
  iVar1 = FUN_00451810(param_2 + 0x14);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      local_110 = *(undefined4 *)(param_2 + 0x20);
      local_10c = *(undefined4 *)(param_2 + 0x24);
      local_108 = *(undefined4 *)(param_2 + 0x28);
      iVar1 = FUN_00451710(param_2 + 0x2c);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    else {
      iVar1 = FUN_0045e040((undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x38),
                           *(undefined4 *)(param_2 + 0x3c),&local_110,&local_c8);
      if (iVar1 != 0) {
        return iVar1;
      }
      puVar3 = (undefined4 *)(param_2 + 100);
      *puVar3 = local_c8;
      *(undefined4 *)(param_2 + 0x68) = local_c4;
      *(undefined4 *)(param_2 + 0x6c) = local_c0;
      FUN_004e7910(puVar3,puVar3);
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_2 + 0x34);
    }
    puVar3 = (undefined4 *)(param_2 + 0x58);
    *puVar3 = local_110;
    *(undefined4 *)(param_2 + 0x5c) = local_10c;
    *(undefined4 *)(param_2 + 0x60) = local_108;
    FUN_004e7910(puVar3,puVar3);
    uVar2 = FUN_004e7390(param_2 + 0x2c,local_e0,local_f8);
    FUN_004e6dd0(param_2 + 0x14,uVar2);
    iVar1 = FUN_004e7310(local_f8,&local_ec);
    if (iVar1 == 0) {
      uVar2 = FUN_004e6c30(&local_110,param_2 + 8,local_e0,local_f8,&local_134);
      FUN_004e6dd0(uVar2);
    }
    else {
      FUN_004e6dd0(&local_110,local_f8,local_e0);
      uVar2 = FUN_004e6dd0(param_2 + 8,local_f8,local_c,&local_134);
      FUN_004e6c30(local_e0,uVar2);
    }
    iVar1 = FUN_004e4020(&local_134);
    if (iVar1 != 0) {
      return 3;
    }
    puVar3 = (undefined4 *)(param_2 + 0x40);
    *puVar3 = local_134;
    *(undefined4 *)(param_2 + 0x44) = local_130;
    *(undefined4 *)(param_2 + 0x48) = local_12c;
    FUN_004e7910(puVar3,puVar3);
    if (*(int *)(param_2 + 4) == 0) {
      FUN_004e7620(&local_134,&local_134);
      local_9c = local_134;
      local_98 = local_130;
      local_90 = local_104;
      local_94 = local_12c;
      local_8c = local_100;
      local_88 = local_fc;
      iVar1 = FUN_00453c70(0,&local_b0);
      if (iVar1 != 0) {
        return iVar1;
      }
      local_11c = local_54;
      local_118 = local_50;
      local_114 = local_4c;
      FUN_004e6d00(local_18,&local_11c,&local_128);
    }
    else {
      if (*(int *)(param_2 + 4) == 1) {
        local_9c = local_d4;
        local_98 = local_d0;
        local_90 = local_134;
        local_94 = local_cc;
        local_8c = local_130;
        local_88 = local_12c;
        iVar1 = FUN_00453c70(0,&local_b0);
        local_128 = local_54;
        local_124 = local_50;
        local_120 = local_4c;
      }
      else {
        local_9c = local_134;
        local_98 = local_130;
        local_90 = local_104;
        local_94 = local_12c;
        local_8c = local_100;
        local_88 = local_fc;
        iVar1 = FUN_00453c70(0,&local_b0);
        local_128 = local_54;
        local_124 = local_50;
        local_120 = local_4c;
      }
      local_11c = local_128;
      local_118 = local_124;
      local_114 = local_120;
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    puVar3 = (undefined4 *)(param_2 + 0x4c);
    *puVar3 = local_128;
    *(undefined4 *)(param_2 + 0x50) = local_124;
    *(undefined4 *)(param_2 + 0x54) = local_120;
    FUN_004e7910(puVar3,puVar3);
    iVar1 = FUN_004518b0(puVar3);
  }
  return iVar1;
}

