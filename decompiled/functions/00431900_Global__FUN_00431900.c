// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00431900
// entry: 00431900  size: 523


void FUN_00431900(char *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  bool bVar11;
  char *pcVar12;
  char *pcVar13;
  int local_2c;
  char local_24 [36];
  
  iVar6 = FUN_00431b10(param_1,param_2);
  if (iVar6 < 0) {
    uVar7 = 0xffffffff;
    pcVar13 = param_1;
    do {
      pcVar12 = pcVar13;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar12 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar12;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    bVar5 = true;
    pcVar13 = pcVar12 + -uVar7;
    pcVar12 = local_24;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar12 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar13 = param_2;
    do {
      pcVar12 = pcVar13;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar12 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar12;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar13 = pcVar12 + -uVar7;
    pcVar12 = param_1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar12 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar13 = local_24;
    do {
      pcVar12 = pcVar13;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar12 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar12;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar13 = pcVar12 + -uVar7;
    pcVar12 = param_2;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar12 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  else {
    bVar5 = false;
  }
  uVar7 = 0xffffffff;
  pcVar13 = param_2;
  do {
    pcVar12 = pcVar13;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar12;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar13 = pcVar12 + -uVar7;
  pcVar12 = local_24;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (iVar6 == 0) {
    *(undefined2 *)param_1 = DAT_005a91c0;
  }
  else {
    uVar7 = 0xffffffff;
    pcVar13 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    iVar6 = ~uVar7 - 1;
    uVar7 = 0xffffffff;
    pcVar13 = param_2;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    iVar9 = uVar7 - 1;
    if (iVar6 != iVar9) {
      if (-1 < iVar9) {
        pcVar13 = param_2 + iVar6;
        do {
          *pcVar13 = pcVar13[iVar9 - iVar6];
          pcVar13 = pcVar13 + -1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      iVar9 = iVar6 - iVar9;
      while (iVar9 = iVar9 + -1, -1 < iVar9) {
        param_2[iVar9] = '0';
      }
    }
    uVar7 = 0xffffffff;
    pcVar13 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    local_2c = ~uVar7 - 1;
    iVar9 = ~uVar7 - 2;
    if (-1 < iVar9) {
      pbVar10 = (byte *)(param_1 + iVar9);
      bVar11 = false;
      do {
        bVar3 = *pbVar10;
        bVar4 = (int)(bVar3 - 0x30) <
                (int)((pbVar10[(int)param_2 - (int)param_1] - 0x30) + (int)bVar11);
        if (bVar4) {
          *pbVar10 = ((bVar3 - pbVar10[(int)param_2 - (int)param_1]) - bVar11) + 0x3a;
        }
        else {
          *pbVar10 = ((bVar3 - pbVar10[(int)param_2 - (int)param_1]) - bVar11) + 0x30;
        }
        pbVar10 = pbVar10 + -1;
        local_2c = local_2c + -1;
        bVar11 = bVar4;
      } while (local_2c != 0);
    }
    if (*param_1 == '0') {
      iVar9 = 1;
      cVar2 = param_1[1];
      while (cVar2 == '0') {
        iVar1 = iVar9 + 1;
        iVar9 = iVar9 + 1;
        cVar2 = param_1[iVar1];
      }
      pcVar13 = param_1;
      if (0 < iVar6) {
        do {
          *pcVar13 = pcVar13[iVar9];
          iVar6 = iVar6 + -1;
          pcVar13 = pcVar13 + 1;
        } while (iVar6 != 0);
      }
    }
    if (bVar5) {
      uVar7 = 0xffffffff;
      pcVar13 = param_1;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      while (uVar8 = uVar7 - 1, 0 < (int)uVar8) {
        param_1[uVar8] = param_1[uVar7 - 2];
        uVar7 = uVar8;
      }
      *param_1 = '-';
    }
  }
  uVar7 = 0xffffffff;
  pcVar13 = local_24;
  do {
    pcVar12 = pcVar13;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar12;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar13 = pcVar12 + -uVar7;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *param_2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

