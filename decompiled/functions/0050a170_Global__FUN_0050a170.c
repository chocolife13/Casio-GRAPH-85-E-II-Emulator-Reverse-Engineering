// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050a170
// entry: 0050a170  size: 969


void FUN_0050a170(uint param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  char local_34 [52];
  
  local_34[0] = '\0';
  iVar4 = *(int *)(param_3 + 0x8dc);
  switch(*(undefined1 *)(iVar4 + 0x1d)) {
  case 1:
    if (param_1 == 0) {
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_005c2ef8;
      do {
        pcVar9 = pcVar7;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while ((char)param_1 != cVar1);
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar7 = local_34;
      do {
        pcVar8 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while ((char)param_1 != cVar1);
      pcVar7 = pcVar9 + -uVar6;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      goto LAB_0050a4fe;
    }
    if (((*(byte *)(param_3 + 0x8e1) & 2) == 0) || ((param_1 & 1) != 0)) {
      ppuVar10 = &PTR_DAT_005c2ef0;
    }
    else {
switchD_0050a262_caseD_0:
      ppuVar10 = (undefined **)&DAT_005c2ef4;
    }
    break;
  default:
    goto switchD_0050a19c_caseD_2;
  case 3:
    if (param_1 == 0) {
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_005c2ee8;
      do {
        pcVar9 = pcVar7;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar7 = local_34;
      do {
        pcVar8 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar6;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      goto LAB_0050a4fe;
    }
    if ((*(byte *)(param_3 + 0x8e1) & 2) == 0) {
      iVar3 = (~param_1 & 1) + 1;
    }
    else {
      iVar3 = (int)param_1 % 5;
    }
    switch(iVar3) {
    case 0:
      goto switchD_0050a262_caseD_0;
    case 1:
      ppuVar10 = (undefined **)&DAT_005c2ee4;
      break;
    case 2:
      ppuVar10 = (undefined **)&DAT_005c2ee0;
      break;
    case 3:
      ppuVar10 = (undefined **)&DAT_005c2edc;
      break;
    case 4:
      ppuVar10 = (undefined **)&DAT_005c2ed8;
      break;
    default:
      goto switchD_0050a19c_caseD_2;
    }
    break;
  case 4:
    if (param_1 == 0) {
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_005c2ed0;
      do {
        pcVar9 = pcVar7;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar7 = local_34;
      do {
        pcVar8 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar6;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      goto LAB_0050a4fe;
    }
    if ((*(byte *)(param_3 + 0x8e1) & 2) == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (int)param_1 % 3;
    }
    if (iVar3 == 0) goto switchD_0050a262_caseD_0;
    if (iVar3 == 1) {
      ppuVar10 = (undefined **)&DAT_005c2ec8;
    }
    else {
      if (iVar3 != 2) goto switchD_0050a19c_caseD_2;
      ppuVar10 = (undefined **)&DAT_005c2ecc;
    }
    break;
  case 9:
    uVar6 = 0xffffffff;
    pcVar7 = (char *)&DAT_005ad48c;
    do {
      pcVar9 = pcVar7;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar7 = local_34;
    do {
      pcVar8 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar6;
    pcVar9 = pcVar8 + -1;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
  case 10:
  case 0xb:
    if (param_1 == 0) {
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_005bf3ec;
      do {
        pcVar9 = pcVar7;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar7 = local_34;
      do {
        pcVar8 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar6;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    else {
      iVar4 = *(int *)(param_3 + 0x8dc);
      iVar3 = FUN_00509f80(param_1,param_3);
      uVar2 = *(undefined4 *)(iVar3 * 0x20 + 8 + iVar4);
      if (((*(byte *)(param_3 + 0x8e1) & 2) == 0) || ((param_1 & 1) != 0)) {
        pcVar7 = (char *)&DAT_005ad48c;
      }
      else {
        pcVar7 = &DAT_005c2ec4;
      }
      uVar6 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar7 = local_34;
      do {
        pcVar8 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar6;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_005befe4;
      do {
        pcVar9 = pcVar7;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar7 = local_34;
      do {
        pcVar8 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar6;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar7 = local_34;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      pcVar7 = local_34;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_34[~uVar5 - 2] = local_34[~uVar6 - 2] + (char)uVar2 + -1;
    }
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_005c2ec0;
    do {
      pcVar9 = pcVar7;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar7 = local_34;
    do {
      pcVar8 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar6;
    pcVar9 = pcVar8 + -1;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    iVar4 = *(int *)(param_3 + 0x8dc);
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    if (*(char *)(iVar4 + 0x1d) == '\n') {
      ppuVar10 = (undefined **)&DAT_005beb50;
      break;
    }
    if (*(char *)(iVar4 + 0x1d) == '\v') {
      ppuVar10 = (undefined **)&DAT_005beb48;
      break;
    }
    goto switchD_0050a19c_caseD_2;
  }
  uVar6 = 0xffffffff;
  do {
    ppuVar11 = ppuVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    ppuVar11 = (undefined **)((int)ppuVar10 + 1);
    cVar1 = *(char *)ppuVar10;
    ppuVar10 = ppuVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar3 = -1;
  pcVar7 = local_34;
  do {
    pcVar9 = pcVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = (char *)((int)ppuVar11 - uVar6);
  pcVar9 = pcVar9 + -1;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
switchD_0050a19c_caseD_2:
  if ((param_1 != 0) &&
     ((cVar1 = *(char *)(iVar4 + 0x1d), cVar1 == '\x01' || (('\x02' < cVar1 && (cVar1 < '\x05'))))))
  {
    iVar4 = FUN_00509f80(param_1,param_3);
    uVar6 = 0xffffffff;
    pcVar7 = local_34;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_0055c2fe(*(undefined4 *)(iVar4 * 0x20 + 8 + *(int *)(param_3 + 0x8dc)),
                 local_34 + (~uVar6 - 1),10);
  }
LAB_0050a4fe:
  iVar4 = param_2 * 0x1c + 0x10;
  FUN_00523a60(iVar4,8,local_34,0x10);
  FUN_004125f0(iVar4,0xe,param_2 * 0x1c + 0x27,0xe);
  return;
}

