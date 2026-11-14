// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c01e0
// entry: 004c01e0  size: 932


bool FUN_004c01e0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint local_b4;
  int local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_90 [8];
  int *local_88;
  undefined1 local_78 [8];
  int *local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_0052f840();
  iVar3 = FUN_004e4020(param_1);
  if (iVar3 != 0) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return false;
  }
  iVar3 = FUN_004e4000(param_1);
  if (iVar3 != 0) {
    FUN_004e5630(0x19,param_3);
    return false;
  }
  uVar6 = (uint)*(ushort *)((int)param_1 + 2);
  if (*(ushort *)((int)param_1 + 2) < 3) {
    FUN_004e5630(3,param_3);
    return false;
  }
  if (uVar6 != *(ushort *)(param_2 + 2)) {
    FUN_004e5630(9,param_3);
    return false;
  }
  iVar7 = (uVar6 * 3 & 0x3fff) << 2;
  iVar3 = FUN_004ad630(iVar7);
  if (iVar3 == 0) {
    FUN_004e5630(4,param_3);
    return false;
  }
  FUN_004f9690(local_90,iVar3,uVar6,1);
  iVar7 = FUN_004ad630(iVar7);
  if (iVar7 == 0) {
    FUN_004e5630(4,param_3);
    FUN_004ad6d0(iVar3);
    return false;
  }
  FUN_004f9690(local_78,iVar7,uVar6,1);
  piVar1 = (int *)param_1[2];
  piVar2 = *(int **)(param_2 + 8);
  if (uVar6 != 0) {
    iVar3 = 0;
    local_b4 = uVar6;
    do {
      puVar4 = (undefined4 *)(*piVar1 + iVar3);
      puVar5 = (undefined4 *)(iVar3 + *local_88);
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar4 = (undefined4 *)(*piVar2 + iVar3);
      puVar5 = (undefined4 *)(iVar3 + *local_70);
      iVar3 = iVar3 + 0xc;
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      local_b4 = local_b4 - 1;
    } while (local_b4 != 0);
  }
  iVar3 = 0;
  local_b4 = 1;
  local_b0 = 0;
  if (0 < (int)(uVar6 - 1)) {
    do {
      puVar4 = (undefined4 *)(iVar3 + *local_88);
      local_a8 = *puVar4;
      local_a4 = puVar4[1];
      local_a0 = puVar4[2];
      iVar7 = iVar3 + 0xc + *local_88;
      local_60 = *(undefined4 *)(iVar3 + 0xc + *local_88);
      local_5c = *(undefined4 *)(iVar7 + 4);
      local_58 = *(undefined4 *)(iVar7 + 8);
      iVar7 = FUN_004e7210(&local_a8,&local_60);
      if (iVar7 == -1) goto LAB_004c0559;
      if (iVar7 != 0) {
        local_b4 = local_b4 + 1;
      }
      local_b0 = local_b0 + 1;
      iVar3 = iVar3 + 0xc;
    } while (local_b0 < (int)(uVar6 - 1));
    if ((iVar7 != -1) && (2 < (int)local_b4)) {
      puVar4 = (undefined4 *)FUN_004ad630(0x54);
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)*puVar4;
        for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        FUN_004f9690(param_3,puVar4,7,1);
        iVar3 = FUN_004c8e60(uVar6,local_88,local_70);
        if (iVar3 == 0) {
          iVar3 = FUN_004c1d40(local_90,local_78,param_3);
          if ((iVar3 != 0) &&
             (iVar3 = FUN_004c1380(local_90,local_78,param_3,local_18,local_30,local_48), iVar3 != 0
             )) {
            FUN_004ad6d0(local_88);
            FUN_004ad6d0(local_70);
            FUN_004e3e70(param_3,param_3);
            iVar3 = FUN_004e4020(param_3);
            return iVar3 == 0;
          }
          FUN_004ad6d0(local_88);
          FUN_004ad6d0(local_70);
          FUN_004ad6d0(puVar4);
          return false;
        }
        FUN_004ad6d0(local_88);
        FUN_004ad6d0(local_70);
        FUN_004ad6d0(puVar4);
        FUN_004e5630(iVar3,param_3);
        return false;
      }
      uVar8 = 4;
      goto LAB_004c0563;
    }
  }
LAB_004c0559:
  uVar8 = 3;
LAB_004c0563:
  FUN_004e5630(uVar8,param_3);
  FUN_004ad6d0(local_88);
  FUN_004ad6d0(local_70);
  return false;
}

