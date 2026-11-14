// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c0590
// entry: 004c0590  size: 796


undefined4
FUN_004c0590(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18 [6];
  
  piVar1 = (int *)param_3[2];
  FUN_004e0c40(param_4,param_6,&local_78,0);
  FUN_004e0880(&local_78,param_7,&local_78,0);
  iVar2 = FUN_004e4020(&local_78);
  if (iVar2 != 0) {
    *param_3 = local_78;
    param_3[1] = local_74;
    param_3[2] = local_70;
    return 0;
  }
  puVar3 = (undefined4 *)*local_70;
  local_60 = *puVar3;
  local_5c = puVar3[1];
  local_58 = puVar3[2];
  iVar2 = *local_70;
  local_30 = *(undefined4 *)(iVar2 + 0xc);
  local_2c = *(undefined4 *)(iVar2 + 0x10);
  local_28 = *(undefined4 *)(iVar2 + 0x14);
  iVar2 = *local_70;
  local_48 = *(undefined4 *)(iVar2 + 0x18);
  local_44 = *(undefined4 *)(iVar2 + 0x1c);
  local_40 = *(undefined4 *)(iVar2 + 0x20);
  puVar3 = (undefined4 *)*piVar1;
  *puVar3 = local_30;
  puVar3[1] = local_2c;
  puVar3[2] = local_28;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0xc) = local_48;
  *(undefined4 *)(iVar2 + 0x10) = local_44;
  *(undefined4 *)(iVar2 + 0x14) = local_40;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x18) = local_60;
  *(undefined4 *)(iVar2 + 0x1c) = local_5c;
  *(undefined4 *)(iVar2 + 0x20) = local_58;
  FUN_004e26b0(&local_48,local_18,0);
  FUN_004e0c40(local_18,param_1,&local_90,0);
  FUN_004e1880(&local_90,&local_90,0);
  iVar2 = FUN_004e4020(&local_90);
  if (iVar2 != 0) {
    *param_3 = local_90;
    param_3[1] = local_8c;
    param_3[2] = local_88;
    FUN_004ad6d0(local_70);
    return 0;
  }
  local_94 = local_88;
  FUN_004e57a0(local_18);
  FUN_004e0c40(&local_30,&local_90,&local_ac,0);
  FUN_004e0880(local_18,&local_ac,&local_ac,0);
  FUN_004e0dd0(&local_60,&local_ac,&local_ac,0);
  iVar2 = FUN_004e4020(&local_ac);
  if (iVar2 != 0) {
    *param_3 = local_ac;
    param_3[1] = local_a8;
    param_3[2] = local_a4;
    FUN_004ad6d0(local_88);
    FUN_004ad6d0(local_70);
    return 0;
  }
  FUN_004e0b00(&local_ac,param_2,&local_ac,0);
  FUN_004e2770(&local_ac,&local_ac,0);
  iVar2 = FUN_004e4020(&local_ac);
  if (iVar2 != 0) {
    *param_3 = local_ac;
    param_3[1] = local_a8;
    param_3[2] = local_a4;
    FUN_004ad6d0(local_88);
    FUN_004ad6d0(local_70);
    return 0;
  }
  FUN_004c7060(&local_ac,local_18);
  puVar3 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_5 = *puVar3;
    puVar3 = puVar3 + 1;
    param_5 = param_5 + 1;
  }
  FUN_004ad6d0(local_a4);
  FUN_004ad6d0(local_94);
  FUN_004ad6d0(local_70);
  iVar2 = FUN_0052f820();
  if (iVar2 != 0) {
    FUN_004e5630(1,param_3);
    return 0;
  }
  return 1;
}

