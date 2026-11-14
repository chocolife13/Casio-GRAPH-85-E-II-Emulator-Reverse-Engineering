// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c9110
// entry: 004c9110  size: 492


undefined4 FUN_004c9110(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int local_2c;
  int local_28;
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
  iVar6 = (param_1 >> 1) + 1;
  local_2c = param_1 * 0xc;
  local_28 = iVar6 * 0xc;
  local_30 = iVar6;
  do {
    if (iVar6 < 2) {
      puVar2 = (undefined4 *)*param_2;
      puVar1 = (undefined4 *)(local_2c + -0xc + (int)puVar2);
      local_2c = local_2c + -0xc;
      local_24 = *puVar1;
      local_20 = puVar1[1];
      local_1c = puVar1[2];
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      param_1 = param_1 + -1;
      if (param_1 == 1) {
        puVar1 = (undefined4 *)*param_2;
        *puVar1 = local_24;
        puVar1[1] = local_20;
        puVar1[2] = local_1c;
        return 0;
      }
    }
    else {
      iVar6 = iVar6 + -1;
      iVar5 = local_28 + -0x18 + *param_2;
      local_24 = *(undefined4 *)(local_28 + -0x18 + *param_2);
      local_20 = *(undefined4 *)(iVar5 + 4);
      local_1c = *(undefined4 *)(iVar5 + 8);
      local_30 = iVar6;
      local_28 = local_28 + -0xc;
    }
    iVar3 = iVar6;
    iVar5 = iVar6 * 2;
    while (iVar5 <= param_1) {
      iVar7 = iVar5 * 0xc;
      puVar1 = (undefined4 *)(iVar7 + *param_2);
      local_18 = puVar1[-3];
      local_14 = puVar1[-2];
      local_10 = puVar1[-1];
      if (iVar5 < param_1) {
        local_c = *puVar1;
        local_8 = puVar1[1];
        local_4 = puVar1[2];
        iVar6 = FUN_004e72d0(&local_18,&local_c);
        if (iVar6 != 0) {
          iVar5 = iVar5 + 1;
          iVar7 = iVar5 * 0xc;
          iVar6 = iVar7 + -0xc + *param_2;
          local_18 = *(undefined4 *)(iVar7 + -0xc + *param_2);
          local_14 = *(undefined4 *)(iVar6 + 4);
          local_10 = *(undefined4 *)(iVar6 + 8);
        }
      }
      iVar4 = FUN_004e7250(&local_24,&local_18);
      iVar6 = local_30;
      if (iVar4 == 0) {
        iVar5 = param_1 + 1;
      }
      else {
        puVar1 = (undefined4 *)(iVar7 + -0xc + *param_2);
        puVar2 = (undefined4 *)(*param_2 + -0xc + iVar3 * 0xc);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        iVar3 = iVar5;
        iVar5 = iVar5 * 2;
      }
    }
    puVar1 = (undefined4 *)(*param_2 + -0xc + iVar3 * 0xc);
    *puVar1 = local_24;
    puVar1[1] = local_20;
    puVar1[2] = local_1c;
    iVar5 = FUN_0052f820();
  } while (iVar5 == 0);
  return 1;
}

