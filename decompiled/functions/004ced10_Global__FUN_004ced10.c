// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ced10
// entry: 004ced10  size: 5046


uint FUN_004ced10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,char *param_8,
                 undefined4 param_9,int param_10)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  byte local_104;
  byte local_103;
  byte local_102;
  byte local_101;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f4;
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
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  char local_88;
  char local_87;
  char local_86;
  char local_85;
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
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_0052f840();
  iVar4 = FUN_004e4000(param_1);
  if (iVar4 != 0) {
    FUN_004e5630(3,param_3);
    return 0;
  }
  iVar4 = FUN_004e4000(param_2);
  if (iVar4 != 0) {
    FUN_004e5630(3,param_3);
    return 0;
  }
  iVar4 = FUN_004e7290(param_2,param_1);
  if (iVar4 == 1) {
    FUN_004e5630(3,param_3);
    return 0;
  }
  FUN_0052f760(param_4,&local_18);
  iVar4 = FUN_004e4000(&local_18);
  if (iVar4 != 0) {
    FUN_004e5630(3,param_3);
    return 0;
  }
  local_11c = local_18;
  local_118 = local_14;
  local_114 = local_10;
  local_cc = local_18;
  local_c8 = local_14;
  local_c4 = local_10;
  local_e4 = local_18;
  local_90 = *param_7;
  local_e0 = local_14;
  local_88 = *param_8;
  local_dc = local_10;
  local_87 = param_8[1];
  uVar5 = FUN_0052f6b0(0x3b);
  local_f4 = CONCAT31(local_f4._1_3_,(char)uVar5);
  FUN_0052f6c0(0x3b,uVar5 | 2);
  iVar4 = FUN_004f9e70(param_8);
  while (iVar4 == 0) {
    FUN_004fe330(param_8,param_7);
    iVar4 = FUN_004f9e70(param_8);
  }
  FUN_0052f6c0(0x3b,local_f4);
  cVar1 = *param_8;
  if (param_10 == 1) {
    if (cVar1 == '=') {
      FUN_004fe330(param_8,param_7);
      local_8c = *param_7;
      local_86 = *param_8;
      local_85 = param_8[1];
    }
    else {
      if (cVar1 != ',') {
LAB_004d00b1:
        FUN_004d01a0(&local_e4,param_3,param_4,param_5,param_6);
        return 0;
      }
      local_8c = local_90;
      local_86 = local_88;
      local_85 = local_87;
    }
  }
  else if (cVar1 == '=') {
    FUN_004fe330(param_8,param_7);
    local_8c = *param_7;
    local_86 = *param_8;
    local_85 = param_8[1];
  }
  else {
    if (cVar1 != '\0') goto LAB_004d00b1;
    local_8c = local_90;
    local_86 = local_88;
    local_85 = local_87;
  }
  *param_7 = local_90;
  *param_8 = local_88;
  param_8[1] = local_87;
  local_102 = 0;
  local_101 = 0;
  FUN_004e5780(&local_84);
  FUN_004e5780(&local_78);
  local_f4 = local_f4 & 0xffffff00;
