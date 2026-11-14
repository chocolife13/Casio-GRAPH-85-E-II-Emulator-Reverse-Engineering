// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e9ad0
// entry: 004e9ad0  size: 1068


undefined4 * FUN_004e9ad0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [3];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [28];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [28];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e5780(local_98);
  iVar5 = param_2 + 0xc;
  iVar1 = FUN_004e71d0(iVar5,local_98);
  if (iVar1 == 1) {
    FUN_004e6e60(param_1,param_2,param_3);
    FUN_004e6e60(param_1 + 0xc,param_2,param_3 + 3);
    return param_3;
  }
  iVar1 = FUN_004e71d0(param_2,local_98);
  if (iVar1 == 1) {
    FUN_004e6e60(param_1 + 0xc,iVar5,local_b0);
    FUN_004e6e60(param_1,iVar5,local_a4);
    FUN_004e7730(local_a4,local_a4);
    puVar4 = local_b0;
    puVar6 = param_3;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    return param_3;
  }
  iVar1 = FUN_004e96c0(param_1);
  if (iVar1 != 1) {
    iVar1 = FUN_004e9680(param_1);
    if (iVar1 != 1) goto LAB_004e9edf;
  }
  iVar1 = param_1 + 0xc;
  iVar2 = FUN_004e96c0(iVar1);
  if (iVar2 != 1) {
    iVar2 = FUN_004e9680(iVar1);
    if (iVar2 != 1) goto LAB_004e9edf;
  }
  iVar2 = FUN_004e96c0(param_2);
  if (iVar2 != 1) {
    iVar2 = FUN_004e9680(param_2);
    if (iVar2 != 1) goto LAB_004e9edf;
  }
  iVar2 = FUN_004e96c0(iVar5);
  if (iVar2 != 1) {
    iVar2 = FUN_004e9680(iVar5);
    if (iVar2 != 1) goto LAB_004e9edf;
  }
  FUN_004e48e0(param_2,local_28);
  FUN_004e48e0(iVar5,local_50);
  local_d4 = local_c;
  local_d0 = local_8;
  local_cc = local_4;
  local_bc = local_34;
  local_b8 = local_30;
  local_b4 = local_2c;
  do {
    uVar3 = FUN_004e6d90(&local_bc,&local_d4,&local_e0,&local_e0,&local_e0,&local_e0);
    uVar3 = FUN_004e7680(uVar3);
    uVar3 = FUN_004e6cc0(&local_d4,uVar3);
    FUN_004e6b40(&local_bc,uVar3);
    local_bc = local_d4;
    local_b8 = local_d0;
    local_d4 = local_e0;
    local_d0 = local_dc;
    local_b4 = local_cc;
    local_cc = local_d8;
    iVar2 = FUN_004e7290(&local_e0,local_98);
  } while (iVar2 != 0);
  FUN_004e6d00(&local_c,&local_34,local_c8);
  FUN_004e6dd0(local_c8,&local_bc,local_c8);
  FUN_004e6d00(local_c8,param_1,local_68);
  FUN_004e6d00(local_c8,iVar1,local_5c);
  FUN_004e6d00(local_c8,param_2,local_8c);
  FUN_004e6d00(local_c8,iVar5,local_80);
  uVar3 = FUN_004e6d00(local_80,local_80,local_74,local_c8);
  uVar3 = FUN_004e6d00(local_8c,local_8c,&local_e0,uVar3);
  FUN_004e6a00(uVar3);
  iVar5 = FUN_004e7210(local_c8,local_98);
  if (iVar5 == 1) {
    uVar3 = FUN_004e6d00(local_5c,local_80,local_74,&local_e0,local_c8,local_b0);
    uVar3 = FUN_004e6d00(local_68,local_8c,&local_e0,uVar3);
    uVar3 = FUN_004e6a00(uVar3);
    FUN_004e6e60(uVar3);
    uVar3 = FUN_004e6d00(local_68,local_80,local_74,&local_e0,local_c8,local_a4);
    uVar3 = FUN_004e6d00(local_5c,local_8c,&local_e0,uVar3);
    uVar3 = FUN_004e6b80(uVar3);
    FUN_004e6e60(uVar3);
    puVar4 = local_b0;
    puVar6 = param_3;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar5 = FUN_004e4020(local_b0);
    if (iVar5 == 0) {
      iVar5 = FUN_004e4020(local_a4);
      if (iVar5 == 0) {
        return param_3;
      }
    }
  }
LAB_004e9edf:
  puVar4 = (undefined4 *)FUN_004e97f0(param_1,param_2,param_3);
  return puVar4;
}

