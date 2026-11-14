// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d3b90
// entry: 004d3b90  size: 4039


uint FUN_004d3b90(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,undefined4 *param_5,
                 char *param_6,undefined4 param_7)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  undefined4 local_130;
  uint local_12c;
  uint local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  uint local_118;
  uint local_114;
  byte local_110 [12];
  undefined1 local_104 [12];
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [12];
  char local_84 [12];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  char local_6c [12];
  char local_60 [12];
  char local_54 [12];
  char local_48 [12];
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined1 local_30 [12];
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  FUN_004e57a0(local_ec);
  FUN_004e57c0(local_30);
  FUN_004e5070(0x2f,local_18);
  cVar1 = *param_6;
  cVar2 = param_6[1];
  if (*(char *)((int)param_3 + 1) == '\0') {
    FUN_004e57a0(param_3);
    *(undefined1 *)param_3 = 9;
    *(undefined1 *)((int)param_3 + 1) = 0x51;
  }
  if (((*param_6 == -0x7b) && (*(char *)*param_5 == 'X')) && (((char *)*param_5)[1] == ',')) {
    FUN_004d3a30(param_2,&local_148);
    FUN_004d3a30(param_1,param_4);
    FUN_004e6c30(&local_148,param_4,param_4);
    FUN_004e7910(param_4,param_4);
    return (uint)((char)*param_4 != -0x10);
  }
  FUN_004e6c30(param_2,param_1,local_6c);
  if (local_6c[0] == -0x10) {
    uVar7 = FUN_00501ed0(param_4);
    return uVar7;
  }
  uVar3 = *param_5;
  *param_6 = cVar1;
  param_6[1] = cVar2;
  FUN_0052f780(0x58,param_1);
  FUN_004fc460(param_5,param_6,param_4,param_7,0x8104);
  *param_5 = uVar3;
  *param_6 = cVar1;
  param_6[1] = cVar2;
  FUN_0052f780(0x58,param_2);
  FUN_004fc460(param_5,param_6,param_4,param_7,0x8104);
  local_120 = 0;
  puVar9 = param_2;
  do {
    if (*(char *)(((int)param_1 - (int)param_2) + (int)puVar9) != (char)*puVar9) break;
    local_120 = local_120 + 1;
    puVar9 = (uint *)((int)puVar9 + 1);
  } while (local_120 < 9);
  if (local_120 == 9) {
    FUN_004e5780(param_4);
    return 1;
  }
  local_11c = *param_1;
  local_118 = param_1[1];
  local_114 = param_1[2];
  local_130 = *param_2;
  local_12c = param_2[1];
  local_128 = param_2[2];
  FUN_004e5780(local_54);
  FUN_004e5780(local_60);
  FUN_004e5780(local_48);
  local_a0 = 0;
  FUN_004e5780(local_90);
  FUN_004e57a0(local_104);
  FUN_004e57a0(local_f8);
  local_a4 = 0;
  local_b0 = *param_3;
  local_ac = param_3[1];
  local_a8 = param_3[2];
