// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00425f90
// entry: 00425f90  size: 677


int FUN_00425f90(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  bool bVar13;
  int local_24;
  int local_20;
  byte *local_1c;
  int local_14;
  
  if (1 < param_2) {
    iVar10 = 1;
    local_20 = 0;
    if (1 < param_2) {
      do {
        local_1c = (byte *)(local_20 * 0x1c);
        pbVar9 = local_1c + param_1;
        pbVar12 = (byte *)(param_1 + 4 + iVar10 * 0x1c);
        pbVar2 = pbVar9 + 4;
        do {
          bVar1 = *pbVar2;
          bVar13 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_0042600c:
            iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_00426011;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar13 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_0042600c;
          pbVar2 = pbVar2 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00426011:
        iVar11 = iVar10;
        if (((iVar3 != 0) || (iVar11 = param_2, iVar3 = local_20, param_2 == iVar10 + 1)) &&
           (iVar10 = iVar11, local_14 = local_20 + 1, iVar3 = iVar10, local_14 != iVar10)) {
          iVar11 = iVar10 - local_20;
          FUN_0055531d(pbVar9,iVar11,0x1c,&LAB_00425f70);
          local_24 = iVar11;
          if (local_14 < iVar10) {
            pbVar12 = (byte *)(param_1 + 0x10 + local_14 * 0x1c);
            local_14 = iVar10 - local_14;
            do {
              pbVar4 = local_1c + param_1;
              pbVar5 = pbVar4 + 0x10;
              pbVar2 = pbVar12;
              do {
                bVar1 = *pbVar5;
                bVar13 = bVar1 < *pbVar2;
                if (bVar1 != *pbVar2) {
LAB_004260bf:
                  iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_004260c4;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar13 = bVar1 < pbVar2[1];
                if (bVar1 != pbVar2[1]) goto LAB_004260bf;
                pbVar5 = pbVar5 + 2;
                pbVar2 = pbVar2 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_004260c4:
              if (iVar6 == 0) {
                iVar7 = FUN_004a0af0(pbVar4);
                iVar6 = 0;
                if (iVar7 != -1) {
                  iVar6 = iVar7;
                }
                pbVar2 = pbVar12 + -0x10;
                iVar7 = FUN_004a0af0(pbVar2);
                if (iVar7 != -1) {
                  iVar6 = iVar6 + iVar7;
                }
                FUN_004a0920(pbVar4,iVar6);
                pbVar12[0] = 0;
                pbVar12[1] = 0;
                pbVar12[2] = 0;
                pbVar12[3] = 0;
                pbVar12[4] = 0;
                pbVar12[5] = 0;
                pbVar12[6] = 0;
                pbVar12[7] = 0;
                pbVar12[8] = 0;
                pbVar12[9] = 0;
                pbVar12[10] = 0;
                pbVar12[0xb] = 0;
                pbVar12[-0xffffffff0000000c] = 0;
                pbVar12[-0xffffffff0000000b] = 0;
                pbVar12[-0xffffffff0000000a] = 0;
                pbVar12[-0xffffffff00000009] = 0;
                pbVar12[-0xffffffff00000008] = 0;
                pbVar12[-0xffffffff00000007] = 0;
                pbVar12[-0xffffffff00000006] = 0;
                pbVar12[-0xffffffff00000005] = 0;
                pbVar12[-0xffffffff00000004] = 0;
                pbVar12[-0xffffffff00000003] = 0;
                pbVar12[-0xffffffff00000002] = 0;
                pbVar12[-0xffffffff00000001] = 0;
                local_24 = local_24 + -1;
                pbVar2[0] = 0;
                pbVar2[1] = 0;
                pbVar2[2] = 0;
                pbVar2[3] = 0;
              }
              else {
                local_1c = pbVar12 + (-0x10 - param_1);
              }
              pbVar12 = pbVar12 + 0x1c;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
          if (local_24 != iVar11) {
            FUN_0055531d(pbVar9,iVar11,0x1c,&LAB_00425f70);
            iVar10 = iVar10 - local_24;
            iVar3 = local_20;
            if (iVar10 < param_2) {
              iVar11 = param_2 - iVar10;
              iVar3 = iVar11 + local_20;
              pbVar9 = pbVar9 + 4;
              puVar8 = (undefined4 *)(param_1 + 4 + iVar10 * 0x1c);
              do {
                *(undefined4 *)(pbVar9 + 0xc) = puVar8[3];
                *(undefined4 *)(pbVar9 + 0x10) = puVar8[4];
                *(undefined4 *)(pbVar9 + 0x14) = puVar8[5];
                *(undefined4 *)pbVar9 = *puVar8;
                iVar11 = iVar11 + -1;
                *(undefined4 *)(pbVar9 + 4) = puVar8[1];
                *(undefined4 *)(pbVar9 + 8) = puVar8[2];
                *(undefined4 *)(pbVar9 + -4) = puVar8[-1];
                pbVar9 = pbVar9 + 0x1c;
                puVar8 = puVar8 + 7;
              } while (iVar11 != 0);
            }
            if (iVar3 < param_2) {
              param_2 = param_2 - iVar3;
              puVar8 = (undefined4 *)(param_1 + 4 + iVar3 * 0x1c);
              do {
                puVar8[3] = 0;
                puVar8[4] = 0;
                puVar8[5] = 0;
                param_2 = param_2 + -1;
                *puVar8 = 0;
                puVar8[1] = 0;
                puVar8[2] = 0;
                puVar8[-1] = 0;
                puVar8 = puVar8 + 7;
              } while (param_2 != 0);
            }
            iVar10 = local_24 + local_20;
            param_2 = iVar3;
            iVar3 = iVar10;
          }
        }
        local_20 = iVar3;
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_2);
    }
  }
  return param_2;
}

