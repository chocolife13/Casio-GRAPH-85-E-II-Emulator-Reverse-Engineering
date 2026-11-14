// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004601a0
// entry: 004601a0  size: 2989


undefined4 *
FUN_004601a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_1a8 [12];
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190 [12];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  uint local_178;
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
  undefined1 local_12c [12];
  undefined1 local_120 [12];
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
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
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
  
  FUN_004e5780(&local_184);
  FUN_004e5840(local_84);
  FUN_004e57a0(&local_19c);
  FUN_004e57c0(local_9c);
  FUN_004e6ab0(&local_19c,local_9c,local_3c);
  FUN_004e57e0(local_c0);
  FUN_004e7be0(local_c0,local_c0,0xfffffff2);
  FUN_004e5070(0x96,local_30);
  FUN_004e5a40(local_c);
  local_178 = 0;
  iVar1 = FUN_004e7250(param_1,&local_184);
  if ((((iVar1 == 0) && (iVar1 = FUN_004e7250(param_2,&local_184), iVar1 == 0)) &&
      ((iVar1 = FUN_004e71d0(param_1,&local_184), iVar1 == 0 ||
       (iVar1 = FUN_004e71d0(param_2,&local_184), iVar1 == 0)))) &&
     ((iVar1 = FUN_004e7250(param_3,&local_184), iVar1 == 0 &&
      (iVar1 = FUN_004e7290(param_3,&local_19c), iVar1 == 0)))) {
    iVar1 = FUN_004e7250(param_4,&local_184);
    if ((iVar1 != 0) || (iVar1 = FUN_004e7290(param_4,&local_19c), iVar1 != 0)) {
      local_178 = 4;
    }
    uVar2 = FUN_004e6ab0(param_3,param_4,local_190,local_84,local_1a8);
    FUN_004e6c30(uVar2);
    uVar2 = FUN_004e6c30(local_1a8,local_84,local_190,local_1a8);
    FUN_004e7620(uVar2);
    FUN_004e6d00(local_3c,local_c0,local_190);
    iVar1 = FUN_004e7290(local_1a8,local_190);
    if ((((iVar1 == 0) &&
         ((iVar1 = FUN_004e71d0(param_3,&local_184), iVar1 == 0 ||
          (iVar1 = FUN_004e71d0(param_1,&local_184), iVar1 == 0)))) &&
        ((iVar1 = FUN_004e71d0(param_4,&local_184), iVar1 == 0 ||
         (iVar1 = FUN_004e71d0(param_2,&local_184), iVar1 == 0)))) && (local_178 == 0)) {
      iVar1 = FUN_004e71d0(param_3,&local_184);
      if ((iVar1 != 0) || (iVar1 = FUN_004e71d0(param_2,&local_184), iVar1 != 0)) {
        *param_5 = local_184;
        param_5[1] = local_180;
        param_5[2] = local_17c;
        *param_6 = local_19c;
        param_6[1] = local_198;
        param_6[2] = local_194;
        return param_5;
      }
      iVar1 = FUN_004e71d0(param_4,&local_184);
      if ((iVar1 != 0) || (iVar1 = FUN_004e71d0(param_1,&local_184), iVar1 != 0)) {
        *param_5 = local_19c;
        param_5[1] = local_198;
        param_5[2] = local_194;
        *param_6 = local_184;
        param_6[1] = local_180;
        param_6[2] = local_17c;
        return param_5;
      }
      uVar2 = FUN_004e6ab0(param_1,param_2,local_1a8,local_9c,local_190);
      FUN_004e6ab0(uVar2);
      uVar2 = FUN_004e6ab0(param_1,&local_19c,local_1a8,local_190,local_cc);
      FUN_004e6dd0(uVar2);
      iVar1 = FUN_004e7250(param_3,local_cc);
      if (iVar1 == 0) {
        local_144 = *param_4;
        local_140 = param_4[1];
        local_13c = param_4[2];
        local_168 = *param_2;
        local_164 = param_2[1];
        local_160 = param_2[2];
        local_150 = *param_1;
        local_14c = param_1[1];
        local_148 = param_1[2];
        local_108 = *param_3;
        local_104 = param_3[1];
        local_100 = param_3[2];
      }
      else {
        local_144 = *param_3;
        local_140 = param_3[1];
        local_13c = param_3[2];
        local_168 = *param_1;
        local_164 = param_1[1];
        local_160 = param_1[2];
        local_150 = *param_2;
        local_14c = param_2[1];
        local_148 = param_2[2];
        local_108 = *param_4;
        local_104 = param_4[1];
        local_100 = param_4[2];
      }
      local_178 = (uint)(iVar1 != 0);
      FUN_004e6ab0(&local_168,&local_150,local_54);
      FUN_004e6ab0(&local_168,&local_19c,local_18);
      FUN_004e6c30(&local_168,&local_19c,local_24);
      local_a8 = local_19c;
      local_b4 = local_19c;
      local_174 = local_19c;
      local_a4 = local_198;
      local_b0 = local_198;
      local_170 = local_198;
      local_a0 = local_194;
      local_ac = local_194;
      local_16c = local_194;
      uVar2 = FUN_004e6dd0(local_54,local_18,local_1a8,&local_144,local_190);
      FUN_004e6d00(uVar2);
      FUN_004e7730(local_190,local_12c);
      FUN_004e6ab0(&local_19c,local_12c,&local_e4);
      local_d8 = local_184;
      local_d4 = local_180;
      local_d0 = local_17c;
      local_fc = local_184;
      local_f8 = local_180;
      local_f4 = local_17c;
      local_f0 = local_184;
      local_ec = local_180;
      local_e8 = local_17c;
      local_138 = local_184;
      local_134 = local_180;
      local_130 = local_17c;
      local_114 = local_184;
      local_110 = local_180;
      local_10c = local_17c;
      local_15c = local_184;
      local_158 = local_180;
      local_154 = local_17c;
      FUN_004e6d00(local_30,local_c0,local_60);
      FUN_004e7620(&local_174,local_cc);
      uVar2 = FUN_004e6c30(&local_174,&local_114,local_1a8,local_90);
      FUN_004e7620(uVar2);
      uVar2 = FUN_004e6d00(local_60,local_cc,local_1a8,local_90);
      iVar3 = FUN_004e7250(uVar2);
      iVar1 = 0;
      do {
        if ((iVar3 == 0) || (499 < iVar1)) {
          uVar2 = FUN_004e7410(&local_144,local_190,local_1a8);
          FUN_004e6d00(&local_168,uVar2);
          uVar2 = FUN_004e7410(&local_108,local_120,local_190);
          FUN_004e6d00(&local_150,uVar2);
          FUN_004e6ab0(local_1a8,local_190,local_120);
          uVar2 = FUN_004e7410(&local_168,local_190,local_1a8);
          FUN_004e6c30(local_120,uVar2);
          FUN_004600d0(&local_168,&local_150,local_190);
          uVar2 = FUN_004e6c30(local_1a8,local_190,local_120,local_78);
          FUN_004e73d0(uVar2);
          if (local_178 == 0) {
            FUN_004e6d00(local_78,&local_174,param_6);
            FUN_004e6c30(&local_19c,param_6,param_5);
            return param_5;
          }
          FUN_004e6d00(local_78,&local_174,param_5);
          FUN_004e6c30(&local_19c,param_5,param_6);
          return param_5;
        }
        FUN_004e6ab0(&local_15c,&local_19c,&local_15c);
        FUN_004e6d00(local_9c,&local_15c,local_48);
        uVar2 = FUN_004e6c30(&local_150,&local_15c,local_190,local_1a8);
        FUN_004e6d00(&local_15c,uVar2);
        uVar2 = FUN_004e6ab0(local_24,local_48,local_190,local_120);
        FUN_004e6dd0(local_1a8,uVar2);
        uVar2 = FUN_004e6ab0(&local_168,local_48,local_6c,local_190);
        FUN_004e6dd0(local_120,uVar2);
        FUN_004e6d00(local_190,&local_144,local_12c);
        uVar2 = FUN_004e6d00(local_12c,&local_a8,local_1a8,&local_d8);
        FUN_004e6ab0(&local_174,uVar2);
        uVar2 = FUN_004e6d00(local_12c,&local_b4,local_1a8,&local_fc);
        FUN_004e6ab0(&local_e4,uVar2);
        uVar2 = FUN_004e6ab0(&local_168,&local_15c,local_1a8,local_6c,local_190);
        FUN_004e6dd0(uVar2);
        uVar2 = FUN_004e6ab0(local_54,&local_15c,local_1a8,local_120);
        FUN_004e6d00(local_190,uVar2);
        uVar2 = FUN_004e6ab0(local_6c,&local_19c,local_1a8,local_190);
        FUN_004e6dd0(local_120,uVar2);
        uVar2 = FUN_004e6d00(local_190,&local_144,local_1a8,local_12c);
        FUN_004e7730(uVar2);
        uVar2 = FUN_004e6d00(local_12c,&local_174,local_1a8,&local_f0);
        FUN_004e6ab0(&local_d8,uVar2);
        uVar2 = FUN_004e6d00(local_12c,&local_e4,local_1a8,&local_138);
        FUN_004e6ab0(&local_fc,uVar2);
        local_114 = local_174;
        local_110 = local_170;
        local_10c = local_16c;
        iVar3 = FUN_004e7250(&local_138,&local_19c);
        if (iVar3 != 0) {
          FUN_004e6d00(local_c,&local_138,local_190);
          uVar2 = FUN_004e7620(&local_f0,local_1a8,local_190);
          iVar3 = FUN_004e7290(uVar2);
          if (iVar3 != 0) break;
        }
        FUN_004e6dd0(&local_f0,&local_138,&local_174);
        FUN_004e6dd0(&local_d8,&local_138,&local_a8);
        FUN_004e6dd0(&local_fc,&local_138,&local_b4);
        if (iVar1 + 1 == 1) {
          local_e4 = local_19c;
          local_e0 = local_198;
          local_dc = local_194;
        }
        FUN_004e7620(&local_174,local_cc);
        uVar2 = FUN_004e6c30(&local_174,&local_114,local_1a8,local_90);
        FUN_004e7620(uVar2);
        iVar3 = FUN_0052f820();
        if (iVar3 == 1) {
          FUN_004e5630(1,param_5);
          return param_5;
        }
        uVar2 = FUN_004e6d00(local_60,local_cc,local_1a8,local_90);
        iVar3 = FUN_004e7250(uVar2);
        iVar1 = iVar1 + 1;
      } while( true );
    }
  }
  FUN_004e5630(3,param_5);
  return param_5;
}