LAB_004cefba:
  local_103 = 0;
  FUN_004e5780(&local_f0);
  local_54 = local_e4;
  local_50 = local_e0;
  local_4c = local_dc;
  iVar4 = FUN_004d06d0(0,&local_e4,param_4,param_7,param_8,param_9,1);
  if (iVar4 == 0) goto LAB_004cf5f6;
  if (param_10 == 1) {
    if (*param_8 != '=') {
      iVar4 = FUN_004f9b90(param_8);
joined_r0x004cf03b:
      if (iVar4 == 0) goto LAB_004d00b1;
    }
  }
  else if (*param_8 != '=') {
    iVar4 = FUN_004f9b40(param_8);
    goto joined_r0x004cf03b;
  }
  iVar4 = FUN_004d06d0(1,&local_e4,param_4,param_7,param_8,param_9,1);
  if (iVar4 == 0) goto LAB_004cf5f6;
  if (param_10 == 1) {
    iVar4 = FUN_004f9b90(param_8);
    if (iVar4 == 0) goto LAB_004d00b1;
  }
  else if (*param_8 != '\0') goto LAB_004d00b1;
  while( true ) {
    FUN_004e6b80(&local_a8,&local_9c,&local_6c);
    FUN_004e5780(&local_11c);
    iVar4 = FUN_004e71d0(&local_6c,&local_11c);
    if (iVar4 == 1) break;
    while( true ) {
      local_30 = local_6c;
      local_2c = local_68;
      local_24 = local_54;
      local_28 = local_64;
      local_20 = local_50;
      local_1c = local_4c;
      FUN_004e5780(&local_11c);
      iVar4 = FUN_004e71d0(&local_54,&local_11c);
      if (iVar4 == 1) {
        FUN_004e5780(&local_11c);
        local_11c = CONCAT22(local_11c._2_2_,0x5108);
        local_3c = local_11c;
        local_38 = local_118;
        local_34 = local_114;
      }
      else {
        local_3c = local_54;
        local_38 = local_50;
        local_34 = local_4c;
      }
      iVar4 = FUN_004d04a0(&local_e4,param_4,param_7,param_8,param_9);
      if (iVar4 == 0) goto LAB_004cf5f6;
      local_b4 = local_48;
      local_b0 = local_44;
      local_ac = local_40;
      FUN_004e5780(&local_110);
      iVar4 = FUN_004e71d0(&local_b4,&local_110);
      if (iVar4 == 1) goto LAB_004cf5f6;
      FUN_004e6dd0(&local_6c,&local_b4,&local_11c);
      local_f0 = local_54;
      local_ec = local_50;
      local_e8 = local_4c;
      FUN_004e6b80(&local_54,&local_11c,&local_54);
      local_e4 = local_54;
      local_e0 = local_50;
      local_dc = local_4c;
      iVar4 = FUN_004d06d0(0,&local_e4,param_4,param_7,param_8,param_9,1);
      if ((iVar4 == 0) ||
         (iVar4 = FUN_004d06d0(1,&local_e4,param_4,param_7,param_8,param_9,1), iVar4 == 0))
      goto LAB_004cf5f6;
      FUN_004e6b80(&local_a8,&local_9c,&local_6c);
      FUN_004e5780(&local_110);
      iVar4 = FUN_004e71d0(&local_6c,&local_110);
      if (iVar4 == 1) goto LAB_004cf409;
      FUN_004e6b80(&local_54,&local_24,&local_11c);
      FUN_004e7620(&local_11c,&local_11c);
      FUN_004e7620(&local_3c,&local_110);
      FUN_004e6dd0(&local_11c,&local_110,&local_11c);
      FUN_004e7620(&local_11c,&local_11c);
      FUN_004e5780(&local_110);
      local_110 = CONCAT22(local_110._2_2_,0x7108);
      iVar4 = FUN_004e7250(&local_11c,&local_110);
      if (iVar4 == 1) goto LAB_004cf409;
      FUN_004e7620(&local_6c,&local_11c);
      FUN_004e7620(&local_30,&local_110);
      FUN_004e6b80(&local_110,&local_11c,&local_11c);
      FUN_004e5780(&local_110);
      iVar4 = FUN_004e72d0(&local_11c,&local_110);
      if (iVar4 == 1) break;
      iVar4 = FUN_0052f820();
      if (iVar4 == 1) {
        FUN_004e5630(1,param_3);
        FUN_004e5780(&local_11c);
        param_3[3] = local_11c;
        param_3[4] = local_118;
        param_3[5] = local_114;
        return 0;
      }
      local_102 = local_102 + 1;
      if (0x27 < local_102) {
        if (local_103 == 0) goto LAB_004cfb3f;
        goto LAB_004cfc7e;
      }
    }
    iVar4 = FUN_004d04a0(&local_e4,param_4,param_7,param_8,param_9);
    if (iVar4 == 0) {
LAB_004cf5f6:
      if (8 < local_103) goto LAB_004cfc7e;
      local_104 = 0;
LAB_004cf606:
      do {
        local_118 = local_a4;
        local_11c = local_a8;
        uVar2 = local_11c;
        local_114 = local_a0;
        local_11c._0_1_ = (char)local_a8;
        if ((((char)local_11c == -0x10) &&
            (local_11c._1_1_ = (char)((uint)local_a8 >> 8), local_11c._1_1_ != '\x03')) &&
           (local_11c._1_1_ != '\x11')) {
          *param_3 = local_a8;
          param_3[1] = local_a4;
          param_3[2] = local_a0;
          local_11c = uVar2;
          FUN_004e5780(&local_11c);
          param_3[3] = local_11c;
          param_3[4] = local_118;
          param_3[5] = local_114;
          return 0;
        }
        local_118 = local_98;
        local_11c = local_9c;
        uVar2 = local_11c;
        local_114 = local_94;
        local_11c._0_1_ = (char)local_9c;
        local_11c = uVar2;
        if ((((char)local_11c == -0x10) &&
            (local_11c._1_1_ = (char)((uint)local_9c >> 8), local_11c._1_1_ != '\x03')) &&
           (local_11c._1_1_ != '\x11')) {
          *param_3 = local_9c;
          param_3[1] = local_98;
          param_3[2] = local_94;
          FUN_004e5780(&local_11c);
          param_3[3] = local_11c;
          param_3[4] = local_118;
          param_3[5] = local_114;
          return 0;
        }
        local_104 = local_104 + 1;
        if (8 < local_104) goto LAB_004cfc7e;
        FUN_004e7620(&local_54,&local_11c);
        FUN_004e7620(&local_f0,&local_110);
        iVar4 = FUN_004e72d0(&local_11c,&local_110);
        if (iVar4 == 1) {
          local_11c = local_f0;
          local_118 = local_ec;
          local_114 = local_e8;
          local_110 = local_54;
          local_10c = local_50;
          local_108 = local_4c;
        }
        else {
          local_11c = local_54;
          local_118 = local_50;
          local_114 = local_4c;
          local_110 = local_f0;
          local_10c = local_ec;
          local_108 = local_e8;
        }
        FUN_004e6b80(&local_11c,&local_110,&local_11c);
        FUN_004e57c0(&local_110);
        FUN_004e6dd0(&local_11c,&local_110,&local_100);
        local_11c = local_54;
        local_118 = local_50;
        local_110 = local_f0;
        local_10c = local_ec;
        local_114 = local_4c;
        local_108 = local_e8;
        iVar4 = FUN_004e72d0(&local_11c,&local_110);
        if (iVar4 == 1) {
          local_110 = local_54;
          local_10c = local_50;
          local_108 = local_4c;
        }
        FUN_004e7620(&local_100,&local_11c);
        FUN_004e6a00(&local_11c,&local_110,&local_11c);
        FUN_004e7af0(&local_11c,&local_11c,4);
        local_50 = local_118;
        local_e0 = local_118;
        local_54 = local_11c;
        local_4c = local_114;
        local_e4 = local_11c;
        local_dc = local_114;
        iVar4 = FUN_004d06d0(0,&local_e4,param_4,param_7,param_8,param_9,1);
      } while ((iVar4 == 0) ||
              (iVar4 = FUN_004d06d0(1,&local_e4,param_4,param_7,param_8,param_9,1), iVar4 == 0));
      local_103 = local_103 + 1;
    }
    else {
      FUN_004e5780(&local_110);
      iVar4 = FUN_004e7250(&local_b4,&local_110);
      if (((iVar4 == 1) && (iVar4 = FUN_004e7290(&local_48,&local_110), iVar4 == 1)) ||
         ((iVar4 = FUN_004e7290(&local_b4,&local_110), iVar4 == 1 &&
          (iVar4 = FUN_004e7250(&local_48,&local_110), iVar4 == 1)))) goto LAB_004cfc7e;
      if (0x31 < local_101) {
LAB_004cfb3f:
        iVar4 = FUN_004d0250(&local_e4,param_4,param_7,param_8,param_9);
        if (iVar4 == 1) {
          iVar4 = FUN_004d0340(&local_e4,param_4,param_7,param_8,param_9);
          if (iVar4 == 2) {
            FUN_004d00f0(&local_e4,param_3,param_4,param_5,param_6);
            return 0;
          }
          if (iVar4 == 1) {
            local_110 = *param_1;
            local_10c = param_1[1];
            local_108 = param_1[2];
            iVar4 = FUN_004e7290(&local_54,&local_110);
            if (iVar4 == 1) goto LAB_004cfc7e;
            local_110 = *param_2;
            local_10c = param_2[1];
            local_108 = param_2[2];
            iVar4 = FUN_004e7250(&local_54,&local_110);
            if (iVar4 == 1) goto LAB_004cfc7e;
            local_f4 = 0;
            goto LAB_004cf52e;
          }
        }
        local_54 = local_d8;
        local_50 = local_d4;
        local_4c = local_d0;
        local_110 = *param_1;
        local_10c = param_1[1];
        local_108 = param_1[2];
        iVar4 = FUN_004e7290(&local_54,&local_110);
        if (iVar4 == 1) goto LAB_004cfc7e;
        local_110 = *param_2;
        local_10c = param_2[1];
        local_108 = param_2[2];
        iVar4 = FUN_004e7250(&local_54,&local_110);
        goto joined_r0x004cf520;
      }
      local_104 = 0;
      iVar4 = FUN_0052f820();
      while( true ) {
        if (iVar4 == 1) {
          FUN_004e5630(1,param_3);
          FUN_004e5780(&local_11c);
          param_3[3] = local_11c;
          param_3[4] = local_118;
          param_3[5] = local_114;
          return 0;
        }
        local_104 = local_104 + 1;
        if (0x1d < local_104) goto LAB_004cfc7e;
        FUN_004e6b80(&local_f0,&local_54,&local_11c);
        local_10c = 0x66666666;
        local_108 = CONCAT31(local_108._1_3_,0x66);
        local_110 = 0x66669609;
        FUN_004e6d00(&local_11c,&local_110,&local_11c);
        FUN_004e6a00(&local_11c,&local_54,&local_54);
        local_e4 = local_54;
        local_e0 = local_50;
        local_dc = local_4c;
        iVar4 = FUN_004d06d0(0,&local_e4,param_4,param_7,param_8,param_9,1);
        if ((iVar4 == 0) ||
           (iVar4 = FUN_004d06d0(1,&local_e4,param_4,param_7,param_8,param_9,1), iVar4 == 0))
        goto LAB_004cf606;
        FUN_004e6b80(&local_a8,&local_9c,&local_11c);
        FUN_004e7620(&local_11c,&local_11c);
        FUN_004e7620(&local_30,&local_110);
        iVar4 = FUN_004e7310(&local_11c,&local_110);
        if (iVar4 != 1) break;
        iVar4 = FUN_0052f820();
      }
      local_101 = local_101 + 1;
    }
  }
