// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00412630
// entry: 00412630  size: 1005


void FUN_00412630(uint *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  byte local_31;
  byte *local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  FUN_00414db0();
  local_24 = 0;
  uVar6 = *param_1;
  uVar8 = uVar6 & 0x80000007;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
  }
  uVar2 = param_1[1];
  local_30 = (byte *)param_1[4];
  local_28 = uVar2 - 1;
  iVar9 = (int)&DAT_005d8280 + uVar2 * 0x10 + ((int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3);
  local_18 = CONCAT31(local_18._1_3_,(&DAT_0057d5a4)[uVar8]);
  uVar5 = uVar6 + param_1[2] & 0x80000007;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
  }
  local_1c = CONCAT31(local_1c._1_3_,(&DAT_0057d5ac)[uVar5]);
  if ((((int)uVar6 < 0x81) && (0 < (int)param_1[3])) && (uVar6 = param_1[3], 0 < (int)param_1[2])) {
    while ((local_10 = uVar6, local_c = uVar2, 0 < (int)local_10 && ((int)local_c < 0x40))) {
      local_8 = iVar9 + 0x10;
      iVar10 = (int)(*param_1 + ((int)*param_1 >> 0x1f & 7U)) >> 3;
      local_28 = local_28 + 1;
      local_24 = (uint)(local_24 == 0);
      if (uVar8 == 0) {
        for (local_2c = (int)(param_1[2] + ((int)param_1[2] >> 0x1f & 7U)) >> 3; 0 < local_2c;
            local_2c = local_2c + -1) {
          local_31 = *local_30;
          local_30 = local_30 + 1;
          if ((int)(*param_1 + local_2c) < 0x81) {
            FUN_00412a20(0xff,iVar9,&local_31,*(undefined1 *)((int)param_1 + 0x15),(char)param_1[5],
                         &local_24,iVar10,local_28,param_3);
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 1;
          }
        }
        uVar6 = param_1[2] & 0x80000007;
        bVar11 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar11 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (!bVar11) {
          local_31 = *local_30;
          local_30 = local_30 + 1;
          local_31 = local_31 & (byte)local_1c;
          iVar4 = *param_1 + local_2c;
          iVar3 = iVar4 + -0x80;
          bVar11 = iVar4 == 0x80;
LAB_004127ba:
          if (bVar11 || SBORROW4(iVar4,0x80) != iVar3 < 0) {
            FUN_00412a20(local_1c,iVar9,&local_31,*(undefined1 *)((int)param_1 + 0x15),
                         (char)param_1[5],&local_24,iVar10,local_28,param_3);
          }
        }
      }
      else {
        bVar7 = (byte)uVar8;
        local_20 = 8 - uVar8;
        if ((int)param_1[2] <= local_20) {
          local_18._1_3_ = (undefined3)((uint)local_18 >> 8);
          local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & (byte)local_1c);
        }
        local_31 = *local_30 >> (bVar7 & 0x1f) & (byte)local_18;
        local_4 = local_20;
        FUN_00412a20(local_18,iVar9,&local_31,
                     CONCAT31((int3)((uint)local_28 >> 8),*(undefined1 *)((int)param_1 + 0x15)),
                     (char)param_1[5],&local_24,iVar10,local_28,param_3);
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 1;
        iVar3 = (param_1[2] - 8) + uVar8;
        local_2c = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
        local_14 = local_2c;
        if (0 < local_2c) {
          do {
            bVar1 = *local_30;
            local_20 = local_20 + uVar8;
            if (7 < local_20) {
              local_20 = local_20 + -8;
              local_30 = local_30 + 1;
            }
            local_31 = bVar1 << (8 - bVar7 & 0x1f) | *local_30 >> (bVar7 & 0x1f);
            local_20 = local_20 + (8 - uVar8);
            if (7 < local_20) {
              local_20 = local_20 + -8;
              local_30 = local_30 + 1;
            }
            if ((int)(*param_1 + local_2c) < 0x81) {
              FUN_00412a20(0xff,iVar9,&local_31,*(undefined1 *)((int)param_1 + 0x15),
                           (char)param_1[5],&local_24,iVar10,local_28,param_3);
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + 1;
            }
            local_2c = local_2c + -1;
          } while (0 < local_2c);
        }
        iVar3 = param_1[2] + local_14 * -8;
        if (local_4 < iVar3) {
          uVar6 = param_1[2] + *param_1 & 0x80000007;
          bVar11 = uVar6 == 0;
          if ((int)uVar6 < 0) {
            bVar11 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
          }
          if (!bVar11) {
            local_31 = *local_30 << (8 - bVar7 & 0x1f);
            if (7 < (int)(local_20 + uVar8)) {
              local_30 = local_30 + 1;
            }
            if (8 < iVar3) {
              local_31 = local_31 | *local_30 >> (bVar7 & 0x1f);
              local_30 = local_30 + 1;
            }
            local_31 = local_31 & (byte)local_1c;
            iVar4 = *param_1 + local_2c;
            iVar3 = iVar4 + -0x80;
            bVar11 = iVar3 == 0;
            goto LAB_004127ba;
          }
        }
        else {
          local_30 = local_30 + 1;
        }
      }
      iVar9 = local_8;
      uVar6 = local_10 - 1;
      uVar2 = local_c + 1;
    }
  }
  FUN_00414db0();
  if (param_3 == 1) {
    FUN_00414470();
  }
  return;
}

