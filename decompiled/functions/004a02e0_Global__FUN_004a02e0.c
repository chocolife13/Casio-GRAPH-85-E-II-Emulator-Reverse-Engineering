// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a02e0
// entry: 004a02e0  size: 823


void FUN_004a02e0(int param_1,char *param_2,char *param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  int local_24;
  byte local_20 [16];
  byte local_10 [16];
  
  iVar7 = -1;
  pcVar9 = param_3;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_24 = 0;
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
  local_10[0xc] = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[8] = 0;
  local_20[9] = 0;
  local_20[10] = 0;
  local_20[0xb] = 0;
  local_20[0xc] = 0;
  if (iVar7 == -2) {
    return;
  }
  if ((int)(uint)*(byte *)(param_1 + 0x29) < (int)param_4) {
    param_4 = (uint)*(byte *)(param_1 + 0x29);
  }
  iVar7 = -1;
  pcVar9 = param_2;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  iVar5 = local_24;
  if (iVar7 == -2) {
    _strncpy((char *)local_10,param_3,0xc);
    iVar7 = FUN_004a0cf0(0,param_1,0);
    iVar3 = FUN_004a0cf0(iVar7,param_1,3);
    if (iVar7 <= iVar3) {
      do {
        _strncpy((char *)local_20,(char *)(*(int *)(param_1 + 0x20) + 0x10 + iVar7 * 0x1c),0xc);
        pbVar8 = local_20;
        pbVar4 = local_10;
        do {
          bVar2 = *pbVar4;
          bVar10 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_004a054e:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_004a0553;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar10 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_004a054e;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_004a0553:
        iVar5 = iVar7;
        if (iVar3 == 0) break;
        iVar7 = FUN_004a0cf0(iVar7,param_1,1);
        iVar3 = FUN_004a0cf0(iVar7,param_1,3);
        iVar5 = local_24;
      } while (iVar7 <= iVar3);
    }
  }
  else {
    _strncpy((char *)local_10,param_2,0xc);
    iVar7 = FUN_004a0cf0(0,param_1,0);
    iVar3 = FUN_004a0cf0(iVar7,param_1,3);
    if (iVar7 <= iVar3) {
      do {
        _strncpy((char *)local_20,(char *)(*(int *)(param_1 + 0x20) + 0x10 + iVar7 * 0x1c),0xc);
        pbVar8 = local_20;
        pbVar4 = local_10;
        do {
          bVar2 = *pbVar4;
          bVar10 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_004a040b:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_004a0410;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar10 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_004a040b;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_004a0410:
        if (iVar3 == 0) {
          _strncpy((char *)local_10,param_3,0xc);
          iVar7 = FUN_004a0cf0(iVar7 + 1,param_1,0);
          iVar3 = FUN_004a0cf0(iVar7,param_1,3);
          if (iVar7 <= iVar3) goto LAB_004a0464;
          break;
        }
        iVar7 = FUN_004a0cf0(iVar7,param_1,1);
        iVar3 = FUN_004a0cf0(iVar7,param_1,3);
      } while (iVar7 <= iVar3);
    }
  }
  goto LAB_004a0578;
  while( true ) {
    iVar7 = FUN_004a0cf0(iVar7,param_1,1);
    iVar3 = FUN_004a0cf0(iVar7,param_1,3);
    iVar5 = local_24;
    if (iVar3 < iVar7) break;
LAB_004a0464:
    _strncpy((char *)local_20,(char *)(*(int *)(param_1 + 0x20) + 0x10 + iVar7 * 0x1c),0xc);
    pbVar8 = local_20;
    pbVar4 = local_10;
    do {
      bVar2 = *pbVar4;
      bVar10 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_004a04b0:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_004a04b5;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar10 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_004a04b0;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_004a04b5:
    iVar5 = iVar7;
    if (iVar3 == 0) break;
  }
LAB_004a0578:
  local_24 = iVar5;
  *(short *)(param_1 + 2) = (short)local_24;
  iVar7 = local_24;
  while (param_4 = param_4 - 1, param_4 != 0) {
    if (iVar7 == 1000) goto LAB_004a05c1;
    iVar5 = FUN_004a0cf0(local_24,param_1,0);
    if (iVar7 == iVar5) break;
    iVar7 = FUN_004a0cf0(iVar7,param_1,2);
  }
  if (iVar7 == 1000) {
LAB_004a05c1:
    iVar7 = local_24;
  }
  iVar5 = 0;
  puVar6 = (undefined2 *)(param_1 + 0x12);
  do {
    *puVar6 = (short)iVar7;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
    iVar7 = FUN_004a0cf0(iVar7,param_1,1);
    if ((int)(uint)*(byte *)(param_1 + 0x29) <= iVar5) break;
  } while (iVar7 != 1000);
  if (iVar5 < (int)(uint)*(byte *)(param_1 + 0x29)) {
    puVar6 = (undefined2 *)(param_1 + 0x12 + iVar5 * 2);
    do {
      *puVar6 = 0xffff;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x29));
  }
  return;
}

