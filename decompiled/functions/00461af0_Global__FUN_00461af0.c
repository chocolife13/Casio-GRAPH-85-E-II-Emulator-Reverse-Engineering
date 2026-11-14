// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00461af0
// entry: 00461af0  size: 2279


undefined4 *
FUN_00461af0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_18c [12];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 local_174 [12];
  undefined1 local_168 [12];
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
  undefined1 local_12c [12];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [12];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [12];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
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
  
  FUN_004e5780(&local_c0);
  FUN_004e57a0(local_108);
  FUN_004e5840(local_12c);
  FUN_004e5ae0(local_a8);
  FUN_004e57c0(local_48);
  FUN_004e5980(local_30);
  FUN_004e5070(4,local_78);
  FUN_004e5800(local_60);
  FUN_004e57c0(local_b4);
  FUN_004e7be0(local_b4,local_b4,6);
  FUN_004e7be0(local_12c,local_3c,0xfffffff4);
  FUN_004e5ab0(local_54);
  iVar1 = FUN_004e71d0(param_1,local_12c);
  if (iVar1 != 0) {
    *param_4 = local_c0;
    param_4[1] = local_bc;
    param_4[2] = local_b8;
    return param_4;
  }
  iVar1 = FUN_004e7290(param_1,local_12c);
  if (iVar1 == 0) {
    local_114 = *param_1;
    local_110 = param_1[1];
    local_120 = *param_2;
    local_10c = param_1[2];
    local_11c = param_2[1];
    local_118 = param_2[2];
  }
  else {
    FUN_004e6c30(local_108,param_1,&local_114);
    FUN_004e7730(param_2,&local_120);
  }
  uVar2 = FUN_0045ef60(&local_120,param_1,0,&local_fc,local_a8,&local_15c);
  FUN_004e6d00(uVar2);
  iVar1 = FUN_004e4020(&local_fc);
  if (iVar1 != 0) {
    *param_4 = local_fc;
    param_4[1] = local_f8;
    param_4[2] = local_f4;
    return param_4;
  }
  uVar2 = FUN_004e7390(param_3,local_18,local_f0);
  FUN_004e6d00(local_a8,uVar2);
  iVar1 = FUN_004e7250(&local_15c,local_f0);
  if (iVar1 == 0) {
    local_180 = local_15c;
    local_17c = local_158;
    local_178 = local_154;
  }
  else {
    uVar2 = FUN_004e6d00(local_78,param_3,local_d8,local_168);
    FUN_004e6dd0(local_108,uVar2);
    uVar2 = FUN_004e6c30(local_108,local_168,local_18c,local_18c,local_174);
    FUN_004e6d00(uVar2);
    uVar2 = FUN_004e6dd0(&local_15c,local_f0,local_d8,local_d8,local_168);
    FUN_004e6d00(uVar2);
    uVar2 = FUN_004e6c30(local_174,local_168,local_d8,local_18c);
    FUN_004e7390(uVar2);
    FUN_004e6dd0(&local_15c,local_18c,&local_180);
  }
  iVar1 = FUN_004e7310(param_3,local_b4);
  if (iVar1 != 0) {
    *param_4 = local_180;
    param_4[1] = local_17c;
    param_4[2] = local_178;
    return param_4;
  }
  iVar1 = FUN_004e7250(param_3,local_60);
  if (iVar1 == 0) {
    iVar1 = FUN_004e7310(&local_15c,local_f0);
    if (iVar1 == 0) goto LAB_004621a7;
  }
  local_150 = local_15c;
  local_14c = local_158;
  local_148 = local_154;
  uVar2 = FUN_004e6d00(&local_120,local_30,local_18c,local_12c,local_174);
  FUN_004e6d00(uVar2);
  FUN_004e7490(local_174,&local_138,1);
  iVar1 = FUN_004e71d0(param_3,local_108);
  if (iVar1 != 0) {
    *param_4 = local_138;
    param_4[1] = local_134;
    param_4[2] = local_130;
    return param_4;
  }
  uVar2 = FUN_004e6d00(&local_120,local_12c,local_168,local_18c);
  FUN_004e6d00(local_a8,uVar2);
  uVar2 = FUN_004e7390(&local_114,local_168,local_174);
  FUN_004e6dd0(local_18c,uVar2);
  uVar2 = FUN_004e6c30(local_108,&local_114,local_168,local_18c);
  FUN_004e7390(uVar2);
  FUN_004e6dd0(local_174,local_18c,&local_144);
  iVar1 = FUN_004e71d0(param_3,local_48);
  if (iVar1 != 0) {
    *param_4 = local_144;
    param_4[1] = local_140;
    param_4[2] = local_13c;
    return param_4;
  }
  uVar2 = FUN_004e7390(&local_138,local_174,local_18c,&local_138);
  uVar2 = FUN_004e7390(uVar2);
  FUN_004e7390(uVar2);
  uVar2 = FUN_004e7390(&local_144,local_174,local_18c,&local_144);
  uVar2 = FUN_004e7390(uVar2);
  FUN_004e7390(uVar2);
  uVar2 = FUN_004e7390(&local_150,local_174,local_18c,&local_150);
  uVar2 = FUN_004e7390(uVar2);
  FUN_004e7390(uVar2);
  local_e4 = local_150;
  local_e0 = local_14c;
  local_dc = local_148;
  FUN_004e6c30(&local_144,&local_150,local_18c);
  uVar2 = FUN_004e6c30(&local_138,&local_144,local_168,local_174);
  FUN_004e6dd0(local_18c,uVar2);
  FUN_004e6c30(local_174,local_108,local_6c);
  uVar2 = FUN_004e6d00(&local_138,local_174,local_18c,&local_150,local_24);
  FUN_004e6c30(uVar2);
  uVar2 = FUN_004e6d00(&local_e4,param_3,local_18c,local_174);
  FUN_004e6ab0(local_24,uVar2);
  uVar2 = FUN_004e6ab0(local_6c,param_3,local_18c,&local_180);
  FUN_004e6dd0(local_174,uVar2);
  uVar2 = FUN_004e6d00(&local_180,&local_180,local_18c,local_18c,local_168,local_168,&local_180);
  uVar2 = FUN_004e6d00(uVar2);
  FUN_004e6d00(uVar2);
