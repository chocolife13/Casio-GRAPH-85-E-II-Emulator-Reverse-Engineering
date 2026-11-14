// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00408760
// entry: 00408760  size: 841


uint FUN_00408760(char *param_1,uint param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  bool bVar16;
  undefined4 local_14;
  
  uVar9 = 0xffffffff;
  pcVar7 = s__Cap_Ans__005a9030;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_14 = 0;
  iVar3 = FUN_0055401d((~uVar9 - 1) + param_2);
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar9 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)FUN_00566937(~uVar9 + 9);
  uVar9 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)FUN_00566937(~uVar9 + 9);
  uVar9 = 0xffffffff;
  pcVar7 = param_1;
  do {
    pcVar13 = pcVar7;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar13;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar7 = pcVar13 + -uVar9;
  pcVar13 = pcVar4;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar9 = 0xffffffff;
  do {
    pcVar7 = param_1;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar7 = pcVar7 + -uVar9;
  pcVar13 = pcVar5;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar7 = pcVar4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pbVar12 = &DAT_005a9028;
  pbVar11 = (byte *)(pcVar4 + (~uVar9 - 5));
  do {
    bVar2 = *pbVar11;
    bVar16 = bVar2 < *pbVar12;
    if (bVar2 != *pbVar12) {
LAB_00408857:
      iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_0040885c;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar11[1];
    bVar16 = bVar2 < pbVar12[1];
    if (bVar2 != pbVar12[1]) goto LAB_00408857;
    pbVar11 = pbVar11 + 2;
    pbVar12 = pbVar12 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_0040885c:
  if (iVar6 != 0) {
    param_2 = 0;
    goto LAB_00408a6e;
  }
  uVar9 = 0xffffffff;
  pcVar7 = pcVar4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar4[~uVar9 - 5] = '\0';
  uVar9 = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar5[~uVar9 - 5] = '\0';
  uVar9 = 0xffffffff;
  pcVar7 = s__replay_005a8ff0;
  do {
    pcVar13 = pcVar7;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar13;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar6 = -1;
  pcVar7 = pcVar4;
  do {
    pcVar14 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar14 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar14;
  } while (cVar1 != '\0');
  pcVar7 = pcVar13 + -uVar9;
  pcVar13 = pcVar14 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar7 = &DAT_005a9020;
  do {
    pcVar13 = pcVar7;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar13;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar6 = -1;
  pcVar7 = pcVar5;
  do {
    pcVar14 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar14 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar14;
  } while (cVar1 != '\0');
  pcVar7 = pcVar13 + -uVar9;
  pcVar13 = pcVar14 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar13 = pcVar13 + 1;
  }
  iVar6 = FUN_00408690(pcVar4,param_3);
  if (iVar6 < 1) {
    if (iVar6 == -1) {
      local_14 = 1;
    }
    goto LAB_00408a6e;
  }
  uVar9 = 0xffffffff;
  pbVar11 = param_3;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    bVar2 = *pbVar11;
    pbVar11 = pbVar11 + 1;
  } while (bVar2 != 0);
  pcVar7 = (char *)FUN_00566937(~uVar9 * 2 + 0xf);
  iVar6 = FUN_00553497(pcVar5,&DAT_005a8d20);
  if (iVar6 != 0) {
    uVar9 = 0xffffffff;
    pbVar11 = param_3;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      bVar2 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar2 != 0);
    param_2 = 0;
    iVar8 = FUN_00553ea2(pcVar7,~uVar9 * 2 + 0xe,iVar6);
    while (iVar8 != 0) {
      uVar9 = 0xffffffff;
      pcVar13 = &DAT_005a901c;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      iVar8 = FUN_0055401d(pcVar7 + (~uVar9 - 1));
      if (iVar8 == iVar3) {
        uVar9 = 0xffffffff;
        pcVar13 = pcVar7;
        goto code_r0x004089a5;
      }
      uVar9 = 0xffffffff;
      pbVar11 = param_3;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar2 != 0);
      iVar8 = FUN_00553ea2(pcVar7,~uVar9 * 2 + 0xe,iVar6);
    }
    goto LAB_00408a49;
  }
  goto LAB_00408a56;
  while( true ) {
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 == '\0') break;
code_r0x004089a5:
    if (uVar9 == 0) break;
  }
  pbVar11 = (byte *)FUN_00566937(~uVar9);
  uVar9 = 0xffffffff;
  pcVar13 = s_Ans0000_005a9010;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  uVar10 = 0xffffffff;
  pcVar13 = pcVar7 + (~uVar9 - 1);
  do {
    pcVar14 = pcVar13;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar14 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar14;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pbVar12 = (byte *)(pcVar14 + -uVar10);
  pbVar15 = pbVar11;
  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pbVar15 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar15 = pbVar15 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pbVar15 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar15 = pbVar15 + 1;
  }
  uVar9 = 0xffffffff;
  pbVar12 = pbVar11;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
  } while (bVar2 != 0);
  pbVar12 = pbVar11;
  if (pbVar11[~uVar9 - 2] == 10) {
    uVar9 = 0xffffffff;
    pbVar15 = pbVar11;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      bVar2 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar2 != 0);
    pbVar11[~uVar9 - 2] = 0;
  }
  do {
    bVar2 = *pbVar12;
    bVar16 = bVar2 < *param_3;
    if (bVar2 != *param_3) {
LAB_00408a2c:
      iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_00408a31;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar12[1];
    bVar16 = bVar2 < param_3[1];
    if (bVar2 != param_3[1]) goto LAB_00408a2c;
    param_3 = param_3 + 2;
    pbVar12 = pbVar12 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_00408a31:
  param_2 = (uint)(iVar8 == 0);
  FUN_00566960(pbVar11);
LAB_00408a49:
  FUN_005533e9(iVar6);
LAB_00408a56:
  FUN_00566960(pcVar7);
LAB_00408a6e:
  FUN_00566960(pcVar4);
  FUN_00566960(pcVar5);
  FUN_00407d80(iVar3,param_2,0,local_14);
  return param_2 & 0xff;
}

