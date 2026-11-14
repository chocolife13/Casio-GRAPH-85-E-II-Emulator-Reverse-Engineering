// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e48e0
// entry: 004e48e0  size: 848


undefined4 * FUN_004e48e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  byte local_84;
  undefined3 uStack_83;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68 [20];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48 [24];
  byte local_30 [24];
  byte local_18 [24];
  
  FUN_004e5780(&local_9c);
  FUN_004e57a0(&local_54);
  iVar4 = FUN_004e96c0(param_1);
  if (iVar4 != 1) {
    iVar4 = FUN_004e9680(param_1);
    *param_2 = 1;
    if (iVar4 == 1) {
      puVar1 = param_2 + 1;
      *puVar1 = *param_1;
      param_2[2] = param_1[1];
      param_2[3] = param_1[2];
      iVar4 = FUN_004e7250(param_1,&local_9c);
      if (iVar4 != 0) {
        *param_2 = 0xffffffff;
        FUN_004e75d0(puVar1,puVar1);
      }
      param_2[4] = local_9c;
      param_2[5] = local_98;
      param_2[6] = local_94;
      param_2[7] = local_54;
      param_2[8] = local_50;
      param_2[9] = local_4c;
      return param_2;
    }
    puVar1 = param_2 + 1;
    FUN_004e5630(3,puVar1);
    param_2[7] = *puVar1;
    param_2[8] = param_2[2];
    param_2[9] = param_2[3];
    param_2[4] = *puVar1;
    param_2[5] = param_2[2];
    param_2[6] = param_2[3];
    return param_2;
  }
  uVar2 = *param_1;
  local_a4 = param_1[1];
  local_a0 = *(undefined1 *)(param_1 + 2);
  local_a8._1_1_ = (byte)((uint)uVar2 >> 8);
  bVar6 = (byte)uVar2 >> 4;
  _local_84 = CONCAT31(uStack_83,local_a8._1_1_ >> 4);
  local_a8 = uVar2;
  if (((byte)uVar2 & 0xf) == 10) {
    local_ac = 1;
    if ((bVar6 == 5) || (bVar6 == 6)) {
      local_ac = 0xffffffff;
    }
    iVar4 = 1;
    do {
      bVar6 = *(byte *)((int)&local_a8 + iVar4);
      bVar3 = bVar6 >> 4;
      if (iVar4 == 1) {
        bVar3 = 0;
      }
      local_68[iVar4 * 2 + -2] = bVar3;
      local_68[iVar4 * 2 + -1] = bVar6 & 0xf;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 9);
    iVar9 = 0;
    iVar5 = (local_a8._1_1_ >> 4) + 1;
    iVar7 = 1;
    iVar4 = 0;
    if (iVar5 != 0) {
      do {
        iVar4 = iVar7;
        if (local_68[iVar7] == 10) break;
        iVar9 = iVar9 + 1;
        iVar8 = iVar7 + 1;
        local_48[iVar7 + -1] = local_68[iVar7] | 0x30;
        iVar7 = iVar8;
        iVar4 = 0;
      } while (iVar8 <= iVar5);
    }
    local_48[iVar9] = 0;
    if (iVar4 != 0) {
      iVar9 = 0;
      iVar7 = iVar4;
      while ((iVar7 = iVar7 + 1, iVar8 = iVar4, iVar7 <= iVar5 &&
             (iVar8 = iVar7, local_68[iVar7] != 10))) {
        local_30[iVar9] = local_68[iVar7] | 0x30;
        iVar9 = iVar9 + 1;
        if (iVar7 == iVar5) {
          iVar4 = 0;
        }
      }
      local_30[iVar9] = 0;
      if (0 < iVar8) {
        iVar4 = iVar8 + 1;
        iVar7 = 0;
        if (iVar4 <= iVar5) {
          iVar7 = (iVar5 - iVar4) + 1;
          iVar9 = iVar4;
          do {
            local_18[iVar9 - iVar4] = local_68[iVar9] | 0x30;
            iVar9 = iVar9 + 1;
          } while (iVar9 <= iVar5);
        }
        local_18[iVar7] = 0;
      }
      if (iVar8 == 0) {
        local_90 = local_9c;
        local_8c = local_98;
        local_88 = local_94;
        FUN_004e4c30(local_48,&local_80);
        FUN_004e4c30(local_30,&local_74);
      }
      else {
        FUN_004e4c30(local_48,&local_90);
        FUN_004e4c30(local_30,&local_80);
        FUN_004e4c30(local_18,&local_74);
      }
      *param_2 = local_ac;
      param_2[1] = local_90;
      param_2[2] = local_8c;
      param_2[3] = local_88;
      param_2[4] = local_80;
      param_2[5] = local_7c;
      param_2[6] = local_78;
      param_2[7] = local_74;
      param_2[8] = local_70;
      param_2[9] = local_6c;
      return param_2;
    }
  }
  puVar1 = param_2 + 1;
  *param_2 = 1;
  FUN_004e5630(3,puVar1);
  param_2[7] = *puVar1;
  param_2[8] = param_2[2];
  param_2[9] = param_2[3];
  param_2[4] = *puVar1;
  param_2[5] = param_2[2];
  param_2[6] = param_2[3];
  return param_2;
}

