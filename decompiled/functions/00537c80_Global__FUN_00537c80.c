// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00537c80
// entry: 00537c80  size: 414


uint FUN_00537c80(char *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  uint in_EAX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char local_34 [52];
  
  iVar7 = param_2;
  sVar2 = *(short *)(param_2 + 2);
  if (0x14 < sVar2) {
LAB_00537c99:
    return in_EAX & 0xffffff00;
  }
  param_2._0_1_ = '\x01';
  sVar5 = FUN_004e4000(iVar7);
  if (sVar5 != 0) {
    param_2._0_1_ = '\x02';
  }
  piVar3 = *(int **)(iVar7 + 8);
  FUN_004b7750(param_1,&DAT_005c4250);
  sVar5 = 0;
  local_58 = 3;
  if (0 < sVar2) {
    do {
      iVar4 = *piVar3;
      iVar9 = (int)sVar5;
      iVar7 = iVar4 + iVar9 * 0xc;
      local_4c = *(undefined4 *)(iVar4 + iVar9 * 0xc);
      local_48 = *(undefined4 *)(iVar7 + 4);
      local_44 = *(undefined4 *)(iVar7 + 8);
      if ((char)param_2 == '\x02') {
        iVar4 = *piVar3;
        iVar7 = iVar4 + (sVar2 + iVar9) * 0xc;
        local_40 = *(undefined4 *)(iVar4 + (sVar2 + iVar9) * 0xc);
        local_3c = *(undefined4 *)(iVar7 + 4);
        local_38 = *(undefined4 *)(iVar7 + 8);
      }
      FUN_00537aa0(local_34,&local_4c);
      in_EAX = FUN_004b6ca0(local_34);
      if (0x400 < (short)(local_58 + in_EAX) + 1) goto LAB_00537c99;
      uVar6 = 0xffffffff;
      pcVar10 = local_34;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar10 = param_1;
      do {
        pcVar12 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar10 = pcVar11 + -uVar6;
      pcVar11 = pcVar12 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      if (iVar9 == sVar2 + -1) break;
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_005c424c;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar10 = param_1;
      do {
        pcVar12 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar10 = pcVar11 + -uVar6;
      pcVar11 = pcVar12 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_58 = local_58 + in_EAX + 1;
      sVar5 = sVar5 + 1;
    } while (sVar5 < sVar2);
  }
  uVar6 = 0xffffffff;
  pcVar10 = &DAT_005c4248;
  do {
    pcVar11 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  do {
    pcVar10 = param_1;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar10;
  } while (cVar1 != '\0');
  pcVar11 = pcVar11 + -uVar6;
  pcVar10 = pcVar10 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar10 = pcVar10 + 1;
  }
  return 1;
}

