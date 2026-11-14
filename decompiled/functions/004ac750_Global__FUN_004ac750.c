// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ac750
// entry: 004ac750  size: 345


uint FUN_004ac750(char *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 local_5;
  uint local_4;
  
  DAT_005d6048 = FUN_004103d0(param_1,&local_4,&local_5);
  if (DAT_005d6048 != 0) {
    uVar3 = FUN_004ab770(DAT_005d6048);
    return uVar3;
  }
  uVar3 = 0;
  DAT_005d6048 = 0;
  if (*(short *)(local_4 + 0xc) != 0) {
    iVar6 = -1;
    uVar3 = 0;
    pbVar10 = param_2;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar1 != 0);
    pbVar10 = *(byte **)(local_4 + 8);
    uVar7 = 1;
    if (*(short *)(local_4 + 0xc) != 0) {
      do {
        pbVar5 = pbVar10;
        pbVar8 = param_2;
        if (iVar6 == -10) {
          iVar4 = _strncmp((char *)pbVar10,(char *)param_2,8);
        }
        else {
          do {
            bVar1 = *pbVar5;
            bVar12 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_004ac7f7:
              iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto joined_r0x004ac7fe;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar12 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_004ac7f7;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
        }
joined_r0x004ac7fe:
        if (iVar4 == 0) {
          FUN_00410e00(param_1,param_2);
          if (uVar7 == *(ushort *)(local_4 + 0xc)) {
            DAT_005d5870 = DAT_005cd010;
            DAT_005d5760 = DAT_005cd010;
            DAT_005d5b70 = 0x80;
            return local_4 & 0xffffff00;
          }
          uVar3 = 0xffffffff;
          goto code_r0x004ac85d;
        }
        uVar7 = uVar7 + 1;
        pbVar10 = pbVar10 + 0x14;
        uVar3 = (uint)*(ushort *)(local_4 + 0xc);
      } while ((int)uVar7 <= (int)uVar3);
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),0x40);
  while( true ) {
    uVar3 = uVar3 - 1;
    pcVar9 = param_1 + 1;
    cVar2 = *param_1;
    param_1 = pcVar9;
    if (cVar2 == '\0') break;
code_r0x004ac85d:
    pcVar9 = param_1;
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3;
  pcVar9 = pcVar9 + -uVar3;
  pcVar11 = &DAT_005d5870;
  for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar3 = 0xffffffff;
  do {
    pbVar10 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pbVar10 = param_2 + 1;
    bVar1 = *param_2;
    param_2 = pbVar10;
  } while (bVar1 != 0);
  uVar3 = ~uVar3;
  pbVar10 = pbVar10 + -uVar3;
  pbVar5 = &DAT_005d5760;
  for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
    pbVar5 = pbVar5 + 4;
  }
  for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar5 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    pbVar5 = pbVar5 + 1;
  }
  DAT_005d5b70 = 0xfe;
  return uVar3 & 0xffffff00;
}

