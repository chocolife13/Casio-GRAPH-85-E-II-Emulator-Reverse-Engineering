// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00536330
// entry: 00536330  size: 2421


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536330(uint param_1,char param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  byte bVar18;
  char *pcVar19;
  char *pcVar20;
  undefined1 *puVar21;
  uint uVar22;
  bool bVar23;
  byte local_2d;
  uint local_28;
  uint local_20;
  int local_1c;
  int local_14;
  
  iVar17 = DAT_005d5724;
  bVar18 = 0;
  local_2d = 0;
  cVar2 = FUN_005380e0();
  iVar12 = FUN_005262f0();
  if (cVar2 != '\0') {
    FUN_00526300(2);
  }
  bVar23 = (param_1 & 0xffffff00) == 0;
  cVar3 = (char)param_1;
  cVar15 = (char)(param_1 >> 8);
  if (bVar23) {
    *param_3 = cVar3;
    param_3[1] = '\0';
  }
  else {
    *param_3 = cVar15;
    param_3[2] = '\0';
    param_3[1] = cVar3;
    bVar18 = 2;
    local_2d = 2;
  }
  pcVar19 = param_3 + 1;
  if ((param_2 == '\x01') && (cVar4 = FUN_00532ea0(param_3), cVar4 != '\x01')) {
    param_2 = '\0';
  }
  FUN_004b7750(DAT_005d5748,iVar17);
  pcVar20 = (char *)((_DAT_005d5728 & 0xffff) + iVar17);
  cVar4 = *pcVar20;
  DAT_005d574c = DAT_005d5728;
  pcVar13 = pcVar20;
  while (cVar4 != '\0') {
    pcVar13 = (char *)FUN_004b7840(pcVar13);
    cVar4 = *pcVar13;
  }
  bVar5 = 0;
  cVar4 = (char)iVar17 - (char)pcVar13;
  bVar16 = cVar4 - 1;
  if (param_2 != '\x01') goto LAB_005369e9;
  if (iVar12 == 1) {
    bVar5 = FUN_005361f0(pcVar20);
  }
  if ((param_1 & 0xffffff00) == 0) {
    if ((param_1 == 0x8b) || (param_1 == 0x9b)) {
      *param_3 = -0x58;
    }
    else if (param_1 == 0x96) {
      *param_3 = -0x48;
      *pcVar19 = '\x1a';
      local_1c = 2;
      local_2d = 2;
      goto LAB_00536499;
    }
    *pcVar19 = '\x1a';
    local_1c = 2;
    local_2d = 2;
  }
  else {
    param_3[2] = '\x1a';
    local_1c = 3;
    local_2d = 3;
  }
LAB_00536499:
  local_14 = 0;
  cVar6 = FUN_00533130(param_3);
  cVar7 = FUN_005330a0(param_3);
  if (*param_3 == -0x58) {
    pcVar13 = (char *)FUN_004b7780(iVar17,pcVar20);
    if (pcVar13 != (char *)0x0) {
      cVar8 = FUN_00532fb0(pcVar13);
      cVar9 = FUN_00532a50(cVar8);
      if (((cVar9 == '\0') && (cVar9 = FUN_00532ad0(cVar8), cVar9 == '\0')) &&
         ((cVar8 != '\0' || ((*pcVar13 != ':' && (*pcVar13 != ',')))))) goto LAB_00536524;
    }
    *pcVar19 = -0x58;
    local_1c = 3;
    local_2d = 0;
    *param_3 = -0x28;
    param_3[2] = '\x1a';
    local_14 = 1;
  }
LAB_00536524:
  bVar10 = DAT_005d5750;
  bVar18 = DAT_005d574f;
  pcVar13 = param_3 + local_1c;
  bVar11 = 0;
  local_28 = 0;
  if (cVar6 == '\x06') {
    if (DAT_005d5728 != 0) {
      uVar14 = FUN_004b7780(DAT_005d5720,pcVar20);
      cVar6 = FUN_00535170(uVar14);
      if (cVar6 != '\0') {
        return;
      }
    }
    bVar18 = 0;
    if (param_1 == 0x8b) {
      *pcVar13 = '2';
      pcVar19 = pcVar13 + 1;
    }
    else if (param_1 == 0x9b) {
      *pcVar13 = -0x79;
      pcVar13[1] = '1';
      pcVar19 = pcVar13 + 2;
    }
    else if (bVar5 == 0) {
      *pcVar13 = -0x28;
      pcVar19 = pcVar13 + 1;
    }
    else {
      if (0xff < local_14 + 3 + (uint)bVar5) {
        return;
      }
      do {
        pcVar19 = pcVar13 + 1;
        bVar18 = bVar18 + 1;
        *pcVar13 = pcVar20[local_28];
        local_28 = (uint)bVar18;
        pcVar13 = pcVar19;
      } while (bVar18 < bVar5);
    }
    *pcVar19 = '\x1b';
    pcVar13 = pcVar19 + 1;
    if ((param_1 == 0x8b) || (param_1 == 0x9b)) {
      if (*param_3 != -0x28) {
        local_2d = (char)pcVar13 - (char)param_3;
      }
      bVar5 = 0;
    }
    goto LAB_005369d4;
  }
  if (cVar6 == '\x01') {
    local_2d = 3;
    *pcVar19 = '\x1d';
    param_3[2] = '\x1a';
    if (bVar5 == 0) {
      param_3[3] = -0x28;
      param_3[4] = '\x1b';
      pcVar13 = param_3 + 5;
      *pcVar13 = '\x1e';
    }
    else {
      pcVar19 = param_3 + 3;
      if (0xff < local_14 + 5 + (uint)bVar5) {
        return;
      }
      do {
        pcVar13 = pcVar19;
        bVar11 = bVar11 + 1;
        *pcVar13 = pcVar20[local_28];
        local_28 = (uint)bVar11;
        pcVar19 = pcVar13 + 1;
      } while (bVar11 < bVar5);
      pcVar13[1] = '\x1b';
      pcVar13 = pcVar13 + 2;
      *pcVar13 = '\x1e';
    }
LAB_005369d3:
    pcVar13 = pcVar13 + 1;
  }
  else {
    if (cVar6 == '\x02') {
      if (0xff < bVar5 + 5) {
        return;
      }
      if ((bVar5 == 0) || (param_1 == 0x7f85)) {
        *pcVar13 = -0x28;
        pcVar19 = pcVar13 + 1;
      }
      else {
        do {
          pcVar19 = pcVar13 + 1;
          bVar11 = bVar11 + 1;
          *pcVar13 = pcVar20[local_28];
          local_28 = (uint)bVar11;
          pcVar13 = pcVar19;
        } while (bVar11 < bVar5);
      }
      *pcVar19 = '\x1c';
      pcVar19 = pcVar19 + 1;
      if ((bVar5 == 0) || (param_1 < 0x7f85)) {
LAB_005368c2:
        *pcVar19 = -0x28;
        pcVar13 = pcVar19 + 1;
LAB_005368c6:
        *pcVar13 = '\x1b';
      }
      else {
        do {
          pcVar13 = pcVar19 + 1;
          bVar11 = bVar11 + 1;
          *pcVar19 = pcVar20[local_28];
          local_28 = (uint)bVar11;
          pcVar19 = pcVar13;
        } while (bVar11 < bVar5);
        *pcVar13 = '\x1b';
      }
      goto LAB_005369d3;
    }
    if (cVar6 == '\x03') {
      if (0xff < bVar5 + 8) {
        return;
      }
      if ((param_1 == 0xbb) && (DAT_005d5728 != 0)) {
        uVar14 = FUN_004b7780(DAT_005d5720,pcVar20);
        cVar6 = FUN_00535020(uVar14);
        if (cVar6 != '\0') {
          return;
        }
      }
      bVar18 = 0;
      local_2d = 3;
      *pcVar19 = '\x1d';
      param_3[2] = '\x1a';
      pcVar19 = param_3 + 3;
      if (param_1 == 0x96) {
        *pcVar19 = '3';
        pcVar13 = param_3 + 4;
        local_2d = 6;
      }
      else if ((bVar5 == 0) || (param_1 != 0xbb)) {
        *pcVar19 = -0x28;
        pcVar13 = param_3 + 4;
      }
      else {
        do {
          pcVar13 = pcVar19 + 1;
          bVar18 = bVar18 + 1;
          *pcVar19 = pcVar20[local_28];
          local_28 = (uint)bVar18;
          pcVar19 = pcVar13;
        } while (bVar18 < bVar5);
      }
      *pcVar13 = '\x1b';
      pcVar13[1] = '\x1a';
      pcVar19 = pcVar13 + 2;
      if ((bVar5 == 0) || ((param_1 != 0xb8 && (param_1 != 0x96)))) {
        *pcVar19 = -0x28;
        pcVar13[3] = '\x1b';
        pcVar13 = pcVar13 + 4;
        *pcVar13 = '\x1e';
      }
      else {
        do {
          pcVar13 = pcVar19;
          bVar18 = bVar18 + 1;
          *pcVar13 = pcVar20[local_28];
          local_28 = (uint)bVar18;
          pcVar19 = pcVar13 + 1;
        } while (bVar18 < bVar5);
        pcVar13[1] = '\x1b';
        pcVar13 = pcVar13 + 2;
        *pcVar13 = '\x1e';
      }
      goto LAB_005369d3;
    }
    if (cVar6 == '\x04') {
      if (0xff < bVar5 + 7) {
        return;
      }
      if (bVar5 == 0) {
        *pcVar13 = -0x28;
        pcVar19 = pcVar13 + 1;
      }
      else {
        do {
          pcVar19 = pcVar13 + 1;
          bVar11 = bVar11 + 1;
          *pcVar13 = pcVar20[local_28];
          local_28 = (uint)bVar11;
          pcVar13 = pcVar19;
        } while (bVar11 < bVar5);
      }
      *pcVar19 = '\x1c';
      pcVar19[1] = -0x28;
      pcVar19[2] = '\x1c';
      pcVar19[3] = -0x28;
      pcVar13 = pcVar19 + 4;
      if (cVar7 == '\n') {
        *pcVar13 = '\x1c';
        pcVar19 = pcVar19 + 5;
        goto LAB_005368c2;
      }
      goto LAB_005368c6;
    }
    if (cVar6 == '\x05') {
      if (DAT_005d5728 != 0) {
        uVar14 = FUN_004b7780(DAT_005d5720,pcVar20);
        cVar6 = FUN_00535020(uVar14);
        if (cVar6 != '\0') {
          return;
        }
      }
      local_2d = 5;
      bVar5 = 0;
      param_3[2] = '\x1f';
      param_3[3] = '\x1d';
      param_3[4] = '\x1a';
      param_3[5] = -0x28;
      param_3[6] = '\x1b';
      param_3[7] = '\x1a';
      param_3[8] = -0x28;
      param_3[9] = '\x1b';
      param_3[10] = '\x1a';
      param_3[0xb] = -0x28;
      param_3[0xc] = '\x1b';
      param_3[0xd] = '\x1e';
      pcVar13 = param_3 + 0xe;
    }
    else if (cVar6 == '\b') {
      if (6 < DAT_005d574f) {
        return;
      }
      if (6 < DAT_005d5750) {
        return;
      }
      local_2d = 4;
      bVar5 = 0;
      param_3[2] = -0x5c;
      pcVar13 = param_3 + 3;
      if (bVar18 != 0) {
        uVar22 = (uint)bVar18;
        do {
          *pcVar13 = -0x5c;
          pcVar13 = pcVar13 + 1;
          bVar18 = 0;
          local_28 = 0;
          if (bVar10 != 0) {
            pcVar19 = pcVar13;
            do {
              *pcVar19 = -0x28;
              pcVar13 = pcVar19 + 1;
              if (local_28 == bVar10 - 1) break;
              *pcVar13 = '\x1c';
              pcVar13 = pcVar19 + 2;
              bVar18 = bVar18 + 1;
              local_28 = (uint)bVar18;
              pcVar19 = pcVar13;
            } while (bVar18 < bVar10);
          }
          *pcVar13 = -0x4c;
          pcVar13 = pcVar13 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      *pcVar13 = -0x4c;
      goto LAB_005369d3;
    }
  }
LAB_005369d4:
  *pcVar13 = '\0';
  bVar18 = (char)pcVar13 - (char)param_3;
LAB_005369e9:
  bVar10 = FUN_004b7550(iVar17);
  bVar11 = bVar10 + 1;
  if ((((cVar2 == '\0') && (iVar12 == 1)) && (cVar2 = *pcVar20, cVar2 != '\0')) ||
     (cVar2 = *pcVar20, cVar2 == -0x28)) {
    iVar12 = FUN_004b7370(cVar2);
    if (iVar12 != 0) {
      if (!bVar23) {
        *pcVar20 = cVar15;
        pcVar20[1] = cVar3;
        DAT_005d5728 = DAT_005d5728 + 2;
        return;
      }
      bVar18 = (char)DAT_005d5728 + 1;
      local_20 = (uint)bVar18;
      if (bVar18 <= bVar11) {
        puVar21 = (undefined1 *)(local_20 + iVar17);
        iVar12 = (bVar11 - local_20) + 1;
        local_20 = (uint)(byte)(bVar18 + (char)iVar12);
        do {
          *puVar21 = puVar21[1];
          puVar21 = puVar21 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      *(undefined1 *)(local_20 + iVar17) = 0;
      *pcVar20 = cVar3;
      DAT_005d5728 = DAT_005d5728 + 1;
      return;
    }
    if ((param_2 == '\0') && (bVar23)) {
      *pcVar20 = cVar3;
      DAT_005d5728 = DAT_005d5728 + 1;
      return;
    }
    if (bVar16 < (byte)((bVar18 - bVar5) - 1)) {
      return;
    }
    uVar22 = (uint)bVar18;
    iVar12 = (uVar22 - bVar5) + iVar17;
    local_20 = (uint)bVar10;
    if (DAT_005d5728 < bVar10) {
      do {
        uVar1 = local_20;
        bVar10 = bVar10 - 1;
        local_20 = (uint)bVar10;
        *(undefined1 *)(uVar1 + iVar12) = *(undefined1 *)(uVar1 + 1 + iVar17);
      } while (DAT_005d5728 < bVar10);
    }
    *(undefined1 *)(local_20 + iVar12) = *(undefined1 *)(local_20 + 1 + iVar17);
    if (bVar18 != 0) {
      iVar17 = (int)param_3 - (int)pcVar20;
      do {
        *pcVar20 = pcVar20[iVar17];
        pcVar20 = pcVar20 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  else {
    if ((param_2 == '\0') && (bVar23)) {
      if (cVar4 == '\x01') {
        return;
      }
      local_20 = (uint)bVar11;
      if (DAT_005d5728 < bVar11) {
        do {
          puVar21 = (undefined1 *)(local_20 + iVar17);
          bVar11 = bVar11 - 1;
          local_20 = (uint)bVar11;
          puVar21[1] = *puVar21;
        } while (DAT_005d5728 < bVar11);
      }
      *(undefined1 *)(local_20 + iVar17 + 1) = *(undefined1 *)(local_20 + iVar17);
      *pcVar20 = cVar3;
      DAT_005d5728 = DAT_005d5728 + 1;
      return;
    }
    if (bVar16 < (byte)(bVar18 - bVar5)) {
      return;
    }
    uVar22 = (uint)bVar18;
    iVar12 = (uVar22 - bVar5) + iVar17;
    local_20 = (uint)bVar11;
    if (DAT_005d5728 < bVar11) {
      do {
        uVar1 = local_20;
        bVar11 = bVar11 - 1;
        local_20 = (uint)bVar11;
        *(undefined1 *)(uVar1 + iVar12) = *(undefined1 *)(uVar1 + iVar17);
      } while (DAT_005d5728 < bVar11);
    }
    *(undefined1 *)(local_20 + iVar12) = *(undefined1 *)(local_20 + iVar17);
    if (bVar18 != 0) {
      iVar17 = (int)param_3 - (int)pcVar20;
      do {
        *pcVar20 = pcVar20[iVar17];
        pcVar20 = pcVar20 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  DAT_005d5728 = DAT_005d5728 + local_2d;
  return;
}

