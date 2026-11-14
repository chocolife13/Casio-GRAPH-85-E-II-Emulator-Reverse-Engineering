// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00422f90
// entry: 00422f90  size: 331


void FUN_00422f90(undefined4 param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  byte *pbVar9;
  undefined1 local_42;
  undefined1 local_41;
  char local_40 [20];
  undefined1 local_2c [44];
  
  iVar2 = FUN_00421eb0(param_2,s_PROGRAM_005be048);
  pbVar9 = param_2;
  if ((iVar2 != 0) && (iVar2 = FUN_00421eb0(param_2,s_S_SHEET_005be040), iVar2 != 0)) {
    pcVar6 = s_ALPHA_MEM_005bdd50;
    pbVar5 = param_2;
    pbVar7 = (byte *)pcVar6;
LAB_00422fc8:
    do {
      bVar1 = *pcVar6;
      bVar8 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = ((byte *)pcVar6)[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00422fec;
          pcVar6 = (char *)((byte *)pcVar6 + 2);
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_00422fc8;
        }
        iVar2 = 0;
      }
      else {
LAB_00422fec:
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar2 == 0) {
        pbVar9 = param_2 + 0xd;
        break;
      }
      pcVar6 = (char *)(pbVar7 + 0x14);
      pbVar5 = param_2;
      pbVar7 = (byte *)pcVar6;
    } while ((int)pcVar6 < 0x5bdee0);
  }
  FUN_004b71f0(local_40,pbVar9,0x12);
  iVar2 = 0;
  do {
    if (local_40[iVar2] == '\0') {
      if (iVar2 < 0x12) {
        pcVar6 = local_40 + iVar2;
        for (uVar3 = 0x12U - iVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          pcVar6[0] = '\0';
          pcVar6[1] = '\0';
          pcVar6[2] = '\0';
          pcVar6[3] = '\0';
          pcVar6 = pcVar6 + 4;
        }
        for (uVar3 = 0x12U - iVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar6 = '\0';
          pcVar6 = pcVar6 + 1;
        }
      }
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x12);
  iVar2 = FUN_00429fe0(param_1,local_40,0x12);
  if (-1 < iVar2) {
    *param_3 = *param_3 + 0x12;
    iVar2 = FUN_004298f0(param_2,param_2 + 0xd,local_2c);
    sVar4 = 0;
    for (; iVar2 != -1; iVar2 = FUN_00429910(param_2,param_2 + 0xd,iVar2,local_2c)) {
      sVar4 = sVar4 + 1;
    }
    local_42 = (undefined1)((ushort)sVar4 >> 8);
    local_41 = (undefined1)sVar4;
    iVar2 = FUN_00429fe0(param_1,&local_42,2);
    if (-1 < iVar2) {
      *param_3 = *param_3 + 2;
    }
  }
  return;
}

