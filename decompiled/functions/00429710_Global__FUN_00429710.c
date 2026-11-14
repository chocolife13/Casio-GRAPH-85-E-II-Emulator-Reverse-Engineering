// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429710
// entry: 00429710  size: 476


undefined4 FUN_00429710(char *param_1,byte *param_2,int param_3,byte *param_4,undefined4 param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  undefined1 local_15;
  char *local_14;
  byte local_10 [16];
  
  pbVar4 = param_4 + 0xd;
  pbVar4[0] = 0;
  pbVar4[1] = 0;
  pbVar4[2] = 0;
  pbVar4[3] = 0;
  param_4[0x11] = 0;
  param_4[0x12] = 0;
  param_4[0x13] = 0;
  param_4[0x14] = 0;
  param_4[0x15] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  param_4[0x18] = 0;
  param_4[0x19] = 0;
  param_4[0x1a] = 0;
  param_4[0x1b] = 0;
  param_4[0x1c] = 0;
  param_4[0x1d] = 0;
  param_4[0x1e] = 0;
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  local_10[4] = 0;
  local_10[5] = 0;
  local_10[6] = 0;
  local_10[7] = 0;
  local_10[8] = 0;
  local_10[9] = 0;
  local_10[10] = 0;
  local_10[0xb] = 0;
  if (0 < param_3) {
    iVar8 = 0;
    pcVar9 = s_ALPHA_MEM_005be460;
    do {
      iVar3 = _strncmp(pcVar9,param_1,0xc);
      if (iVar3 == 0) {
        uVar5 = (*(code *)(&PTR_FUN_005be470)[iVar8 * 5])(param_2,param_3,param_4,param_5);
        return uVar5;
      }
      pcVar9 = pcVar9 + 0x14;
      iVar8 = iVar8 + 1;
    } while ((int)pcVar9 < 0x5be5f0);
    uVar6 = 0xffffffff;
    do {
      pcVar9 = param_1;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pbVar10 = (byte *)(pcVar9 + -uVar6);
    pbVar11 = pbVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
    }
    iVar8 = FUN_004103d0(pbVar4,&local_14,&local_15);
    if (((iVar8 == 0) && (*local_14 != '\0')) &&
       (iVar8 = FUN_004b79b0(local_14,s__LOCAL_005be3a0,6), iVar8 != 0)) {
      iVar8 = 0;
      pcVar9 = *(char **)(local_14 + 8);
      if (*(short *)(local_14 + 0xc) != 0) {
        do {
          _strncpy((char *)local_10,pcVar9,8);
          pbVar4 = local_10;
          pbVar10 = param_2;
          do {
            bVar2 = *pbVar4;
            bVar12 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_00429856:
              iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_0042985b;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar12 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_00429856;
            pbVar4 = pbVar4 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_0042985b:
          if (iVar3 == 0) {
            uVar6 = 0xffffffff;
            goto code_r0x00429881;
          }
          iVar8 = iVar8 + 1;
          pcVar9 = pcVar9 + 0x14;
        } while (iVar8 < (int)(uint)*(ushort *)(local_14 + 0xc));
      }
    }
  }
  return 0xffffffff;
  while( true ) {
    uVar6 = uVar6 - 1;
    pbVar4 = param_2 + 1;
    bVar2 = *param_2;
    param_2 = pbVar4;
    if (bVar2 == 0) break;
code_r0x00429881:
    pbVar4 = param_2;
    if (uVar6 == 0) break;
  }
  uVar6 = ~uVar6;
  pbVar4 = pbVar4 + -uVar6;
  pbVar10 = param_4 + 0x16;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar4;
    pbVar4 = pbVar4 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pbVar10 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    pbVar10 = pbVar10 + 1;
  }
  uVar6 = 0xffffffff;
  pbVar4 = param_4 + 0x16;
  do {
    pbVar10 = pbVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pbVar10 = pbVar4 + 1;
    bVar2 = *pbVar4;
    pbVar4 = pbVar10;
  } while (bVar2 != 0);
  uVar6 = ~uVar6;
  pbVar4 = pbVar10 + -uVar6;
  pbVar10 = param_4;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar4;
    pbVar4 = pbVar4 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pbVar10 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    pbVar10 = pbVar10 + 1;
  }
  param_4[0x1f] = 0xfe;
  param_4[0x28] = 7;
  param_4[0x29] = 0x80;
  *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(pcVar9 + 0xc);
  *(int *)(param_4 + 0x20) = *(int *)(pcVar9 + 8) + *(int *)(local_14 + 8);
  return 0;
}

