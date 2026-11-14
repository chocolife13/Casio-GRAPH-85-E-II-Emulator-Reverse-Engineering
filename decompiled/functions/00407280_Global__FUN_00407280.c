// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407280
// entry: 00407280  size: 609


undefined4 __thiscall FUN_00407280(int *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  byte local_404 [1028];
  
  *param_1 = 0;
  FUN_004074f0();
  iVar3 = FUN_00553497(param_2,&DAT_005a8d20);
  if (iVar3 != 0) {
    iVar4 = FUN_00553ea2(local_404,0x400,iVar3);
    while (iVar4 != 0) {
      iVar4 = -1;
      pbVar5 = local_404;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
      if (iVar4 != -2) {
        pbVar11 = &DAT_005a8c5c;
        pbVar5 = local_404;
        do {
          bVar1 = *pbVar5;
          bVar13 = bVar1 < *pbVar11;
          if (bVar1 != *pbVar11) {
LAB_00407313:
            iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_00407318;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar13 = bVar1 < pbVar11[1];
          if (bVar1 != pbVar11[1]) goto LAB_00407313;
          pbVar5 = pbVar5 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00407318:
        if (iVar4 != 0) {
          *param_1 = *param_1 + 1;
        }
      }
      iVar4 = FUN_00553ea2(local_404,0x400,iVar3);
    }
    FUN_00553de9(iVar3,0,0);
    iVar4 = FUN_00566937(*param_1 << 2);
    param_1[1] = iVar4;
    iVar4 = 0;
    iVar6 = FUN_00553ea2(local_404,0x400,iVar3);
    while (iVar6 != 0) {
      iVar6 = -1;
      pbVar5 = local_404;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
      if (iVar6 != -2) {
        pbVar11 = &DAT_005a8c5c;
        pbVar5 = local_404;
        do {
          bVar1 = *pbVar5;
          bVar13 = bVar1 < *pbVar11;
          if (bVar1 != *pbVar11) {
LAB_004073b1:
            iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_004073b6;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar13 = bVar1 < pbVar11[1];
          if (bVar1 != pbVar11[1]) goto LAB_004073b1;
          pbVar5 = pbVar5 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_004073b6:
        if (iVar6 != 0) {
          uVar7 = FUN_00566937(0xc);
          *(undefined4 *)(param_1[1] + iVar4 * 4) = uVar7;
          uVar7 = FUN_00407580(local_404,1);
          uVar7 = FUN_004075c0(uVar7);
          **(undefined4 **)(param_1[1] + iVar4 * 4) = uVar7;
          uVar7 = FUN_00407580(local_404,2);
          uVar7 = FUN_004075c0(uVar7);
          *(undefined4 *)(*(int *)(param_1[1] + iVar4 * 4) + 4) = uVar7;
          pcVar8 = (char *)FUN_00407580(local_404,3);
          uVar9 = 0xffffffff;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          uVar7 = FUN_00566937(~uVar9);
          *(undefined4 *)(*(int *)(param_1[1] + iVar4 * 4) + 8) = uVar7;
          pcVar8 = (char *)FUN_00407580(local_404,3);
          uVar9 = 0xffffffff;
          do {
            pcVar12 = pcVar8;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar12 = pcVar8 + 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          pcVar8 = pcVar12 + -uVar9;
          pcVar12 = *(char **)(*(int *)(param_1[1] + iVar4 * 4) + 8);
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar12 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar12 = pcVar12 + 1;
          }
          uVar9 = 0xffffffff;
          pcVar8 = *(char **)(*(int *)(param_1[1] + iVar4 * 4) + 8);
          pcVar12 = pcVar8;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          if (pcVar8[~uVar9 - 2] == '\n') {
            uVar9 = 0xffffffff;
            pcVar12 = pcVar8;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            pcVar8[~uVar9 - 2] = '\0';
          }
          iVar4 = iVar4 + 1;
          if (*param_1 < iVar4) break;
        }
      }
      iVar6 = FUN_00553ea2(local_404,0x400,iVar3);
    }
    FUN_005533e9(iVar3);
  }
  return CONCAT31((int3)((uint)*param_1 >> 8),*param_1 != 0);
}

