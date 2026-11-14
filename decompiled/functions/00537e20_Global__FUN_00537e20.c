// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00537e20
// entry: 00537e20  size: 617


uint FUN_00537e20(char *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  uint in_EAX;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  int local_68;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char local_34 [52];
  
  iVar10 = param_2;
  uVar3 = *(ushort *)(param_2 + 2);
  uVar4 = *(ushort *)(param_2 + 4);
  if ((6 < (short)uVar3) || (6 < (short)uVar4)) {
LAB_0053807f:
    return in_EAX & 0xffffff00;
  }
  param_2._0_1_ = '\x01';
  sVar7 = FUN_004e4000(iVar10);
  if (sVar7 != 0) {
    param_2._0_1_ = '\x02';
  }
  piVar5 = *(int **)(iVar10 + 8);
  FUN_004b7750(param_1,&DAT_005c425c);
  local_68 = 3;
  sVar7 = 0;
  if (0 < (short)uVar3) {
    do {
      uVar9 = 0xffffffff;
      pcVar14 = &DAT_005c4258;
      do {
        pcVar15 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar15;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      iVar10 = -1;
      pcVar14 = param_1;
      do {
        pcVar16 = pcVar14;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar16;
      } while (cVar2 != '\0');
      pcVar14 = pcVar15 + -uVar9;
      pcVar15 = pcVar16 + -1;
      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar15 = pcVar15 + 4;
      }
      local_68 = local_68 + 1;
      sVar13 = 0;
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar15 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar15 = pcVar15 + 1;
      }
      if (0 < (short)uVar4) {
        do {
          iVar10 = (int)sVar13;
          puVar1 = (undefined4 *)(*piVar5 + ((int)sVar7 * (int)(short)uVar4 + iVar10) * 0xc);
          local_4c = *puVar1;
          local_48 = puVar1[1];
          local_44 = puVar1[2];
          if ((char)param_2 == '\x02') {
            iVar6 = *piVar5;
            iVar8 = ((uint)uVar4 * (uint)uVar3 & 0xffff) + iVar10 + (int)sVar7 * (int)(short)uVar4;
            iVar12 = iVar6 + iVar8 * 0xc;
            local_40 = *(undefined4 *)(iVar6 + iVar8 * 0xc);
            local_3c = *(undefined4 *)(iVar12 + 4);
            local_38 = *(undefined4 *)(iVar12 + 8);
          }
          FUN_00537aa0(local_34,&local_4c);
          in_EAX = FUN_004b6ca0(local_34);
          local_68 = local_68 + in_EAX;
          if (0x400 < (short)local_68 + 2) goto LAB_0053807f;
          uVar9 = 0xffffffff;
          pcVar14 = local_34;
          do {
            pcVar15 = pcVar14;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar15 = pcVar14 + 1;
            cVar2 = *pcVar14;
            pcVar14 = pcVar15;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar12 = -1;
          pcVar14 = param_1;
          do {
            pcVar16 = pcVar14;
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            pcVar16 = pcVar14 + 1;
            cVar2 = *pcVar14;
            pcVar14 = pcVar16;
          } while (cVar2 != '\0');
          pcVar14 = pcVar15 + -uVar9;
          pcVar15 = pcVar16 + -1;
          for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar15 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar15 = pcVar15 + 1;
          }
          if (iVar10 == (short)uVar4 + -1) break;
          uVar9 = 0xffffffff;
          pcVar14 = &DAT_005c424c;
          do {
            pcVar15 = pcVar14;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar15 = pcVar14 + 1;
            cVar2 = *pcVar14;
            pcVar14 = pcVar15;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar10 = -1;
          pcVar14 = param_1;
          do {
            pcVar16 = pcVar14;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar16 = pcVar14 + 1;
            cVar2 = *pcVar14;
            pcVar14 = pcVar16;
          } while (cVar2 != '\0');
          pcVar14 = pcVar15 + -uVar9;
          pcVar15 = pcVar16 + -1;
          for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar15 = pcVar15 + 4;
          }
          local_68 = local_68 + 1;
          sVar13 = sVar13 + 1;
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar15 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar15 = pcVar15 + 1;
          }
        } while (sVar13 < (short)uVar4);
      }
      uVar9 = 0xffffffff;
      pcVar14 = &DAT_005c4254;
      do {
        pcVar15 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar15;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      iVar10 = -1;
      pcVar14 = param_1;
      do {
        pcVar16 = pcVar14;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar16;
      } while (cVar2 != '\0');
      pcVar14 = pcVar15 + -uVar9;
      pcVar15 = pcVar16 + -1;
      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar15 = pcVar15 + 4;
      }
      local_68 = local_68 + 1;
      sVar7 = sVar7 + 1;
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar15 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar15 = pcVar15 + 1;
      }
    } while (sVar7 < (short)uVar3);
  }
  uVar9 = 0xffffffff;
  pcVar14 = &DAT_005c4254;
  do {
    pcVar15 = pcVar14;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar14 + 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar15;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar10 = -1;
  do {
    pcVar14 = param_1;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar14 = param_1 + 1;
    cVar2 = *param_1;
    param_1 = pcVar14;
  } while (cVar2 != '\0');
  pcVar15 = pcVar15 + -uVar9;
  pcVar14 = pcVar14 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar14 = pcVar14 + 1;
  }
  return 1;
}