LAB_004621a7:
  uVar2 = FUN_004e6d00(param_3,local_12c,local_c,local_9c);
  FUN_00460d50(uVar2);
  iVar1 = FUN_004e4020(local_9c);
  if (iVar1 != 0) {
LAB_004621df:
    FUN_004e5630(iVar1,param_4);
    return param_4;
  }
  iVar3 = 0;
  do {
    FUN_00461430(&local_180,param_3,local_174);
    iVar1 = FUN_004e4020(local_174);
    if (iVar1 != 0) goto LAB_004621df;
    FUN_00460ff0(&local_180,param_3,local_90);
    iVar1 = FUN_004e4020(local_90);
    if (iVar1 != 0) goto LAB_004621df;
    FUN_004e6c30(local_90,local_9c,local_168);
    iVar1 = FUN_004e7310(local_168,local_54);
    if (iVar1 != 0) {
      FUN_004e5630(3,param_4);
      return param_4;
    }
    FUN_004e73d0(local_168,local_18c);
    local_cc = local_180;
    local_c8 = local_17c;
    local_c4 = local_178;
    uVar2 = FUN_004e6c30(&local_114,local_174,local_168,local_18c,local_84);
    FUN_004e6dd0(uVar2);
    FUN_004e6c30(&local_cc,local_84,&local_180);
    uVar2 = FUN_004e6d00(local_3c,&local_180,local_168);
    uVar2 = FUN_004e7620(local_84,local_18c,uVar2);
    iVar1 = FUN_004e7250(uVar2);
    if (iVar1 != 0) break;
    iVar1 = FUN_0052f820();
    if (iVar1 == 1) {
      FUN_004e5630(1,param_4);
      return param_4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xd);
  iVar1 = FUN_004e7290(param_1,local_12c);
  if (iVar1 != 0) {
    FUN_004e7730(&local_180,param_4);
    return param_4;
  }
  *param_4 = local_180;
  param_4[1] = local_17c;
  param_4[2] = local_178;
  return param_4;
}

