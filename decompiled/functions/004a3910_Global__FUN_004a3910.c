// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a3910
// entry: 004a3910  size: 745


void FUN_004a3910(char *param_1)

{
  short *psVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  char *pcVar14;
  int local_50;
  undefined4 local_48;
  char local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [13];
  undefined1 local_1f [9];
  undefined1 local_16 [22];
  
  pcVar2 = param_1;
  iVar8 = 0;
  iVar9 = 0;
  local_50 = 0;
  if (*(short *)(param_1 + 0x1e) != 0) {
    iVar12 = 0;
    while (cVar3 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar12,8), cVar3 == '\0') {
      iVar9 = iVar9 + 1;
      iVar12 = iVar12 + 0x1c;
      if ((int)(uint)*(ushort *)(param_1 + 0x1e) <= iVar9) {
        return;
      }
    }
    iVar9 = FUN_004a2500(0x1ce,0x1cf);
    if (iVar9 == 0x7539) {
      if ((param_1[4] != '\0') && (*(short *)(param_1 + 0x1e) != 0)) {
        iVar9 = 0;
        do {
          cVar3 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar9,7);
          if (cVar3 != '\0') {
            iVar12 = _strncmp((char *)(*(int *)(param_1 + 0x20) + 4 + iVar9),param_1 + 4,0xc);
            if (((iVar12 == 0) &&
                (cVar3 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar9,8), cVar3 != '\0')) &&
               (cVar3 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar9,0xd), cVar3 == '\0')) {
              param_1[4] = '\0';
              break;
            }
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x1c;
        } while (iVar8 < (int)(uint)*(ushort *)(param_1 + 0x1e));
      }
      iVar8 = 0;
      psVar1 = (short *)(param_1 + 0x1e);
      param_1 = (char *)0x0;
      if (*psVar1 != 0) {
        do {
          bVar4 = FUN_004a0820(*(int *)(pcVar2 + 0x20) + iVar8,7);
          bVar5 = FUN_004a0820(*(int *)(pcVar2 + 0x20) + iVar8,8);
          if ((bVar5 & ~bVar4) == 0) {
            if (pcVar2[4] == '\0') {
              cVar3 = FUN_004a0820(*(int *)(pcVar2 + 0x20) + iVar8,6);
              if ((cVar3 == '\0') &&
                 (cVar3 = FUN_004a0820(*(int *)(pcVar2 + 0x20) + iVar8,8), cVar3 == '\0'))
              goto LAB_004a3b57;
            }
            else {
              cVar3 = FUN_004a0820(*(int *)(pcVar2 + 0x20) + iVar8,6);
              if ((cVar3 != '\0') &&
                 ((cVar3 = FUN_004a0820(*(int *)(pcVar2 + 0x20) + iVar8,8), cVar3 == '\0' &&
                  (iVar9 = _strncmp((char *)(*(int *)(pcVar2 + 0x20) + 4 + iVar8),pcVar2 + 4,0xc),
                  iVar9 == 0)))) {
LAB_004a3b57:
                if (local_50 != 1) {
                  puVar10 = (undefined4 *)(*(int *)(pcVar2 + 0x20) + iVar8);
                  puVar13 = &local_48;
                  for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar13 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar13 = puVar13 + 1;
                  }
                  if (local_50 == 2) goto LAB_004a3b75;
                }
              }
            }
          }
          else {
            iVar9 = FUN_004298f0(*(int *)(pcVar2 + 0x20) + iVar8 + 4,
                                 *(int *)(pcVar2 + 0x20) + iVar8 + 0x10,local_2c);
            if (iVar9 != 0) {
LAB_004a3aa8:
              do {
                FUN_00410e00(local_1f,local_16);
                iVar9 = FUN_00429910(*(int *)(pcVar2 + 0x20) + iVar8 + 4,
                                     *(int *)(pcVar2 + 0x20) + iVar8 + 0x10,iVar9,local_2c);
              } while (iVar9 != -1);
              local_50 = 2;
              goto LAB_004a3b7d;
            }
            iVar12 = _strncmp((char *)(*(int *)(pcVar2 + 0x20) + 4 + iVar8),s_ALPHA_MEM_005be3a8,0xc
                             );
            if (iVar12 == 0) {
              FUN_0052f7b0();
            }
            else {
              iVar12 = _strncmp((char *)(*(int *)(pcVar2 + 0x20) + 4 + iVar8),s_SETUP_005be050,0xc);
              if (iVar12 != 0) goto LAB_004a3aa8;
              FUN_00531a60();
            }
            puVar10 = (undefined4 *)(*(int *)(pcVar2 + 0x20) + iVar8);
            puVar13 = &local_48;
            for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
LAB_004a3b75:
            local_50 = 1;
          }
LAB_004a3b7d:
          param_1 = (char *)((int)param_1 + 1);
          iVar8 = iVar8 + 0x1c;
        } while ((int)param_1 < (int)(uint)*(ushort *)(pcVar2 + 0x1e));
      }
      if (pcVar2[4] == '\0') {
        local_44[0] = '\0';
      }
      FUN_004a02b0(pcVar2,0);
      FUN_004a2cc0(pcVar2);
      uVar6 = 0xffffffff;
      pcVar14 = local_44;
      do {
        pcVar11 = pcVar14;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar14 + 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar11;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      pcVar11 = pcVar11 + -uVar6;
      pcVar14 = pcVar2;
      for (uVar7 = uVar6 >> 2; pcVar14 = pcVar14 + 4, uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar14 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar14 = pcVar14 + 1;
      }
      if (*(short *)(pcVar2 + 0x1e) != 0) {
        FUN_004a02e0(pcVar2,local_44,local_38,1);
      }
    }
  }
  return;
}

