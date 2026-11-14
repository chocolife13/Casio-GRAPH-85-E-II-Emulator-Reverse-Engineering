// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044dfc0
// entry: 0044dfc0  size: 1043


void FUN_0044dfc0(int param_1,uint param_2,uint param_3,uint param_4)

{
  short sVar1;
  int3 iVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint local_3c;
  uint local_38;
  int local_30;
  uint local_2c;
  undefined1 local_24 [36];
  
  param_2 = param_2 - 1;
  local_38 = param_4 - 1;
  iVar9 = 0;
  local_3c = param_3;
  local_2c = 1;
  uVar5 = param_3;
  if (param_2 != 0) {
    for (; uVar5 = local_3c, local_3c != 1; local_3c = local_3c - uVar5) {
      iVar4 = *(int *)(param_1 + 0x1fc);
      if (param_2 < 2) {
        param_3 = (uint)param_3._2_2_ << 0x10;
        param_3 = CONCAT31(param_3._1_3_,*(undefined1 *)(iVar4 + -1 + param_2));
      }
      else {
        param_3._0_2_ =
             CONCAT11(*(undefined1 *)(iVar4 + param_2 + -1),*(undefined1 *)(iVar4 + -2 + param_2));
      }
      iVar4 = FUN_004b73a0((int)&param_3 + 1);
      if (iVar4 == 0) {
        local_30 = 1;
        uVar3 = *(undefined1 *)(*(int *)(param_1 + 0x1fc) + -1 + param_2);
        param_3 = CONCAT31((uint3)param_3._2_2_ << 8,uVar3);
      }
      else {
        local_30 = 2;
        uVar3 = *(undefined1 *)(*(int *)(param_1 + 0x1fc) + param_2 + -1);
        param_3 = CONCAT31(CONCAT21(param_3._2_2_,
                                    *(undefined1 *)(*(int *)(param_1 + 0x1fc) + -2 + param_2)),uVar3
                          );
      }
      sVar1 = CONCAT11(param_3._1_1_,uVar3);
      FUN_004b79f0(sVar1,local_24);
      uVar5 = FUN_004b6bd0(local_24);
      uVar6 = FUN_004b6ca0(local_24);
      if (sVar1 == 0) {
        uVar5 = 1;
      }
      if (local_3c - 1 == uVar5) {
        param_2 = param_2 - local_30;
        uVar5 = local_3c - uVar5;
        break;
      }
      if (local_3c - 1 <= uVar5) {
        param_4 = 0;
        for (iVar4 = (uVar5 - local_3c) + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          iVar7 = FUN_004b6ab0(CONCAT31((int3)(local_3c >> 8),local_24[param_4]));
          if (iVar7 == 0) {
            param_4 = param_4 + 1;
          }
          else {
            param_4 = param_4 + 2;
          }
          local_3c = param_4;
        }
        uVar5 = local_2c;
        if (uVar6 <= param_4) break;
        iVar4 = local_38 * 0x2a;
        local_3c = iVar4;
        do {
          iVar7 = FUN_004b6ab0(local_24[param_4]);
          *(undefined1 *)(iVar9 + iVar4 + param_1) = local_24[param_4];
          if (iVar7 != 0) {
            iVar7 = param_4 + 1;
            iVar9 = iVar9 + 1;
            param_4 = param_4 + 1;
            *(undefined1 *)(iVar9 + iVar4 + param_1) = local_24[iVar7];
          }
          iVar9 = iVar9 + 1;
          param_4 = param_4 + 1;
          local_2c = local_2c + 1;
          uVar5 = iVar4;
          if (local_2c < 0x16) {
            if (sVar1 == 0xd) goto LAB_0044e1b4;
            if (sVar1 == 0xc) goto LAB_0044e1a8;
          }
          else {
LAB_0044e1a8:
            if ((sVar1 == 0xd) || (sVar1 == 0xc)) {
LAB_0044e1b4:
              if (local_2c < 0x15) {
                uVar8 = 0x15 - local_2c;
                puVar10 = (undefined4 *)(iVar4 + iVar9 + param_1);
                for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar10 = 0x20202020;
                  puVar10 = puVar10 + 1;
                }
                iVar9 = iVar9 + uVar8;
                for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *(undefined1 *)puVar10 = 0x20;
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                }
                local_2c = local_2c + uVar8;
                uVar5 = local_3c;
              }
            }
            local_38 = local_38 + 1;
            iVar4 = uVar5 + 0x2a;
            *(undefined1 *)(iVar9 + uVar5 + param_1) = 0;
            iVar9 = 0;
            local_3c = iVar4;
          }
          uVar5 = local_2c;
        } while (param_4 < uVar6);
        break;
      }
      param_2 = param_2 - local_30;
    }
  }
  do {
    do {
      local_3c = uVar5;
      if (5 < local_38) {
        return;
      }
      if (param_2 == *(int *)(param_1 + 0x204) - 1U) {
        sVar1 = 0x20;
        local_24[0] = 0x20;
        local_24[1] = 0;
      }
      else {
        iVar4 = FUN_004b7370(*(undefined1 *)(*(int *)(param_1 + 0x1fc) + param_2));
        if (iVar4 == 0) {
          iVar2 = (uint3)param_3._2_2_ << 8;
          iVar4 = *(int *)(param_1 + 0x1fc);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x1fc);
          param_2 = param_2 + 1;
          iVar2 = CONCAT21(param_3._2_2_,*(undefined1 *)(iVar4 + -1 + param_2));
        }
        param_3._1_1_ = (undefined1)iVar2;
        uVar3 = param_3._1_1_;
        param_3 = CONCAT31(iVar2,*(undefined1 *)(iVar4 + param_2));
        sVar1 = CONCAT11(uVar3,*(undefined1 *)(iVar4 + param_2));
        param_2 = param_2 + 1;
        FUN_004b79f0(sVar1,local_24);
      }
      FUN_004b6bd0(local_24);
      uVar6 = FUN_004b6ca0(local_24);
      uVar8 = 0;
      uVar5 = local_3c;
    } while (uVar6 == 0);
    iVar4 = local_38 * 0x2a;
    do {
      if (0xfb < iVar4) {
        return;
      }
      iVar7 = FUN_004b6ab0(local_24[uVar8]);
      if (iVar7 == 0) {
        *(undefined1 *)(iVar9 + iVar4 + param_1) = local_24[uVar8];
        uVar5 = uVar8;
      }
      else {
        iVar7 = iVar9 + iVar4;
        iVar9 = iVar9 + 1;
        uVar5 = uVar8 + 1;
        *(undefined1 *)(iVar7 + param_1) = local_24[uVar8];
        *(undefined1 *)(iVar9 + iVar4 + param_1) = local_24[uVar8 + 1];
      }
      iVar9 = iVar9 + 1;
      uVar8 = uVar5 + 1;
      local_3c = local_3c + 1;
      if (local_3c < 0x16) {
        if (sVar1 == 0xd) goto LAB_0044e365;
        if (sVar1 == 0xc) goto LAB_0044e359;
      }
      else {
LAB_0044e359:
        if ((sVar1 == 0xd) || (sVar1 == 0xc)) {
LAB_0044e365:
          if (local_3c < 0x16) {
            local_3c = 0x16 - local_3c;
            puVar10 = (undefined4 *)(iVar9 + iVar4 + param_1);
            for (uVar5 = local_3c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar10 = 0x20202020;
              puVar10 = puVar10 + 1;
            }
            iVar9 = iVar9 + local_3c;
            for (local_3c = local_3c & 3; local_3c != 0; local_3c = local_3c - 1) {
              *(undefined1 *)puVar10 = 0x20;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
          }
        }
        iVar9 = iVar9 + iVar4;
        local_38 = local_38 + 1;
        iVar4 = iVar4 + 0x2a;
        *(undefined1 *)(iVar9 + param_1) = 0;
        local_3c = 1;
        iVar9 = 0;
      }
      param_4 = uVar8;
      uVar5 = local_3c;
    } while (uVar8 < uVar6);
  } while( true );
}

