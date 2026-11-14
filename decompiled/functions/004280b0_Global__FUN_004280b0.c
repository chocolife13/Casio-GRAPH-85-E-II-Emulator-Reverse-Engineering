// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004280b0
// entry: 004280b0  size: 638


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004280b0(byte *param_1,int param_2,char *param_3,undefined4 param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pcVar1 = param_3;
  iVar8 = param_2;
  bVar2 = (char)param_2 + 0x41;
  local_14 = local_14 & 0xffffff00;
  param_2 = CONCAT31(param_2._1_3_,bVar2);
  while (bVar2 < 0x5b) {
    local_8 = 0;
    local_c._2_2_ = 0;
    local_10 = DAT_005be378;
    local_c._0_2_ = DAT_005be37c;
    _strncpy((char *)&local_c,(char *)&param_2,1);
    pbVar4 = (byte *)&local_10;
    pbVar9 = param_1;
    do {
      bVar2 = *pbVar4;
      bVar13 = bVar2 < *pbVar9;
      if (bVar2 != *pbVar9) {
LAB_00428138:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_0042813d;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar13 = bVar2 < pbVar9[1];
      if (bVar2 != pbVar9[1]) goto LAB_00428138;
      pbVar4 = pbVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_0042813d:
    if (iVar5 == 0) {
      *(undefined4 *)(pcVar1 + 0xd) = _DAT_005abcf8;
      pcVar1[0x11] = DAT_005abcfc;
      local_10 = DAT_005be7ac;
      local_c = (undefined *)CONCAT22(local_c._2_2_,DAT_005be7b0);
      _strncpy((char *)&local_c,(char *)&param_2,1);
      uVar6 = 0xffffffff;
      pcVar10 = (char *)&local_10;
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = pcVar1 + 0x16;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_005be754;
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar10 = (char *)&local_10;
      do {
        pcVar11 = pcVar10;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar3 != '\0');
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar10 = (char *)&local_10;
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = pcVar1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcVar1[0x28] = '\x13';
      pcVar1[0x29] = '\0';
      iVar5 = FUN_004271f0(pcVar1,&local_14,param_4);
      if (iVar5 == 0) {
        cVar3 = FUN_004ab990(local_14);
        pcVar1[0x1f] = cVar3;
        return iVar8 + 1;
      }
    }
    bVar2 = (char)param_2 + 1;
    iVar8 = iVar8 + 1;
    param_2 = CONCAT31(param_2._1_3_,bVar2);
  }
  local_10 = DAT_005be370;
  local_c = PTR_LAB_005be374;
  pbVar4 = (byte *)&local_10;
  do {
    bVar2 = *pbVar4;
    bVar13 = bVar2 < *param_1;
    if (bVar2 != *param_1) {
LAB_0042827f:
      iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_00428284;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar13 = bVar2 < param_1[1];
    if (bVar2 != param_1[1]) goto LAB_0042827f;
    pbVar4 = pbVar4 + 2;
    param_1 = param_1 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_00428284:
  if (iVar8 == 0) {
    *(undefined4 *)(pcVar1 + 0xd) = _DAT_005abcf8;
    pcVar1[0x11] = DAT_005abcfc;
    *(undefined4 *)(pcVar1 + 0x16) = _DAT_005bdd2c;
    *(undefined **)(pcVar1 + 0x1a) = PTR_LAB_005bdd30;
    *(undefined4 *)pcVar1 = _DAT_005bdd2c;
    *(undefined **)(pcVar1 + 4) = PTR_LAB_005bdd30;
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_005be754;
    do {
      pcVar12 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar10 + 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar10 = pcVar1;
    do {
      pcVar11 = pcVar10;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar11 = pcVar10 + 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar3 != '\0');
    pcVar10 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    pcVar1[0x28] = '\x13';
    pcVar1[0x29] = '\0';
    iVar8 = FUN_004271f0(pcVar1,&local_14,param_4);
    if (iVar8 == 0) {
      cVar3 = FUN_004ab990(local_14);
      pcVar1[0x1f] = cVar3;
      return 0;
    }
  }
  return -1;
}

