// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00426240
// entry: 00426240  size: 914


int FUN_00426240(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  int local_20;
  char *local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if (param_3 < 1) {
    return param_2;
  }
  local_20 = 0;
  if (0 < param_2) {
    iVar5 = param_1 + param_2 * 0x1c;
    local_8 = (undefined4 *)(iVar5 + -0x1c);
    local_c = (undefined4 *)(iVar5 + -0x18);
    local_10 = (undefined4 *)(iVar5 + -0xc);
    local_14 = (undefined4 *)(iVar5 + 0x10);
    do {
      puVar1 = (undefined4 *)(param_1 + local_20 * 0x1c);
      pcVar4 = s_PROGRAM_005be048;
      pbVar9 = (byte *)(puVar1 + 1);
      pbVar8 = pbVar9;
      do {
        bVar3 = *pcVar4;
        bVar11 = bVar3 < *pbVar8;
        if (bVar3 != *pbVar8) {
LAB_004262d8:
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_004262dd;
        }
        if (bVar3 == 0) break;
        bVar3 = ((byte *)pcVar4)[1];
        bVar11 = bVar3 < pbVar8[1];
        if (bVar3 != pbVar8[1]) goto LAB_004262d8;
        pcVar4 = (char *)((byte *)pcVar4 + 2);
        pbVar8 = pbVar8 + 2;
      } while (bVar3 != 0);
      iVar5 = 0;
LAB_004262dd:
      if (iVar5 == 0) {
        pbVar8 = (byte *)(puVar1 + 4);
        pcVar4 = s_PROGRAM_005be048;
        do {
          bVar3 = *pcVar4;
          bVar11 = bVar3 < *pbVar8;
          if (bVar3 != *pbVar8) {
LAB_0042630f:
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00426314;
          }
          if (bVar3 == 0) break;
          bVar3 = ((byte *)pcVar4)[1];
          bVar11 = bVar3 < pbVar8[1];
          if (bVar3 != pbVar8[1]) goto LAB_0042630f;
          pcVar4 = (char *)((byte *)pcVar4 + 2);
          pbVar8 = pbVar8 + 2;
        } while (bVar3 != 0);
        iVar5 = 0;
LAB_00426314:
        if (iVar5 != 0) goto LAB_00426318;
LAB_00426354:
        if (param_2 < param_3) {
          iVar5 = param_2;
          if (local_20 < param_2) {
            local_20 = param_2 - local_20;
            iVar5 = param_2 - local_20;
            puVar6 = local_14;
            do {
              local_20 = local_20 + -1;
              *puVar6 = puVar6[-7];
              puVar6[1] = puVar6[-6];
              puVar6[2] = puVar6[-5];
              puVar6[-3] = puVar6[-10];
              puVar6[-2] = puVar6[-9];
              puVar6[-1] = puVar6[-8];
              puVar6[-4] = puVar6[-0xb];
              puVar6 = puVar6 + -7;
            } while (local_20 != 0);
          }
          iVar2 = param_1 + iVar5 * 0x1c;
          local_18 = 0;
          puVar1[4] = *(undefined4 *)(iVar2 + 4);
          puVar1[5] = *(undefined4 *)(iVar2 + 8);
          puVar1[6] = *(undefined4 *)(iVar2 + 0xc);
          *puVar1 = 0;
          FUN_004a0620(puVar1,7,1);
          param_2 = param_2 + 1;
          local_20 = iVar5 + 1;
          local_14 = local_14 + 7;
          local_8 = local_8 + 7;
          if (local_20 < param_2) {
            local_1c = (char *)(param_1 + 0x10 + local_20 * 0x1c);
            do {
              pbVar9 = (byte *)(local_1c + -0xc);
              pbVar8 = (byte *)(iVar2 + 4);
              do {
                bVar3 = *pbVar8;
                bVar11 = bVar3 < *pbVar9;
                if (bVar3 != *pbVar9) {
LAB_00426487:
                  iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_0042648c;
                }
                if (bVar3 == 0) break;
                bVar3 = pbVar8[1];
                bVar11 = bVar3 < pbVar9[1];
                if (bVar3 != pbVar9[1]) goto LAB_00426487;
                pbVar8 = pbVar8 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar3 != 0);
              iVar5 = 0;
LAB_0042648c:
              if (iVar5 != 0) {
                local_20 = local_20 + -1;
                break;
              }
              iVar5 = _strncmp(local_1c,s_LIST_005be038,5);
              if (iVar5 == 0) {
                iVar5 = 1;
                pbVar10 = &DAT_0057e23f;
                pbVar9 = (byte *)(local_1c + 5);
                pbVar8 = pbVar10;
LAB_004264d4:
                do {
                  bVar3 = *pbVar9;
                  bVar11 = bVar3 < *pbVar10;
                  if (bVar3 == *pbVar10) {
                    if (bVar3 != 0) {
                      bVar3 = pbVar9[1];
                      bVar11 = bVar3 < pbVar10[1];
                      if (bVar3 != pbVar10[1]) goto LAB_004264f8;
                      pbVar10 = pbVar10 + 2;
                      pbVar9 = pbVar9 + 2;
                      if (bVar3 != 0) goto LAB_004264d4;
                    }
                    iVar7 = 0;
                  }
                  else {
LAB_004264f8:
                    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  }
                  if (iVar7 == 0) break;
                  pbVar10 = pbVar8 + 3;
                  iVar5 = iVar5 + 1;
                  pbVar9 = (byte *)(local_1c + 5);
                  pbVar8 = pbVar10;
                } while ((int)pbVar10 < 0x57e28b);
                if ((iVar5 == 0x1b) && (iVar5 = FUN_004a0af0(local_1c + -0x10), iVar5 != -1)) {
                  local_18 = local_18 + iVar5;
                }
              }
              else {
                iVar5 = FUN_004a0af0(local_1c + -0x10);
                if (iVar5 != -1) {
                  local_18 = local_18 + iVar5;
                }
              }
              local_20 = local_20 + 1;
              local_1c = local_1c + 0x1c;
            } while (local_20 < param_2);
          }
          FUN_004a0920(iVar2,local_18);
          local_10 = local_10 + 7;
          local_c = local_c + 7;
        }
        else {
          local_14 = local_14 + -7;
          *local_10 = 0;
          local_10[1] = 0;
          local_10[2] = 0;
          param_2 = param_2 + -1;
          *local_c = 0;
          local_c[1] = 0;
          local_c[2] = 0;
          *local_8 = 0;
          local_8 = local_8 + -7;
          local_10 = local_10 + -7;
          local_c = local_c + -7;
        }
      }
      else {
LAB_00426318:
        pbVar8 = (byte *)(puVar1 + 4);
        do {
          bVar3 = *pbVar9;
          bVar11 = bVar3 < *pbVar8;
          if (bVar3 != *pbVar8) {
LAB_00426347:
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0042634c;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar9[1];
          bVar11 = bVar3 < pbVar8[1];
          if (bVar3 != pbVar8[1]) goto LAB_00426347;
          pbVar9 = pbVar9 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar3 != 0);
        iVar5 = 0;
LAB_0042634c:
        if (iVar5 != 0) goto LAB_00426354;
      }
      local_20 = local_20 + 1;
    } while (local_20 < param_2);
  }
  return param_2;
}

