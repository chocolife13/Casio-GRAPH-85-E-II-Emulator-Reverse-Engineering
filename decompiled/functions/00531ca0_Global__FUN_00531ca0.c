// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00531ca0
// entry: 00531ca0  size: 1288


void FUN_00531ca0(ushort param_1,uint *param_2,int param_3)

{
  short sVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined **local_60;
  uint *local_5c;
  undefined1 local_54 [12];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  local_60 = &PTR_DAT_005993d0;
  if (PTR_DAT_005993d0 != (undefined *)0x0) {
    do {
      if ((param_1 & *(ushort *)((int)local_60 + 6)) == 0) goto LAB_00532197;
      switch(*(ushort *)((int)local_60 + 6) & 0xff) {
      case 1:
        puVar8 = param_2;
        puVar3 = (uint *)*local_60;
        if (param_3 != 0) {
          puVar8 = (uint *)*local_60;
          puVar3 = param_2;
        }
        sVar1 = *(short *)(local_60 + 1);
        for (uVar5 = (uint)(int)sVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = (int)sVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar8 = (char)*puVar3;
          puVar3 = (uint *)((int)puVar3 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        break;
      case 2:
        puVar8 = (uint *)*local_60;
        puVar3 = param_2;
        if (param_3 != 0) {
          puVar8 = param_2;
          puVar3 = (uint *)*local_60;
        }
        for (uVar5 = (uint)(int)*(short *)(local_60 + 1) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          uVar7 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 2);
          *(ushort *)puVar3 = CONCAT11((char)(short)uVar7,(char)((ushort)(short)uVar7 >> 8));
          puVar3 = (uint *)((int)puVar3 + 2);
        }
        break;
      case 3:
        puVar8 = (uint *)*local_60;
        puVar3 = param_2;
        if (param_3 != 0) {
          puVar8 = param_2;
          puVar3 = (uint *)*local_60;
        }
        for (uVar5 = (uint)(int)*(short *)(local_60 + 1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar3 = (uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8 | (uVar7 << 0x10 | uVar7 & 0xff00) << 8;
          puVar3 = puVar3 + 1;
        }
        break;
      case 4:
        puVar8 = (uint *)*local_60;
        puVar3 = param_2;
        if (param_3 != 0) {
          puVar8 = param_2;
          puVar3 = (uint *)*local_60;
        }
        for (uVar5 = (uint)(int)*(short *)(local_60 + 1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar3 = (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18 |
                    (uVar7 << 0x10 | uVar7 & 0xff00) << 8;
          puVar3 = puVar3 + 1;
        }
        break;
      case 5:
        uVar5 = (uint)(int)*(short *)(local_60 + 1) >> 2;
        puVar8 = (uint *)*local_60;
        puVar3 = param_2;
        if (param_3 != 0) {
          puVar8 = param_2;
          puVar3 = (uint *)*local_60;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          uVar7 = *puVar8;
          *puVar3 = (uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8 | (uVar7 << 0x10 | uVar7 & 0xff00) << 8;
          puVar8 = puVar8 + 1;
          puVar3 = puVar3 + 1;
        }
        break;
      case 6:
        uVar5 = (uint)(int)*(short *)(local_60 + 1) / 0xc;
        puVar8 = param_2;
        puVar3 = (uint *)*local_60;
        if (param_3 != 0) {
          puVar8 = (uint *)*local_60;
          puVar3 = param_2;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          puVar10 = (uint *)FUN_00531b90(local_54,puVar3);
          *puVar8 = *puVar10;
          puVar8[1] = puVar10[1];
          puVar8[2] = puVar10[2];
          puVar8 = puVar8 + 3;
          puVar3 = puVar3 + 3;
        }
        break;
      case 7:
        uVar5 = (uint)(int)*(short *)(local_60 + 1) / 0x18;
        puVar8 = (uint *)*local_60;
        puVar3 = param_2;
        if (param_3 != 0) {
          puVar8 = param_2;
          puVar3 = (uint *)*local_60;
        }
        while (uVar5 != 0) {
          puVar9 = puVar8 + 6;
          puVar10 = (uint *)FUN_00531c50(local_18,puVar8);
          puVar11 = puVar3 + 6;
          uVar5 = uVar5 - 1;
          puVar15 = puVar3;
          for (iVar12 = 6; puVar8 = puVar9, puVar3 = puVar11, iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar15 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar15 = puVar15 + 1;
          }
        }
        break;
      case 8:
        if (param_3 == 0) {
          uVar5 = 0;
          puVar8 = param_2 + 1;
          local_5c = (uint *)0x0;
          do {
            pcVar2 = PTR_DAT_005c421c + (int)local_5c;
            if ((*pcVar2 != '\0') || (uVar7 = uVar5, pcVar2[1] != '\0')) {
              uVar7 = uVar5 | 1;
              puVar3 = (uint *)FUN_00531c50(local_48,pcVar2);
              puVar10 = puVar8;
              for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar10 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar10 = puVar10 + 1;
              }
              puVar8 = puVar8 + 6;
            }
            local_5c = (uint *)((int)local_5c + 0x18);
            uVar5 = uVar7 << 1;
          } while ((int)local_5c < 0x2b8);
          *param_2 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 & 0xff00 | uVar7 << 0x11) << 8
          ;
          param_2 = puVar8;
        }
        else {
          uVar5 = *param_2;
          uVar5 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 << 0x10 | uVar5 & 0xff00) << 8;
          iVar12 = 0;
          puVar8 = param_2 + 1;
          do {
            if ((uVar5 & 0x20000000) == 0) {
              puVar4 = (undefined4 *)(PTR_DAT_005c421c + iVar12);
              for (iVar14 = 6; param_2 = puVar8, iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar4 = 0;
                puVar4 = puVar4 + 1;
              }
            }
            else {
              param_2 = puVar8 + 6;
              puVar4 = (undefined4 *)FUN_00531c50(local_30,puVar8);
              puVar13 = (undefined4 *)(PTR_DAT_005c421c + iVar12);
              for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar13 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar13 = puVar13 + 1;
              }
            }
            iVar12 = iVar12 + 0x18;
            uVar5 = uVar5 << 1;
            puVar8 = param_2;
          } while (iVar12 < 0x2b8);
        }
        goto LAB_00532197;
      case 9:
        if (param_3 == 0) {
          puVar10 = (uint *)0x10;
          iVar12 = 0;
          local_5c = param_2;
          puVar8 = param_2 + 4;
          do {
            uVar5 = 0;
            iVar6 = 0;
            iVar14 = iVar12;
            do {
              if ((iVar14 < 100) && (PTR_DAT_005c4218[iVar6 + iVar12] != '\0')) {
                uVar5 = uVar5 | 1;
                *(undefined *)puVar8 = PTR_DAT_005c4218[iVar6 + iVar12];
                puVar8 = (uint *)((int)puVar8 + 1);
                puVar10 = (uint *)((int)puVar10 + 1);
              }
              if (iVar6 < 0x1f) {
                uVar5 = uVar5 << 1;
              }
              iVar6 = iVar6 + 1;
              iVar14 = iVar14 + 1;
            } while (iVar6 < 0x20);
            iVar12 = iVar12 + 0x20;
            *local_5c = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 |
                        (uVar5 & 0xff00 | uVar5 << 0x10) << 8;
            local_5c = local_5c + 1;
          } while (iVar12 < 0x80);
        }
        else {
          local_5c = (uint *)0x10;
          iVar12 = 0;
          puVar8 = param_2 + 4;
          puVar3 = param_2;
          do {
            uVar5 = *puVar3;
            uVar5 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 << 0x10 | uVar5 & 0xff00) << 8;
            iVar6 = 0;
            iVar14 = iVar12;
            do {
              if (iVar14 < 100) {
                if ((uVar5 & 0x80000000) == 0) {
                  PTR_DAT_005c4218[iVar6 + iVar12] = 0;
                }
                else {
                  uVar7 = *puVar8;
                  puVar8 = (uint *)((int)puVar8 + 1);
                  PTR_DAT_005c4218[iVar6 + iVar12] = (char)uVar7;
                  local_5c = (uint *)((int)local_5c + 1);
                }
              }
              iVar6 = iVar6 + 1;
              iVar14 = iVar14 + 1;
              uVar5 = uVar5 << 1;
            } while (iVar6 < 0x20);
            iVar12 = iVar12 + 0x20;
            puVar3 = puVar3 + 1;
            puVar10 = local_5c;
          } while (iVar12 < 0x80);
        }
        param_2 = (uint *)((int)param_2 + ((int)puVar10 + 3U & 0xfffffffc));
        goto LAB_00532197;
      }
      param_2 = (uint *)((int)param_2 + ((int)*(short *)(local_60 + 1) + 3U & 0xfffffffc));
LAB_00532197:
      local_60 = local_60 + 2;
    } while (*local_60 != (undefined *)0x0);
  }
  return;
}

