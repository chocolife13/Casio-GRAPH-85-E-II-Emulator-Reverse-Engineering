// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e45e0
// entry: 004e45e0  size: 753


uint * FUN_004e45e0(int *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  byte *pbVar17;
  char local_5e [2];
  int *local_5c;
  int local_58;
  int *local_54;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  byte local_30 [24];
  char local_18 [24];
  
  piVar5 = param_1;
  local_5e[0] = 'a';
  local_5e[1] = 0;
  FUN_004e5780(&local_50);
  iVar10 = *param_1;
  piVar1 = param_1 + 4;
  iVar7 = FUN_004e71d0(piVar1,&local_50);
  if (iVar7 == -1) {
    puVar8 = (uint *)FUN_004e5630(3,param_2);
    return puVar8;
  }
  if (iVar7 == 0) {
    param_1 = param_1 + 1;
    local_5c = param_1;
    iVar7 = FUN_004e7290(param_1,&local_50);
    if (iVar7 == -1) {
      puVar8 = (uint *)FUN_004e5630(3,param_2);
      return puVar8;
    }
    if (iVar7 == 0) {
      param_1 = (int *)0xfffffffe;
    }
    else {
      param_1 = (int *)FUN_004e7b60(param_1);
    }
    local_58 = FUN_004e7b60(piVar1);
    piVar2 = piVar5 + 7;
    local_54 = piVar2;
    iVar7 = FUN_004e7b60(piVar2);
    piVar6 = local_5c;
    iVar7 = iVar7 + local_58 + 4 + (int)param_1;
    if (iVar7 < 10) {
      local_30[0] = 0;
      iVar9 = FUN_004e7290(local_5c,&local_50);
      if (iVar9 != 0) {
        FUN_004e5130(piVar6,local_18);
        uVar11 = 0xffffffff;
        pcVar15 = local_18;
        do {
          pcVar16 = pcVar15;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar16 = pcVar15 + 1;
          cVar3 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar3 != '\0');
        uVar11 = ~uVar11;
        pbVar14 = (byte *)(pcVar16 + -uVar11);
        pbVar17 = local_30;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pbVar17 = *(undefined4 *)pbVar14;
          pbVar14 = pbVar14 + 4;
          pbVar17 = pbVar17 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pbVar17 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          pbVar17 = pbVar17 + 1;
        }
        uVar11 = 0xffffffff;
        pcVar15 = local_5e;
        do {
          pcVar16 = pcVar15;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar16 = pcVar15 + 1;
          cVar3 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar3 != '\0');
        uVar11 = ~uVar11;
        iVar9 = -1;
        pbVar14 = local_30;
        do {
          pbVar17 = pbVar14;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pbVar17 = pbVar14 + 1;
          bVar4 = *pbVar14;
          pbVar14 = pbVar17;
        } while (bVar4 != 0);
        pbVar14 = (byte *)(pcVar16 + -uVar11);
        pbVar17 = pbVar17 + -1;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pbVar17 = *(undefined4 *)pbVar14;
          pbVar14 = pbVar14 + 4;
          pbVar17 = pbVar17 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pbVar17 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          pbVar17 = pbVar17 + 1;
        }
      }
      FUN_004e5130(piVar1,local_18);
      uVar11 = 0xffffffff;
      pcVar15 = local_18;
      do {
        pcVar16 = pcVar15;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar15 + 1;
        cVar3 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar3 != '\0');
      uVar11 = ~uVar11;
      iVar9 = -1;
      pbVar14 = local_30;
      do {
        pbVar17 = pbVar14;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar17 = pbVar14 + 1;
        bVar4 = *pbVar14;
        pbVar14 = pbVar17;
      } while (bVar4 != 0);
      pbVar14 = (byte *)(pcVar16 + -uVar11);
      pbVar17 = pbVar17 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pbVar17 = *(undefined4 *)pbVar14;
        pbVar14 = pbVar14 + 4;
        pbVar17 = pbVar17 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar17 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        pbVar17 = pbVar17 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar15 = local_5e;
      do {
        pcVar16 = pcVar15;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar15 + 1;
        cVar3 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar3 != '\0');
      uVar11 = ~uVar11;
      iVar9 = -1;
      pbVar14 = local_30;
      do {
        pbVar17 = pbVar14;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar17 = pbVar14 + 1;
        bVar4 = *pbVar14;
        pbVar14 = pbVar17;
      } while (bVar4 != 0);
      pbVar14 = (byte *)(pcVar16 + -uVar11);
      pbVar17 = pbVar17 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pbVar17 = *(undefined4 *)pbVar14;
        pbVar14 = pbVar14 + 4;
        pbVar17 = pbVar17 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar17 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        pbVar17 = pbVar17 + 1;
      }
      FUN_004e5130(local_54,local_18);
      uVar11 = 0xffffffff;
      iVar9 = 0;
      pcVar15 = local_18;
      do {
        pcVar16 = pcVar15;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar15 + 1;
        cVar3 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar3 != '\0');
      uVar11 = ~uVar11;
      iVar13 = -1;
      pbVar14 = local_30;
      do {
        pbVar17 = pbVar14;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pbVar17 = pbVar14 + 1;
        bVar4 = *pbVar14;
        pbVar14 = pbVar17;
      } while (bVar4 != 0);
      pbVar14 = (byte *)(pcVar16 + -uVar11);
      pbVar17 = pbVar17 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pbVar17 = *(undefined4 *)pbVar14;
        pbVar14 = pbVar14 + 4;
        pbVar17 = pbVar17 + 4;
      }
      local_44 = 0;
      local_40 = 0;
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar17 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        pbVar17 = pbVar17 + 1;
      }
      local_3c = 0;
      local_38 = 0;
      uVar11 = 0xffffffff;
      pbVar14 = local_30;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar4 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar4 != 0);
      iVar13 = ~uVar11 - 1;
      local_34 = 0;
      if (0 < iVar13) {
        do {
          bVar4 = local_30[iVar9];
          *(byte *)((int)&local_44 + iVar9 + 1) = bVar4 & 0xf;
          if (bVar4 == 0x61) {
            *(undefined1 *)((int)&local_44 + iVar9 + 1) = 10;
          }
          iVar13 = iVar13 + -1;
          iVar9 = iVar9 + 1;
        } while (iVar13 != 0);
      }
      param_1._0_1_ = (char)iVar7;
      local_50 = CONCAT31(CONCAT21(local_50._2_2_,(char)param_1 << 4),
                          ((-(iVar10 != 1) & 5U) + 1) * '\x10') | 10;
      iVar10 = 2;
      pbVar14 = (byte *)((int)&local_44 + 3);
      do {
        pbVar17 = pbVar14 + -1;
        bVar4 = *pbVar14;
        pbVar14 = pbVar14 + 2;
        *(byte *)((int)&local_50 + iVar10) = *pbVar17 << 4 | bVar4;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 9);
      *param_2 = local_50;
      param_2[1] = local_4c;
      *(undefined1 *)(param_2 + 2) = local_48;
      return param_2;
    }
    FUN_004e6d90(piVar1,piVar2,&local_44);
    FUN_004e69c0(local_5c,&local_44,param_2);
  }
  else {
    *param_2 = param_1[1];
    param_2[1] = param_1[2];
    param_2[2] = param_1[3];
  }
  if (*piVar5 == -1) {
    FUN_004e7730(param_2,param_2);
  }
  return param_2;
}

