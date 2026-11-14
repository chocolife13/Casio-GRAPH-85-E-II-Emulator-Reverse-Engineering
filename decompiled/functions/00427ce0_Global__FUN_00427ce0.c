// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00427ce0
// entry: 00427ce0  size: 582


int FUN_00427ce0(byte *param_1,int param_2,char *param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  int local_18;
  uint local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  int local_8;
  
  local_18 = param_2 + 1;
  local_14 = local_14 & 0xffffff00;
  if (local_18 < 0x15) {
    pcVar7 = &DAT_0057e364 + local_18 * 3;
    do {
      local_c = (undefined1  [4])DAT_005be7a8;
      local_8 = 0;
      uVar4 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar11 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      local_10 = DAT_005be7a4;
      pcVar9 = pcVar11 + -uVar4;
      pcVar11 = local_c + 2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      pbVar3 = (byte *)&local_10;
      for (uVar4 = uVar4 & 3; pbVar8 = param_1, uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      do {
        bVar1 = *pbVar3;
        bVar12 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00427d7b:
          local_8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00427d80;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar12 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00427d7b;
        pbVar3 = pbVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      local_8 = 0;
LAB_00427d80:
      if (local_8 == 0) {
        *(undefined4 *)(param_3 + 0xd) = s__GRAPH_005be2ac._0_4_;
        *(undefined2 *)(param_3 + 0x11) = s__GRAPH_005be2ac._4_2_;
        param_3[0x13] = s__GRAPH_005be2ac[6];
        local_10 = DAT_005be79c;
        local_c._2_2_ = 0;
        local_c._0_2_ = DAT_005be7a0;
        uVar4 = 0xffffffff;
        pcVar9 = pcVar7;
        do {
          pcVar11 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar9 = pcVar11 + -uVar4;
        pcVar11 = local_c;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar4 = 0xffffffff;
        pcVar9 = (char *)&local_10;
        do {
          pcVar11 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar9 = pcVar11 + -uVar4;
        pcVar11 = param_3 + 0x16;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        local_8 = 0;
        local_c[2] = DAT_005be79a;
        local_c._0_2_ = DAT_005be798;
        local_c[3] = 0;
        uVar4 = 0xffffffff;
        pcVar9 = pcVar7;
        do {
          pcVar11 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        local_10 = DAT_005be794;
        pcVar9 = pcVar11 + -uVar4;
        pcVar11 = local_c + 2;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar4 = 0xffffffff;
        pcVar9 = &DAT_005be754;
        do {
          pcVar11 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        iVar6 = -1;
        pcVar9 = (char *)&local_10;
        do {
          pcVar10 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar10 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar2 != '\0');
        pcVar9 = pcVar11 + -uVar4;
        pcVar11 = pcVar10 + -1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar4 = 0xffffffff;
        pcVar9 = (char *)&local_10;
        do {
          pcVar11 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar9 = pcVar11 + -uVar4;
        pcVar11 = param_3;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        param_3[0x28] = '*';
        param_3[0x29] = '\0';
        iVar6 = FUN_004271f0(param_3,&local_14,param_4);
        if (iVar6 == 0) {
          cVar2 = FUN_004ab990(local_14);
          param_3[0x1f] = cVar2;
          if (local_18 < 0x14) {
            return param_2 + 1;
          }
          return 0;
        }
      }
      local_18 = local_18 + 1;
      pcVar7 = pcVar7 + 3;
      param_2 = param_2 + 1;
    } while ((int)pcVar7 < 0x57e3a1);
  }
  return -1;
}

