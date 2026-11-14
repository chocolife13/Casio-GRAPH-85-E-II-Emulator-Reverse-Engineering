// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00454b60
// entry: 00454b60  size: 916


int FUN_00454b60(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_6c);
  FUN_004e57a0(local_30);
  FUN_004e5840(local_c);
  FUN_004e57c0(local_18);
  local_3c = *(undefined4 *)(param_2 + 0x34);
  local_38 = *(undefined4 *)(param_2 + 0x38);
  local_78 = *(undefined4 *)(param_2 + 0x10);
  local_34 = *(undefined4 *)(param_2 + 0x3c);
  local_74 = *(undefined4 *)(param_2 + 0x14);
  local_70 = *(undefined4 *)(param_2 + 0x18);
  local_84 = *(undefined4 *)(param_2 + 0x1c);
  local_80 = *(undefined4 *)(param_2 + 0x20);
  local_7c = *(undefined4 *)(param_2 + 0x24);
  iVar1 = FUN_00451810(&local_3c);
  if (iVar1 != 0) {
    return iVar1;
  }
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_2 + 0x24);
  iVar1 = FUN_004e71d0(&local_78,&local_84);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x4c) = local_6c;
    *(undefined4 *)(param_2 + 0x50) = local_68;
    *(undefined4 *)(param_2 + 0x54) = local_64;
    return 0;
  }
  FUN_00461430(&local_84,&local_3c,local_60);
  iVar1 = FUN_004e4020(local_60);
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar2 = FUN_004e7730(&local_78,&local_54,&local_84);
  iVar1 = FUN_004e71d0(uVar2);
  if (iVar1 != 0) {
    uVar2 = FUN_004e6d00(local_18,local_60,local_24,&local_54);
    FUN_004e6c30(local_30,uVar2);
    iVar1 = FUN_004e7290(&local_78,&local_84);
    if (iVar1 == 0) {
      local_90 = local_54;
      local_8c = local_50;
      local_88 = local_4c;
    }
    else {
      FUN_004e7730(&local_54,&local_90);
    }
    goto LAB_00454cff;
  }
  FUN_00461430(&local_78,&local_3c,local_48);
  iVar1 = FUN_004e4020(local_48);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_004e72d0(&local_78,&local_84);
  if (iVar1 == 0) {
    iVar1 = FUN_004e72d0(&local_78,&local_6c);
    if (iVar1 != 0) {
      puVar5 = &local_90;
      puVar4 = local_48;
      puVar3 = local_60;
      goto LAB_00454eb5;
    }
    iVar1 = FUN_004e72d0(&local_84,&local_6c);
    if ((iVar1 == 0) || (iVar1 = FUN_004e7250(&local_6c,&local_78), iVar1 == 0)) {
      puVar5 = &local_90;
      puVar4 = local_60;
      puVar3 = local_48;
      goto LAB_00454eb5;
    }
    uVar2 = FUN_004e6c30(local_30,local_48,local_24,local_60,&local_54);
    FUN_004e6c30(uVar2);
    FUN_004e7730(&local_54,&local_90);
  }
  else {
    iVar1 = FUN_004e72d0(&local_84,&local_6c);
    if (iVar1 == 0) {
      iVar1 = FUN_004e72d0(&local_78,&local_6c);
      if ((iVar1 == 0) || (iVar1 = FUN_004e7250(&local_6c,&local_84), iVar1 == 0)) {
        puVar5 = &local_90;
        puVar4 = local_60;
        puVar3 = local_48;
      }
      else {
        puVar5 = &local_90;
        puVar4 = local_60;
        puVar3 = (undefined1 *)FUN_004e6c30(local_30,local_48,&local_54,puVar4,puVar5);
      }
    }
    else {
      puVar5 = &local_90;
      puVar4 = local_48;
      puVar3 = local_60;
    }
LAB_00454eb5:
    FUN_004e6c30(puVar3,puVar4,puVar5);
  }
  uVar2 = FUN_004e7620(&local_90,local_24,local_30);
  iVar1 = FUN_004e7290(uVar2);
  if (iVar1 != 0) {
    return 3;
  }
LAB_00454cff:
  puVar5 = (undefined4 *)(param_2 + 0x4c);
  *puVar5 = local_90;
  *(undefined4 *)(param_2 + 0x50) = local_8c;
  *(undefined4 *)(param_2 + 0x54) = local_88;
  FUN_004e7910(puVar5,puVar5);
  return 0;
}

