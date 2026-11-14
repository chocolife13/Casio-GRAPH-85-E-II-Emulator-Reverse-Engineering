// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d2380
// entry: 004d2380  size: 1850


undefined4
FUN_004d2380(undefined4 *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined2 *param_5,undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
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
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined2 local_83;
  undefined1 local_81;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
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
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_83 = 0;
  local_8c = 0x10;
  local_8b = 4;
  local_8a = 0;
  local_89 = 0;
  local_88 = 0;
  local_87 = 0;
  local_86 = 0;
  local_85 = 0;
  local_84 = 0;
  local_81 = 0;
  FUN_004e5780(&local_60);
  FUN_004e57a0(&local_cc);
  FUN_004e57c0(local_3c);
  if ((*param_2 == '`') && (param_2[1] == '\x01')) {
    uVar3 = *param_5;
    uVar1 = *param_4;
    FUN_0052f780(0x58,param_1);
    iVar4 = FUN_004fc460(param_4,param_5,param_3,param_6,param_7 & 0x80 | 0x8104);
    if (iVar4 != 0) {
      local_dc._0_1_ = (undefined1)uVar3;
      local_dc._1_1_ = (undefined1)((ushort)uVar3 >> 8);
      *param_4 = uVar1;
      *(undefined1 *)param_5 = (undefined1)local_dc;
      *(undefined1 *)((int)param_5 + 1) = local_dc._1_1_;
      if (*(char *)((int)param_1 + 1) == '\0') {
        local_b4 = local_cc;
      }
      else {
        local_9c = *param_1;
        local_98 = param_1[1];
        local_94 = param_1[2];
        local_b4._2_2_ = (undefined2)((uint)local_cc >> 0x10);
        local_b4._0_2_ = CONCAT11(((byte)((uint)local_9c >> 8) & 0xf0) + 1,(char)local_9c);
      }
      FUN_004e7be0(&local_b4,&local_b4,0xfffffff8);
      iVar4 = FUN_004d2000(param_1,&local_b4,param_3,param_4,param_5,param_6,param_7);
      if (iVar4 != 0) {
        FUN_004e7af0(param_3,param_3,0xb);
        return 1;
      }
    }
  }
  else {
    if (param_2[1] == '\0') {
      *(undefined4 *)param_2 = local_cc;
      *(undefined4 *)(param_2 + 4) = local_c8;
      *(undefined4 *)(param_2 + 8) = local_c4;
      *param_2 = '\t';
    }
    piVar5 = (int *)FUN_004ad630(0xc0);
    if (piVar5 == (int *)0x0) {
      FUN_004e5630(4,param_3);
      return 0;
    }
    piVar6 = (int *)FUN_004ad630(0xc0);
    if (piVar6 == (int *)0x0) {
      FUN_004ad6d0(piVar5);
      FUN_004e5630(4,param_3);
      return 0;
    }
    if (*(char *)((int)param_1 + 1) == '\0') {
      local_9c = local_cc;
      local_98 = local_c8;
      local_94 = local_c4;
      puVar8 = &local_9c;
    }
    else {
      local_ac = local_c4;
      local_b0 = local_c8;
      local_9c = *param_1;
      local_98 = param_1[1];
      local_94 = param_1[2];
      local_b4._2_2_ = (undefined2)((uint)local_cc >> 0x10);
      local_b4._0_2_ = CONCAT11(((byte)((uint)local_9c >> 8) & 0xf0) + 1,(char)local_9c);
      puVar8 = &local_b4;
    }
    FUN_004e7be0(puVar8,&local_b4,0xfffffffe);
    iVar4 = FUN_004d1cc0(param_1,&local_b4,param_3,param_4,param_5,param_6,param_7);
    if (iVar4 == 0) {
      FUN_004ad6d0(piVar5);
      FUN_004ad6d0(piVar6);
      return 0;
    }
    iVar4 = FUN_004d2000(param_1,&local_b4,param_3,param_4,param_5,param_6,param_7);
    if (iVar4 == 0) {
      FUN_004ad6d0(piVar5);
      FUN_004ad6d0(piVar6);
      return 0;
    }
    local_d8 = *param_3;
    local_d4 = param_3[1];
    local_d0 = param_3[2];
    puVar8 = (undefined4 *)*piVar6;
    *puVar8 = local_d8;
    puVar8[1] = local_d4;
    puVar8[2] = local_d0;
    local_6c = local_cc;
    local_68 = local_c8;
    local_64 = local_c4;
    FUN_004e7be0(&local_6c,&local_6c,0xfffffff6);
    local_90 = 1;
    local_7c = 0xc;
    do {
      local_dc = piVar6;
      piVar6 = piVar5;
      iVar4 = local_7c;
      FUN_004e6dd0(&local_b4,local_3c,&local_b4);
      iVar7 = FUN_004d2000(param_1,&local_b4,param_3,param_4,param_5,param_6,param_7);
      if (iVar7 == 0) {
LAB_004d2a33:
        FUN_004ad6d0(local_dc);
        FUN_004ad6d0(piVar6);
        return 0;
      }
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      puVar8 = (undefined4 *)*piVar6;
      *puVar8 = *param_3;
      puVar8[1] = uVar1;
      puVar8[2] = uVar2;
      local_78 = local_cc;
      local_74 = local_c8;
      local_70 = local_c4;
      if (0xb < iVar4) {
        iVar4 = 0xc;
        local_80 = local_90;
        do {
          iVar7 = *piVar6 + -0xc + iVar4;
          local_d8 = *(undefined4 *)(*piVar6 + -0xc + iVar4);
          local_d4 = *(undefined4 *)(iVar7 + 4);
          local_d0 = *(undefined4 *)(iVar7 + 8);
          iVar7 = iVar4 + -0xc + *local_dc;
          local_c0 = *(undefined4 *)(iVar4 + -0xc + *local_dc);
          local_bc = *(undefined4 *)(iVar7 + 4);
          local_b8 = *(undefined4 *)(iVar7 + 8);
          FUN_004e6c30(&local_d8,&local_c0,&local_9c);
          FUN_004e6d00(&local_78,&local_8c,&local_78);
          FUN_004e6c30(&local_78,&local_cc,local_24);
          FUN_004e6dd0(&local_9c,local_24,local_30);
          FUN_004e6ab0(&local_d8,local_30,&local_c0);
          puVar8 = (undefined4 *)(*piVar6 + iVar4);
          iVar4 = iVar4 + 0xc;
          *puVar8 = local_c0;
          puVar8[1] = local_bc;
          local_80 = local_80 + -1;
          puVar8[2] = local_b8;
        } while (local_80 != 0);
        local_80 = 0;
        iVar4 = local_7c;
      }
      puVar8 = (undefined4 *)(*piVar6 + iVar4);
      local_d8 = *puVar8;
      local_d4 = puVar8[1];
      local_d0 = puVar8[2];
      iVar7 = iVar4 + -0xc + *local_dc;
      local_c0 = *(undefined4 *)(iVar4 + -0xc + *local_dc);
      local_bc = *(undefined4 *)(iVar7 + 4);
      local_b8 = *(undefined4 *)(iVar7 + 8);
      iVar7 = FUN_004e4020(&local_d8);
      if (iVar7 != 0) {
        *param_3 = local_d8;
        param_3[1] = local_d4;
        param_3[2] = local_d0;
        goto LAB_004d2a33;
      }
      local_18 = local_c0;
      local_14 = local_bc;
      local_10 = local_b8;
      local_54 = local_d8;
      local_50 = local_d4;
      local_4c = local_d0;
      iVar7 = FUN_004d2300(&local_54,&local_18,param_2);
      if (iVar7 == 1) {
        FUN_004e7af0(&local_54,param_3,0xb);
        FUN_004ad6d0(local_dc);
        FUN_004ad6d0(piVar6);
        return 1;
      }
      FUN_004e7620(&local_54,&local_54);
      iVar7 = FUN_004e7250(&local_54,&local_6c);
      if (iVar7 == 1) {
        *param_3 = local_60;
        param_3[1] = local_5c;
        param_3[2] = local_58;
        FUN_004ad6d0(local_dc);
        FUN_004ad6d0(piVar6);
        return 1;
      }
      local_7c = iVar4 + 0xc;
      local_90 = local_90 + 1;
      piVar5 = local_dc;
    } while (local_7c < 0xb5);
    FUN_004e5630(0x1d,param_3);
    FUN_004ad6d0(local_dc);
    FUN_004ad6d0(piVar6);
  }
  return 0;
}

