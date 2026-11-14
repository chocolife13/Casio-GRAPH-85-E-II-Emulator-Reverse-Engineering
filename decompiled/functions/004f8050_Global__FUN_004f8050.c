// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f8050
// entry: 004f8050  size: 1227


undefined4
FUN_004f8050(int *param_1,char *param_2,byte *param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  char *local_12c;
  undefined4 local_128;
  undefined2 local_122;
  undefined1 local_120 [4];
  undefined4 local_11c;
  uint local_118;
  undefined1 local_114 [4];
  undefined4 local_110;
  undefined1 local_10c [12];
  char local_100 [256];
  
  local_122 = DAT_005c0d7c;
  pcVar8 = local_100;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  local_128 = 0;
  FUN_004fe330(param_2,param_1);
  if (*param_2 != '\x0e') {
    uVar3 = FUN_004f58f0(2,param_3);
    return uVar3;
  }
  if (*(char *)*param_1 == '\0') {
    uVar3 = FUN_004f58f0(2,param_3);
    return uVar3;
  }
  FUN_004b7710(param_5,&local_122);
  FUN_004f7720(param_5,local_120,param_4,0xffffffff);
  FUN_004f74c0(param_4,1);
  puVar7 = (undefined4 *)(param_4 + -0x2a + *(int *)(param_4 + 0x128) * 0x2a);
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0x20202020;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0x2020;
  local_12c = local_100;
  while( true ) {
    while( true ) {
      do {
        while( true ) {
          uVar3 = *(undefined4 *)(param_4 + 0x128);
          local_110 = FUN_00526410();
          FUN_00538a00(local_10c);
          FUN_00538980(0,0,local_114);
          cVar1 = FUN_00526090(0x17);
          if (cVar1 == '\0') {
            FUN_0053c6f0(3);
            FUN_0053edf0(1);
            FUN_00538e10(1);
            FUN_00526420(0x30);
          }
          else {
            FUN_00538e10();
            FUN_00526420(0xb3);
          }
          FUN_00538d50(1);
          FUN_00538860(0,0);
          FUN_005387f0(0);
          uVar2 = FUN_0043c9e0(&local_12c,param_3,param_4,local_100,local_128);
          local_118 = CONCAT31(local_118._1_3_,uVar2);
          FUN_00538810();
          FUN_00538a50(local_10c);
          FUN_005389c0(0,0,local_114);
          FUN_00526420(local_110);
          *(undefined4 *)(param_4 + 0x128) = uVar3;
          FUN_00523740();
          uVar4 = local_118 & 0xff;
          if (uVar4 == 0) {
            return 0;
          }
          if (uVar4 != 1) break;
          if (local_100[0] == '\0') {
            iVar5 = 2;
            do {
              FUN_004fe330(param_2,param_1);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            uVar3 = FUN_004f58f0(1,param_3);
            return uVar3;
          }
          FUN_004f7470(param_4,0);
          FUN_004f7720(param_5,local_120,param_4,1);
          FUN_004f74c0(param_4,1);
          local_12c = local_100;
          local_128 = 0;
          pcVar8 = local_100;
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar8[0] = '\0';
            pcVar8[1] = '\0';
            pcVar8[2] = '\0';
            pcVar8[3] = '\0';
            pcVar8 = pcVar8 + 4;
          }
        }
      } while (uVar4 != 2);
      *param_2 = *local_12c;
      if (local_100[0] != '\0') break;
      local_128 = 1;
    }
    local_12c = local_100;
    *param_2 = *(char *)*param_1;
    param_2[1] = *(char *)(*param_1 + 1);
    iVar5 = FUN_004f3e10(param_2);
    if (iVar5 == 1) break;
    iVar5 = FUN_00501720(&local_12c,param_2,param_3,1);
    if (iVar5 != 0) {
      if (*param_2 == '\0') {
        FUN_004fe370(param_2,param_1);
        uVar6 = (7 - *(int *)(param_4 + 0x128)) * 0x2a;
        puVar7 = (undefined4 *)(param_4 + *(int *)(param_4 + 0x128) * 0x2a);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = 0x20202020;
          puVar7 = puVar7 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar7 = 0x20;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FUN_004f7720(local_100,local_120,param_4,1);
        iVar5 = FUN_004f4200(param_1,param_2,param_3,param_4,param_6);
        if (iVar5 == 1) {
          if ((*param_3 & 0x60) == 0x20) {
            if ((*param_3 & 0x70) == 0x20) {
              *param_3 = 0;
            }
            *(undefined4 *)(param_4 + 0x138) = 1;
            return 1;
          }
          *(undefined4 *)(param_4 + 0x138) = 0;
          return 1;
        }
        if (iVar5 == 0) {
          return 0;
        }
        *param_1 = *param_1 + -1;
        FUN_004fe370(param_2,param_1);
        cVar1 = *param_2;
        while (cVar1 != '\x0e') {
          FUN_004fe3e0(param_2,param_1);
          cVar1 = *param_2;
        }
      }
      else {
        FUN_004f58f0(2,param_3);
      }
    }
    pbVar9 = param_3;
    if (((*param_3 & 0xf0) == 0xf0) ||
       (((*param_3 & 0x80) != 0 && (pbVar9 = param_3 + 0xc, (param_3[0xc] & 0xf0) == 0xf0)))) {
      local_11c = FUN_004e4020(pbVar9);
    }
    FUN_0052b240(local_11c);
    FUN_004f7470(param_4,0);
    FUN_004f7720(local_100,&local_12c,param_4,0);
    *(undefined4 *)(param_4 + 0x128) = 1;
    local_128 = 1;
  }
  uVar6 = (7 - *(int *)(param_4 + 0x128)) * 0x2a;
  puVar7 = (undefined4 *)(param_4 + *(int *)(param_4 + 0x128) * 0x2a);
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0x20202020;
    puVar7 = puVar7 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar7 = 0x20;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  FUN_004f7720(local_100,local_120,param_4,1);
  iVar5 = FUN_004f3eb0(param_1,param_2,param_3,param_4,local_100);
  if (iVar5 != 1) {
    return 0;
  }
  *(undefined4 *)(param_4 + 0x138) = 1;
  return 1;
}

