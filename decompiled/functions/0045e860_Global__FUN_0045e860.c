// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045e860
// entry: 0045e860  size: 1754


undefined4 * FUN_0045e860(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
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
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84 [3];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined4 local_54 [3];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_90);
  FUN_004e57a0(local_84);
  FUN_004e57c0(local_54);
  FUN_004e5070(4,local_30);
  FUN_004e5070(0x10,local_3c);
  FUN_004e5780(&local_a8);
  local_a8 = 9;
  local_a7 = 0x95;
  local_a4 = 0x95;
  local_a6 = 100;
  local_a5 = 0x18;
  local_a3 = 0x83;
  local_a2 = 0x54;
  local_a1 = 0x77;
  local_a0 = 0x56;
  FUN_004e5840(local_48);
  local_c0 = *param_1;
  local_bc = param_1[1];
  local_b8 = param_1[2];
  FUN_004e7620(&local_c0,&local_cc);
  iVar1 = FUN_004e7250(&local_cc,local_48);
  if (iVar1 != 0) {
    FUN_004e6d00(&local_c0,&local_c0,&local_9c);
    FUN_004e6d00(&DAT_00580f30,&local_9c,local_b4);
    local_e4 = local_9c;
    local_e0 = local_98;
    local_dc = local_94;
    iVar1 = 3;
    puVar5 = &DAT_00580f3c;
    puVar7 = &DAT_00580f70;
    do {
      puVar4 = puVar5 + 0xc;
      uVar2 = FUN_004e6ab0(local_b4,puVar5,local_d8,&local_9c,local_b4);
      FUN_004e6d00(uVar2);
      puVar6 = puVar7 + 0xc;
      uVar2 = FUN_004e6ab0(&local_e4,puVar7,local_d8,&local_9c,&local_e4);
      FUN_004e6d00(uVar2);
      iVar1 = iVar1 + -1;
      puVar5 = puVar4;
      puVar7 = puVar6;
    } while (iVar1 != 0);
    uVar2 = FUN_004e6ab0(local_b4,puVar4,local_d8,local_6c);
    FUN_004e6d00(&local_c0,uVar2);
    uVar2 = FUN_004e6ab0(&local_e4,puVar6,local_d8,&local_f0);
    FUN_004e6dd0(local_6c,uVar2);
    if (param_2 != 0) {
LAB_0045ea70:
      FUN_004e6c30(local_84,&local_f0,param_3);
      return param_3;
    }
LAB_0045ea41:
    *param_3 = local_f0;
    param_3[1] = local_ec;
    param_3[2] = local_e8;
    return param_3;
  }
  iVar1 = FUN_004e7250(&local_cc,local_30);
  if (iVar1 == 0) {
    iVar1 = FUN_004e7250(&local_cc,local_3c);
    if (iVar1 != 0) {
      FUN_004e6d00(&local_cc,&local_cc,&local_9c);
      FUN_004e6dd0(local_84,&local_9c,&local_78);
      FUN_004e6d00(&DAT_00581070,&local_78,local_b4);
      local_e4 = local_78;
      local_e0 = local_74;
      local_dc = local_70;
      iVar1 = 4;
      puVar5 = &DAT_0058107c;
      puVar7 = &DAT_005810b8;
      do {
        puVar4 = puVar5 + 0xc;
        uVar2 = FUN_004e6ab0(local_b4,puVar5,local_d8,&local_78,local_b4);
        FUN_004e6d00(uVar2);
        puVar6 = puVar7 + 0xc;
        uVar2 = FUN_004e6ab0(&local_e4,puVar7,local_d8,&local_78,&local_e4);
        FUN_004e6d00(uVar2);
        iVar1 = iVar1 + -1;
        puVar5 = puVar4;
        puVar7 = puVar6;
      } while (iVar1 != 0);
      uVar2 = FUN_004e7730(&local_9c,local_d8,local_6c);
      FUN_004e73d0(uVar2);
      uVar2 = FUN_004e6ab0(local_b4,puVar4,local_d8,local_60);
      FUN_004e6d00(&local_78,uVar2);
      uVar2 = FUN_004e6ab0(&local_e4,puVar6,local_d8,local_24);
      FUN_004e6dd0(local_60,uVar2);
      uVar2 = FUN_004e6c30(&local_a8,local_24,local_d8,local_c);
      FUN_004e6d00(local_6c,uVar2);
      FUN_004e6dd0(local_c,&local_cc,&local_f0);
      if (param_2 == 0) {
        iVar1 = FUN_004e7250(&local_c0,&local_90);
        if (iVar1 != 0) {
          FUN_004e6c30(&local_f0,local_84,param_3);
          return param_3;
        }
        goto LAB_0045ea70;
      }
      iVar1 = FUN_004e7250(&local_c0,&local_90);
      if (iVar1 != 0) {
        FUN_004e6c30(local_54,&local_f0,param_3);
        return param_3;
      }
      goto LAB_0045ea41;
    }
    local_ec = local_8c;
    local_f0 = local_90;
    local_e8 = local_88;
    if (param_2 != 0) {
      iVar1 = FUN_004e7250(&local_c0,&local_90);
      goto joined_r0x0045eef8;
    }
    iVar1 = FUN_004e7250(&local_c0,&local_90);
    if (iVar1 == 0) {
      FUN_004e6c30(local_84,&local_f0,param_3);
      return param_3;
    }
  }
  else {
    FUN_004e6d00(&DAT_00580fa0,&local_cc,local_b4);
    local_e4 = local_cc;
    local_e0 = local_c8;
    local_dc = local_c4;
    iVar1 = 7;
    puVar5 = &DAT_00580fac;
    puVar7 = &DAT_00581010;
    do {
      puVar4 = puVar5 + 0xc;
      uVar2 = FUN_004e6ab0(local_b4,puVar5,local_d8,&local_cc,local_b4);
      FUN_004e6d00(uVar2);
      puVar6 = puVar7 + 0xc;
      uVar2 = FUN_004e6ab0(&local_e4,puVar7,local_d8,&local_cc,&local_e4);
      FUN_004e6d00(uVar2);
      iVar1 = iVar1 + -1;
      puVar5 = puVar4;
      puVar7 = puVar6;
    } while (iVar1 != 0);
    uVar2 = FUN_004e7730(&local_cc,local_d8,&local_cc,local_6c);
    FUN_004e6d00(uVar2);
    FUN_004e73d0(local_6c,local_18);
    uVar2 = FUN_004e6ab0(local_b4,puVar4,local_d8,local_60);
    FUN_004e6d00(local_18,uVar2);
    uVar2 = FUN_004e6ab0(&local_e4,puVar6,local_d8,&local_f0);
    FUN_004e6dd0(local_60,uVar2);
    if (param_2 != 0) {
      iVar1 = FUN_004e7250(&local_c0,&local_90);
joined_r0x0045eef8:
      if (iVar1 == 0) {
        *param_3 = local_f0;
        param_3[1] = local_ec;
        param_3[2] = local_e8;
        return param_3;
      }
      puVar8 = &local_f0;
      puVar3 = local_54;
      goto LAB_0045ec06;
    }
    iVar1 = FUN_004e7250(&local_c0,&local_90);
    if (iVar1 == 0) {
      FUN_004e6c30(local_84,&local_f0,param_3);
      return param_3;
    }
  }
  puVar8 = local_84;
  puVar3 = &local_f0;
LAB_0045ec06:
  FUN_004e6c30(puVar3,puVar8,param_3);
  return param_3;
}

