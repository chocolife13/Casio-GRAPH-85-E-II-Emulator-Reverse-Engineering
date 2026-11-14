// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c8b00
// entry: 004c8b00  size: 850


undefined4 FUN_004c8b00(int param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_48;
  int local_44;
  int local_40;
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
  
  if (param_1 == 1) {
    return 0;
  }
  local_48 = (param_1 >> 1) + 1;
  iVar7 = param_1 * 0xc;
  local_40 = local_48 * 0xc;
  local_44 = iVar7;
  do {
    if (local_48 < 2) {
      puVar3 = (undefined4 *)*param_2;
      puVar1 = (undefined4 *)(iVar7 + -0xc + (int)puVar3);
      local_3c = *puVar1;
      local_38 = puVar1[1];
      local_34 = puVar1[2];
      puVar2 = (undefined4 *)(iVar7 + -0xc + *param_3);
      local_30 = *puVar2;
      local_2c = puVar2[1];
      local_28 = puVar2[2];
      puVar2 = (undefined4 *)(iVar7 + -0xc + *param_4);
      local_24 = *puVar2;
      local_20 = puVar2[1];
      local_1c = puVar2[2];
      *puVar1 = *puVar3;
      puVar1[1] = puVar3[1];
      puVar1[2] = puVar3[2];
      puVar1 = (undefined4 *)*param_3;
      *(undefined4 *)(iVar7 + -0xc + (int)puVar1) = *puVar1;
      *(undefined4 *)((int)puVar1 + iVar7 + -8) = puVar1[1];
      *(undefined4 *)((int)puVar1 + iVar7 + -4) = puVar1[2];
      puVar2 = (undefined4 *)*param_4;
      puVar1 = (undefined4 *)(iVar7 + -0xc + (int)puVar2);
      iVar7 = iVar7 + -0xc;
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      param_1 = param_1 + -1;
      local_44 = iVar7;
      if (param_1 == 1) {
        puVar1 = (undefined4 *)*param_2;
        *puVar1 = local_3c;
        puVar1[1] = local_38;
        puVar1[2] = local_34;
        puVar1 = (undefined4 *)*param_3;
        *puVar1 = local_30;
        puVar1[1] = local_2c;
        puVar1[2] = local_28;
        puVar1 = (undefined4 *)*param_4;
        *puVar1 = local_24;
        puVar1[1] = local_20;
        puVar1[2] = local_1c;
        return 0;
      }
    }
    else {
      local_48 = local_48 + -1;
      iVar5 = local_40 + -0x18 + *param_2;
      local_3c = *(undefined4 *)(local_40 + -0x18 + *param_2);
      local_38 = *(undefined4 *)(iVar5 + 4);
      local_34 = *(undefined4 *)(iVar5 + 8);
      iVar5 = local_40 + -0x18 + *param_3;
      local_30 = *(undefined4 *)(local_40 + -0x18 + *param_3);
      local_2c = *(undefined4 *)(iVar5 + 4);
      local_28 = *(undefined4 *)(iVar5 + 8);
      iVar5 = local_40 + -0x18 + *param_4;
      local_24 = *(undefined4 *)(local_40 + -0x18 + *param_4);
      local_20 = *(undefined4 *)(iVar5 + 4);
      local_1c = *(undefined4 *)(iVar5 + 8);
      local_40 = local_40 + -0xc;
    }
    iVar8 = local_48 * 2;
    iVar5 = local_48;
    while (iVar6 = iVar8, iVar6 <= param_1) {
      iVar8 = iVar6 * 0xc;
      puVar1 = (undefined4 *)(*param_2 + iVar8);
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
          iVar7 = *param_2 + -0xc + iVar8;
          local_18 = *(undefined4 *)(*param_2 + -0xc + iVar8);
          local_14 = *(undefined4 *)(iVar7 + 4);
          local_10 = *(undefined4 *)(iVar7 + 8);
        }
      }
      iVar4 = FUN_004e7250(&local_3c,&local_18);
      iVar7 = local_44;
      if (iVar4 == 0) {
        iVar8 = param_1 + 1;
      }
      else {
        iVar5 = iVar5 * 0xc;
        puVar1 = (undefined4 *)(iVar8 + -0xc + *param_2);
        puVar2 = (undefined4 *)(iVar5 + -0xc + *param_2);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar1 = (undefined4 *)(iVar8 + -0xc + *param_3);
        puVar2 = (undefined4 *)(iVar5 + -0xc + *param_3);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar1 = (undefined4 *)(iVar8 + -0xc + *param_4);
        puVar2 = (undefined4 *)(iVar5 + -0xc + *param_4);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        iVar8 = iVar6 * 2;
        iVar5 = iVar6;
      }
    }
    iVar5 = iVar5 * 0xc;
    iVar8 = *param_2 + -0xc + iVar5;
    *(undefined4 *)(*param_2 + -0xc + iVar5) = local_3c;
    *(undefined4 *)(iVar8 + 4) = local_38;
    *(undefined4 *)(iVar8 + 8) = local_34;
    puVar1 = (undefined4 *)(iVar5 + -0xc + *param_3);
    *puVar1 = local_30;
    puVar1[1] = local_2c;
    puVar1[2] = local_28;
    puVar1 = (undefined4 *)(iVar5 + -0xc + *param_4);
    *puVar1 = local_24;
    puVar1[1] = local_20;
    puVar1[2] = local_1c;
    iVar5 = FUN_0052f820();
  } while (iVar5 == 0);
  return 1;
}

