// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004556f0
// entry: 004556f0  size: 1563


int FUN_004556f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
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
  undefined4 local_b8;
  undefined1 local_b4 [12];
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
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5840(local_54);
  FUN_004e5780(&local_d8);
  FUN_004e57a0(&local_114);
  FUN_004e5a40(local_24);
  FUN_004e57c0(local_78);
  FUN_004e7be0(local_78,local_78,6);
  local_cc = *(undefined4 *)(param_2 + 0x34);
  local_c8 = *(undefined4 *)(param_2 + 0x38);
  local_c0 = *(undefined4 *)(param_2 + 0x28);
  local_c4 = *(undefined4 *)(param_2 + 0x3c);
  local_bc = *(undefined4 *)(param_2 + 0x2c);
  local_b8 = *(undefined4 *)(param_2 + 0x30);
  local_108 = *(undefined4 *)(param_2 + 0x10);
  local_104 = *(undefined4 *)(param_2 + 0x14);
  local_e4 = *(undefined4 *)(param_2 + 0x1c);
  local_100 = *(undefined4 *)(param_2 + 0x18);
  local_e0 = *(undefined4 *)(param_2 + 0x20);
  local_dc = *(undefined4 *)(param_2 + 0x24);
  iVar1 = FUN_00451710(&local_c0);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_00451710(&local_cc);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_004e7310(&local_c0,local_78);
  if ((iVar1 != 0) || (iVar1 = FUN_004e7310(&local_cc,local_78), iVar1 != 0)) {
    return 3;
  }
  puVar4 = (undefined4 *)(param_2 + 0x4c);
  *puVar4 = local_d8;
  *(undefined4 *)(param_2 + 0x50) = local_d4;
  *(undefined4 *)(param_2 + 0x54) = local_d0;
  iVar1 = FUN_004e7250(&local_108,&local_e4);
  if (iVar1 == 0) {
    iVar1 = FUN_004e71d0(&local_108,&local_e4);
    local_f8 = local_e0;
    local_fc = local_e4;
    uVar2 = local_100;
    if (iVar1 != 0) {
      return 0;
    }
    local_f4 = local_dc;
    local_e4 = local_108;
    local_e0 = local_104;
    local_100 = local_dc;
    local_108 = local_fc;
    local_dc = uVar2;
    local_104 = local_f8;
    FUN_004e7730(&local_114,&local_6c);
  }
  else {
    local_6c = local_114;
    local_68 = local_110;
    local_64 = local_10c;
  }
  iVar1 = FUN_004e72d0(&local_e4,&local_d8);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_004e7250(&local_108,&local_d8);
  if (iVar1 != 0) {
    local_108 = local_d8;
    local_104 = local_d4;
    local_100 = local_d0;
  }
  FUN_004e6d00(&local_cc,local_54,local_48);
  FUN_004e6d00(&local_c0,local_54,local_30);
  FUN_004e6dd0(&local_c0,&local_cc,local_b4);
  iVar1 = FUN_004e7290(&local_108,&local_114);
  if (iVar1 == 0) {
    uVar2 = FUN_004e6d00(local_b4,&local_108,&local_fc,&local_f0);
    FUN_004e6ab0(&local_114,uVar2);
    FUN_004e6dd0(&local_114,&local_f0,&local_90);
LAB_00455a9b:
    FUN_004e6dd0(&local_fc,&local_f0,&local_84);
  }
  else {
    uVar2 = FUN_004e6dd0(local_24,&local_108,&local_fc);
    iVar1 = FUN_004e7290(local_b4,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_004e6d00(local_b4,&local_108,&local_fc,&local_f0);
      FUN_004e6ab0(&local_114,uVar2);
      FUN_004e6dd0(&local_114,&local_f0,&local_90);
      goto LAB_00455a9b;
    }
    local_90 = local_d8;
    local_8c = local_d4;
    local_88 = local_d0;
    local_84 = local_114;
    local_80 = local_110;
    local_7c = local_10c;
  }
  FUN_004601a0(local_48,local_30,&local_90,&local_84,local_60,local_18);
  iVar1 = FUN_004e4020(local_60);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_004e7290(&local_e4,&local_114);
  if (iVar1 == 0) {
    uVar2 = FUN_004e6d00(local_b4,&local_e4,&local_fc,&local_f0);
    FUN_004e6ab0(&local_114,uVar2);
    FUN_004e6dd0(&local_114,&local_f0,&local_9c);
  }
  else {
    uVar2 = FUN_004e6dd0(local_24,&local_e4,&local_fc);
    iVar1 = FUN_004e7290(local_b4,uVar2);
    if (iVar1 != 0) {
      local_9c = local_d8;
      local_98 = local_d4;
      local_94 = local_d0;
      local_a8 = local_114;
      local_a4 = local_110;
      local_a0 = local_10c;
      goto LAB_00455c18;
    }
    uVar2 = FUN_004e6d00(local_b4,&local_e4,&local_fc,&local_f0);
    FUN_004e6ab0(&local_114,uVar2);
    FUN_004e6dd0(&local_114,&local_f0,&local_9c);
  }
  FUN_004e6dd0(&local_fc,&local_f0,&local_a8);
LAB_00455c18:
  FUN_004601a0(local_48,local_30,&local_9c,&local_a8,local_3c,local_c);
  iVar1 = FUN_004e4020(local_3c);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_004e72d0(local_60,local_54);
  if (iVar1 == 0) {
    puVar5 = local_18;
    puVar3 = local_c;
  }
  else {
    puVar5 = local_3c;
    puVar3 = local_60;
  }
  FUN_004e6c30(puVar3,puVar5,&local_fc);
  iVar1 = FUN_004518b0(&local_fc);
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_004e6d00(&local_6c,&local_fc,&local_f0);
  *puVar4 = local_f0;
  *(undefined4 *)(param_2 + 0x50) = local_ec;
  *(undefined4 *)(param_2 + 0x54) = local_e8;
  FUN_004e7910(puVar4,puVar4);
  return 0;
}

