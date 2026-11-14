// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00423560
// entry: 00423560  size: 4882


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00423560(byte *param_1,byte *param_2)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  byte local_5 [5];
  
  pbVar5 = param_2;
  local_5[0] = 0x41;
  bVar2 = *param_1;
  if (bVar2 == 0x40) {
    uVar4 = FUN_004adb80(param_1);
    uVar1 = _DAT_005cdbae;
    if (((uVar4 & 1) != 0) && (uVar4 != 0x81)) {
      pcVar7 = s__RUNMAT_005be2d4;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_00423f43:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00423f48;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00423f43;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_00423f48:
      if (iVar3 == 0) {
        pcVar7 = s_REPLAY_005bdc50;
        pbVar5 = param_2;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < (byte)*pcVar7;
          if (bVar2 != *pcVar7) {
LAB_00423f7f:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00423f84;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < ((byte *)pcVar7)[1];
          if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00423f7f;
          pbVar5 = pbVar5 + 2;
          pcVar7 = (char *)((byte *)pcVar7 + 2);
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_00423f84:
        if (iVar3 == 0) {
LAB_00423f88:
          DAT_005cdba8 = s_SYSTEM_005be2cc[0];
          DAT_005cdba8_1._0_1_ = s_SYSTEM_005be2cc[1];
          DAT_005cdba8_1._1_1_ = s_SYSTEM_005be2cc[2];
          DAT_005cdba8_1._2_1_ = s_SYSTEM_005be2cc[3];
          _DAT_005cdbac =
               CONCAT22(CONCAT11(DAT_005cdbac_1._2_1_,s_SYSTEM_005be2cc[6]),s_SYSTEM_005be2cc._4_2_)
          ;
          return &DAT_005cdba8;
        }
        pcVar7 = s_RUN2D1_005be2c4;
        pbVar5 = param_2;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < (byte)*pcVar7;
          if (bVar2 != *pcVar7) {
LAB_00423fe8:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00423fed;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < ((byte *)pcVar7)[1];
          if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00423fe8;
          pbVar5 = pbVar5 + 2;
          pcVar7 = (char *)((byte *)pcVar7 + 2);
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_00423fed:
        if (iVar3 == 0) goto LAB_00423f88;
      }
      pcVar7 = s__STAT_005be2bc;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_00424020:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00424025;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00424020;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_00424025:
      if (iVar3 == 0) {
        bVar2 = *param_2;
        if (bVar2 == 0x43) {
          pbVar8 = &DAT_005bdc40;
          pbVar5 = param_2;
          do {
            bVar2 = *pbVar5;
            bVar10 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) goto LAB_004240d0;
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar10 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_004240d0;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
        }
        else if (bVar2 == 0x47) {
          pbVar8 = &DAT_005bdc48;
          pbVar5 = param_2;
          do {
            bVar2 = *pbVar5;
            bVar10 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) goto LAB_004240d0;
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar10 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_004240d0;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
        }
        else {
          if (bVar2 != 0x53) goto LAB_004240fe;
          pcVar7 = s_STATap_005be2b4;
          pbVar5 = param_2;
          do {
            bVar2 = *pbVar5;
            bVar10 = bVar2 < (byte)*pcVar7;
            if (bVar2 != *pcVar7) goto LAB_004240d0;
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar10 = bVar2 < ((byte *)pcVar7)[1];
            if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_004240d0;
            pbVar5 = pbVar5 + 2;
            pcVar7 = (char *)((byte *)pcVar7 + 2);
          } while (bVar2 != 0);
          iVar3 = 0;
        }
LAB_004240d5:
        if (iVar3 == 0) {
          _DAT_005cdba8 = DAT_005be2e4;
          _DAT_005cdbac = CONCAT31(DAT_005cdbac_1,DAT_005be2e8);
          return &DAT_005cdba8;
        }
      }
LAB_004240fe:
      pcVar7 = s__GRAPH_005be2ac;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_0042412d:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00424132;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_0042412d;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_00424132:
      if ((((iVar3 == 0) && (*param_2 == 0x47)) && (param_2[1] == 0x4d)) &&
         ((param_2[2] == 0x45 && (param_2[3] == 0x4d)))) {
        pbVar9 = &DAT_0057e23f;
        pbVar5 = param_2 + 4;
        pbVar8 = pbVar9;
LAB_0042415e:
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < *pbVar9;
          if (bVar2 == *pbVar9) {
            if (bVar2 != 0) {
              bVar2 = pbVar5[1];
              bVar10 = bVar2 < pbVar9[1];
              if (bVar2 != pbVar9[1]) goto LAB_00424182;
              pbVar9 = pbVar9 + 2;
              pbVar5 = pbVar5 + 2;
              if (bVar2 != 0) goto LAB_0042415e;
            }
            iVar3 = 0;
          }
          else {
LAB_00424182:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          }
          if (iVar3 == 0) {
            _DAT_005cdba8 = DAT_005be29c;
            _DAT_005cdbac = CONCAT22(uVar1,DAT_005be2a0);
            return &DAT_005cdba8;
          }
          pbVar9 = pbVar8 + 3;
          pbVar5 = param_2 + 4;
          pbVar8 = pbVar9;
        } while ((int)pbVar9 < 0x57e279);
      }
      pbVar8 = &DAT_005be2a4;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_004241ec:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_004241f1;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_004241ec;
        pbVar5 = pbVar5 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_004241f1:
      if (iVar3 == 0) {
        if (*param_2 == 0x43) {
          pbVar8 = &DAT_005be288;
          pbVar5 = param_2;
          do {
            bVar2 = *pbVar5;
            bVar10 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) {
LAB_004242e2:
              bVar10 = 1 - bVar10 == (uint)(bVar10 != 0);
              goto LAB_00424284;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar10 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_004242e2;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          bVar10 = true;
LAB_00424284:
          if (bVar10) {
            DAT_005cdba8 = s_DYNA_MEM_005be290[0];
            DAT_005cdba8_1._0_1_ = s_DYNA_MEM_005be290[1];
            DAT_005cdba8_1._1_1_ = s_DYNA_MEM_005be290[2];
            DAT_005cdba8_1._2_1_ = s_DYNA_MEM_005be290[3];
            DAT_005cdbac = s_DYNA_MEM_005be290[4];
            DAT_005cdbac_1._0_1_ = s_DYNA_MEM_005be290[5];
            DAT_005cdbae = s_DYNA_MEM_005be290[6];
            DAT_005cdbac_1._2_1_ = s_DYNA_MEM_005be290[7];
            _DAT_005cdbb0 = CONCAT11(DAT_005cdbb0_1,s_DYNA_MEM_005be290[8]);
            return &DAT_005cdba8;
          }
        }
        else if (((*param_2 == 0x44) && (param_2[1] == 0x5f)) &&
                ((param_2[2] == 0x4d && ((param_2[3] == 0x45 && (param_2[4] == 0x4d)))))) {
          if (param_2[5] == 0) {
            DAT_005cdbac = s_DYNA_MEM_005be290[4];
            DAT_005cdbac_1._0_1_ = s_DYNA_MEM_005be290[5];
            DAT_005cdbae = s_DYNA_MEM_005be290[6];
            DAT_005cdbac_1._2_1_ = s_DYNA_MEM_005be290[7];
            DAT_005cdba8 = s_DYNA_MEM_005be290[0];
            DAT_005cdba8_1._0_1_ = s_DYNA_MEM_005be290[1];
            DAT_005cdba8_1._1_1_ = s_DYNA_MEM_005be290[2];
            DAT_005cdba8_1._2_1_ = s_DYNA_MEM_005be290[3];
            _DAT_005cdbb0 = CONCAT11(DAT_005cdbb0_1,s_DYNA_MEM_005be290[8]);
            return &DAT_005cdba8;
          }
          if (param_2[5] == 0x47) {
            bVar10 = param_2[6] == 0;
            goto LAB_00424284;
          }
        }
      }
      pcVar7 = s__RECUR_005be280;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_00424318:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0042431d;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00424318;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_0042431d:
      if (iVar3 == 0) {
        pbVar8 = &DAT_005be278;
        pbVar5 = param_2;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_0042434e:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00424353;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_0042434e;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_00424353:
        if (iVar3 == 0) {
          DAT_005cdba8 = s_RECURSION_005be32c[0];
          DAT_005cdba8_1._0_1_ = s_RECURSION_005be32c[1];
          DAT_005cdba8_1._1_1_ = s_RECURSION_005be32c[2];
          DAT_005cdba8_1._2_1_ = s_RECURSION_005be32c[3];
          DAT_005cdbac = s_RECURSION_005be32c[4];
          DAT_005cdbac_1._0_1_ = s_RECURSION_005be32c[5];
          DAT_005cdbae = s_RECURSION_005be32c[6];
          DAT_005cdbac_1._2_1_ = s_RECURSION_005be32c[7];
          DAT_005cdbb0 = s_RECURSION_005be32c[8];
          DAT_005cdbb0_1 = s_RECURSION_005be32c[9];
          return &DAT_005cdba8;
        }
      }
      pcVar7 = s__CONICS_005be270;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_004243b5:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_004243ba;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_004243b5;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_004243ba:
      if (iVar3 == 0) {
        pcVar7 = s_conicmem_005be264;
        pbVar5 = param_2;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < (byte)*pcVar7;
          if (bVar2 != *pcVar7) {
LAB_004243eb:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_004243f0;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < ((byte *)pcVar7)[1];
          if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_004243eb;
          pbVar5 = pbVar5 + 2;
          pcVar7 = (char *)((byte *)pcVar7 + 2);
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_004243f0:
        if (iVar3 == 0) {
          DAT_005cdba8 = s_CONICS_005be25c[0];
          DAT_005cdba8_1._0_1_ = s_CONICS_005be25c[1];
          DAT_005cdba8_1._1_1_ = s_CONICS_005be25c[2];
          DAT_005cdba8_1._2_1_ = s_CONICS_005be25c[3];
          _DAT_005cdbac = CONCAT12(s_CONICS_005be25c[6],s_CONICS_005be25c._4_2_);
          return &DAT_005cdba8;
        }
      }
      pcVar7 = s__EQUA_005be254;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_00424452:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00424457;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00424452;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_00424457:
      if (iVar3 == 0) {
        pcVar7 = s_EQSLVLMT_005be248;
        pbVar5 = param_2;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < (byte)*pcVar7;
          if (bVar2 != *pcVar7) {
LAB_00424488:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0042448d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < ((byte *)pcVar7)[1];
          if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00424488;
          pbVar5 = pbVar5 + 2;
          pcVar7 = (char *)((byte *)pcVar7 + 2);
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_0042448d:
        if (iVar3 == 0) goto LAB_00424491;
      }
      pcVar7 = s__FINANCE_005be230;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_004244ed:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_004244f2;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_004244ed;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_004244f2:
      if (iVar3 == 0) {
        pcVar7 = s_fina_mem_005be224;
        pbVar5 = param_2;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < (byte)*pcVar7;
          if (bVar2 != *pcVar7) {
LAB_00424523:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00424528;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < ((byte *)pcVar7)[1];
          if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00424523;
          pbVar5 = pbVar5 + 2;
          pcVar7 = (char *)((byte *)pcVar7 + 2);
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_00424528:
        if (iVar3 == 0) {
          DAT_005cdba8 = s_FINANCIAL_005be218[0];
          DAT_005cdba8_1._0_1_ = s_FINANCIAL_005be218[1];
          DAT_005cdba8_1._1_1_ = s_FINANCIAL_005be218[2];
          DAT_005cdba8_1._2_1_ = s_FINANCIAL_005be218[3];
          DAT_005cdbac = s_FINANCIAL_005be218[4];
          DAT_005cdbac_1._0_1_ = s_FINANCIAL_005be218[5];
          DAT_005cdbae = s_FINANCIAL_005be218[6];
          DAT_005cdbac_1._2_1_ = s_FINANCIAL_005be218[7];
          DAT_005cdbb0 = s_FINANCIAL_005be218[8];
          DAT_005cdbb0_1 = s_FINANCIAL_005be218[9];
          return &DAT_005cdba8;
        }
      }
      pcVar7 = s__SSHEET_005be210;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_0042458a:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0042458f;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_0042458a;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_0042458f:
      if (iVar3 == 0) {
        if ((*param_2 == 0x40) && (param_2[1] == 0x53)) {
          bVar2 = param_2[2];
          if (bVar2 == 0x43) {
            if ((((param_2[3] != 0x5f) || (param_2[4] != 0x43)) || (param_2[5] != 0x4e)) ||
               (param_2[6] != 0x44)) goto LAB_00424614;
            bVar2 = param_2[7];
          }
          else if (bVar2 == 0x47) {
            if (((param_2[3] != 0x5f) || (param_2[4] != 0x43)) ||
               ((param_2[5] != 0x4e || (param_2[6] != 0x44)))) goto LAB_00424614;
            bVar2 = param_2[7];
          }
          else {
            if (((bVar2 != 0x4e) || (param_2[3] != 0x41)) ||
               ((param_2[4] != 0x4d || (param_2[5] != 0x45)))) goto LAB_00424614;
            bVar2 = param_2[6];
          }
          if (bVar2 == 0) {
            return (byte *)0x0;
          }
        }
LAB_00424614:
        DAT_005cdba8 = s_S_SHEET_005be040[0];
        DAT_005cdba8_1._0_1_ = s_S_SHEET_005be040[1];
        DAT_005cdba8_1._1_1_ = s_S_SHEET_005be040[2];
        DAT_005cdba8_1._2_1_ = s_S_SHEET_005be040[3];
        DAT_005cdbac = s_S_SHEET_005be040[4];
        DAT_005cdbac_1._0_1_ = s_S_SHEET_005be040[5];
        DAT_005cdbae = s_S_SHEET_005be040[6];
        DAT_005cdbac_1._2_1_ = s_S_SHEET_005be040[7];
        return &DAT_005cdba8;
      }
      pcVar7 = s__TABLE_005be208;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_00424668:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0042466d;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00424668;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_0042466d:
      if (iVar3 == 0) {
        pcVar7 = s_RANGE_005be200;
        pbVar5 = param_2;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < (byte)*pcVar7;
          if (bVar2 != *pcVar7) {
LAB_004246a2:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_004246a7;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < ((byte *)pcVar7)[1];
          if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_004246a2;
          pbVar5 = pbVar5 + 2;
          pcVar7 = (char *)((byte *)pcVar7 + 2);
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_004246a7:
        if (iVar3 == 0) {
          DAT_005cdba8 = s_TABLE_005be308[0];
          DAT_005cdba8_1._0_1_ = s_TABLE_005be308[1];
          DAT_005cdba8_1._1_1_ = s_TABLE_005be308[2];
          DAT_005cdba8_1._2_1_ = s_TABLE_005be308[3];
          _DAT_005cdbac = CONCAT22(uVar1,s_TABLE_005be308._4_2_);
          return &DAT_005cdba8;
        }
      }
    }
    if ((uVar4 & 2) != 0) {
      return param_1;
    }
    if ((uVar4 & 0x8400) == 0) {
      return (byte *)0x0;
    }
    pcVar7 = s__REV2_005be1f8;
    do {
      bVar2 = *param_1;
      bVar10 = bVar2 < (byte)*pcVar7;
      if (bVar2 != *pcVar7) {
LAB_00424724:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00424729;
      }
      if (bVar2 == 0) break;
      bVar2 = param_1[1];
      bVar10 = bVar2 < ((byte *)pcVar7)[1];
      if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00424724;
      param_1 = param_1 + 2;
      pcVar7 = (char *)((byte *)pcVar7 + 2);
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_00424729:
    if (iVar3 != 0) {
      return (byte *)0x0;
    }
    if (*param_2 == 0x43) {
      if (param_2[1] == 0x41) {
        if (param_2[2] != 0x50) {
          return (byte *)0x0;
        }
        if (param_2[3] != 0x54) {
          return (byte *)0x0;
        }
        pbVar9 = &DAT_0057e23f;
        pbVar5 = param_2 + 4;
        pbVar8 = pbVar9;
LAB_00424813:
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < *pbVar9;
          if (bVar2 == *pbVar9) {
            if (bVar2 != 0) {
              bVar2 = pbVar5[1];
              bVar10 = bVar2 < pbVar9[1];
              if (bVar2 != pbVar9[1]) goto LAB_0042483b;
              pbVar9 = pbVar9 + 2;
              pbVar5 = pbVar5 + 2;
              if (bVar2 != 0) goto LAB_00424813;
            }
            iVar3 = 0;
          }
          else {
LAB_0042483b:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          }
          if (iVar3 == 0) {
            DAT_005cdba8 = s_CAPTURE_005be1f0[0];
            DAT_005cdba8_1._0_1_ = s_CAPTURE_005be1f0[1];
            DAT_005cdba8_1._1_1_ = s_CAPTURE_005be1f0[2];
            DAT_005cdba8_1._2_1_ = s_CAPTURE_005be1f0[3];
            DAT_005cdbac = s_CAPTURE_005be1f0[4];
            DAT_005cdbac_1._0_1_ = s_CAPTURE_005be1f0[5];
            DAT_005cdbae = s_CAPTURE_005be1f0[6];
            DAT_005cdbac_1._2_1_ = s_CAPTURE_005be1f0[7];
            return &DAT_005cdba8;
          }
          pbVar9 = pbVar8 + 3;
          pbVar5 = param_2 + 4;
          pbVar8 = pbVar9;
          if (0x57e278 < (int)pbVar9) {
            return (byte *)0x0;
          }
        } while( true );
      }
      if (param_2[1] != 0x4c) {
        return (byte *)0x0;
      }
      pbVar5 = &DAT_005bdca0;
      do {
        bVar2 = *param_2;
        bVar10 = bVar2 < *pbVar5;
        if (bVar2 != *pbVar5) goto LAB_00424771;
        if (bVar2 == 0) break;
        bVar2 = param_2[1];
        bVar10 = bVar2 < pbVar5[1];
        if (bVar2 != pbVar5[1]) goto LAB_00424771;
        param_2 = param_2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      iVar3 = 0;
    }
    else {
      if (*param_2 != 0x4e) {
        return (byte *)0x0;
      }
      pcVar7 = s_NAT_CLIP_005bdc94;
      do {
        bVar2 = *param_2;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) goto LAB_00424771;
        if (bVar2 == 0) break;
        bVar2 = param_2[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00424771;
        param_2 = param_2 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
    }
LAB_00424776:
    if (iVar3 != 0) {
      return (byte *)0x0;
    }
    DAT_005cdba8 = s_SYSTEM_005be2cc[0];
    DAT_005cdba8_1._0_1_ = s_SYSTEM_005be2cc[1];
    DAT_005cdba8_1._1_1_ = s_SYSTEM_005be2cc[2];
    DAT_005cdba8_1._2_1_ = s_SYSTEM_005be2cc[3];
    _DAT_005cdbac = CONCAT12(s_SYSTEM_005be2cc[6],s_SYSTEM_005be2cc._4_2_);
    return &DAT_005cdba8;
  }
  if (bVar2 != 0x6d) {
    if (bVar2 != 0x73) {
      return (byte *)0x0;
    }
    pcVar7 = s_system_005be344;
    do {
      bVar2 = *param_1;
      bVar10 = bVar2 < (byte)*pcVar7;
      if (bVar2 != *pcVar7) {
LAB_004235b5:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_004235ba;
      }
      if (bVar2 == 0) break;
      bVar2 = param_1[1];
      bVar10 = bVar2 < ((byte *)pcVar7)[1];
      if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_004235b5;
      param_1 = param_1 + 2;
      pcVar7 = (char *)((byte *)pcVar7 + 2);
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_004235ba:
    if (iVar3 != 0) {
      return (byte *)0x0;
    }
    _DAT_005cdba8 = s_PROGRAM_005be048._0_4_;
    _DAT_005cdbac = s_PROGRAM_005be048._4_4_;
    return &DAT_005cdba8;
  }
  pbVar8 = &DAT_005abcf8;
  do {
    bVar2 = *param_1;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_00423614:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00423619;
    }
    if (bVar2 == 0) break;
    bVar2 = param_1[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_00423614;
    param_1 = param_1 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar3 = 0;
LAB_00423619:
  if (iVar3 != 0) {
    return (byte *)0x0;
  }
  pbVar6 = &DAT_0057e23f;
  pbVar8 = param_2;
  pbVar9 = pbVar6;
LAB_0042362e:
  do {
    bVar2 = *pbVar8;
    bVar10 = bVar2 < *pbVar6;
    if (bVar2 == *pbVar6) {
      if (bVar2 != 0) {
        bVar2 = pbVar8[1];
        bVar10 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00423656;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
        if (bVar2 != 0) goto LAB_0042362e;
      }
      iVar3 = 0;
    }
    else {
LAB_00423656:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
    }
    if (iVar3 == 0) goto LAB_00423938;
    pbVar6 = pbVar9 + 3;
    pbVar8 = param_2;
    pbVar9 = pbVar6;
  } while ((int)pbVar6 < 0x57e279);
  param_2 = (byte *)0x57e23f;
  do {
    iVar3 = _strncmp((char *)pbVar5,(char *)param_2,1);
    if ((((iVar3 == 0) && (pbVar5[1] == 0x4c)) && (pbVar5[2] == 0x49)) &&
       ((pbVar5[3] == 0x53 && (pbVar5[4] == 0x54)))) {
      pbVar6 = &DAT_0057e23f;
      pbVar8 = pbVar5 + 5;
      pbVar9 = pbVar6;
LAB_004236ac:
      do {
        bVar2 = *pbVar8;
        bVar10 = bVar2 < *pbVar6;
        if (bVar2 == *pbVar6) {
          if (bVar2 != 0) {
            bVar2 = pbVar8[1];
            bVar10 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_004236d0;
            pbVar6 = pbVar6 + 2;
            pbVar8 = pbVar8 + 2;
            if (bVar2 != 0) goto LAB_004236ac;
          }
          iVar3 = 0;
        }
        else {
LAB_004236d0:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        }
        if (iVar3 == 0) goto LAB_00423754;
        pbVar6 = pbVar9 + 3;
        pbVar8 = pbVar5 + 5;
        pbVar9 = pbVar6;
      } while ((int)pbVar6 < 0x57e28b);
    }
    param_2 = (byte *)((char *)param_2 + 3);
  } while ((int)param_2 < 0x57e24f);
  switch(*pbVar5) {
  case 0x30:
    pbVar8 = &DAT_005bdcb0;
    do {
      bVar2 = *pbVar5;
      bVar10 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_00423747:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0042374c;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar10 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_00423747;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_0042374c:
    if (iVar3 == 0) {
LAB_00423754:
      DAT_005cdba8 = s_LISTFILE_005be338[0];
      DAT_005cdba8_1._0_1_ = s_LISTFILE_005be338[1];
      DAT_005cdba8_1._1_1_ = s_LISTFILE_005be338[2];
      DAT_005cdba8_1._2_1_ = s_LISTFILE_005be338[3];
      DAT_005cdbac = s_LISTFILE_005be338[4];
      DAT_005cdbac_1._0_1_ = s_LISTFILE_005be338[5];
      DAT_005cdbae = s_LISTFILE_005be338[6];
      DAT_005cdbac_1._2_1_ = s_LISTFILE_005be338[7];
      _DAT_005cdbb0 = CONCAT11(DAT_005cdbb0_1,s_LISTFILE_005be338[8]);
      return &DAT_005cdba8;
    }
    break;
  case 0x41:
    pbVar8 = &DAT_005be034;
    do {
      bVar2 = *pbVar5;
      bVar10 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) goto LAB_004237b2;
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar10 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_004237b2;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
    goto LAB_004237b7;
  case 0x42:
    pbVar8 = &DAT_005be030;
    do {
      bVar2 = *pbVar5;
      bVar10 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) goto LAB_004237b2;
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar10 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_004237b2;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
LAB_0042381b:
    iVar3 = 0;
    goto LAB_004237b7;
  case 0x43:
    pbVar8 = &DAT_005be02c;
    do {
      bVar2 = *pbVar5;
      bVar10 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) goto LAB_004237b2;
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar10 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_004237b2;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
    goto LAB_004237b7;
  case 0x45:
    pbVar8 = &DAT_005be320;
    do {
      bVar2 = *pbVar5;
      bVar10 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) goto LAB_00423884;
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar10 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_00423884;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
    goto LAB_00423889;
  case 0x46:
    if (pbVar5[1] == 0x41) {
      pcVar7 = s_FACTOR_005bdcb8;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_0042392b:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00423930;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_0042392b;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_00423930:
      if (iVar3 == 0) {
LAB_00423938:
        _DAT_005cdba8 = DAT_005be310;
        _DAT_005cdbac = CONCAT12(DAT_005be316,DAT_005be314);
        return &DAT_005cdba8;
      }
    }
    else if (((((pbVar5[1] == 0x4d) && (pbVar5[2] == 0x45)) && (pbVar5[3] == 0x4d)) &&
             ((pbVar5[4] != 0 && (pbVar5[4] < 0x15)))) && (pbVar5[5] == 0)) {
      _DAT_005cdba8 = DAT_005be318;
      _DAT_005cdbac = CONCAT22(_DAT_005cdbae,DAT_005be31c);
      return &DAT_005cdba8;
    }
    break;
  case 0x47:
    pcVar7 = s_GRAPHTBL_005bdce4;
    do {
      bVar2 = *pbVar5;
      bVar10 = bVar2 < (byte)*pcVar7;
      if (bVar2 != *pcVar7) {
LAB_00423998:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0042399d;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar10 = bVar2 < ((byte *)pcVar7)[1];
      if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00423998;
      pbVar5 = pbVar5 + 2;
      pcVar7 = (char *)((byte *)pcVar7 + 2);
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_0042399d:
    if (iVar3 == 0) {
      DAT_005cdba8 = s_TABLE_005be308[0];
      DAT_005cdba8_1._0_1_ = s_TABLE_005be308[1];
      DAT_005cdba8_1._1_1_ = s_TABLE_005be308[2];
      DAT_005cdba8_1._2_1_ = s_TABLE_005be308[3];
      _DAT_005cdbac = CONCAT22(_DAT_005cdbae,s_TABLE_005be308._4_2_);
      return &DAT_005cdba8;
    }
    break;
  case 0x4d:
    if (((pbVar5[1] == 0x41) && (pbVar5[2] == 0x54)) && (pbVar5[3] == 0x5f)) {
      local_5[0] = 0x41;
      while ((iVar3 = _strncmp((char *)(pbVar5 + 4),(char *)local_5,1), iVar3 != 0 ||
             (pbVar5[5] != 0))) {
        pbVar9 = &DAT_005bdd2c;
        pbVar8 = pbVar5;
        do {
          bVar2 = *pbVar8;
          bVar10 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_00423a3a:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00423a3f;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar10 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_00423a3a;
          pbVar8 = pbVar8 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_00423a3f:
        if (iVar3 == 0) break;
        local_5[0] = local_5[0] + 1;
        if (0x5a < local_5[0]) {
          return (byte *)0x0;
        }
      }
      DAT_005cdba8 = s_MATRIX_005be300[0];
      DAT_005cdba8_1._0_1_ = s_MATRIX_005be300[1];
      DAT_005cdba8_1._1_1_ = s_MATRIX_005be300[2];
      DAT_005cdba8_1._2_1_ = s_MATRIX_005be300[3];
      _DAT_005cdbac = CONCAT12(s_MATRIX_005be300[6],s_MATRIX_005be300._4_2_);
      return &DAT_005cdba8;
    }
    break;
  case 0x50:
    if (pbVar5[1] == 0x49) {
      if (pbVar5[2] != 0x43) {
        return (byte *)0x0;
      }
      if (pbVar5[3] != 0x54) {
        return (byte *)0x0;
      }
      pbVar6 = &DAT_0057e23f;
      pbVar8 = pbVar5 + 4;
      pbVar9 = pbVar6;
LAB_00423b97:
      do {
        bVar2 = *pbVar8;
        bVar10 = bVar2 < *pbVar6;
        if (bVar2 == *pbVar6) {
          if (bVar2 != 0) {
            bVar2 = pbVar8[1];
            bVar10 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_00423bbf;
            pbVar6 = pbVar6 + 2;
            pbVar8 = pbVar8 + 2;
            if (bVar2 != 0) goto LAB_00423b97;
          }
          iVar3 = 0;
        }
        else {
LAB_00423bbf:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        }
        if (iVar3 == 0) {
          DAT_005cdba8 = s_PICTURE_005be2ec[0];
          DAT_005cdba8_1._0_1_ = s_PICTURE_005be2ec[1];
          DAT_005cdba8_1._1_1_ = s_PICTURE_005be2ec[2];
          DAT_005cdba8_1._2_1_ = s_PICTURE_005be2ec[3];
          DAT_005cdbac = s_PICTURE_005be2ec[4];
          DAT_005cdbac_1._0_1_ = s_PICTURE_005be2ec[5];
          DAT_005cdbae = s_PICTURE_005be2ec[6];
          DAT_005cdbac_1._2_1_ = s_PICTURE_005be2ec[7];
          return &DAT_005cdba8;
        }
        pbVar6 = pbVar9 + 3;
        pbVar8 = pbVar5 + 4;
        pbVar9 = pbVar6;
        if (0x57e278 < (int)pbVar6) {
          return (byte *)0x0;
        }
      } while( true );
    }
    if (pbVar5[1] != 0x4f) {
      return (byte *)0x0;
    }
    if (pbVar5[2] != 0x4c) {
      return (byte *)0x0;
    }
    if (pbVar5[3] != 0x59) {
      return (byte *)0x0;
    }
    bVar2 = pbVar5[4];
    if (bVar2 == 0x43) {
      pcVar7 = s_POLYCOEF_005be2f4;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) goto LAB_00423884;
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00423884;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
LAB_00423b70:
      iVar3 = 0;
    }
    else if (bVar2 == 0x4d) {
      pcVar7 = s_POLYMULT_005bdd08;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) goto LAB_00423884;
        if (bVar2 == 0) goto LAB_00423b70;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00423884;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
    }
    else {
      if (bVar2 != 0x52) {
        return (byte *)0x0;
      }
      pcVar7 = s_POLYRSLT_005bdd14;
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) goto LAB_00423884;
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < ((byte *)pcVar7)[1];
        if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_00423884;
        pbVar5 = pbVar5 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar2 != 0);
      iVar3 = 0;
    }
LAB_00423889:
    if (iVar3 == 0) {
LAB_00424491:
      DAT_005cdba8 = s_EQUATION_005be23c[0];
      DAT_005cdba8_1._0_1_ = s_EQUATION_005be23c[1];
      DAT_005cdba8_1._1_1_ = s_EQUATION_005be23c[2];
      DAT_005cdba8_1._2_1_ = s_EQUATION_005be23c[3];
      DAT_005cdbac = s_EQUATION_005be23c[4];
      DAT_005cdbac_1._0_1_ = s_EQUATION_005be23c[5];
      DAT_005cdbae = s_EQUATION_005be23c[6];
      DAT_005cdbac_1._2_1_ = s_EQUATION_005be23c[7];
      _DAT_005cdbb0 = CONCAT11(DAT_005cdbb0_1,s_EQUATION_005be23c[8]);
      return &DAT_005cdba8;
    }
    break;
  case 0x52:
    pcVar7 = s_RECURTBL_005bdcd8;
    do {
      bVar2 = *pbVar5;
      bVar10 = bVar2 < (byte)*pcVar7;
      if (bVar2 != *pcVar7) goto LAB_004237b2;
      if (bVar2 == 0) goto LAB_0042381b;
      bVar2 = pbVar5[1];
      bVar10 = bVar2 < ((byte *)pcVar7)[1];
      if (bVar2 != ((byte *)pcVar7)[1]) goto LAB_004237b2;
      pbVar5 = pbVar5 + 2;
      pcVar7 = (char *)((byte *)pcVar7 + 2);
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_004237b7:
    if (iVar3 == 0) {
      DAT_005cdba8 = s_RECURSION_005be32c[0];
      DAT_005cdba8_1._0_1_ = s_RECURSION_005be32c[1];
      DAT_005cdba8_1._1_1_ = s_RECURSION_005be32c[2];
      DAT_005cdba8_1._2_1_ = s_RECURSION_005be32c[3];
      DAT_005cdbac = s_RECURSION_005be32c[4];
      DAT_005cdbac_1._0_1_ = s_RECURSION_005be32c[5];
      DAT_005cdbae = s_RECURSION_005be32c[6];
      DAT_005cdbac_1._2_1_ = s_RECURSION_005be32c[7];
      DAT_005cdbb0 = s_RECURSION_005be32c[8];
      DAT_005cdbb0_1 = s_RECURSION_005be32c[9];
      return &DAT_005cdba8;
    }
    break;
  case 0x53:
    if (pbVar5[1] == 0x49) {
      if (pbVar5[2] != 0x4d) {
        return (byte *)0x0;
      }
      if (pbVar5[3] != 0x4c) {
        return (byte *)0x0;
      }
      if (pbVar5[4] == 0x43) {
        pbVar8 = &DAT_005bdcfc;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) goto LAB_00423884;
          if (bVar2 == 0) goto LAB_00423b70;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_00423884;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
      }
      else {
        if (pbVar5[4] != 0x52) {
          return (byte *)0x0;
        }
        pbVar8 = &DAT_005bdcf0;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) goto LAB_00423884;
          if (bVar2 == 0) goto LAB_00423b70;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_00423884;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
      }
      goto LAB_00423889;
    }
    if (pbVar5[1] != 0x54) {
      return (byte *)0x0;
    }
    if (pbVar5[2] != 0x41) {
      return (byte *)0x0;
    }
    if (pbVar5[3] != 0x54) {
      return (byte *)0x0;
    }
    switch(pbVar5[4]) {
    case 0x30:
    case 0x33:
      if (pbVar5[5] == 0) {
        _DAT_005cdbac = CONCAT31(DAT_005cdbac_1,DAT_005be2e8);
        _DAT_005cdba8 = DAT_005be2e4;
        return &DAT_005cdba8;
      }
      break;
    case 0x31:
      if (pbVar5[5] == 0) {
        _DAT_005cdba8 = DAT_005be2e4;
        _DAT_005cdbac = CONCAT31(DAT_005cdbac_1,DAT_005be2e8);
        return &DAT_005cdba8;
      }
      break;
    case 0x32:
      bVar2 = pbVar5[5];
      goto LAB_00423ce6;
    case 0x56:
      if (pbVar5[5] != 0x30) {
        if (pbVar5[5] != 0x31) {
          return (byte *)0x0;
        }
        if (pbVar5[6] != 0) {
          return (byte *)0x0;
        }
        _DAT_005cdba8 = DAT_005be2e4;
        _DAT_005cdbac = CONCAT31(DAT_005cdbac_1,DAT_005be2e8);
        return &DAT_005cdba8;
      }
      bVar2 = pbVar5[6];
LAB_00423ce6:
      if (bVar2 == 0) {
        _DAT_005cdba8 = DAT_005be2e4;
        _DAT_005cdbac = CONCAT31(DAT_005cdbac_1,DAT_005be2e8);
        return &DAT_005cdba8;
      }
    }
    break;
  case 0x56:
    if (pbVar5[1] == 0x4d) {
      if ((pbVar5[2] == 0x45) && (pbVar5[3] == 0x4d)) {
        pbVar6 = &DAT_0057e23f;
        pbVar8 = pbVar5 + 4;
        pbVar9 = pbVar6;
LAB_00423e85:
        do {
          bVar2 = *pbVar8;
          bVar10 = bVar2 < *pbVar6;
          if (bVar2 == *pbVar6) {
            if (bVar2 != 0) {
              bVar2 = pbVar8[1];
              bVar10 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_00423ead;
              pbVar6 = pbVar6 + 2;
              pbVar8 = pbVar8 + 2;
              if (bVar2 != 0) goto LAB_00423e85;
            }
            iVar3 = 0;
          }
          else {
LAB_00423ead:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          }
          if (iVar3 == 0) {
            DAT_005cdba8 = s_V_WIN_005be2dc[0];
            DAT_005cdba8_1._0_1_ = s_V_WIN_005be2dc[1];
            DAT_005cdba8_1._1_1_ = s_V_WIN_005be2dc[2];
            DAT_005cdba8_1._2_1_ = s_V_WIN_005be2dc[3];
            _DAT_005cdbac = CONCAT22(_DAT_005cdbae,s_V_WIN_005be2dc._4_2_);
            return &DAT_005cdba8;
          }
          pbVar6 = pbVar9 + 3;
          pbVar8 = pbVar5 + 4;
          pbVar9 = pbVar6;
          if (0x57e24e < (int)pbVar6) {
            return (byte *)0x0;
          }
        } while( true );
      }
    }
    else if ((((pbVar5[1] == 0x57) && (pbVar5[2] == 0x49)) && (pbVar5[3] == 0x4e)) &&
            ((pbVar5[4] == 0 || ((pbVar5[4] == 0x52 && (pbVar5[5] == 0)))))) {
      _DAT_005cdba8 = DAT_005be310;
      _DAT_005cdbac = CONCAT12(DAT_005be316,DAT_005be314);
      return &DAT_005cdba8;
    }
  }
  return (byte *)0x0;
LAB_004240d0:
  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
  goto LAB_004240d5;
LAB_00424771:
  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
  goto LAB_00424776;
LAB_00423884:
  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
  goto LAB_00423889;
LAB_004237b2:
  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
  goto LAB_004237b7;
}

