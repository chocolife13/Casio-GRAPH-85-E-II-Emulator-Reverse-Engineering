// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004cc400
// entry: 004cc400  size: 1053


undefined4 FUN_004cc400(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [6];
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
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = *(int **)(param_1 + 8);
  puVar4 = (undefined4 *)*piVar2;
  local_18 = *puVar4;
  local_14 = puVar4[1];
  local_10 = puVar4[2];
  if (param_3 == 1) {
    iVar1 = *piVar2;
    local_c = *(undefined4 *)(iVar1 + 0x30);
    local_8 = *(undefined4 *)(iVar1 + 0x34);
    local_4 = *(undefined4 *)(iVar1 + 0x38);
  }
  iVar1 = *piVar2;
  local_60 = *(undefined4 *)(iVar1 + 0x24);
  local_5c = *(undefined4 *)(iVar1 + 0x28);
  local_58 = *(undefined4 *)(iVar1 + 0x2c);
  if (param_3 == 1) {
    iVar1 = *piVar2;
    local_54 = *(undefined4 *)(iVar1 + 0x54);
    local_50 = *(undefined4 *)(iVar1 + 0x58);
    local_4c = *(undefined4 *)(iVar1 + 0x5c);
  }
  FUN_004e0c40(&local_18,&local_60,local_78,1);
  iVar1 = *piVar2;
  local_30 = *(undefined4 *)(iVar1 + 0xc);
  local_2c = *(undefined4 *)(iVar1 + 0x10);
  local_28 = *(undefined4 *)(iVar1 + 0x14);
  if (param_3 == 1) {
    iVar1 = *piVar2;
    local_24 = *(undefined4 *)(iVar1 + 0x3c);
    local_20 = *(undefined4 *)(iVar1 + 0x40);
    local_1c = *(undefined4 *)(iVar1 + 0x44);
  }
  iVar1 = *piVar2;
  local_48 = *(undefined4 *)(iVar1 + 0x18);
  local_44 = *(undefined4 *)(iVar1 + 0x1c);
  local_40 = *(undefined4 *)(iVar1 + 0x20);
  if (param_3 == 1) {
    iVar1 = *piVar2;
    local_3c = *(undefined4 *)(iVar1 + 0x48);
    local_38 = *(undefined4 *)(iVar1 + 0x4c);
    local_34 = *(undefined4 *)(iVar1 + 0x50);
  }
  FUN_004e0c40(&local_30,&local_48,local_90,1);
  FUN_004e0b00(local_78,local_90,local_78,1);
  FUN_004e3e70(local_78,local_78);
  iVar1 = FUN_004e4020(local_78);
  if (iVar1 != 0) {
    puVar4 = local_78;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  piVar2 = (int *)FUN_004ad630(((-(param_3 != 0) & 4U) + 4) * '\f');
  if (piVar2 == (int *)0x0) {
    FUN_004e5630(4,param_2);
    return 0;
  }
  FUN_004f96c0(param_2,piVar2,2,2,1 - param_3);
  FUN_004e0ef0(&local_60,local_78,local_90,1);
  iVar1 = FUN_004e4020(local_90);
  if (iVar1 != 0) {
    FUN_004ad6d0(piVar2);
    puVar4 = local_90;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  puVar4 = (undefined4 *)*piVar2;
  *puVar4 = local_90[0];
  puVar4[1] = local_90[1];
  puVar4[2] = local_90[2];
  if (param_3 == 1) {
    iVar1 = *piVar2;
    *(undefined4 *)(iVar1 + 0x30) = local_90[3];
    *(undefined4 *)(iVar1 + 0x34) = local_80;
    *(undefined4 *)(iVar1 + 0x38) = local_7c;
  }
  uVar3 = FUN_004e0ef0(&local_30,local_78,local_90,1,local_90,1);
  FUN_004e26b0(uVar3);
  iVar1 = FUN_004e4020(local_90);
  if (iVar1 != 0) {
    FUN_004ad6d0(piVar2);
    puVar4 = local_90;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 + 0xc) = local_90[0];
  *(undefined4 *)(iVar1 + 0x10) = local_90[1];
  *(undefined4 *)(iVar1 + 0x14) = local_90[2];
  if (param_3 == 1) {
    iVar1 = *piVar2;
    *(undefined4 *)(iVar1 + 0x3c) = local_90[3];
    *(undefined4 *)(iVar1 + 0x40) = local_80;
    *(undefined4 *)(iVar1 + 0x44) = local_7c;
  }
  uVar3 = FUN_004e0ef0(&local_48,local_78,local_90,1,local_90,1);
  FUN_004e26b0(uVar3);
  iVar1 = FUN_004e4020(local_90);
  if (iVar1 != 0) {
    FUN_004ad6d0(piVar2);
    puVar4 = local_90;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 + 0x18) = local_90[0];
  *(undefined4 *)(iVar1 + 0x1c) = local_90[1];
  *(undefined4 *)(iVar1 + 0x20) = local_90[2];
  if (param_3 == 1) {
    iVar1 = *piVar2;
    *(undefined4 *)(iVar1 + 0x48) = local_90[3];
    *(undefined4 *)(iVar1 + 0x4c) = local_80;
    *(undefined4 *)(iVar1 + 0x50) = local_7c;
  }
  FUN_004e0ef0(&local_18,local_78,local_90,1);
  iVar1 = FUN_004e4020(local_90);
  if (iVar1 != 0) {
    FUN_004ad6d0(piVar2);
    puVar4 = local_90;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 + 0x24) = local_90[0];
  *(undefined4 *)(iVar1 + 0x28) = local_90[1];
  *(undefined4 *)(iVar1 + 0x2c) = local_90[2];
  if (param_3 == 1) {
    iVar1 = *piVar2;
    *(undefined4 *)(iVar1 + 0x54) = local_90[3];
    *(undefined4 *)(iVar1 + 0x58) = local_80;
    *(undefined4 *)(iVar1 + 0x5c) = local_7c;
  }
  FUN_004e3e70(param_2,param_2);
  return 1;
}

