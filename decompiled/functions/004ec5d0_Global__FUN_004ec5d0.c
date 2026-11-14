// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ec5d0
// entry: 004ec5d0  size: 750


undefined4 FUN_004ec5d0(int *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  puVar7 = (undefined4 *)*param_1;
  local_3c = *puVar7;
  local_38 = puVar7[1];
  local_34 = puVar7[2];
  local_30 = puVar7[3];
  local_2c = puVar7[4];
  local_28 = puVar7[5];
  FUN_004e5780(local_c);
  FUN_004e57c0(local_18);
  FUN_004e6d00(local_18,local_18,&local_24);
  FUN_004e6d00(&local_24,&local_30,&local_24);
  FUN_004e6d00(&local_3c,&local_3c,&local_48);
  FUN_004e6c30(&local_48,&local_24,&local_48);
  iVar5 = FUN_0052f820();
  if (iVar5 != 0) {
    FUN_004e5630(1,param_2);
    return 0;
  }
  sVar3 = FUN_004e71d0(&local_48,local_c);
  if (sVar3 == -1) {
    *param_2 = local_48;
    param_2[1] = local_44;
    param_2[2] = local_40;
    return 0;
  }
  sVar4 = FUN_004e7250(&local_48,local_c);
  if (sVar3 == 1) {
    FUN_004e7730(&local_3c,&local_3c);
    FUN_004e6e60(&local_3c,local_18,param_2);
    puVar7 = param_2 + 6;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *param_2;
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 1;
    }
    return 1;
  }
  if (sVar4 == 1) {
    *param_3 = 2;
    FUN_004e7730(&local_3c,&local_3c);
    FUN_004e6e60(&local_3c,local_18,param_2);
    puVar7 = param_2 + 6;
    *puVar7 = *param_2;
    param_2[7] = param_2[1];
    param_2[8] = param_2[2];
    FUN_004e7730(&local_48,&local_48);
    FUN_004e7390(&local_48,&local_48);
    puVar1 = param_2 + 3;
    FUN_004e6e60(&local_48,local_18,puVar1);
    puVar2 = param_2 + 9;
    *puVar2 = *puVar1;
    param_2[10] = param_2[4];
    param_2[0xb] = param_2[5];
    FUN_004e7730(puVar2,puVar2);
    FUN_004e4120(param_2,puVar1,param_2);
    FUN_004e4120(puVar7,puVar2,puVar7);
    return 1;
  }
  sVar3 = FUN_004e7310(&local_3c,local_c);
  FUN_004e7620(&local_3c,&local_3c);
  FUN_004e7390(&local_48,&local_48);
  FUN_004e6ab0(&local_3c,&local_48,&local_48);
  uVar6 = FUN_004e6e60(&local_30,&local_48,&local_30,local_18,&local_30);
  FUN_004e6d00(uVar6);
  FUN_004e6e60(&local_48,local_18,&local_24);
  if (sVar3 == 1) {
    FUN_004e7730(&local_30,param_2);
    FUN_004e7730(&local_24,param_2 + 6);
    return 1;
  }
  *param_2 = local_24;
  param_2[1] = local_20;
  param_2[2] = local_1c;
  param_2[6] = local_30;
  param_2[7] = local_2c;
  param_2[8] = local_28;
  return 1;
}

