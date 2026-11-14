// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d1cc0
// entry: 004d1cc0  size: 831


undefined4
FUN_004d1cc0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined1 *param_5,undefined4 param_6,uint param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_e0;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_90 [6];
  undefined4 local_78;
  byte local_60 [24];
  undefined1 local_48 [24];
  byte local_30 [24];
  undefined1 local_18 [24];
  
  local_cc = 0;
  local_cf = 0;
  local_c8 = 0;
  local_d8 = 9;
  local_cd = 0;
  local_c0 = 9;
  local_c4 = 0;
  local_b4 = 0;
  local_b7 = 0;
  local_b0 = 0;
  local_d7 = 0x99;
  local_d6 = 0;
  local_d5 = 0;
  local_d4 = 0;
  local_d3 = 0;
  local_d2 = 0;
  local_d1 = 0;
  local_d0 = 0;
  local_bf = 0x92;
  local_be = 0;
  local_bd = 0;
  local_bc = 0;
  local_bb = 0;
  local_ba = 0;
  local_b9 = 0;
  local_b8 = 0;
  local_b5 = 0;
  local_ac = 0;
  FUN_004e5800(local_48);
  uVar3 = *param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  FUN_0052f780(0x58,param_1);
  uVar6 = param_7 & 0x80 | 0x8104;
  iVar4 = FUN_004fc460(param_4,param_5,&local_78,param_6,uVar6);
  if (iVar4 == 0) {
    puVar5 = &local_78;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_3 = *puVar5;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
    }
    return 0;
  }
  FUN_004e5780(&local_a8);
  local_e0 = 0;
  while( true ) {
    while( true ) {
      *param_4 = uVar3;
      *param_5 = uVar1;
      param_5[1] = uVar2;
      FUN_004e0880(param_1,param_2,local_90,0);
      iVar4 = FUN_004e4020(local_90);
      if (iVar4 != 0) {
        puVar5 = local_90;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *param_3 = *puVar5;
          puVar5 = puVar5 + 1;
          param_3 = param_3 + 1;
        }
        return 0;
      }
      iVar4 = FUN_004e4020(&local_a8);
      if ((iVar4 != 0) && (iVar4 = FUN_004e71d0(local_90,param_1), iVar4 != 0)) {
        puVar5 = &local_a8;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *param_3 = *puVar5;
          puVar5 = puVar5 + 1;
          param_3 = param_3 + 1;
        }
        return 0;
      }
      FUN_0052f780(0x58,local_90);
      iVar4 = FUN_004fc460(param_4,param_5,&local_a8,param_6,uVar6);
      if (iVar4 != 0) break;
      if ((local_a8._1_1_ != '\x03') && (*(char *)((int)param_3 + 1) != '\x11')) {
        puVar5 = &local_a8;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *param_3 = *puVar5;
          puVar5 = puVar5 + 1;
          param_3 = param_3 + 1;
        }
        return 0;
      }
      FUN_004e0dd0(param_2,local_48,param_2,0);
      local_e0 = local_e0 + 1;
    }
    *param_4 = uVar3;
    *param_5 = uVar1;
    param_5[1] = uVar2;
    if (local_78._1_1_ == '\0') {
      return 1;
    }
    if (local_a8._1_1_ == '\0') break;
    FUN_004e0dd0(&local_a8,&local_78,local_60,0);
    FUN_004e23b0(local_60,local_18,0);
    FUN_004e0b00(local_18,&local_d8,local_30,0);
    if (((local_60[0] < 0x50) && (local_30[0] < 0x50)) &&
       (iVar4 = FUN_004e72d0(local_30,&local_c0), iVar4 != 0)) {
      return 1;
    }
    local_e0 = local_e0 + 1;
    FUN_004e0dd0(param_2,local_48,param_2,0);
    if (6 < local_e0) {
      return 1;
    }
  }
  return 1;
}

