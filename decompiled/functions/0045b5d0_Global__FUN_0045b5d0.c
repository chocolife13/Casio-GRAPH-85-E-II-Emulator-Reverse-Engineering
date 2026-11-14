// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045b5d0
// entry: 0045b5d0  size: 3202


int FUN_0045b5d0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 *local_150;
  undefined1 local_14c [12];
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
  undefined1 local_104 [12];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4 [12];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [12];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [12];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_15c);
  FUN_004e57a0(&local_e0);
  FUN_004e5a40(&local_98);
  local_80 = local_98;
  local_6c = local_15c;
  local_60 = local_15c;
  local_54 = local_15c;
  local_48 = local_15c;
  local_3c = local_15c;
  local_128 = local_15c;
  local_7c = local_94;
  local_78 = local_90;
  local_70 = 1;
  local_68 = local_158;
  local_64 = local_154;
  local_5c = local_158;
  local_58 = local_154;
  local_50 = local_158;
  local_4c = local_154;
  local_44 = local_158;
  local_40 = local_154;
  local_38 = local_158;
  local_34 = local_154;
  local_124 = local_158;
  local_120 = local_154;
  puVar5 = (undefined4 *)FUN_0047ca80(*(undefined4 *)(param_2 + 4));
  if (((int)puVar5 < 1) ||
     (local_150 = puVar5, iVar6 = FUN_0047ca80(*(undefined4 *)(param_2 + 8)),
     puVar5 != (undefined4 *)iVar6)) {
    return 9;
  }
  if (puVar5 == (undefined4 *)0x1) {
    return 3;
  }
  FUN_004e5070(puVar5,local_18);
  iVar6 = FUN_0047cbb0(0x65,puVar5);
  if (iVar6 != 0) {
    FUN_0047cc00(0x65);
    return iVar6;
  }
  iVar6 = FUN_0047cbb0(0x66,puVar5);
  if (iVar6 != 0) {
    FUN_0047cc00(0x65);
    FUN_0047cc00(0x66);
    return iVar6;
  }
  iVar6 = FUN_0047cbb0(0x67,puVar5);
  if ((((iVar6 != 0) || (iVar6 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),1,local_d4), iVar6 != 0))
      || (iVar6 = FUN_0047cb50(0x65,1,local_d4), iVar6 != 0)) ||
     (((iVar6 = FUN_0047cac0(*(undefined4 *)(param_2 + 8),1,local_a4), iVar6 != 0 ||
       (iVar6 = FUN_0047cb50(0x66,1,local_a4), iVar6 != 0)) ||
      (iVar6 = FUN_0047cb50(0x67,1,&local_e0), iVar6 != 0)))) {
LAB_0045b7f9:
    FUN_0047cc00(0x65);
    FUN_0047cc00(0x66);
    FUN_0047cc00(0x67);
    return iVar6;
  }
  FUN_004e6ab0(&local_128,local_a4,&local_128);
  iVar10 = 2;
  local_160 = 1;
  iVar6 = 1;
  if (1 < (int)puVar5) {
    do {
      iVar7 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),iVar10,local_d4);
      if ((iVar7 != 0) || (iVar7 = FUN_0047cac0(0x65,1,local_104), iVar7 != 0)) goto LAB_0045be3b;
      iVar7 = FUN_004e7210(local_104,local_d4);
      iVar12 = 1;
      while (iVar11 = iVar6, iVar7 != 0) {
        iVar11 = iVar12 + 1;
        iVar12 = iVar11;
        if (iVar6 < iVar11) {
          local_160 = local_160 + 1;
          iVar7 = FUN_0047cb50(0x65,iVar11,local_d4);
          if (((iVar7 != 0) || (iVar7 = FUN_0047cb50(0x66,iVar11,&local_15c), iVar7 != 0)) ||
             (iVar7 = FUN_0047cb50(0x67,iVar11,&local_15c), iVar7 != 0)) goto LAB_0045be3b;
          break;
        }
        iVar7 = FUN_0047cac0(0x65,iVar11,local_104);
        if (iVar7 != 0) goto LAB_0045be3b;
        iVar7 = FUN_004e7210(local_104,local_d4);
      }
      iVar7 = FUN_0047cac0(*(undefined4 *)(param_2 + 8),iVar10,local_a4);
      if ((iVar7 != 0) || (iVar7 = FUN_0047cac0(0x66,iVar12,local_ec), iVar7 != 0))
      goto LAB_0045be3b;
      FUN_004e6ab0(local_ec,local_a4,local_ec);
      iVar7 = FUN_004e4020(local_ec);
      if ((iVar7 != 0) ||
         ((iVar7 = FUN_0047cb50(0x66,iVar12,local_ec), iVar7 != 0 ||
          (iVar7 = FUN_0047cac0(0x67,iVar12,local_bc), iVar7 != 0)))) goto LAB_0045be3b;
      FUN_004e6ab0(local_bc,&local_e0,local_bc);
      iVar6 = FUN_0047cb50(0x67,iVar12,local_bc);
      if (iVar6 != 0) goto LAB_0045b7f9;
      FUN_004e6ab0(&local_128,local_a4,&local_128);
      iVar6 = FUN_004e4020(&local_128);
      if (iVar6 != 0) goto LAB_0045b7f9;
      iVar10 = iVar10 + 1;
      iVar6 = iVar11;
      puVar5 = local_150;
    } while (iVar10 <= (int)local_150);
  }
  FUN_004e6dd0(&local_128,local_18,&local_128);
  iVar6 = 1;
  if (0 < local_160) {
    do {
      iVar7 = FUN_0047cac0(0x66,iVar6,local_ec);
      if ((iVar7 != 0) || (iVar7 = FUN_0047cac0(0x67,iVar6,local_bc), iVar7 != 0))
      goto LAB_0045be3b;
      FUN_004e6dd0(local_ec,local_bc,local_ec);
      iVar7 = FUN_0047cb50(0x66,iVar6,local_ec);
      if (iVar7 != 0) goto LAB_0045be3b;
      bVar4 = iVar6 < local_160;
      iVar6 = iVar6 + 1;
      puVar5 = local_150;
    } while (bVar4);
  }
  iVar10 = 1;
  local_110 = local_15c;
  local_10c = local_158;
  local_108 = local_154;
  if (0 < (int)puVar5) {
    do {
      iVar6 = 1;
      iVar7 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),iVar10,local_d4);
      if ((iVar7 != 0) || (iVar7 = FUN_0047cac0(0x65,1,local_104), iVar7 != 0)) goto LAB_0045be3b;
      iVar7 = FUN_004e7210(local_104,local_d4);
      while (iVar7 != 0) {
        iVar6 = iVar6 + 1;
        iVar7 = FUN_0047cac0(0x65,iVar6,local_104);
        if (iVar7 != 0) goto LAB_0045be3b;
        iVar7 = FUN_004e7210(local_104,local_d4);
      }
      iVar7 = FUN_0047cac0(*(undefined4 *)(param_2 + 8),iVar10,local_a4);
      if (iVar7 != 0) goto LAB_0045be3b;
      iVar6 = FUN_0047cac0(0x66,iVar6,local_14c);
      if (iVar6 != 0) goto LAB_0045b7f9;
      FUN_004e6c30(local_14c,local_a4,local_14c);
      FUN_004e6d00(local_14c,local_14c,local_14c);
      FUN_004e6ab0(&local_110,local_14c,&local_110);
      iVar10 = iVar10 + 1;
    } while (iVar10 <= (int)local_150);
  }
  FUN_004e5070(local_160,local_c);
  FUN_004e6c30(local_18,local_c,&local_f8);
  iVar6 = FUN_004e72d0(&local_f8,&local_15c);
  if (iVar6 != 0) {
    return 3;
  }
  FUN_004e6c30(local_c,&local_e0,&local_8c);
  iVar6 = 0;
  local_11c = local_15c;
  local_118 = local_158;
  local_114 = local_154;
  iVar10 = 1;
  if (0 < local_160) {
    do {
      iVar7 = FUN_0047cac0(0x66,iVar10,local_14c);
      if (iVar7 != 0) {
LAB_0045be3b:
        FUN_0047cc00(0x65);
        FUN_0047cc00(0x66);
        FUN_0047cc00(0x67);
        return iVar7;
      }
      FUN_004e6c30(local_14c,&local_128,local_14c);
      iVar7 = FUN_0047cac0(0x67,iVar10,local_bc);
      if (iVar7 != 0) goto LAB_0045be3b;
      FUN_004e6d00(local_14c,local_14c,local_14c);
      FUN_004e6d00(local_14c,local_bc,local_14c);
      FUN_004e6ab0(&local_11c,local_14c,&local_11c);
      iVar10 = iVar10 + 1;
      iVar7 = FUN_0047cac0(0x65,iVar10,local_104);
      if (iVar7 != 0) goto LAB_0045be3b;
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_160);
  }
  FUN_0047cc00(0x65);
  FUN_0047cc00(0x66);
  FUN_0047cc00(0x67);
  FUN_004e6dd0(&local_11c,&local_8c,&local_b0);
  FUN_004e6dd0(&local_110,&local_f8,&local_c8);
  iVar6 = FUN_004e71d0(&local_b0,&local_15c);
  if (iVar6 == 0) {
    iVar6 = FUN_004e7250(&local_c8,&local_e0);
    if (iVar6 != 0) {
      uVar8 = FUN_004e6d00(&local_c8,&local_98,local_14c);
      iVar6 = FUN_004e7290(&local_b0,uVar8);
      if (iVar6 != 0) {
        local_140 = local_80;
        local_13c = local_7c;
        local_138 = local_78;
        local_134 = local_15c;
        local_130 = local_158;
        local_12c = local_154;
        goto LAB_0045c03f;
      }
    }
    FUN_004e6dd0(&local_b0,&local_c8,&local_140);
    iVar6 = FUN_004e4020(&local_140);
    if (iVar6 != 0) {
      return iVar6;
    }
    local_60 = local_140;
    local_5c = local_13c;
    local_54 = local_98;
    local_58 = local_138;
    local_48 = local_8c;
    local_50 = local_94;
    local_4c = local_90;
    local_3c = local_f8;
    local_44 = local_88;
    local_40 = local_84;
    local_38 = local_f4;
    local_34 = local_f0;
    iVar6 = FUN_004556f0(0,&local_70);
    if (iVar6 != 0) {
      return iVar6;
    }
    local_134 = local_24;
    local_130 = local_20;
    local_12c = local_1c;
    iVar6 = FUN_004e4020(&local_134);
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  else {
    iVar6 = FUN_004e71d0(&local_c8,&local_15c);
    if (iVar6 != 0) {
      return 3;
    }
    local_140 = local_15c;
    local_13c = local_158;
    local_138 = local_154;
    local_134 = local_e0;
    local_130 = local_dc;
    local_12c = local_d8;
  }
LAB_0045c03f:
  puVar5 = (undefined4 *)(param_2 + 0xc);
  puVar1 = (undefined4 *)(param_2 + 0x18);
  puVar2 = (undefined4 *)(param_2 + 0x24);
  puVar3 = (undefined4 *)(param_2 + 0x30);
  puVar13 = (undefined4 *)(param_2 + 0x3c);
  *puVar5 = local_8c;
  *(undefined4 *)(param_2 + 0x10) = local_88;
  *(undefined4 *)(param_2 + 0x14) = local_84;
  *puVar1 = local_11c;
  *(undefined4 *)(param_2 + 0x1c) = local_118;
  *(undefined4 *)(param_2 + 0x20) = local_114;
  *puVar2 = local_b0;
  *(undefined4 *)(param_2 + 0x28) = local_ac;
  *(undefined4 *)(param_2 + 0x2c) = local_a8;
  *puVar3 = local_140;
  *(undefined4 *)(param_2 + 0x34) = local_13c;
  *(undefined4 *)(param_2 + 0x38) = local_138;
  *puVar13 = local_134;
  *(undefined4 *)(param_2 + 0x40) = local_130;
  *(undefined4 *)(param_2 + 0x44) = local_12c;
  local_150 = (undefined4 *)(param_2 + 0x48);
  *local_150 = local_f8;
  *(undefined4 *)(param_2 + 0x4c) = local_f4;
  *(undefined4 *)(param_2 + 0x50) = local_f0;
  puVar9 = (undefined4 *)(param_2 + 0x54);
  *puVar9 = local_110;
  *(undefined4 *)(param_2 + 0x58) = local_10c;
  *(undefined4 *)(param_2 + 0x5c) = local_108;
  local_74 = (undefined4 *)(param_2 + 0x60);
  *local_74 = local_c8;
  *(undefined4 *)(param_2 + 100) = local_c4;
  *(undefined4 *)(param_2 + 0x68) = local_c0;
  FUN_004e7910(puVar5,puVar5);
  FUN_004e7910(puVar1,puVar1);
  FUN_004e7910(puVar2,puVar2);
  FUN_004e7910(puVar3,puVar3);
  FUN_004e7910(puVar13,puVar13);
  FUN_004e7910(local_150,local_150);
  FUN_004e7910(puVar9,puVar9);
  FUN_004e7910(local_74,local_74);
  iVar6 = FUN_004e7250(puVar13,&local_15c);
  if (((((iVar6 == 0) && (iVar6 = FUN_004e7290(puVar13,&local_e0), iVar6 == 0)) &&
       (iVar6 = FUN_004e7250(&local_11c,&local_15c), iVar6 == 0)) &&
      ((iVar6 = FUN_004e7250(&local_b0,&local_15c), iVar6 == 0 &&
       (iVar6 = FUN_004e7250(&local_110,&local_15c), iVar6 == 0)))) &&
     (iVar6 = FUN_004e7250(&local_c8,&local_15c), iVar6 == 0)) {
    return 0;
  }
  return 3;
}

