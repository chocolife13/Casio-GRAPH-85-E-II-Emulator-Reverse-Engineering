// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00458ea0
// entry: 00458ea0  size: 1008


int FUN_00458ea0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
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
  undefined1 local_d0 [12];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
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
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_30);
  FUN_004e57a0(local_3c);
  FUN_004e5a60(&local_24);
  FUN_004e5a40(&local_48);
  local_c0 = local_30;
  local_b4 = local_30;
  local_a8 = local_30;
  local_9c = local_30;
  local_90 = local_30;
  local_c4 = 1;
  local_bc = local_2c;
  local_b8 = local_28;
  local_b0 = local_2c;
  local_ac = local_28;
  local_a4 = local_2c;
  local_a0 = local_28;
  local_98 = local_2c;
  local_94 = local_28;
  local_8c = local_2c;
  local_88 = local_28;
  if (param_1 == 0) {
    local_f4 = *(undefined4 *)(param_2 + 0x14);
    local_f0 = *(undefined4 *)(param_2 + 0x18);
    local_e8 = *(undefined4 *)(param_2 + 0x20);
    local_ec = *(undefined4 *)(param_2 + 0x1c);
    local_e4 = *(undefined4 *)(param_2 + 0x24);
    local_e0 = *(undefined4 *)(param_2 + 0x28);
  }
  else {
    iVar2 = FUN_0045e040((undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x38),
                         *(undefined4 *)(param_2 + 0x3c),&local_f4,&local_e8);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_2 + 0x58);
    *puVar4 = local_f4;
    *(undefined4 *)(param_2 + 0x5c) = local_f0;
    *(undefined4 *)(param_2 + 0x60) = local_ec;
    FUN_004e7910(puVar4,puVar4);
    puVar4 = (undefined4 *)(param_2 + 100);
    *puVar4 = local_e8;
    *(undefined4 *)(param_2 + 0x68) = local_e4;
    *(undefined4 *)(param_2 + 0x6c) = local_e0;
    FUN_004e7910(puVar4,puVar4);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_2 + 0x34);
  }
  iVar2 = FUN_00451810(&local_e8);
  if (iVar2 == 0) {
    iVar1 = param_2 + 0x2c;
    iVar2 = FUN_00451710(iVar1);
    if (iVar2 == 0) {
      uVar3 = FUN_004e7390(iVar1,local_c,local_d0);
      FUN_004e6dd0(&local_e8,uVar3);
      iVar2 = FUN_004e7310(local_d0,local_3c);
      if (iVar2 == 0) {
        uVar3 = FUN_004e6c30(&local_f4,param_2 + 8,local_18,local_d0,&local_100);
        FUN_004e6dd0(uVar3);
      }
      else {
        FUN_004e6dd0(&local_f4,local_d0,local_18);
        uVar3 = FUN_004e6dd0(param_2 + 8,local_d0,local_c,&local_100);
        FUN_004e6c30(local_18,uVar3);
      }
      iVar2 = FUN_004e4020(&local_100);
      if (iVar2 != 0) {
        return 3;
      }
      puVar4 = (undefined4 *)(param_2 + 0x40);
      *puVar4 = local_100;
      *(undefined4 *)(param_2 + 0x44) = local_fc;
      *(undefined4 *)(param_2 + 0x48) = local_f8;
      FUN_004e7910(puVar4,puVar4);
      iVar2 = *(int *)(param_2 + 4);
      FUN_004e6c30(iVar1,local_3c,&local_90);
      if (iVar2 == 0) {
        uVar3 = FUN_004e7620(&local_100,&local_54,&local_b4);
        FUN_004e7730(uVar3);
        local_a8 = local_54;
        local_a4 = local_50;
        local_a0 = local_4c;
        iVar2 = FUN_00454b60(0,&local_c4);
        if (iVar2 != 0) {
          return iVar2;
        }
        FUN_004e6c30(local_3c,&local_78,&local_dc);
      }
      else {
        if (iVar2 == 1) {
          local_b4 = local_24;
          local_b0 = local_20;
          local_ac = local_1c;
          local_a8 = local_100;
          local_a4 = local_fc;
        }
        else {
          local_b4 = local_100;
          local_b0 = local_fc;
          local_ac = local_f8;
          local_a8 = local_48;
          local_a4 = local_44;
          local_f8 = local_40;
        }
        local_a0 = local_f8;
        iVar2 = FUN_00454b60(0,&local_c4);
        if (iVar2 != 0) {
          return iVar2;
        }
        local_dc = local_78;
        local_d8 = local_74;
        local_d4 = local_70;
      }
      puVar4 = (undefined4 *)(param_2 + 0x4c);
      *puVar4 = local_dc;
      *(undefined4 *)(param_2 + 0x50) = local_d8;
      *(undefined4 *)(param_2 + 0x54) = local_d4;
      FUN_004e7910(puVar4,puVar4);
      iVar2 = FUN_004518b0(puVar4);
    }
  }
  return iVar2;
}