LAB_004cf409:
  iVar4 = FUN_004d0250(&local_e4,param_4,param_7,param_8,param_9);
  if (iVar4 == 0) {
    local_54 = local_d8;
    local_50 = local_d4;
    local_4c = local_d0;
  }
  else if (iVar4 == 1) {
    iVar4 = FUN_004d0340(&local_e4,param_4,param_7,param_8,param_9);
    if (iVar4 == 2) {
      FUN_004d00f0(&local_e4,param_3,param_4,param_5,param_6);
      return 0;
    }
    if (iVar4 == 0) {
      local_54 = local_d8;
      local_50 = local_d4;
      local_4c = local_d0;
    }
  }
  local_110 = *param_1;
  local_10c = param_1[1];
  local_108 = param_1[2];
  iVar4 = FUN_004e7290(&local_54,&local_110);
  if (iVar4 != 1) {
    local_110 = *param_2;
    local_10c = param_2[1];
    local_108 = param_2[2];
    iVar4 = FUN_004e7250(&local_54,&local_110);
joined_r0x004cf520:
    if (iVar4 != 1) {
      local_f4 = 1;
LAB_004cf52e:
      FUN_004e5780(&local_11c);
      *param_3 = local_54;
      param_3[1] = local_50;
      local_e4 = local_54;
      param_3[2] = local_4c;
      local_e0 = local_50;
      param_3[3] = local_11c;
      param_3[4] = local_118;
      param_3[5] = local_114;
      local_dc = local_4c;
      iVar4 = FUN_004d06d0(0,&local_e4,param_4,param_7,param_8,param_9,1);
      if (iVar4 == 0) {
        FUN_004d00f0(&local_e4,param_3,param_4,param_5,param_6);
        return 0;
      }
      local_84 = local_a8;
      local_80 = local_a4;
      local_7c = local_a0;
      iVar4 = FUN_004d06d0(1,&local_e4,param_4,param_7,param_8,param_9,1);
      if (iVar4 != 0) {
        local_78 = local_9c;
        local_74 = local_98;
        local_70 = local_94;
        FUN_0052f780(param_4,param_3);
        FUN_004e5780(&local_11c);
        *param_5 = local_84;
        param_5[3] = local_11c;
        param_5[1] = local_80;
        param_5[2] = local_7c;
        param_5[4] = local_118;
        param_5[5] = local_114;
        *param_6 = local_78;
        param_6[3] = local_11c;
        param_6[1] = local_74;
        param_6[4] = local_118;
        param_6[2] = local_70;
        param_6[5] = local_114;
        return local_f4;
      }
LAB_004cff9c:
      FUN_004d00f0(&local_e4,param_3,param_4,param_5,param_6);
      return 0;
    }
  }
