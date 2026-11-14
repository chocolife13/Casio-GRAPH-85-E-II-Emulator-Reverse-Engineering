// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407650
// entry: 00407650  size: 502


undefined4 __thiscall
FUN_00407650(int *param_1,undefined4 *param_2,undefined4 *param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  byte *_Str2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  
  if (param_4 == (char *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar11 = param_4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  _Str2 = (byte *)FUN_00566937(~uVar5);
  uVar5 = 0xffffffff;
  do {
    pcVar11 = param_4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar3 = (byte *)(pcVar11 + -uVar5);
  pbVar10 = _Str2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar10 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar10 = pbVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pbVar3 = _Str2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar2 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar2 != 0);
  if (_Str2[~uVar5 - 2] == 10) {
    uVar5 = 0xffffffff;
    pbVar3 = _Str2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar2 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar2 != 0);
    _Str2[~uVar5 - 2] = 0;
  }
  iVar7 = -1;
  uVar5 = 0;
  pbVar3 = _Str2;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar2 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar2 != 0);
  if (iVar7 != -2) {
    do {
      if (_Str2[uVar5] == 0x5d) {
        _Str2[uVar5 + 1] = 0;
        break;
      }
      uVar6 = 0xffffffff;
      uVar5 = uVar5 + 1;
      pbVar3 = _Str2;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        bVar2 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar2 != 0);
    } while (uVar5 < ~uVar6 - 1);
  }
  uVar5 = 0xffffffff;
  pbVar3 = _Str2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar2 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar2 != 0);
  for (iVar7 = ~uVar5 - 2; -1 < iVar7; iVar7 = iVar7 + -1) {
    while ((_Str2[iVar7] == 9 || (_Str2[iVar7] == 0x20))) {
      _Str2[iVar7] = 0;
    }
  }
  uVar5 = 0xffffffff;
  pcVar11 = s__Cap__005a8e14;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar7 = _strncmp(s__Cap__005a8e14,(char *)_Str2,~uVar5 - 1);
  if (iVar7 == 0) {
    uVar5 = 0xffffffff;
    pcVar11 = s__Cap_Ans_005a8e08;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    iVar7 = _strncmp((char *)_Str2,s__Cap_Ans_005a8e08,~uVar5 - 1);
    if (iVar7 == 0) {
      pcVar11 = s__Cap_Ans_005a8e08;
    }
    else {
      uVar5 = 0xffffffff;
      pcVar11 = s__Cap_Screen_005a8dfc;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      iVar7 = _strncmp((char *)_Str2,s__Cap_Screen_005a8dfc,~uVar5 - 1);
      if (iVar7 != 0) goto LAB_004077ac;
      pcVar11 = s__Cap_Screen_005a8dfc;
    }
    uVar5 = 0xffffffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar6 = 0xffffffff;
    pcVar11 = (char *)&DAT_005a8df8;
    do {
      pcVar12 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pbVar3 = (byte *)(pcVar12 + -uVar6);
    pbVar10 = _Str2 + (~uVar5 - 1);
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar10 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar10 = pbVar10 + 1;
    }
  }
LAB_004077ac:
  iVar7 = 0;
  if (0 < *param_1) {
    piVar9 = (int *)param_1[1];
    do {
      pbVar3 = *(byte **)(*piVar9 + 8);
      pbVar10 = _Str2;
      do {
        bVar2 = *pbVar3;
        bVar13 = bVar2 < *pbVar10;
        if (bVar2 != *pbVar10) {
LAB_004077ea:
          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_004077ef;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar13 = bVar2 < pbVar10[1];
        if (bVar2 != pbVar10[1]) goto LAB_004077ea;
        pbVar3 = pbVar3 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_004077ef:
      if (iVar4 == 0) {
        *param_2 = **(undefined4 **)(param_1[1] + iVar7 * 4);
        *param_3 = *(undefined4 *)(*(int *)(param_1[1] + iVar7 * 4) + 4);
        FUN_00566960(_Str2);
        return 1;
      }
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < *param_1);
  }
  FUN_00566960(_Str2);
  return 0;
}

