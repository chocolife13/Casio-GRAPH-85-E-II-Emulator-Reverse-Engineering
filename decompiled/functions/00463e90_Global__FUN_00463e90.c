// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00463e90
// entry: 00463e90  size: 926


int FUN_00463e90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_d44;
  undefined4 local_d40;
  undefined4 local_d3c;
  undefined4 local_d38;
  undefined4 local_d34;
  undefined4 local_d30;
  undefined4 local_d2c;
  undefined4 local_d28;
  undefined4 local_d24;
  undefined1 local_d20 [12];
  undefined4 local_d14;
  undefined4 local_d10;
  undefined4 local_d0c;
  undefined4 local_d08;
  undefined4 local_d04;
  undefined4 local_d00;
  undefined1 local_ce4 [12];
  undefined1 local_cd8 [24];
  uint local_cc0;
  undefined1 local_cbc;
  undefined1 local_8f8 [2268];
  undefined1 *local_1c;
  
  FUN_004e57a0(local_d20);
  FUN_004e4c30(&DAT_005bed3c,local_ce4);
  local_d44 = *(undefined4 *)(param_2 + 0x48);
  local_d40 = *(undefined4 *)(param_2 + 0x4c);
  local_d38 = *(undefined4 *)(param_2 + 0x48);
  local_d3c = *(undefined4 *)(param_2 + 0x50);
  local_d34 = *(undefined4 *)(param_2 + 0x4c);
  local_d30 = *(undefined4 *)(param_2 + 0x50);
  if (param_1 == 0) {
    puVar4 = (undefined4 *)(param_2 + 0x30);
    puVar3 = (undefined4 *)(param_2 + 0x3c);
    local_d14 = *puVar4;
    local_d10 = *(undefined4 *)(param_2 + 0x34);
    local_d08 = *puVar3;
    local_d0c = *(undefined4 *)(param_2 + 0x38);
    local_d04 = *(undefined4 *)(param_2 + 0x40);
    local_d00 = *(undefined4 *)(param_2 + 0x44);
  }
  else {
    puVar4 = (undefined4 *)(param_2 + 0x90);
    puVar3 = (undefined4 *)(param_2 + 0x9c);
    local_d14 = *puVar4;
    local_d10 = *(undefined4 *)(param_2 + 0x94);
    local_d08 = *puVar3;
    local_d0c = *(undefined4 *)(param_2 + 0x98);
    local_d04 = *(undefined4 *)(param_2 + 0xa0);
    local_d00 = *(undefined4 *)(param_2 + 0xa4);
  }
  iVar1 = FUN_004e7310(puVar4,local_ce4);
  iVar2 = FUN_004e7310(puVar3,local_ce4);
  if (iVar2 != 0 || iVar1 != 0) {
    FUN_0052b240(3);
    return -0xb;
  }
  FUN_004660f0(&local_d14);
  FUN_00463550(local_cd8,PTR_FUN_0058138c,&local_d44,8,&local_d14,0x1140);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == -1) {
    local_cc0 = local_cc0 | 0x10;
    goto LAB_004641da;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      local_cbc = 0;
    }
    goto LAB_004641da;
  }
  local_cc0 = local_cc0 | 0x30;
  if (param_3 != 0x22) {
    local_d44 = *(undefined4 *)(param_2 + 0xa8);
    local_d40 = *(undefined4 *)(param_2 + 0xac);
    local_d38 = *(undefined4 *)(param_2 + 0xb4);
    local_d3c = *(undefined4 *)(param_2 + 0xb0);
    local_d34 = *(undefined4 *)(param_2 + 0xb8);
    local_d30 = *(undefined4 *)(param_2 + 0xbc);
    goto LAB_004641da;
  }
  iVar1 = FUN_004e71d0(param_2 + 0x48,local_d20);
  if (iVar1 == 0) {
LAB_0046403a:
    iVar1 = FUN_00466790(puVar4,puVar3,param_2 + 0x54,&local_d44);
    if (iVar1 != 0) {
      FUN_0052b240(iVar1);
      return -0xb;
    }
    FUN_004e7910(param_2 + 0x48,&local_d2c);
    iVar1 = FUN_004e7250(&local_d2c,local_d20);
    if (iVar1 == 0) {
      iVar1 = FUN_004e7290(&local_d2c,local_d20);
      if (iVar1 == 0) {
        iVar1 = FUN_004e7250(puVar4,puVar3);
        if (iVar1 == 0) {
          iVar1 = FUN_004e7290(puVar4,puVar3);
          if (iVar1 != 0) {
            local_d44 = local_d2c;
            local_d40 = local_d28;
            local_d3c = local_d24;
          }
        }
        else {
          local_d38 = local_d2c;
          local_d34 = local_d28;
          local_d30 = local_d24;
        }
      }
      else {
        iVar1 = FUN_004e7250(&local_d44,&local_d2c);
        if (iVar1 != 0) {
          local_d38 = local_d2c;
          local_d34 = local_d28;
          local_d30 = local_d24;
        }
      }
    }
    else {
      iVar1 = FUN_004e7290(&local_d38,&local_d2c);
      if (iVar1 != 0) {
        local_d44 = local_d2c;
        local_d40 = local_d28;
        local_d3c = local_d24;
      }
    }
  }
  else {
    iVar1 = FUN_004e71d0(puVar4,puVar3);
    if (iVar1 == 0) goto LAB_0046403a;
  }
  *(undefined4 *)(param_2 + 0xa8) = local_d44;
  *(undefined4 *)(param_2 + 0xac) = local_d40;
  *(undefined4 *)(param_2 + 0xb0) = local_d3c;
  *(undefined4 *)(param_2 + 0xb4) = local_d38;
  *(undefined4 *)(param_2 + 0xb8) = local_d34;
  *(undefined4 *)(param_2 + 0xbc) = local_d30;
LAB_004641da:
  local_1c = local_cd8;
  FUN_00463330(local_8f8);
  iVar1 = FUN_00463470(local_8f8,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_004633e0(local_8f8,param_3,param_2 + 0x54);
  }
  return iVar1;
}