LAB_004d3e2d:
  local_78 = 0x99999919;
  uStack_74 = 0x99999999;
  uStack_70 = CONCAT31(uStack_70._1_3_,0x99);
  do {
    iVar8 = FUN_004d3af0(&local_11c,&local_130,param_4);
    if (iVar8 == 0) {
      return 0;
    }
    if (*(char *)((int)param_4 + 1) == '\0') goto LAB_004d4b43;
    local_bc = *param_4;
    local_b8 = param_4[1];
    local_b4 = param_4[2];
    iVar8 = FUN_004d3b40(&local_11c,&local_130,param_4);
    if (iVar8 == 0) {
      return 0;
    }
    local_c8 = *param_4;
    local_c4 = param_4[1];
    local_c0 = param_4[2];
    *param_5 = uVar3;
    *param_6 = cVar1;
    param_6[1] = cVar2;
    FUN_0052f780(0x58,&local_c8);
    iVar8 = FUN_004fc460(param_5,param_6,param_4,param_7,0x8104);
    if (iVar8 == 0) {
      return 0;
    }
    if (local_a4 == 0) {
      cVar5 = FUN_0052f6b0(0x4a);
      if (((cVar5 == '\0') || (*param_6 != '\0')) && (*param_6 != ',')) {
        uVar7 = FUN_00501f30(param_4);
        return uVar7;
      }
      local_a4 = 1;
    }
    local_3c = *param_4;
    local_38 = param_4[1];
    local_9c = DAT_0058b9fc;
    local_34 = param_4[2];
    local_98 = DAT_0058ba00;
    local_94 = DAT_0058ba04;
    FUN_004e6d00(&local_3c,&local_9c,local_84);
    local_d4 = DAT_0058b9cc;
    local_d0 = DAT_0058b9d0;
    local_cc = DAT_0058b9d4;
    FUN_004e6d00(&local_3c,&local_d4,local_110);
    local_124 = 0;
    local_120 = 1;
    do {
      local_e0 = *(undefined4 *)(&DAT_0058b92c + local_124);
      local_dc = *(undefined4 *)(&DAT_0058b930 + local_124);
      local_d4 = *(undefined4 *)(&DAT_0058b984 + local_124);
      local_d8 = *(undefined4 *)(&DAT_0058b934 + local_124);
      local_d0 = *(undefined4 *)(&DAT_0058b988 + local_124);
      local_cc = *(undefined4 *)(&DAT_0058b98c + local_124);
      iVar8 = local_120 >> 1;
      local_9c = (&DAT_0058b9d8)[iVar8 * 3];
      local_98 = (&DAT_0058b9dc)[iVar8 * 3];
      local_94 = (&DAT_0058b9e0)[iVar8 * 3];
      if (local_11c._1_1_ == '\0') {
        FUN_004e6c30(local_ec,&local_e0,&local_13c);
        FUN_004e6d00(&local_bc,&local_13c,&local_148);
      }
      else if (local_130._1_1_ == '\0') {
        FUN_004e6ab0(local_ec,&local_e0,&local_13c);
        FUN_004e6d00(&local_c8,&local_13c,&local_148);
      }
      else {
        FUN_004e6d00(&local_e0,&local_bc,&local_148);
        local_13c = local_148;
        local_138 = local_144;
        local_134 = local_140;
        FUN_004e6c30(&local_c8,&local_148,&local_148);
      }
      if ((byte)local_148 == -0x10) goto LAB_004d4b43;
      *param_5 = uVar3;
      *param_6 = cVar1;
      param_6[1] = cVar2;
      FUN_0052f780(0x58,&local_148);
      iVar8 = FUN_004fc460(param_5,param_6,param_4,param_7,0x8104);
      if (iVar8 == 0) {
        return 0;
      }
      local_148 = *param_4;
      local_144 = param_4[1];
      local_140 = param_4[2];
      if (local_11c._1_1_ == '\0') {
        FUN_004e6ab0(local_ec,&local_e0,&local_13c);
        FUN_004e6d00(&local_bc,&local_13c,&local_13c);
      }
      else if (local_130._1_1_ == '\0') {
        FUN_004e6c30(local_ec,&local_e0);
        FUN_004e6d00(&local_c8,&local_13c,&local_13c);
      }
      else {
        FUN_004e6ab0(&local_c8,&local_13c,&local_13c);
      }
      if ((char)local_13c == -0x10) goto LAB_004d4b43;
      *param_5 = uVar3;
      *param_6 = cVar1;
      param_6[1] = cVar2;
      FUN_0052f780(0x58,&local_13c);
      iVar8 = FUN_004fc460(param_5,param_6,param_4,param_7,0x8104);
      if (iVar8 == 0) {
        return 0;
      }
      local_13c = *param_4;
      local_138 = param_4[1];
      local_134 = param_4[2];
      FUN_004e6ab0(&local_148,&local_13c,&local_148);
      FUN_004e6d00(&local_148,&local_d4,&local_13c);
      FUN_004e6ab0(&local_13c,local_110,local_110);
      if (local_110[0] == 0xf0) goto LAB_004d4b43;
      FUN_004e6d00(&local_148,&local_9c,&local_13c);
      FUN_004e6ab0(&local_13c,local_84,local_84);
      if (local_84[0] == -0x10) goto LAB_004d4b43;
      local_120 = local_120 + 2;
      local_124 = local_124 + 0x18;
    } while (local_124 < 0x3c);
    local_124 = 0;
    do {
      local_e0 = *(undefined4 *)(&DAT_0058b920 + local_124);
      local_dc = *(undefined4 *)(&DAT_0058b924 + local_124);
      local_d8 = *(undefined4 *)(&DAT_0058b928 + local_124);
      local_d4 = *(undefined4 *)(&DAT_0058b978 + local_124);
      local_d0 = *(undefined4 *)(&DAT_0058b97c + local_124);
      local_cc = *(undefined4 *)(&DAT_0058b980 + local_124);
      FUN_004e6d00(&local_e0,&local_bc,&local_148);
      local_13c = local_148;
      local_138 = local_144;
      local_134 = local_140;
      FUN_004e6c30(&local_c8,&local_148,&local_148);
      if ((byte)local_148 == -0x10) goto LAB_004d4b43;
      *param_5 = uVar3;
      *param_6 = cVar1;
      param_6[1] = cVar2;
      FUN_0052f780(0x58,&local_148);
      iVar8 = FUN_004fc460(param_5,param_6,param_4,param_7,0x8104);
      if (iVar8 == 0) {
        return 0;
      }
      local_148 = *param_4;
      local_144 = param_4[1];
      local_140 = param_4[2];
      FUN_004e6ab0(&local_c8,&local_13c,&local_13c);
      if ((char)local_13c == -0x10) goto LAB_004d4b43;
      *param_5 = uVar3;
      *param_6 = cVar1;
      param_6[1] = cVar2;
      FUN_0052f780(0x58,&local_13c);
      iVar8 = FUN_004fc460(param_5,param_6,param_4,param_7,0x8104);
      if (iVar8 == 0) {
        return 0;
      }
      local_13c = *param_4;
      local_138 = param_4[1];
      local_134 = param_4[2];
      FUN_004e6ab0(&local_148,&local_13c,&local_148);
      FUN_004e6d00(&local_148,&local_d4,&local_13c);
      FUN_004e6ab0(&local_13c,local_110,local_110);
      if (local_110[0] == 0xf0) goto LAB_004d4b43;
      local_124 = local_124 + 0x18;
    } while (local_124 < 0x54);
    FUN_004e6d00(&local_bc,local_110,local_110);
    if ((local_110[0] == 0xf0) || (FUN_004e6d00(&local_bc,local_84,local_84), local_84[0] == -0x10))
    goto LAB_004d4b43;
    FUN_004e6c30(local_110,local_84,&local_148);
    uVar7 = local_148;
    bVar6 = (byte)local_148;
    if ((byte)local_148 == 0xf0) goto LAB_004d4b43;
    do {
      bVar4 = bVar6 + 0x50;
      if (0x9f < (byte)(bVar6 + 0x50)) {
        bVar4 = bVar6 + 0xb0;
      }
      bVar6 = bVar4;
    } while (0x4f < bVar6);
    bVar4 = local_148._1_1_;
    local_148 = CONCAT31(local_148._1_3_,bVar6);
    if ((bVar4 & 0xf) < 5) {
      iVar8 = 2;
      do {
        if (*(char *)((int)&local_148 + iVar8) != '\0') break;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 9);
      if (iVar8 == 9) {
        local_148 = uVar7 & 0xffff0000;
      }
    }
    local_24 = local_148;
    local_20 = local_144;
    local_1c = local_140;
    iVar8 = FUN_004e7290(&local_148,&local_78);
    if ((iVar8 == 1) && (local_a0 = local_a0 + 1, local_a0 == 0x100)) goto LAB_004d4b43;
    local_78 = local_148;
    uStack_74 = local_144;
    uStack_70 = local_140;
    iVar8 = FUN_004e7290(&local_148,&local_b0);
    if (iVar8 == 0) goto LAB_004d481e;
    FUN_004e6a00(local_90,local_ec,local_90);
    FUN_004e6a00(local_f8,local_f8,local_f8);
    iVar8 = FUN_004e7310(local_90,local_18);
    if (iVar8 != 0) break;
    FUN_004e6a00(local_104,local_104,local_104);
    FUN_004e6dd0(&local_bc,local_6c,&local_148);
    FUN_004e6d00(&local_148,param_3,&local_b0);
    if ((char)local_b0 == -0x10) goto LAB_004d4b43;
    FUN_004e6a00(local_104,local_ec,&local_130);
    FUN_004e6b80(&local_130,local_f8,&local_130);
    FUN_004e6dd0(&local_130,local_f8,&local_130);
    FUN_004e6d00(&local_130,local_6c,&local_130);
    FUN_004e6ab0(&local_130,param_1,&local_130);
    if ((char)local_130 == -0x10) goto LAB_004d4b43;
  } while( true );
  FUN_004e6ab0(local_54,local_60,&local_13c);
  FUN_004e6ab0(&local_13c,local_110,&local_148);
  if ((byte)local_148 != -0x10) {
    FUN_004e6c30(&local_148,&local_13c,&local_148);
    bVar6 = (byte)local_148;
    if ((byte)local_148 != 0xf0) {
      do {
        bVar4 = bVar6 + 0x50;
        if (0x9f < (byte)(bVar6 + 0x50)) {
          bVar4 = bVar6 + 0xb0;
        }
        bVar6 = bVar4;
      } while (0x4f < bVar6);
      local_148 = CONCAT31(local_148._1_3_,bVar6);
      iVar8 = FUN_004e7290(&local_148,param_3);
      if (iVar8 != 0) {
        uVar7 = FUN_00501eb0(param_4);
        return uVar7;
      }
      FUN_004e6b80(local_90,local_ec,local_90);
      FUN_004e6dd0(local_f8,local_30,local_f8);
LAB_004d481e:
      if (local_110[0] < 0x50) {
        FUN_004e6ab0(local_54,local_110,local_54);
        cVar5 = local_54[0];
      }
      else {
        FUN_004e6ab0(local_60,local_110,local_60);
        cVar5 = local_60[0];
      }
      if (((cVar5 != -0x10) && (FUN_004e6ab0(local_48,&local_24,local_48), local_48[0] != -0x10)) &&
         (iVar8 = FUN_004e7290(local_48,param_3), iVar8 == 0)) {
        while( true ) {
          iVar8 = FUN_004e71d0(local_104,local_ec);
          if (iVar8 != 0) {
            FUN_004e6ab0(local_54,local_60,&local_148);
            FUN_004e7910(&local_148,&local_148);
            FUN_004e7af0(&local_148,param_4,0xb);
            return (uint)((char)*param_4 != -0x10);
          }
          FUN_004e7950(local_104,local_30,param_4);
          iVar8 = FUN_004e7210(param_4,local_c);
          if (iVar8 == 0) break;
          FUN_004e6c30(local_90,local_ec,local_90);
          FUN_004e6dd0(local_f8,local_30,local_f8);
          FUN_004e6b80(local_104,local_ec,local_104);
          FUN_004e6dd0(local_104,local_30,local_104);
          FUN_004e6ab0(&local_b0,&local_b0,&local_b0);
          FUN_004e6b80(local_104,local_f8,&local_11c);
          FUN_004e6dd0(&local_11c,local_f8,&local_11c);
          FUN_004e6d00(&local_11c,local_6c,&local_11c);
          FUN_004e6ab0(&local_11c,param_1,&local_11c);
          if ((char)local_11c == -0x10) goto LAB_004d4b43;
        }
        FUN_004e6a00(local_104,local_ec,local_104);
        local_148 = local_130;
        local_144 = local_12c;
        local_140 = local_128;
        FUN_004e6a00(local_104,local_ec,&local_130);
        FUN_004e6b80(&local_130,local_f8,&local_130);
        FUN_004e6dd0(&local_130,local_f8,&local_130);
        FUN_004e6d00(&local_130,local_6c,&local_130);
        FUN_004e6ab0(&local_130,param_1,&local_130);
        local_11c = local_148;
        local_118 = local_144;
        local_114 = local_140;
        goto LAB_004d3e2d;
      }
    }
  }
LAB_004d4b43:
  uVar7 = FUN_00501ed0(param_4);
  return uVar7;
}