LAB_004cfc7e:
  do {
    bVar3 = (char)local_f4 + 1;
    local_f4 = CONCAT31(local_f4._1_3_,bVar3);
    if (10 < bVar3) goto LAB_004cff9c;
    FUN_004e5780(&local_100);
    switch(local_f4 & 0xff) {
    case 2:
      local_100 = CONCAT22(local_100._2_2_,0x5109);
      goto switchD_004cfcb2_default;
    case 3:
      local_100 = CONCAT22(local_100._2_2_,0x5159);
      goto switchD_004cfcb2_default;
    case 4:
      local_100 = CONCAT22(local_100._2_2_,0x105);
      goto switchD_004cfcb2_default;
    case 5:
      local_100 = CONCAT22(local_100._2_2_,0x155);
      goto switchD_004cfcb2_default;
    case 6:
      local_100 = CONCAT22(local_100._2_2_,0x7110);
      goto switchD_004cfcb2_default;
    case 7:
      local_100 = CONCAT22(local_100._2_2_,0x7160);
      goto switchD_004cfcb2_default;
    case 8:
      local_110 = *param_1;
      local_100 = CONCAT22(local_100._2_2_,0x9919);
      local_10c = param_1[1];
      local_108 = param_1[2];
      FUN_004e7620(&local_110,&local_11c);
      break;
    case 9:
      local_100 = CONCAT22(local_100._2_2_,0x9919);
      local_110 = *param_2;
      local_10c = param_2[1];
      local_108 = param_2[2];
      FUN_004e7620(&local_110,&local_11c);
      break;
    case 10:
      goto switchD_004cfcb2_caseD_a;
    default:
      goto switchD_004cfcb2_default;
    }
    iVar4 = FUN_004e7310(&local_11c,&local_100);
  } while (iVar4 == 1);
  goto LAB_004cfe59;
switchD_004cfcb2_caseD_a:
  local_100._0_2_ = 0x210;
  local_11c = *param_1;
  local_118 = param_1[1];
  local_110 = *param_2;
  local_114 = param_1[2];
  local_10c = param_2[1];
  local_108 = param_2[2];
  FUN_004e6dd0(&local_11c,&local_100,&local_11c);
  FUN_004e6dd0(&local_110,&local_100,&local_110);
  FUN_004e6a00(&local_11c,&local_110,&local_110);
  local_100 = CONCAT22(local_100._2_2_,0x9919);
  FUN_004e7620(&local_110,&local_11c);
  iVar4 = FUN_004e7310(&local_11c,&local_100);
  if ((iVar4 == 1) || (iVar4 == -1)) goto LAB_004cfc7e;
LAB_004cfe59:
  local_100 = local_110;
  local_fc = local_10c;
  local_f8 = local_108;
switchD_004cfcb2_default:
  local_e4 = local_100;
  local_e0 = local_fc;
  local_dc = local_f8;
  local_102 = 0;
  goto LAB_004cefba;
}

