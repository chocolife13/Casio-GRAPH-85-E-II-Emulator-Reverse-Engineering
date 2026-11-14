// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ac5a0
// entry: 004ac5a0  size: 429


char FUN_004ac5a0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  undefined1 local_d;
  int local_c;
  int local_8;
  char *local_4;
  
  local_c = 0;
  local_4 = (char *)FUN_004ab740(param_1);
  cVar2 = (char)param_1;
  if (cVar2 == '\0') {
    return '\x10';
  }
  DAT_005d6048 = FUN_004103d0(local_4,&local_8,&local_d);
  if (DAT_005d6048 != 0) {
    cVar2 = FUN_004ab770(DAT_005d6048);
    return cVar2;
  }
  if (*(short *)(local_8 + 0xc) == 0) {
    return '@';
  }
  iVar6 = -1;
  pbVar12 = param_2;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar1 = *pbVar12;
    pbVar12 = pbVar12 + 1;
  } while (bVar1 != 0);
  pbVar12 = *(byte **)(local_8 + 8);
  iVar9 = 1;
  DAT_005d6048 = 0;
  if (*(short *)(local_8 + 0xc) != 0) {
    do {
      cVar3 = FUN_004ab990(pbVar12[0x10]);
      if (cVar3 == cVar2) {
        if (local_c != 0) {
          uVar7 = 0xffffffff;
          goto code_r0x004ac700;
        }
        pbVar5 = pbVar12;
        pbVar10 = param_2;
        if (iVar6 == -10) {
          iVar4 = _strncmp((char *)pbVar12,(char *)param_2,8);
        }
        else {
          do {
            bVar1 = *pbVar5;
            bVar14 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_004ac698:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto joined_r0x004ac69f;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar14 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_004ac698;
            pbVar5 = pbVar5 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
        }
joined_r0x004ac69f:
        if (iVar4 == 0) {
          FUN_00410e00(local_4,param_2);
          local_c = 1;
        }
      }
      iVar9 = iVar9 + 1;
      pbVar12 = pbVar12 + 0x14;
    } while (iVar9 <= (int)(uint)*(ushort *)(local_8 + 0xc));
  }
  DAT_005d5870 = DAT_005cd010;
  DAT_005d5760 = DAT_005cd010;
  DAT_005d5b70 = 0x80;
  return (-(local_c != 0) & 0xc0U) + 0x40;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar11 = local_4 + 1;
    cVar3 = *local_4;
    local_4 = pcVar11;
    if (cVar3 == '\0') break;
code_r0x004ac700:
    pcVar11 = local_4;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  pcVar11 = pcVar11 + -uVar7;
  pcVar13 = &DAT_005d5870;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar13 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar7 = 0xffffffff;
  do {
    pbVar12 = param_2;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pbVar12 = param_2 + 1;
    bVar1 = *param_2;
    param_2 = pbVar12;
  } while (bVar1 != 0);
  uVar7 = ~uVar7;
  pbVar12 = pbVar12 + -uVar7;
  pbVar5 = &DAT_005d5760;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar5 = pbVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar5 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar5 = pbVar5 + 1;
  }
  DAT_005d5b70 = cVar2;
  return '\0';
}

