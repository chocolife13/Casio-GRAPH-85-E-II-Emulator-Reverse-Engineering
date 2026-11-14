// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004588d0
// entry: 004588d0  size: 1473


int FUN_004588d0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
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
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_11c);
  FUN_004e57a0(&local_17c);
  FUN_004e7be0(&local_17c,&local_170,0xb);
  FUN_004e7730(&local_170,&local_170);
  local_d8 = local_17c;
  iVar4 = param_2 + 8;
  local_d4 = local_178;
  local_110 = 1;
  local_10c = 0;
  local_108 = local_11c;
  local_104 = local_118;
  local_100 = local_114;
  local_fc = local_11c;
  local_f8 = local_118;
  local_f4 = local_114;
  local_f0 = local_11c;
  local_ec = local_118;
  local_e8 = local_114;
  local_e4 = local_11c;
  local_e0 = local_118;
  local_dc = local_114;
  local_d0 = local_174;
  local_cc = local_11c;
  local_c8 = local_118;
  local_c4 = local_114;
  iVar3 = FUN_00451770(iVar4);
  if (iVar3 != 0) {
    return iVar3;
  }
  puVar1 = (undefined4 *)(param_2 + 0x20);
  iVar3 = FUN_00451710(puVar1);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = FUN_004e7290(iVar4,puVar1);
  if (iVar3 != 0) {
    return 3;
  }
  iVar3 = FUN_00451770(param_2 + 0x14);
  if (iVar3 != 0) {
    return iVar3;
  }
  puVar2 = (undefined4 *)(param_2 + 0x2c);
  iVar3 = FUN_00451710(puVar2);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = FUN_004e7290(param_2 + 0x14,puVar2);
  if (iVar3 != 0) {
    return 3;
  }
  local_140 = *puVar1;
  local_13c = *(undefined4 *)(param_2 + 0x24);
  local_138 = *(undefined4 *)(param_2 + 0x28);
  local_158 = *puVar2;
  local_154 = *(undefined4 *)(param_2 + 0x30);
  local_150 = *(undefined4 *)(param_2 + 0x34);
  FUN_004e6ab0(iVar4,param_2 + 0x14,local_c);
  FUN_004e6ab0(&local_140,&local_158,local_18);
  FUN_004e6dd0(local_c,local_18,&local_14c);
  puVar1 = (undefined4 *)(param_2 + 0x68);
  *puVar1 = local_14c;
  *(undefined4 *)(param_2 + 0x6c) = local_148;
  *(undefined4 *)(param_2 + 0x70) = local_144;
  FUN_004e7910(puVar1,puVar1);
  iVar3 = FUN_004518b0(puVar1);
  if (iVar3 != 0) {
    return iVar3;
  }
  FUN_004e6dd0(iVar4,&local_140,&local_128);
  puVar1 = (undefined4 *)(param_2 + 0x50);
  *puVar1 = local_128;
  *(undefined4 *)(param_2 + 0x54) = local_124;
  *(undefined4 *)(param_2 + 0x58) = local_120;
  FUN_004e7910(puVar1,puVar1);
  iVar4 = FUN_004518b0(puVar1);
  if (iVar4 != 0) {
    return iVar4;
  }
  FUN_004e6dd0(param_2 + 0x14,&local_158,&local_134);
  puVar1 = (undefined4 *)(param_2 + 0x5c);
  *puVar1 = local_134;
  *(undefined4 *)(param_2 + 0x60) = local_130;
  *(undefined4 *)(param_2 + 100) = local_12c;
  FUN_004e7910(puVar1,puVar1);
  iVar4 = FUN_004518b0(puVar1);
  if (iVar4 != 0) {
    return iVar4;
  }
  FUN_004e6c30(&local_128,&local_134,local_24);
  FUN_004e6c30(&local_17c,&local_14c,local_60);
  FUN_004e6d00(&local_14c,local_60,local_6c);
  FUN_004e6dd0(&local_17c,&local_140,local_48);
  FUN_004e6dd0(&local_17c,&local_158,local_30);
  FUN_004e6ab0(local_48,local_30,local_78);
  FUN_004e6d00(local_6c,local_78,local_54);
  FUN_004e7390(local_54,local_3c);
  FUN_004e6dd0(local_24,local_3c,&local_194);
  puVar1 = (undefined4 *)(param_2 + 0x38);
  *puVar1 = local_194;
  *(undefined4 *)(param_2 + 0x3c) = local_190;
  *(undefined4 *)(param_2 + 0x40) = local_18c;
  FUN_004e7910(puVar1,puVar1);
  if (*(int *)(param_2 + 4) == 0) {
    FUN_004e7620(&local_194,&local_194);
    FUN_004e7730(&local_194,&local_fc);
    local_f0 = local_194;
    local_ec = local_190;
    local_e8 = local_18c;
    iVar4 = FUN_00453c70(0,&local_110);
    if (iVar4 != 0) {
      return iVar4;
    }
    local_188 = local_b4;
    local_184 = local_b0;
    local_180 = local_ac;
  }
  else {
    if (*(int *)(param_2 + 4) == 1) {
      local_fc = local_170;
      local_f8 = local_16c;
      local_f0 = local_194;
      local_f4 = local_168;
      local_ec = local_190;
      local_e8 = local_18c;
      iVar4 = FUN_00453c70(0,&local_110);
      if (iVar4 != 0) {
        return iVar4;
      }
      local_188 = local_b4;
      local_184 = local_b0;
      local_180 = local_ac;
      local_164 = local_b4;
      local_160 = local_b0;
      local_15c = local_ac;
      goto LAB_00458e5d;
    }
    local_fc = local_170;
    local_f8 = local_16c;
    local_f0 = local_194;
    local_f4 = local_168;
    local_ec = local_190;
    local_e8 = local_18c;
    iVar4 = FUN_00453c70(0,&local_110);
    if (iVar4 != 0) {
      return iVar4;
    }
    local_188 = local_b4;
    local_184 = local_b0;
    local_180 = local_ac;
  }
  FUN_004e6c30(&local_17c,&local_188,&local_164);
LAB_00458e5d:
  puVar1 = (undefined4 *)(param_2 + 0x44);
  *puVar1 = local_164;
  *(undefined4 *)(param_2 + 0x48) = local_160;
  *(undefined4 *)(param_2 + 0x4c) = local_15c;
  FUN_004e7910(puVar1,puVar1);
  iVar4 = FUN_004518b0(puVar1);
  return iVar4;
}

