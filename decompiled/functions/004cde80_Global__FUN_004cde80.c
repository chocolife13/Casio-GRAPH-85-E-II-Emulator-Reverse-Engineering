// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004cde80
// entry: 004cde80  size: 3720


int FUN_004cde80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  undefined4 local_c4 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
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
  undefined4 local_18 [6];
  
  piVar3 = *(int **)(param_1 + 8);
  iVar4 = FUN_004e4000(param_1);
  uVar2 = *(ushort *)(param_1 + 2);
  uVar7 = (uint)uVar2;
  local_8c = uVar7;
  FUN_004e5780(local_18);
  puVar5 = (undefined4 *)*piVar3;
  iVar6 = uVar7 * uVar7;
  local_78 = *puVar5;
  local_74 = puVar5[1];
  local_70 = puVar5[2];
  local_80 = iVar6;
  if (iVar4 == 0) {
    if (1 < uVar2) {
      local_d0 = uVar7 - 1;
      iVar4 = 0xc;
      do {
        puVar5 = (undefined4 *)(iVar4 + *piVar3);
        local_c4[0] = *puVar5;
        local_c4[1] = puVar5[1];
        local_c4[2] = puVar5[2];
        FUN_004e0ef0(local_c4,&local_78,local_c4,1);
        puVar5 = (undefined4 *)(iVar4 + *piVar3);
        iVar4 = iVar4 + 0xc;
        *puVar5 = local_c4[0];
        puVar5[1] = local_c4[1];
        local_d0 = local_d0 + -1;
        puVar5[2] = local_c4[2];
      } while (local_d0 != 0);
    }
    if (2 < uVar2) {
      iVar4 = uVar7 - 1;
      local_c8 = 1;
      iVar6 = local_80;
      if (1 < iVar4) {
        iVar8 = uVar7 * 0xc;
        local_94 = 0xc;
        local_cc = uVar7;
        local_a8 = iVar8;
        local_9c = iVar8;
        do {
          if (local_c8 < (int)uVar7) {
            local_a0 = local_a8;
            iVar6 = (uVar7 + 1) * local_c8 * 0xc;
            local_ac = uVar7 - local_c8;
            do {
              puVar5 = (undefined4 *)(*piVar3 + iVar6);
              local_48 = *puVar5;
              local_44 = puVar5[1];
              local_40 = puVar5[2];
              if (-1 < local_c8 + -1) {
                local_a4 = local_c8;
                iVar8 = local_94;
                iVar9 = local_a0;
                do {
                  puVar5 = (undefined4 *)(iVar9 + *piVar3);
                  local_c4[0] = *puVar5;
                  local_c4[1] = puVar5[1];
                  local_c4[2] = puVar5[2];
                  puVar5 = (undefined4 *)(iVar8 + *piVar3);
                  local_78 = *puVar5;
                  local_74 = puVar5[1];
                  local_70 = puVar5[2];
                  FUN_004e0c40(local_c4,&local_78,local_c4,1);
                  FUN_004e0b00(&local_48,local_c4,&local_48,1);
                  iVar9 = iVar9 + 0xc;
                  iVar8 = iVar8 + local_9c;
                  local_a4 = local_a4 + -1;
                } while (local_a4 != 0);
                local_a4 = 0;
                iVar8 = local_9c;
              }
              puVar5 = (undefined4 *)(*piVar3 + iVar6);
              iVar6 = iVar6 + iVar8;
              *puVar5 = local_48;
              puVar5[1] = local_44;
              puVar5[2] = local_40;
              local_a0 = local_a0 + iVar8;
              local_ac = local_ac + -1;
            } while (local_ac != 0);
          }
          iVar6 = FUN_004cd860(param_1,local_c8,param_2,param_3);
          if (iVar6 != 1) {
            return iVar6;
          }
          iVar6 = FUN_0052f820();
          if (iVar6 != 0) {
LAB_004ceb3c:
            FUN_004e5630(1,param_1);
            return 0;
          }
          local_a4 = local_c8 + 1;
          local_98 = local_a4;
          if (local_a4 < (int)uVar7) {
            local_a0 = local_94 + 0xc;
            local_90 = (local_cc + 1 + local_c8) * 0xc;
            do {
              puVar5 = (undefined4 *)(*piVar3 + local_90);
              local_30 = *puVar5;
              local_2c = puVar5[1];
              local_28 = puVar5[2];
              if (-1 < local_c8 + -1) {
                local_d4 = local_c8;
                iVar6 = local_a0;
                iVar9 = local_a8;
                do {
                  puVar5 = (undefined4 *)(*piVar3 + iVar9);
                  local_c4[0] = *puVar5;
                  local_c4[1] = puVar5[1];
                  local_c4[2] = puVar5[2];
                  puVar5 = (undefined4 *)(*piVar3 + iVar6);
                  local_78 = *puVar5;
                  local_74 = puVar5[1];
                  local_70 = puVar5[2];
                  FUN_004e0c40(local_c4,&local_78,local_c4,1);
                  FUN_004e0b00(&local_30,local_c4,&local_30,1);
                  iVar9 = iVar9 + 0xc;
                  iVar6 = iVar6 + local_9c;
                  local_d4 = local_d4 + -1;
                  iVar8 = local_9c;
                } while (local_d4 != 0);
              }
              iVar9 = (uVar7 + 1) * local_c8;
              iVar6 = *piVar3 + iVar9 * 0xc;
              local_c4[0] = *(undefined4 *)(*piVar3 + iVar9 * 0xc);
              local_c4[1] = *(undefined4 *)(iVar6 + 4);
              local_c4[2] = *(undefined4 *)(iVar6 + 8);
              iVar6 = FUN_004e71d0(local_c4,local_18);
              if (iVar6 == 0) {
                FUN_004e0ef0(&local_30,local_c4,local_c4,1);
              }
              else {
                if (iVar6 == -1) {
LAB_004ceb5b:
                  FUN_004e5630(3,param_1);
                  return 0;
                }
                puVar5 = local_18;
                puVar10 = local_c4;
                for (iVar6 = 6; uVar7 = local_8c, iVar8 = local_9c, iVar6 != 0; iVar6 = iVar6 + -1)
                {
                  *puVar10 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar10 = puVar10 + 1;
                }
              }
              puVar5 = (undefined4 *)(*piVar3 + local_90);
              local_90 = local_90 + 0xc;
              *puVar5 = local_c4[0];
              puVar5[1] = local_c4[1];
              puVar5[2] = local_c4[2];
              local_98 = local_98 + 1;
              local_a0 = local_a0 + 0xc;
            } while (local_98 < (int)uVar7);
          }
          local_94 = local_94 + 0xc;
          local_cc = local_cc + uVar7;
          local_a8 = local_a8 + iVar8;
          iVar6 = local_80;
          local_c8 = local_a4;
        } while (local_a4 < iVar4);
      }
    }
    local_8c = iVar6 * 0xc;
    iVar6 = *piVar3 + -0xc + local_8c;
    local_60 = *(undefined4 *)(*piVar3 + -0xc + local_8c);
    local_5c = *(undefined4 *)(iVar6 + 4);
    local_58 = *(undefined4 *)(iVar6 + 8);
    local_d0 = uVar7 - 1;
    if (0 < (int)local_d0) {
      iVar4 = local_d0 * uVar7 * 0xc;
      iVar6 = uVar7 * 0xc;
      do {
        puVar5 = (undefined4 *)(*piVar3 + iVar4);
        local_c4[0] = *puVar5;
        local_c4[1] = puVar5[1];
        local_c4[2] = puVar5[2];
        iVar8 = *piVar3 + -0xc + iVar6;
        local_78 = *(undefined4 *)(*piVar3 + -0xc + iVar6);
        local_74 = *(undefined4 *)(iVar8 + 4);
        local_70 = *(undefined4 *)(iVar8 + 8);
        FUN_004e0c40(local_c4,&local_78,local_c4,1);
        FUN_004e0b00(&local_60,local_c4,&local_60,1);
        iVar4 = iVar4 + 0xc;
        iVar6 = iVar6 + uVar7 * 0xc;
        local_d0 = local_d0 + -1;
      } while (local_d0 != 0);
    }
    iVar6 = *piVar3 + -0xc + local_8c;
    *(undefined4 *)(*piVar3 + -0xc + local_8c) = local_60;
    *(undefined4 *)(iVar6 + 4) = local_5c;
    *(undefined4 *)(iVar6 + 8) = local_58;
    FUN_004e23b0(&local_60,&local_60,1);
    iVar6 = FUN_004e71d0(&local_60,local_18);
    if (iVar6 == 1) {
      FUN_004e5630(3,param_1);
      return 2;
    }
  }
  else {
    iVar4 = *piVar3 + iVar6 * 0xc;
    local_6c = *(undefined4 *)(*piVar3 + iVar6 * 0xc);
    local_68 = *(undefined4 *)(iVar4 + 4);
    local_64 = *(undefined4 *)(iVar4 + 8);
    if (1 < uVar2) {
      local_d0 = uVar7 - 1;
      local_cc = 0xc;
      iVar4 = (iVar6 * 3 + 3) * 4;
      do {
        puVar5 = (undefined4 *)(*piVar3 + local_cc);
        local_c4[0] = *puVar5;
        local_c4[1] = puVar5[1];
        local_c4[2] = puVar5[2];
        puVar5 = (undefined4 *)(*piVar3 + iVar4);
        local_c4[3] = *puVar5;
        local_b4 = puVar5[1];
        local_b0 = puVar5[2];
        FUN_004e0ef0(local_c4,&local_78,local_c4,1);
        puVar5 = (undefined4 *)(*piVar3 + local_cc);
        local_cc = local_cc + 0xc;
        *puVar5 = local_c4[0];
        puVar5[1] = local_c4[1];
        puVar5[2] = local_c4[2];
        puVar5 = (undefined4 *)(*piVar3 + iVar4);
        iVar4 = iVar4 + 0xc;
        local_d0 = local_d0 + -1;
        *puVar5 = local_c4[3];
        puVar5[1] = local_b4;
        puVar5[2] = local_b0;
      } while (local_d0 != 0);
    }
    if ((2 < uVar2) && (local_c8 = 1, 1 < (int)(uVar7 - 1))) {
      iVar4 = uVar7 * 0xc;
      local_9c = (local_80 * 3 + 3) * 4;
      local_94 = 0xc;
      local_a0 = (local_80 + uVar7) * 0xc;
      local_d0 = uVar7;
      local_90 = iVar4;
      do {
        if (local_c8 < (int)uVar7) {
          iVar8 = (uVar7 + 1) * local_c8;
          local_88 = local_90;
          iVar6 = iVar8 * 0xc;
          local_ac = (iVar8 + local_80) * 0xc;
          local_84 = uVar7 - local_c8;
          local_7c = local_a0;
          do {
            puVar5 = (undefined4 *)(*piVar3 + iVar6);
            local_48 = *puVar5;
            local_44 = puVar5[1];
            local_40 = puVar5[2];
            puVar5 = (undefined4 *)(*piVar3 + local_ac);
            local_3c = *puVar5;
            local_38 = puVar5[1];
            local_34 = puVar5[2];
            if (-1 < local_c8 + -1) {
              local_cc = local_7c;
              local_a8 = local_94;
              local_98 = local_9c;
              local_a4 = local_c8;
              iVar8 = local_88;
              do {
                puVar5 = (undefined4 *)(*piVar3 + iVar8);
                local_c4[0] = *puVar5;
                local_c4[1] = puVar5[1];
                local_c4[2] = puVar5[2];
                puVar5 = (undefined4 *)(*piVar3 + local_cc);
                local_c4[3] = *puVar5;
                local_b4 = puVar5[1];
                local_b0 = puVar5[2];
                puVar5 = (undefined4 *)(*piVar3 + local_a8);
                local_78 = *puVar5;
                local_74 = puVar5[1];
                local_70 = puVar5[2];
                puVar5 = (undefined4 *)(*piVar3 + local_98);
                local_6c = *puVar5;
                local_68 = puVar5[1];
                local_64 = puVar5[2];
                FUN_004e0c40(local_c4,&local_78,local_c4,1);
                FUN_004e0b00(&local_48,local_c4,&local_48,1);
                local_cc = local_cc + 0xc;
                iVar8 = iVar8 + 0xc;
                local_a8 = local_a8 + iVar4;
                local_98 = local_98 + iVar4;
                local_a4 = local_a4 + -1;
              } while (local_a4 != 0);
              local_a4 = 0;
            }
            puVar5 = (undefined4 *)(*piVar3 + iVar6);
            iVar6 = iVar6 + iVar4;
            *puVar5 = local_48;
            puVar5[1] = local_44;
            puVar5[2] = local_40;
            puVar5 = (undefined4 *)(*piVar3 + local_ac);
            local_ac = local_ac + iVar4;
            *puVar5 = local_3c;
            puVar5[1] = local_38;
            puVar5[2] = local_34;
            local_88 = local_88 + iVar4;
            local_7c = local_7c + iVar4;
            local_84 = local_84 + -1;
          } while (local_84 != 0);
          local_84 = 0;
        }
        iVar6 = FUN_004cd860(param_1,local_c8,param_2,param_3);
        if (iVar6 != 1) {
          return iVar6;
        }
        iVar6 = FUN_0052f820();
        if (iVar6 != 0) goto LAB_004ceb3c;
        local_a4 = local_c8 + 1;
        local_98 = local_a4;
        if (local_a4 < (int)uVar7) {
          iVar6 = local_d0 + 1 + local_c8;
          local_a8 = (iVar6 + local_80) * 0xc;
          local_ac = local_9c + 0xc;
          iVar6 = iVar6 * 0xc;
          local_cc = local_94;
          do {
            local_cc = local_cc + 0xc;
            puVar5 = (undefined4 *)(iVar6 + *piVar3);
            local_30 = *puVar5;
            local_2c = puVar5[1];
            local_28 = puVar5[2];
            puVar5 = (undefined4 *)(local_a8 + *piVar3);
            local_24 = *puVar5;
            local_20 = puVar5[1];
            local_1c = puVar5[2];
            if (-1 < local_c8 + -1) {
              local_7c = local_cc;
              local_88 = local_ac;
              local_84 = local_c8;
              iVar8 = local_90;
              iVar9 = local_a0;
              do {
                puVar5 = (undefined4 *)(iVar8 + *piVar3);
                local_c4[0] = *puVar5;
                local_c4[1] = puVar5[1];
                local_c4[2] = puVar5[2];
                puVar5 = (undefined4 *)(iVar9 + *piVar3);
                local_c4[3] = *puVar5;
                local_b4 = puVar5[1];
                local_b0 = puVar5[2];
                puVar5 = (undefined4 *)(local_7c + *piVar3);
                local_78 = *puVar5;
                local_74 = puVar5[1];
                local_70 = puVar5[2];
                puVar5 = (undefined4 *)(local_88 + *piVar3);
                local_6c = *puVar5;
                local_68 = puVar5[1];
                local_64 = puVar5[2];
                FUN_004e0c40(local_c4,&local_78,local_c4,1);
                FUN_004e0b00(&local_30,local_c4,&local_30,1);
                iVar8 = iVar8 + 0xc;
                iVar9 = iVar9 + 0xc;
                local_7c = local_7c + iVar4;
                local_88 = local_88 + iVar4;
                local_84 = local_84 + -1;
              } while (local_84 != 0);
              local_84 = 0;
              uVar7 = local_8c;
            }
            iVar9 = (uVar7 + 1) * local_c8;
            puVar5 = (undefined4 *)(*piVar3 + iVar9 * 0xc);
            local_c4[0] = *puVar5;
            local_c4[1] = puVar5[1];
            local_c4[2] = puVar5[2];
            iVar9 = iVar9 + local_80;
            iVar8 = *piVar3 + iVar9 * 0xc;
            local_c4[3] = *(undefined4 *)(*piVar3 + iVar9 * 0xc);
            local_b4 = *(undefined4 *)(iVar8 + 4);
            local_b0 = *(undefined4 *)(iVar8 + 8);
            iVar8 = FUN_004e71d0(local_c4,local_18);
            if (iVar8 == 0) {
              FUN_004e0ef0(&local_30,local_c4,local_c4,1);
            }
            else {
              if (iVar8 == -1) goto LAB_004ceb5b;
              puVar5 = local_18;
              puVar10 = local_c4;
              for (iVar8 = 6; uVar7 = local_8c, iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar10 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar10 = puVar10 + 1;
              }
            }
            puVar5 = (undefined4 *)(iVar6 + *piVar3);
            *puVar5 = local_c4[0];
            puVar5[1] = local_c4[1];
            puVar5[2] = local_c4[2];
            puVar5 = (undefined4 *)(local_a8 + *piVar3);
            *puVar5 = local_c4[3];
            puVar5[1] = local_b4;
            puVar5[2] = local_b0;
            local_ac = local_ac + 0xc;
            local_98 = local_98 + 1;
            local_a8 = local_a8 + 0xc;
            iVar6 = iVar6 + 0xc;
          } while (local_98 < (int)uVar7);
        }
        local_94 = local_94 + 0xc;
        local_9c = local_9c + 0xc;
        local_90 = local_90 + iVar4;
        local_d0 = local_d0 + uVar7;
        local_a0 = local_a0 + iVar4;
        iVar6 = local_80;
        local_c8 = local_a4;
      } while (local_a4 < (int)(uVar7 - 1));
    }
    local_8c = iVar6 * 0xc;
    iVar4 = local_8c + -0xc + *piVar3;
    local_60 = *(undefined4 *)(local_8c + -0xc + *piVar3);
    local_5c = *(undefined4 *)(iVar4 + 4);
    local_58 = *(undefined4 *)(iVar4 + 8);
    local_84 = iVar6 * 0x18;
    puVar5 = (undefined4 *)(local_84 + -0xc + *piVar3);
    local_54 = *puVar5;
    local_50 = puVar5[1];
    local_4c = puVar5[2];
    iVar4 = uVar7 - 1;
    if (0 < iVar4) {
      iVar8 = (iVar4 * uVar7 + iVar6) * 0xc;
      local_a4 = iVar4 * uVar7 * 0xc;
      iVar9 = uVar7 * 0xc;
      iVar6 = (uVar7 + iVar6) * 0xc;
      local_ac = iVar9;
      do {
        puVar5 = (undefined4 *)(*piVar3 + local_a4);
        local_c4[0] = *puVar5;
        local_c4[1] = puVar5[1];
        local_c4[2] = puVar5[2];
        puVar5 = (undefined4 *)(*piVar3 + iVar8);
        local_c4[3] = *puVar5;
        local_b4 = puVar5[1];
        local_b0 = puVar5[2];
        iVar1 = *piVar3 + -0xc + local_ac;
        local_78 = *(undefined4 *)(*piVar3 + -0xc + local_ac);
        local_74 = *(undefined4 *)(iVar1 + 4);
        local_70 = *(undefined4 *)(iVar1 + 8);
        iVar1 = *piVar3 + -0xc + iVar6;
        local_6c = *(undefined4 *)(*piVar3 + -0xc + iVar6);
        local_68 = *(undefined4 *)(iVar1 + 4);
        local_64 = *(undefined4 *)(iVar1 + 8);
        FUN_004e0c40(local_c4,&local_78,local_c4,1);
        FUN_004e0b00(&local_60,local_c4,&local_60,1);
        local_a4 = local_a4 + 0xc;
        iVar8 = iVar8 + 0xc;
        local_ac = local_ac + iVar9;
        iVar6 = iVar6 + iVar9;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar5 = (undefined4 *)(local_8c + -0xc + *piVar3);
    *puVar5 = local_60;
    puVar5[1] = local_5c;
    puVar5[2] = local_58;
    puVar5 = (undefined4 *)(local_84 + -0xc + *piVar3);
    *puVar5 = local_54;
    puVar5[1] = local_50;
    puVar5[2] = local_4c;
    FUN_004e23b0(&local_60,&local_60,1);
    iVar6 = FUN_004e71d0(&local_60,local_18);
    if (iVar6 != 0) {
      FUN_004e5630(3,param_1);
      return 2;
    }
  }
  return 1;
}

