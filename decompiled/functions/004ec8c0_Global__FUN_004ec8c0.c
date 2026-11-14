// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ec8c0
// entry: 004ec8c0  size: 2068


undefined4 FUN_004ec8c0(int *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84 [12];
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
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)*param_1;
  local_90 = *puVar1;
  local_8c = puVar1[1];
  local_88 = puVar1[2];
  local_6c = puVar1[3];
  local_68 = puVar1[4];
  local_64 = puVar1[5];
  local_78 = puVar1[6];
  local_74 = puVar1[7];
  local_70 = puVar1[8];
  FUN_004e5780(&local_54);
  sVar2 = FUN_004e71d0(&local_78,&local_54);
  if (sVar2 == 1) {
    uVar4 = FUN_004ec5d0(param_1,param_2,param_3);
    param_2[0xc] = local_54;
    param_2[0xd] = local_50;
    param_2[0xe] = local_4c;
    return uVar4;
  }
  FUN_004e57a0(local_c);
  FUN_004e57c0(local_60);
  FUN_004e5070(3,local_84);
  FUN_004e6d00(&local_90,&local_90,local_30);
  FUN_004e6d00(local_84,&local_6c,local_a8);
  FUN_004e6c30(local_a8,local_30,local_a8);
  FUN_004e6d00(local_30,&local_90,local_18);
  FUN_004e6d00(&local_90,&local_6c,local_cc);
  FUN_004e5070(0x1b,local_3c);
  FUN_004e6d00(local_3c,&local_78,local_b4);
  FUN_004e5070(9,local_d8);
  FUN_004e6d00(local_d8,local_cc,local_d8);
  FUN_004e6c30(local_b4,local_d8,local_b4);
  FUN_004e6d00(local_60,local_18,local_d8);
  FUN_004e6ab0(local_b4,local_d8,local_b4);
  FUN_004e6d00(&local_78,&local_78,&local_c0);
  FUN_004e6d00(&local_c0,local_3c,&local_c0);
  FUN_004e5070(4,local_24);
  FUN_004e6d00(local_24,local_18,local_d8);
  FUN_004e6d00(local_d8,&local_78,local_d8);
  FUN_004e6ab0(&local_c0,local_d8,&local_c0);
  FUN_004e6d00(&local_6c,&local_6c,local_9c);
  FUN_004e6d00(&local_6c,local_9c,local_d8);
  FUN_004e6d00(local_d8,local_24,local_d8);
  FUN_004e6ab0(&local_c0,local_d8,&local_c0);
  FUN_004e5070(0x12,local_d8);
  FUN_004e6d00(local_d8,local_cc,local_d8);
  FUN_004e6d00(local_d8,&local_78,local_d8);
  FUN_004e6c30(&local_c0,local_d8,&local_c0);
  FUN_004e6d00(local_30,local_9c,local_d8);
  FUN_004e6c30(&local_c0,local_d8,&local_c0);
  iVar5 = FUN_0052f820();
  if (iVar5 != 0) {
    FUN_004e5630(1,param_2);
    return 0;
  }
  sVar2 = FUN_004e71d0(&local_c0,&local_54);
  if (sVar2 == -1) {
    *param_2 = local_c0;
    param_2[1] = local_bc;
    param_2[2] = local_b8;
    return 0;
  }
  sVar3 = FUN_004e7290(&local_c0,&local_54);
  FUN_004e5820(local_48);
  if (sVar2 == 1) {
    FUN_004e6e60(local_b4,local_60,local_d8);
    FUN_004e6fb0(local_d8,local_48,local_d8);
    FUN_004e6c30(local_d8,&local_90,local_d8);
    FUN_004e6e60(local_d8,local_84,param_2);
    param_2[6] = *param_2;
    param_2[7] = param_2[1];
    param_2[8] = param_2[2];
    FUN_004e6d00(local_b4,local_24,local_d8);
    FUN_004e6fb0(local_d8,local_48,local_d8);
    FUN_004e6ab0(local_d8,&local_90,local_d8);
    FUN_004e6e60(local_d8,local_84,local_d8);
    FUN_004e7730(local_d8,param_2 + 0xc);
    return 1;
  }
  FUN_004e6d00(local_3c,&local_c0,local_d8);
  FUN_004e7620(local_d8,local_d8);
  FUN_004e7390(local_d8,local_d8);
  if (sVar3 == 1) {
    *param_3 = 2;
    FUN_004e6c30(local_d8,local_b4,local_cc);
    FUN_004e6e60(local_cc,local_60,local_cc);
    FUN_004e6fb0(local_cc,local_48,local_cc);
    FUN_004e6ab0(local_d8,local_b4,local_9c);
    FUN_004e6e60(local_9c,local_60,local_9c);
    FUN_004e6fb0(local_9c,local_48,local_9c);
    puVar1 = param_2 + 3;
    FUN_004e6ab0(local_cc,local_9c,puVar1);
    FUN_004e6e60(puVar1,local_60,puVar1);
    FUN_004e7390(local_84,local_d8);
    FUN_004e6e60(puVar1,local_d8,puVar1);
    FUN_004e6c30(local_cc,local_9c,local_d8);
    FUN_004e6e60(local_d8,local_60,param_2);
    FUN_004e6ab0(param_2,&local_90,param_2);
    FUN_004e6e60(param_2,local_84,param_2);
    FUN_004e7730(param_2,param_2);
    puVar6 = param_2;
    puVar8 = param_2 + 6;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar6 = param_2 + 9;
    FUN_004e7730(puVar6,puVar6);
    FUN_004e4120(param_2,puVar1,param_2);
    FUN_004e4120(param_2 + 6,puVar6,param_2 + 6);
    param_2 = param_2 + 0xc;
    FUN_004e6c30(local_d8,&local_90,param_2);
    FUN_004e6e60(param_2,local_84,param_2);
    return 1;
  }
  FUN_004e6e60(local_d8,local_b4,local_cc);
  iVar5 = FUN_004e4020(local_cc);
  if (iVar5 == 0) {
    FUN_004e74f0(local_cc,local_d8);
  }
  else {
    FUN_004e79d0(local_d8,local_b4,local_d8,1);
  }
  FUN_004e7730(local_a8,local_a8);
  FUN_004e7390(local_a8,local_a8);
  FUN_004e6d00(local_a8,local_60,local_a8);
  sVar2 = FUN_004e7250(local_b4,&local_54);
  if (sVar2 == 1) {
    FUN_004e7730(local_a8,local_a8);
  }
  FUN_004e59b0(local_9c);
  iVar7 = 0;
  iVar5 = 3;
  do {
    FUN_004e5070(iVar7,local_cc);
    FUN_004e6d00(local_cc,local_9c,local_cc);
    FUN_004e6ab0(local_cc,local_d8,local_cc);
    FUN_004e6e60(local_cc,local_84,local_cc);
    FUN_004e7470(local_cc,local_cc,1);
    FUN_004e6d00(local_cc,local_a8,local_cc);
    FUN_004e6ab0(local_cc,&local_90,local_cc);
    FUN_004e6e60(local_cc,local_84,local_cc);
    FUN_004e7730(local_cc,param_2);
    iVar7 = iVar7 + 1;
    param_2 = param_2 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return 1;
}

