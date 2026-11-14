// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c7320
// entry: 004c7320  size: 745


undefined4 FUN_004c7320(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = FUN_004e4020(param_1);
  if (iVar4 != 0) {
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  uVar1 = *(ushort *)((int)param_1 + 2);
  uVar8 = (uint)uVar1;
  iVar4 = FUN_004e4020(param_1);
  if (iVar4 != 0) {
    return 0;
  }
  piVar5 = (int *)FUN_004ad630((uVar8 * 3 & 0x3fff) << 2);
  if (piVar5 == (int *)0x0) {
    FUN_004e5630(4,param_2);
    return 0;
  }
  FUN_004f9690(param_2,piVar5,uVar8,1);
  iVar4 = FUN_004e4000(param_1);
  if (iVar4 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    piVar5 = (int *)FUN_004ad670(piVar5,(uVar8 * 3 & 0x1fff) << 3);
    if (piVar5 == (int *)0x0) {
      FUN_004e5630(4,param_2);
      FUN_004ad6d0(0);
      return 0;
    }
    FUN_004f9690(param_2,piVar5,uVar8,1);
  }
  piVar2 = (int *)param_1[2];
  iVar4 = 6;
  if (!bVar3) {
    iVar9 = 0;
    puVar6 = local_30;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    if (uVar8 != 0) {
      iVar4 = 0;
      do {
        puVar6 = (undefined4 *)(*piVar2 + iVar4);
        local_18 = *puVar6;
        local_14 = puVar6[1];
        local_10 = puVar6[2];
        FUN_004e0880(local_30,&local_18,local_30,1);
        FUN_004e3e70(local_30,local_30);
        iVar7 = FUN_004e4020(local_30);
        if (iVar7 != 0) {
          *param_2 = local_30[0];
          param_2[1] = local_30[1];
          param_2[2] = local_30[2];
          FUN_004ad6d0(piVar5);
          return 0;
        }
        puVar6 = (undefined4 *)(*piVar5 + iVar4);
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 0xc;
        *puVar6 = local_30[0];
        puVar6[1] = local_30[1];
        puVar6[2] = local_30[2];
      } while (iVar9 < (int)uVar8);
    }
    *(undefined1 *)param_2 = 0x20;
    *(ushort *)((int)param_2 + 2) = uVar1;
    *(undefined2 *)(param_2 + 1) = 0;
    return 1;
  }
  puVar6 = local_30;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  param_1 = (undefined4 *)0x0;
  if (uVar8 != 0) {
    iVar4 = 0;
    iVar9 = uVar8 * 0xc;
    do {
      puVar6 = (undefined4 *)(*piVar2 + iVar4);
      local_18 = *puVar6;
      local_14 = puVar6[1];
      local_10 = puVar6[2];
      puVar6 = (undefined4 *)(*piVar2 + iVar9);
      local_c = *puVar6;
      local_8 = puVar6[1];
      local_4 = puVar6[2];
      FUN_004e0880(local_30,&local_18,local_30,1);
      FUN_004e3e70(local_30,local_30);
      iVar7 = FUN_004e4020(local_30);
      if (iVar7 != 0) {
        *param_2 = local_30[0];
        param_2[1] = local_30[1];
        param_2[2] = local_30[2];
        FUN_004ad6d0(piVar5);
        return 0;
      }
      puVar6 = (undefined4 *)(*piVar5 + iVar4);
      iVar4 = iVar4 + 0xc;
      *puVar6 = local_30[0];
      puVar6[1] = local_30[1];
      puVar6[2] = local_30[2];
      puVar6 = (undefined4 *)(*piVar5 + iVar9);
      iVar9 = iVar9 + 0xc;
      *puVar6 = local_30[3];
      puVar6[1] = local_20;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar6[2] = local_1c;
    } while ((int)param_1 < (int)uVar8);
  }
  *(undefined1 *)param_2 = 0xa0;
  *(ushort *)((int)param_2 + 2) = uVar1;
  *(undefined2 *)(param_2 + 1) = 0;
  return 1;
}

