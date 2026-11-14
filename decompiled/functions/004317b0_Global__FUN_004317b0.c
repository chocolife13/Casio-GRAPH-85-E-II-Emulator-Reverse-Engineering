// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004317b0
// entry: 004317b0  size: 322


void FUN_004317b0(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char local_24 [36];
  
  pcVar1 = param_1;
  uVar2 = 0xffffffff;
  pcVar8 = param_1;
  do {
    pcVar10 = pcVar8;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar10 = pcVar8 + 1;
    cVar5 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar5 != '\0');
  uVar2 = ~uVar2;
  cVar5 = '\0';
  pcVar8 = pcVar10 + -uVar2;
  pcVar10 = local_24;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar6 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 != '\0');
  for (iVar7 = ~uVar2 - 2; -1 < iVar7; iVar7 = iVar7 + -1) {
    cVar6 = cVar5 + (param_1[iVar7] + -0x30) * '\x06';
    cVar5 = cVar6 / '\n';
    param_1[iVar7] = cVar6 % '\n' + '0';
  }
  uVar2 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar6 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 != '\0');
  uVar2 = ~uVar2;
  while (uVar3 = uVar2 - 1, -1 < (int)uVar3) {
    param_1[uVar2] = param_1[uVar3];
    uVar2 = uVar3;
  }
  uVar2 = 0xffffffff;
  *param_1 = cVar5 + '0';
  pcVar8 = (char *)&DAT_005a91c0;
  do {
    pcVar10 = pcVar8;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar10 = pcVar8 + 1;
    cVar5 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar5 != '\0');
  uVar2 = ~uVar2;
  iVar7 = -1;
  pcVar8 = local_24;
  do {
    pcVar9 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar8 + 1;
    cVar5 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar5 != '\0');
  pcVar8 = pcVar10 + -uVar2;
  pcVar10 = pcVar9 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  iVar7 = 0;
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar5 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar5 != '\0');
  iVar4 = ~uVar2 - 2;
  if (-1 < iVar4) {
    pcVar8 = param_1 + iVar4;
    iVar4 = -(int)param_1;
    param_1 = (char *)(~uVar2 - 1);
    do {
      cVar5 = (char)iVar7 + pcVar8[(int)(local_24 + iVar4)] + *pcVar8 + -0x60;
      *pcVar8 = cVar5 % '\n' + '0';
      iVar7 = (int)cVar5 / 10;
      pcVar8 = pcVar8 + -1;
      param_1 = (char *)((int)param_1 + -1);
    } while (param_1 != (char *)0x0);
    if ((char)iVar7 != '\0') {
      uVar2 = 0xffffffff;
      pcVar8 = pcVar1;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar5 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar5 != '\0');
      uVar2 = ~uVar2;
      while (uVar3 = uVar2 - 1, -1 < (int)uVar3) {
        pcVar1[uVar2] = pcVar1[uVar3];
        uVar2 = uVar3;
      }
      *pcVar1 = (char)iVar7 + '0';
    }
  }
  return;
}

