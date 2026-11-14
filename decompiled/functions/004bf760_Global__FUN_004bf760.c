// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004bf760
// entry: 004bf760  size: 2688


undefined4
FUN_004bf760(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12,
            undefined4 *param_13,undefined4 *param_14)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [24];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_138 [24];
  undefined4 local_120 [6];
  undefined4 local_108 [6];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_d8 [24];
  undefined4 local_c0 [6];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_48 [24];
  undefined4 local_30 [6];
  undefined1 local_18 [24];
  
  FUN_004e5780(&local_1a4);
  FUN_004e5840(local_48);
  FUN_004e57a0(local_108);
  FUN_004e57c0(local_90);
  FUN_004e5070(3,local_18);
  FUN_004e26b0(local_108,local_30,0);
  FUN_004e57e0(local_a8);
  FUN_004e7be0(local_a8,local_a8,0xfffffff9);
  local_60 = *param_8;
  local_5c = param_8[1];
  local_180 = *param_10;
  local_58 = param_8[2];
  local_17c = param_10[1];
  local_178 = param_10[2];
  while (iVar1 = FUN_004e71d0(param_10,&local_1a4), iVar1 != 1) {
    iVar1 = FUN_004e7290(param_10,&local_1a4);
    if (iVar1 == 1) {
      puVar2 = local_108;
      puVar3 = local_120;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      iVar1 = FUN_004e7250(param_10,&local_1a4);
      if (iVar1 == 1) {
        puVar2 = local_30;
        puVar3 = local_120;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      else {
        local_120[0] = local_1a4;
        local_120[1] = local_1a0;
        local_120[2] = local_19c;
      }
    }
    FUN_004e0c40(local_120,&local_180,&local_1d4,0);
    iVar1 = FUN_004e7290(&local_1d4,&local_1a4);
    if (iVar1 == 1) {
      *param_7 = *param_5;
      param_7[1] = param_5[1];
      param_7[2] = param_5[2];
      local_180 = *param_9;
      local_17c = param_9[1];
      local_178 = param_9[2];
      FUN_004e0b00(param_6,param_5,param_8,0);
      local_168 = *param_8;
      local_164 = param_8[1];
      local_160 = param_8[2];
    }
    FUN_004e23b0(&local_180,&local_1d4,0);
    FUN_004e23b0(param_10,&local_1bc,0);
    iVar1 = FUN_004e7250(&local_1d4,&local_1bc);
    if (iVar1 == 1) {
      *param_5 = *param_6;
      param_5[1] = param_6[1];
      param_5[2] = param_6[2];
      *param_6 = *param_7;
      param_6[1] = param_7[1];
      param_6[2] = param_7[2];
      *param_7 = *param_5;
      param_7[1] = param_5[1];
      param_7[2] = param_5[2];
      *param_9 = *param_10;
      param_9[1] = param_10[1];
      param_9[2] = param_10[2];
      *param_10 = local_180;
      param_10[1] = local_17c;
      param_10[2] = local_178;
      local_180 = *param_9;
      local_17c = param_9[1];
      local_178 = param_9[2];
    }
    FUN_004e0b00(param_7,param_6,&local_1d4,0);
    FUN_004e0c40(local_48,&local_1d4,&local_150,0);
    FUN_004e23b0(param_6,&local_1d4,0);
    FUN_004e23b0(&local_60,&local_1bc,0);
    iVar1 = FUN_004e7290(&local_1bc,&local_1d4);
    if (iVar1 == 1) {
      local_1d4 = local_1bc;
      local_1d0 = local_1b8;
      local_1cc = local_1b4;
    }
    FUN_004e0c40(local_a8,&local_1d4,local_c0,0);
    FUN_004e23b0(&local_150,&local_1d4,0);
    iVar1 = FUN_004e7250(&local_1d4,local_c0);
    if ((iVar1 == 1) || (iVar1 = FUN_004e71d0(param_10,&local_1a4), iVar1 == 1)) break;
    FUN_004e23b0(&local_168,&local_1d4,0);
    FUN_004e23b0(param_9,&local_1bc,0);
    FUN_004e23b0(param_10,local_198,0);
    iVar1 = FUN_004e7250(&local_1d4,local_c0);
    if ((iVar1 != 1) && (iVar1 = FUN_004e7250(&local_1bc,local_198), iVar1 != 1)) {
      FUN_004e0dd0(param_10,param_9,local_120,0);
      iVar1 = FUN_004e71d0(param_5,param_7);
      if (iVar1 == 1) {
        FUN_004e0c40(local_90,&local_150,&local_1d4);
        FUN_004e0c40(&local_1d4,local_120,local_d8,0);
        FUN_004e0b00(local_108,local_120,local_138,0);
      }
      else {
        FUN_004e0dd0(param_9,&local_180,local_138,0);
        FUN_004e0dd0(param_10,&local_180,local_78,0);
        FUN_004e0b00(local_78,local_108,&local_1d4,0);
        FUN_004e0b00(param_6,param_5,&local_1bc,0);
        FUN_004e0c40(&local_1d4,&local_1bc,&local_1d4,0);
        FUN_004e0b00(local_138,local_78,&local_1bc,0);
        FUN_004e0c40(local_90,&local_150,local_198,0);
        FUN_004e0c40(local_198,local_138,local_198,0);
        FUN_004e0c40(local_198,&local_1bc,&local_1bc,0);
        FUN_004e0b00(&local_1bc,&local_1d4,&local_1bc,0);
        FUN_004e0c40(local_120,&local_1bc,local_d8,0);
        FUN_004e0b00(local_138,local_108,&local_1d4,0);
        FUN_004e0b00(local_78,local_108,&local_1bc,0);
        FUN_004e0b00(local_120,local_108,local_198,0);
        FUN_004e0c40(&local_1d4,&local_1bc,&local_1d4,0);
        FUN_004e0c40(&local_1d4,local_198,local_138,0);
      }
      iVar1 = FUN_004e7290(local_d8,&local_1a4);
      if (iVar1 == 1) {
        FUN_004e26b0(local_138,local_138,0);
LAB_004bfdf4:
        FUN_004e0c40(local_90,local_d8,&local_1d4,0);
        FUN_004e0c40(local_c0,local_138,&local_1bc,0);
        FUN_004e23b0(&local_1bc,&local_1bc,0);
        FUN_004e0c40(local_18,&local_150,local_198,0);
        FUN_004e0c40(local_198,local_138,local_198,0);
        FUN_004e0b00(local_198,&local_1bc,&local_1bc,0);
        FUN_004e0c40(local_48,&local_168,local_198,0);
        FUN_004e0c40(local_198,local_138,local_198,0);
        FUN_004e23b0(local_198,local_198,0);
        iVar1 = FUN_004e7250(&local_1d4,&local_1bc);
        if ((iVar1 != 1) || (iVar1 = FUN_004e7250(local_d8,local_198), iVar1 != 1))
        goto LAB_004bff4e;
        local_168 = *param_8;
        local_164 = param_8[1];
        local_160 = param_8[2];
        FUN_004e0dd0(local_d8,local_138,param_8,0);
        goto LAB_004bff8b;
      }
      if (iVar1 == 0) {
        FUN_004e26b0(local_d8,local_d8,0);
        goto LAB_004bfdf4;
      }
      if (iVar1 != -1) goto LAB_004bfdf4;
      FUN_004e5630(3,&local_f0);
LAB_004c00e2:
      *param_6 = local_f0;
      param_6[1] = local_ec;
      goto LAB_004c00e7;
    }
LAB_004bff4e:
    local_168 = local_150;
    *param_8 = local_150;
    param_8[1] = local_14c;
    local_160 = local_148;
    param_8[2] = local_148;
    local_164 = local_14c;
LAB_004bff8b:
    *param_5 = *param_6;
    param_5[1] = param_6[1];
    param_5[2] = param_6[2];
    *param_9 = *param_10;
    param_9[1] = param_10[1];
    param_9[2] = param_10[2];
    FUN_004e23b0(param_8,&local_1d4,0);
    iVar1 = FUN_004e7290(&local_1d4,local_c0);
    puVar2 = param_8;
    if (iVar1 == 1) {
LAB_004c001d:
      FUN_004e0880(param_6,puVar2,param_6,0);
    }
    else {
      iVar1 = FUN_004e7290(param_6,param_7);
      if (iVar1 != 1) {
        puVar2 = local_c0;
        goto LAB_004c001d;
      }
      FUN_004e0b00(param_6,local_c0,param_6,0);
    }
    *param_11 = *param_6;
    param_11[1] = param_6[1];
    param_11[2] = param_6[2];
    iVar1 = FUN_004bec40(param_1,param_2,param_3,param_4,param_11,param_12,param_13,param_14);
    if (iVar1 == 0) {
      local_f0 = *param_3;
      local_ec = param_3[1];
      local_e8 = param_3[2];
      goto LAB_004c00e2;
    }
    *param_10 = *param_13;
    param_10[1] = param_13[1];
    param_10[2] = param_13[2];
  }
  iVar1 = FUN_0052f820();
  if (iVar1 == 0) {
    return 1;
  }
  FUN_004e5630(1,&local_f0);
  *param_6 = local_f0;
  param_6[1] = local_ec;
LAB_004c00e7:
  param_6[2] = local_e8;
  *param_7 = local_f0;
  param_7[1] = local_ec;
  param_7[2] = local_e8;
  *param_8 = local_f0;
  param_8[1] = local_ec;
  param_8[2] = local_e8;
  *param_5 = local_f0;
  param_5[1] = local_ec;
  param_5[2] = local_e8;
  *param_9 = local_f0;
  param_9[1] = local_ec;
  param_9[2] = local_e8;
  *param_10 = local_f0;
  param_10[1] = local_ec;
  param_10[2] = local_e8;
  *param_13 = local_f0;
  param_13[1] = local_ec;
  param_13[2] = local_e8;
  *param_11 = local_f0;
  param_11[1] = local_ec;
  param_11[2] = local_e8;
  *param_12 = local_f0;
  param_12[1] = local_ec;
  param_12[2] = local_e8;
  *param_3 = local_f0;
  param_3[1] = local_ec;
  param_3[2] = local_e8;
  *param_4 = local_f0;
  param_4[1] = local_ec;
  param_4[2] = local_e8;
  *param_14 = local_f0;
  param_14[1] = local_ec;
  param_14[2] = local_e8;
  return 0;
}

