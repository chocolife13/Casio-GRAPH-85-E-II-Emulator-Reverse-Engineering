// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c8e60
// entry: 004c8e60  size: 676


undefined4 FUN_004c8e60(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  int local_38;
  int local_34;
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
  
  if (param_1 == 1) {
    return 0;
  }
  local_34 = (param_1 >> 1) + 1;
  iVar7 = param_1 * 0xc;
  local_38 = local_34 * 0xc;
  local_3c = iVar7;
  do {
    if (local_34 < 2) {
      puVar3 = (undefined4 *)*param_2;
      puVar1 = (undefined4 *)(iVar7 + -0xc + (int)puVar3);
      local_30 = *puVar1;
      local_2c = puVar1[1];
      local_28 = puVar1[2];
      puVar2 = (undefined4 *)(iVar7 + -0xc + *param_3);
      local_24 = *puVar2;
      local_20 = puVar2[1];
      local_1c = puVar2[2];
      *puVar1 = *puVar3;
      puVar1[1] = puVar3[1];
      puVar1[2] = puVar3[2];
      puVar2 = (undefined4 *)*param_3;
      puVar1 = (undefined4 *)(iVar7 + -0xc + (int)puVar2);
      iVar7 = iVar7 + -0xc;
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      param_1 = param_1 + -1;
      local_3c = iVar7;
      if (param_1 == 1) {
        puVar1 = (undefined4 *)*param_2;
        *puVar1 = local_30;
        puVar1[1] = local_2c;
        puVar1[2] = local_28;
        puVar1 = (undefined4 *)*param_3;
        *puVar1 = local_24;
        puVar1[1] = local_20;
        puVar1[2] = local_1c;
        return 0;
      }
    }
    else {
      local_34 = local_34 + -1;
      iVar5 = local_38 + -0x18 + *param_2;
      local_30 = *(undefined4 *)(local_38 + -0x18 + *param_2);
      local_2c = *(undefined4 *)(iVar5 + 4);
      local_28 = *(undefined4 *)(iVar5 + 8);
      puVar1 = (undefined4 *)(local_38 + -0x18 + *param_3);
      local_24 = *puVar1;
      local_20 = puVar1[1];
      local_1c = puVar1[2];
      local_38 = local_38 + -0xc;
    }
    iVar8 = local_34 * 2;
    iVar5 = local_34;
    while (iVar6 = iVar8, iVar6 <= param_1) {
      iVar8 = iVar6 * 0xc;
      puVar1 = (undefined4 *)(iVar8 + *param_2);
      local_18 = puVar1[-3];
      local_14 = puVar1[-2];
      local_10 = puVar1[-1];
      if (iVar6 < param_1) {
        local_c = *puVar1;
        local_8 = puVar1[1];
        local_4 = puVar1[2];
        iVar7 = FUN_004e72d0(&local_18,&local_c);
        if (iVar7 != 0) {
          iVar6 = iVar6 + 1;
          iVar8 = iVar6 * 0xc;
          iVar7 = iVar8 + -0xc + *param_2;
          local_18 = *(undefined4 *)(iVar8 + -0xc + *param_2);
          local_14 = *(undefined4 *)(iVar7 + 4);
          local_10 = *(undefined4 *)(iVar7 + 8);
        }
      }
      iVar4 = FUN_004e7250(&local_30,&local_18);
      iVar7 = local_3c;
      if (iVar4 == 0) {
        iVar8 = param_1 + 1;
      }
      else {
        puVar1 = (undefined4 *)(iVar8 + -0xc + *param_2);
        puVar2 = (undefined4 *)(iVar5 * 0xc + -0xc + *param_2);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar1 = (undefined4 *)(iVar8 + -0xc + *param_3);
        puVar2 = (undefined4 *)(iVar5 * 0xc + -0xc + *param_3);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        iVar8 = iVar6 * 2;
        iVar5 = iVar6;
      }
    }
    iVar5 = iVar5 * 0xc;
    iVar8 = iVar5 + -0xc + *param_2;
    *(undefined4 *)(iVar5 + -0xc + *param_2) = local_30;
    *(undefined4 *)(iVar8 + 4) = local_2c;
    *(undefined4 *)(iVar8 + 8) = local_28;
    puVar1 = (undefined4 *)(iVar5 + -0xc + *param_3);
    *puVar1 = local_24;
    puVar1[1] = local_20;
    puVar1[2] = local_1c;
    iVar5 = FUN_0052f820();
  } while (iVar5 == 0);
  return 1;
}

