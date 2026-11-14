// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00424920
// entry: 00424920  size: 5461


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00424920(byte *param_1,byte *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined3 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  byte local_5 [5];
  
  pbVar9 = param_2;
  DAT_005cdbb8 = '\0';
  DAT_005cdbb8_1._0_1_ = '\0';
  DAT_005cdbb8_1._1_1_ = '\0';
  DAT_005cdbb8_1._2_1_ = '\0';
  _DAT_005cdbbc = (undefined *)0x0;
  _DAT_005cdbc0 = 0;
  local_5[0] = 0x41;
  DAT_005cdbc4 = 0;
  bVar5 = *param_1;
  if (bVar5 == 0x40) {
    uVar7 = FUN_004adb80(param_1);
    uVar3 = _DAT_005cdbbe;
    if (((uVar7 & 1) != 0) && (uVar7 != 0x81)) {
      pcVar13 = s__RUNMAT_005be2d4;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_00425514:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425519;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425514;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425519:
      if (iVar6 == 0) {
        pcVar13 = s_REPLAY_005bdc50;
        pbVar9 = param_2;
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < (byte)*pcVar13;
          if (bVar5 != *pcVar13) {
LAB_00425553_1:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto code_r0x00425559;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar17 = bVar5 < ((byte *)pcVar13)[1];
          if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425553_1;
          pbVar9 = pbVar9 + 2;
          pcVar13 = (char *)((byte *)pcVar13 + 2);
        } while (bVar5 != 0);
        iVar6 = 0;
code_r0x00425559:
        if (iVar6 == 0) {
code_r0x0042555d:
          DAT_005cdbb8 = s_SYSTEM_005be2cc[0];
          DAT_005cdbb8_1._0_1_ = s_SYSTEM_005be2cc[1];
          DAT_005cdbb8_1._1_1_ = s_SYSTEM_005be2cc[2];
          DAT_005cdbb8_1._2_1_ = s_SYSTEM_005be2cc[3];
          _DAT_005cdbbc =
               (undefined *)
               CONCAT22(CONCAT11(DAT_005cdbbc_1._2_1_,s_SYSTEM_005be2cc[6]),s_SYSTEM_005be2cc._4_2_)
          ;
          return &DAT_005cdbb8;
        }
        pcVar13 = s_RUN2D1_005be2c4;
        pbVar9 = param_2;
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < (byte)*pcVar13;
          if (bVar5 != *pcVar13) {
code_r0x004255bd:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto code_r0x004255c2;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar17 = bVar5 < ((byte *)pcVar13)[1];
          if (bVar5 != ((byte *)pcVar13)[1]) goto code_r0x004255bd;
          pbVar9 = pbVar9 + 2;
          pcVar13 = (char *)((byte *)pcVar13 + 2);
        } while (bVar5 != 0);
        iVar6 = 0;
code_r0x004255c2:
        if (iVar6 == 0) goto code_r0x0042555d;
      }
      pcVar13 = s__STAT_005be2bc;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_004255fb:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425600;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_004255fb;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425600:
      if (iVar6 == 0) {
        bVar5 = *param_2;
        if (bVar5 == 0x43) {
          pbVar14 = &DAT_005bdc40;
          pbVar9 = param_2;
          do {
            bVar5 = *pbVar9;
            bVar17 = bVar5 < *pbVar14;
            if (bVar5 != *pbVar14) goto LAB_004256ab;
            if (bVar5 == 0) break;
            bVar5 = pbVar9[1];
            bVar17 = bVar5 < pbVar14[1];
            if (bVar5 != pbVar14[1]) goto LAB_004256ab;
            pbVar9 = pbVar9 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar5 != 0);
          iVar6 = 0;
        }
        else if (bVar5 == 0x47) {
          pbVar14 = &DAT_005bdc48;
          pbVar9 = param_2;
          do {
            bVar5 = *pbVar9;
            bVar17 = bVar5 < *pbVar14;
            if (bVar5 != *pbVar14) goto LAB_004256ab;
            if (bVar5 == 0) break;
            bVar5 = pbVar9[1];
            bVar17 = bVar5 < pbVar14[1];
            if (bVar5 != pbVar14[1]) goto LAB_004256ab;
            pbVar9 = pbVar9 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar5 != 0);
          iVar6 = 0;
        }
        else {
          if (bVar5 != 0x53) goto LAB_004256d9;
          pcVar13 = s_STATap_005be2b4;
          pbVar9 = param_2;
          do {
            bVar5 = *pbVar9;
            bVar17 = bVar5 < (byte)*pcVar13;
            if (bVar5 != *pcVar13) goto LAB_004256ab;
            if (bVar5 == 0) break;
            bVar5 = pbVar9[1];
            bVar17 = bVar5 < ((byte *)pcVar13)[1];
            if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_004256ab;
            pbVar9 = pbVar9 + 2;
            pcVar13 = (char *)((byte *)pcVar13 + 2);
          } while (bVar5 != 0);
          iVar6 = 0;
        }
LAB_004256b0:
        if (iVar6 == 0) {
          _DAT_005cdbb8 = DAT_005be2e4;
          _DAT_005cdbbc = (undefined *)CONCAT31(DAT_005cdbbc_1,DAT_005be2e8);
          return &DAT_005cdbb8;
        }
      }
LAB_004256d9:
      pcVar13 = s__GRAPH_005be2ac;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_00425708:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_0042570d;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425708;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_0042570d:
      if ((((iVar6 == 0) && (*param_2 == 0x47)) && (param_2[1] == 0x4d)) &&
         ((param_2[2] == 0x45 && (param_2[3] == 0x4d)))) {
        iVar6 = 1;
        pbVar12 = &DAT_0057e23f;
        pbVar9 = param_2 + 4;
        pbVar14 = pbVar12;
LAB_0042573a:
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < *pbVar12;
          if (bVar5 == *pbVar12) {
            if (bVar5 != 0) {
              bVar5 = pbVar9[1];
              bVar17 = bVar5 < pbVar12[1];
              if (bVar5 != pbVar12[1]) goto LAB_0042575e;
              pbVar12 = pbVar12 + 2;
              pbVar9 = pbVar9 + 2;
              if (bVar5 != 0) goto LAB_0042573a;
            }
            iVar10 = 0;
          }
          else {
LAB_0042575e:
            iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          }
          if (iVar10 == 0) {
            _DAT_005cdbb8 = DAT_005be354;
            uVar7 = 0xffffffff;
            pcVar13 = &DAT_0057e23c + iVar6 * 3;
            goto code_r0x004257cd;
          }
          pbVar12 = pbVar14 + 3;
          iVar6 = iVar6 + 1;
          pbVar9 = param_2 + 4;
          pbVar14 = pbVar12;
        } while ((int)pbVar12 < 0x57e279);
      }
      pbVar14 = &DAT_005be2a4;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < *pbVar14;
        if (bVar5 != *pbVar14) {
LAB_00425804:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425809;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < pbVar14[1];
        if (bVar5 != pbVar14[1]) goto LAB_00425804;
        pbVar9 = pbVar9 + 2;
        pbVar14 = pbVar14 + 2;
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425809:
      uVar4 = DAT_005cdbc0_1;
      if (iVar6 == 0) {
        if (*param_2 == 0x43) {
          pbVar14 = &DAT_005be288;
          pbVar9 = param_2;
          do {
            bVar5 = *pbVar9;
            bVar17 = bVar5 < *pbVar14;
            if (bVar5 != *pbVar14) {
LAB_004258b9:
              iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_004258be;
            }
            if (bVar5 == 0) break;
            bVar5 = pbVar9[1];
            bVar17 = bVar5 < pbVar14[1];
            if (bVar5 != pbVar14[1]) goto LAB_004258b9;
            pbVar9 = pbVar9 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar5 != 0);
          iVar6 = 0;
LAB_004258be:
          if (iVar6 == 0) {
            _DAT_005cdbc0 = CONCAT31(DAT_005cdbc0_1,s_DYNA_MEM_005be290[8]);
            DAT_005cdbb8 = s_DYNA_MEM_005be290[0];
            DAT_005cdbb8_1._0_1_ = s_DYNA_MEM_005be290[1];
            DAT_005cdbb8_1._1_1_ = s_DYNA_MEM_005be290[2];
            DAT_005cdbb8_1._2_1_ = s_DYNA_MEM_005be290[3];
            DAT_005cdbbc = s_DYNA_MEM_005be290[4];
            DAT_005cdbbc_1._0_1_ = s_DYNA_MEM_005be290[5];
            DAT_005cdbbe = s_DYNA_MEM_005be290[6];
            DAT_005cdbbc_1._2_1_ = s_DYNA_MEM_005be290[7];
            return &DAT_005cdbb8;
          }
        }
        else if ((((*param_2 == 0x44) && (param_2[1] == 0x5f)) &&
                 ((param_2[2] == 0x4d && ((param_2[3] == 0x45 && (param_2[4] == 0x4d)))))) &&
                ((param_2[5] == 0 || ((param_2[5] == 0x47 && (param_2[6] == 0)))))) {
          DAT_005cdbb8 = s_DYNA_MEM_005be290[0];
          DAT_005cdbb8_1._0_1_ = s_DYNA_MEM_005be290[1];
          DAT_005cdbb8_1._1_1_ = s_DYNA_MEM_005be290[2];
          DAT_005cdbb8_1._2_1_ = s_DYNA_MEM_005be290[3];
          DAT_005cdbbc = s_DYNA_MEM_005be290[4];
          DAT_005cdbbc_1._0_1_ = s_DYNA_MEM_005be290[5];
          DAT_005cdbbe = s_DYNA_MEM_005be290[6];
          DAT_005cdbbc_1._2_1_ = s_DYNA_MEM_005be290[7];
          _DAT_005cdbc0 = CONCAT31(DAT_005cdbc0_1,s_DYNA_MEM_005be290[8]);
          return &DAT_005cdbb8;
        }
      }
      pcVar13 = s__RECUR_005be280;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_00425920:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425925;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425920;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425925:
      if (iVar6 == 0) {
        pbVar14 = &DAT_005be278;
        pbVar9 = param_2;
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < *pbVar14;
          if (bVar5 != *pbVar14) {
LAB_00425956:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_0042595b;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar17 = bVar5 < pbVar14[1];
          if (bVar5 != pbVar14[1]) goto LAB_00425956;
          pbVar9 = pbVar9 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar5 != 0);
        iVar6 = 0;
LAB_0042595b:
        if (iVar6 == 0) {
          _DAT_005cdbc0 = CONCAT22(DAT_005cdbc0_1._1_2_,s_RECURSION_005be32c._8_2_);
          DAT_005cdbb8 = s_RECURSION_005be32c[0];
          DAT_005cdbb8_1._0_1_ = s_RECURSION_005be32c[1];
          DAT_005cdbb8_1._1_1_ = s_RECURSION_005be32c[2];
          DAT_005cdbb8_1._2_1_ = s_RECURSION_005be32c[3];
          DAT_005cdbbc = s_RECURSION_005be32c[4];
          DAT_005cdbbc_1._0_1_ = s_RECURSION_005be32c[5];
          DAT_005cdbbe = s_RECURSION_005be32c[6];
          DAT_005cdbbc_1._2_1_ = s_RECURSION_005be32c[7];
          return &DAT_005cdbb8;
        }
      }
      pcVar13 = s__CONICS_005be270;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_004259bb:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_004259c0;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_004259bb;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_004259c0:
      if (iVar6 == 0) {
        pcVar13 = s_conicmem_005be264;
        pbVar9 = param_2;
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < (byte)*pcVar13;
          if (bVar5 != *pcVar13) {
LAB_004259f1:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_004259f6;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar17 = bVar5 < ((byte *)pcVar13)[1];
          if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_004259f1;
          pbVar9 = pbVar9 + 2;
          pcVar13 = (char *)((byte *)pcVar13 + 2);
        } while (bVar5 != 0);
        iVar6 = 0;
LAB_004259f6:
        if (iVar6 == 0) {
          DAT_005cdbb8 = s_CONICS_005be25c[0];
          DAT_005cdbb8_1._0_1_ = s_CONICS_005be25c[1];
          DAT_005cdbb8_1._1_1_ = s_CONICS_005be25c[2];
          DAT_005cdbb8_1._2_1_ = s_CONICS_005be25c[3];
          _DAT_005cdbbc =
               (undefined *)
               CONCAT22(CONCAT11(DAT_005cdbbc_1._2_1_,s_CONICS_005be25c[6]),s_CONICS_005be25c._4_2_)
          ;
          return &DAT_005cdbb8;
        }
      }
      pcVar13 = s__EQUA_005be254;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_00425a56:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425a5b;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425a56;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425a5b:
      if (iVar6 == 0) {
        pcVar13 = s_EQSLVLMT_005be248;
        pbVar9 = param_2;
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < (byte)*pcVar13;
          if (bVar5 != *pcVar13) {
LAB_00425a8c:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_00425a91;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar17 = bVar5 < ((byte *)pcVar13)[1];
          if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425a8c;
          pbVar9 = pbVar9 + 2;
          pcVar13 = (char *)((byte *)pcVar13 + 2);
        } while (bVar5 != 0);
        iVar6 = 0;
LAB_00425a91:
        if (iVar6 == 0) {
          _DAT_005cdbc0 = CONCAT31(uVar4,s_EQUATION_005be23c[8]);
          DAT_005cdbb8 = s_EQUATION_005be23c[0];
          DAT_005cdbb8_1._0_1_ = s_EQUATION_005be23c[1];
          DAT_005cdbb8_1._1_1_ = s_EQUATION_005be23c[2];
          DAT_005cdbb8_1._2_1_ = s_EQUATION_005be23c[3];
          DAT_005cdbbc = s_EQUATION_005be23c[4];
          DAT_005cdbbc_1._0_1_ = s_EQUATION_005be23c[5];
          DAT_005cdbbe = s_EQUATION_005be23c[6];
          DAT_005cdbbc_1._2_1_ = s_EQUATION_005be23c[7];
          return &DAT_005cdbb8;
        }
      }
      pcVar13 = s__FINANCE_005be230;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_00425aef:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425af4;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425aef;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425af4:
      if (iVar6 == 0) {
        pcVar13 = s_fina_mem_005be224;
        pbVar9 = param_2;
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < (byte)*pcVar13;
          if (bVar5 != *pcVar13) {
LAB_00425b25:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_00425b2a;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar17 = bVar5 < ((byte *)pcVar13)[1];
          if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425b25;
          pbVar9 = pbVar9 + 2;
          pcVar13 = (char *)((byte *)pcVar13 + 2);
        } while (bVar5 != 0);
        iVar6 = 0;
LAB_00425b2a:
        if (iVar6 == 0) {
          _DAT_005cdbc0 = CONCAT22(DAT_005cdbc0_1._1_2_,s_FINANCIAL_005be218._8_2_);
          DAT_005cdbb8 = s_FINANCIAL_005be218[0];
          DAT_005cdbb8_1._0_1_ = s_FINANCIAL_005be218[1];
          DAT_005cdbb8_1._1_1_ = s_FINANCIAL_005be218[2];
          DAT_005cdbb8_1._2_1_ = s_FINANCIAL_005be218[3];
          DAT_005cdbbc = s_FINANCIAL_005be218[4];
          DAT_005cdbbc_1._0_1_ = s_FINANCIAL_005be218[5];
          DAT_005cdbbe = s_FINANCIAL_005be218[6];
          DAT_005cdbbc_1._2_1_ = s_FINANCIAL_005be218[7];
          return &DAT_005cdbb8;
        }
      }
      pcVar13 = s__SSHEET_005be210;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_00425b8a:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425b8f;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425b8a;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425b8f:
      if (iVar6 == 0) {
        if ((*param_2 == 0x40) && (param_2[1] == 0x53)) {
          bVar5 = param_2[2];
          if (bVar5 == 0x43) {
            if ((((param_2[3] != 0x5f) || (param_2[4] != 0x43)) || (param_2[5] != 0x4e)) ||
               (param_2[6] != 0x44)) goto LAB_00425c14;
            bVar5 = param_2[7];
          }
          else if (bVar5 == 0x47) {
            if (((param_2[3] != 0x5f) || (param_2[4] != 0x43)) ||
               ((param_2[5] != 0x4e || (param_2[6] != 0x44)))) goto LAB_00425c14;
            bVar5 = param_2[7];
          }
          else {
            if (((bVar5 != 0x4e) || (param_2[3] != 0x41)) ||
               ((param_2[4] != 0x4d || (param_2[5] != 0x45)))) goto LAB_00425c14;
            bVar5 = param_2[6];
          }
          if (bVar5 == 0) {
            return (undefined1 *)0x0;
          }
        }
LAB_00425c14:
        uVar7 = 0xffffffff;
        do {
          pbVar9 = param_2;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pbVar9 = param_2 + 1;
          bVar5 = *param_2;
          param_2 = pbVar9;
        } while (bVar5 != 0);
        uVar7 = ~uVar7;
        pbVar9 = pbVar9 + -uVar7;
        pbVar14 = &DAT_005cdbb8;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar14 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar14 = pbVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar14 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar14 = pbVar14 + 1;
        }
        return &DAT_005cdbb8;
      }
      pcVar13 = s__TABLE_005be208;
      pbVar9 = param_1;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_00425c70:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425c75;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425c70;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425c75:
      if (iVar6 == 0) {
        pcVar13 = s_RANGE_005be200;
        pbVar9 = param_2;
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < (byte)*pcVar13;
          if (bVar5 != *pcVar13) {
LAB_00425caa:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_00425caf;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar17 = bVar5 < ((byte *)pcVar13)[1];
          if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425caa;
          pbVar9 = pbVar9 + 2;
          pcVar13 = (char *)((byte *)pcVar13 + 2);
        } while (bVar5 != 0);
        iVar6 = 0;
LAB_00425caf:
        if (iVar6 == 0) {
          DAT_005cdbb8 = s_TABLE_005be308[0];
          DAT_005cdbb8_1._0_1_ = s_TABLE_005be308[1];
          DAT_005cdbb8_1._1_1_ = s_TABLE_005be308[2];
          DAT_005cdbb8_1._2_1_ = s_TABLE_005be308[3];
          _DAT_005cdbbc = (undefined *)CONCAT22(uVar3,s_TABLE_005be308._4_2_);
          return &DAT_005cdbb8;
        }
      }
    }
    if ((uVar7 & 2) != 0) {
LAB_00424998:
      uVar7 = 0xffffffff;
      do {
        pbVar9 = param_2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pbVar9 = param_2 + 1;
        bVar5 = *param_2;
        param_2 = pbVar9;
      } while (bVar5 != 0);
      uVar7 = ~uVar7;
      pbVar9 = pbVar9 + -uVar7;
      pbVar14 = &DAT_005cdbb8;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar14 = pbVar14 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar14 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar14 = pbVar14 + 1;
      }
      return &DAT_005cdbb8;
    }
    if ((uVar7 & 0x8400) == 0) {
      return (undefined1 *)0x0;
    }
    pcVar13 = s__REV2_005be1f8;
    do {
      bVar5 = *param_1;
      bVar17 = bVar5 < (byte)*pcVar13;
      if (bVar5 != *pcVar13) {
LAB_00425d1f:
        iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_00425d24;
      }
      if (bVar5 == 0) break;
      bVar5 = param_1[1];
      bVar17 = bVar5 < ((byte *)pcVar13)[1];
      if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425d1f;
      param_1 = param_1 + 2;
      pcVar13 = (char *)((byte *)pcVar13 + 2);
    } while (bVar5 != 0);
    iVar6 = 0;
LAB_00425d24:
    if (iVar6 != 0) {
      return (undefined1 *)0x0;
    }
    if (*param_2 == 0x43) {
      if (param_2[1] == 0x41) {
        if (param_2[2] != 0x50) {
          return (undefined1 *)0x0;
        }
        if (param_2[3] != 0x54) {
          return (undefined1 *)0x0;
        }
        iVar6 = 1;
        pbVar12 = &DAT_0057e23f;
        pbVar9 = param_2 + 4;
        pbVar14 = pbVar12;
LAB_00425e19:
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < *pbVar12;
          if (bVar5 == *pbVar12) {
            if (bVar5 != 0) {
              bVar5 = pbVar9[1];
              bVar17 = bVar5 < pbVar12[1];
              if (bVar5 != pbVar12[1]) goto LAB_00425e3d;
              pbVar12 = pbVar12 + 2;
              pbVar9 = pbVar9 + 2;
              if (bVar5 != 0) goto LAB_00425e19;
            }
            iVar10 = 0;
          }
          else {
LAB_00425e3d:
            iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          }
          if (iVar10 == 0) {
            _DAT_005cdbb8 = DAT_005be34c;
            _DAT_005cdbbc = (undefined *)CONCAT22(uVar3,DAT_005be350);
            uVar7 = 0xffffffff;
            pcVar13 = &DAT_0057e23c + iVar6 * 3;
            goto code_r0x00425e80;
          }
          pbVar12 = pbVar14 + 3;
          iVar6 = iVar6 + 1;
          pbVar9 = param_2 + 4;
          pbVar14 = pbVar12;
          if (0x57e278 < (int)pbVar12) {
            return (undefined1 *)0x0;
          }
        } while( true );
      }
      if (param_2[1] != 0x4c) {
        return (undefined1 *)0x0;
      }
      pbVar9 = &DAT_005bdca0;
      do {
        bVar5 = *param_2;
        bVar17 = bVar5 < *pbVar9;
        if (bVar5 != *pbVar9) {
LAB_00425de5:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425dea;
        }
        if (bVar5 == 0) break;
        bVar5 = param_2[1];
        bVar17 = bVar5 < pbVar9[1];
        if (bVar5 != pbVar9[1]) goto LAB_00425de5;
        param_2 = param_2 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425dea:
      if (iVar6 != 0) {
        return (undefined1 *)0x0;
      }
    }
    else {
      if (*param_2 != 0x4e) {
        return (undefined1 *)0x0;
      }
      pcVar13 = s_NAT_CLIP_005bdc94;
      do {
        bVar5 = *param_2;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_00425d6d:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00425d72;
        }
        if (bVar5 == 0) break;
        bVar5 = param_2[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425d6d;
        param_2 = param_2 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
LAB_00425d72:
      if (iVar6 != 0) goto LAB_00425d9a;
    }
    DAT_005cdbb8 = s_SYSTEM_005be2cc[0];
    DAT_005cdbb8_1._0_1_ = s_SYSTEM_005be2cc[1];
    DAT_005cdbb8_1._1_1_ = s_SYSTEM_005be2cc[2];
    DAT_005cdbb8_1._2_1_ = s_SYSTEM_005be2cc[3];
    _DAT_005cdbbc = CONCAT12(s_SYSTEM_005be2cc[6],s_SYSTEM_005be2cc._4_2_);
LAB_00425d9a:
    return &DAT_005cdbb8;
  }
  if (bVar5 != 0x6d) {
    if (bVar5 != 0x73) {
      _DAT_005cdbb8 = 0;
      _DAT_005cdbbc = (undefined *)0x0;
      _DAT_005cdbc0 = 0;
      DAT_005cdbc4 = 0;
      return (undefined1 *)0x0;
    }
    pcVar13 = s_system_005be344;
    do {
      bVar5 = *param_1;
      bVar17 = bVar5 < (byte)*pcVar13;
      if (bVar5 != *pcVar13) {
LAB_0042498b:
        iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_00424990;
      }
      if (bVar5 == 0) break;
      bVar5 = param_1[1];
      bVar17 = bVar5 < ((byte *)pcVar13)[1];
      if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_0042498b;
      param_1 = param_1 + 2;
      pcVar13 = (char *)((byte *)pcVar13 + 2);
    } while (bVar5 != 0);
    iVar6 = 0;
LAB_00424990:
    if (iVar6 != 0) {
      _DAT_005cdbb8 = 0;
      _DAT_005cdbbc = (undefined *)0x0;
      _DAT_005cdbc0 = 0;
      DAT_005cdbc4 = 0;
      return (undefined1 *)0x0;
    }
    goto LAB_00424998;
  }
  pbVar14 = &DAT_005abcf8;
  do {
    bVar5 = *param_1;
    bVar17 = bVar5 < *pbVar14;
    if (bVar5 != *pbVar14) {
LAB_004249f8:
      iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_004249fd;
    }
    if (bVar5 == 0) break;
    bVar5 = param_1[1];
    bVar17 = bVar5 < pbVar14[1];
    if (bVar5 != pbVar14[1]) goto LAB_004249f8;
    param_1 = param_1 + 2;
    pbVar14 = pbVar14 + 2;
  } while (bVar5 != 0);
  iVar6 = 0;
LAB_004249fd:
  if (iVar6 != 0) {
    _DAT_005cdbb8 = 0;
    _DAT_005cdbbc = (undefined *)0x0;
    _DAT_005cdbc0 = 0;
    DAT_005cdbc4 = 0;
    return (undefined1 *)0x0;
  }
  pbVar11 = &DAT_0057e23f;
  pbVar14 = param_2;
  pbVar12 = pbVar11;
LAB_00424a12:
  do {
    bVar5 = *pbVar14;
    bVar17 = bVar5 < *pbVar11;
    if (bVar5 == *pbVar11) {
      if (bVar5 != 0) {
        bVar5 = pbVar14[1];
        bVar17 = bVar5 < pbVar11[1];
        if (bVar5 != pbVar11[1]) goto LAB_00424a3a;
        pbVar11 = pbVar11 + 2;
        pbVar14 = pbVar14 + 2;
        if (bVar5 != 0) goto LAB_00424a12;
      }
      iVar6 = 0;
    }
    else {
LAB_00424a3a:
      iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
    }
    if (iVar6 == 0) goto LAB_00424e07;
    pbVar11 = pbVar12 + 3;
    pbVar14 = param_2;
    pbVar12 = pbVar11;
  } while ((int)pbVar11 < 0x57e279);
  param_2 = (byte *)0x1;
  param_1 = (byte *)0x57e23f;
  do {
    iVar6 = _strncmp((char *)pbVar9,(char *)param_1,1);
    uVar3 = DAT_005cdbc0_1._1_2_;
    if ((((iVar6 == 0) && (pbVar9[1] == 0x4c)) && (pbVar9[2] == 0x49)) &&
       ((pbVar9[3] == 0x53 && (pbVar9[4] == 0x54)))) {
      pbVar11 = &DAT_0057e23f;
      pbVar14 = pbVar9 + 5;
      pbVar12 = pbVar11;
LAB_00424a98:
      do {
        bVar5 = *pbVar14;
        bVar17 = bVar5 < *pbVar11;
        if (bVar5 == *pbVar11) {
          if (bVar5 != 0) {
            bVar5 = pbVar14[1];
            bVar17 = bVar5 < pbVar11[1];
            if (bVar5 != pbVar11[1]) goto LAB_00424abc;
            pbVar11 = pbVar11 + 2;
            pbVar14 = pbVar14 + 2;
            if (bVar5 != 0) goto LAB_00424a98;
          }
          iVar6 = 0;
        }
        else {
LAB_00424abc:
          iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        }
        if (iVar6 == 0) {
          DAT_005cdbb8 = s_LISTFILE_005be394[0];
          DAT_005cdbb8_1._0_1_ = s_LISTFILE_005be394[1];
          DAT_005cdbb8_1._1_1_ = s_LISTFILE_005be394[2];
          DAT_005cdbb8_1._2_1_ = s_LISTFILE_005be394[3];
          DAT_005cdbbc = s_LISTFILE_005be394[4];
          DAT_005cdbbc_1._0_1_ = s_LISTFILE_005be394[5];
          DAT_005cdbbe = s_LISTFILE_005be394[6];
          DAT_005cdbbc_1._2_1_ = s_LISTFILE_005be394[7];
          uVar7 = 0xffffffff;
          pcVar13 = &DAT_0057e23c + (int)param_2 * 3;
          goto code_r0x00424b6a;
        }
        pbVar11 = pbVar12 + 3;
        pbVar14 = pbVar9 + 5;
        pbVar12 = pbVar11;
      } while ((int)pbVar11 < 0x57e28b);
    }
    param_1 = (byte *)((char *)param_1 + 3);
    param_2 = (byte *)((int)param_2 + 1);
  } while ((int)param_1 < 0x57e24f);
  uVar2 = _DAT_005cdbbe;
  switch(*pbVar9) {
  case 0x30:
    pbVar14 = &DAT_005bdcb0;
    do {
      bVar5 = *pbVar9;
      bVar17 = bVar5 < *pbVar14;
      if (bVar5 != *pbVar14) {
LAB_00424ba8:
        iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_00424bad;
      }
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar17 = bVar5 < pbVar14[1];
      if (bVar5 != pbVar14[1]) goto LAB_00424ba8;
      pbVar9 = pbVar9 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar5 != 0);
    iVar6 = 0;
LAB_00424bad:
    if (iVar6 == 0) {
      DAT_005cdbb8 = s_LIST_ANS_005be388[0];
      DAT_005cdbb8_1._0_1_ = s_LIST_ANS_005be388[1];
      DAT_005cdbb8_1._1_1_ = s_LIST_ANS_005be388[2];
      DAT_005cdbb8_1._2_1_ = s_LIST_ANS_005be388[3];
      DAT_005cdbbc = s_LIST_ANS_005be388[4];
      DAT_005cdbbc_1._0_1_ = s_LIST_ANS_005be388[5];
      DAT_005cdbbe = s_LIST_ANS_005be388[6];
      DAT_005cdbbc_1._2_1_ = s_LIST_ANS_005be388[7];
      _DAT_005cdbc0 = CONCAT31(DAT_005cdbc0_1,s_LIST_ANS_005be388[8]);
      return &DAT_005cdbb8;
    }
    break;
  case 0x41:
    pbVar14 = &DAT_005be034;
    do {
      bVar5 = *pbVar9;
      bVar17 = bVar5 < *pbVar14;
      if (bVar5 != *pbVar14) goto LAB_00424c13;
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar17 = bVar5 < pbVar14[1];
      if (bVar5 != pbVar14[1]) goto LAB_00424c13;
      pbVar9 = pbVar9 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar5 != 0);
    iVar6 = 0;
    goto LAB_00424c18;
  case 0x42:
    pbVar14 = &DAT_005be030;
    do {
      bVar5 = *pbVar9;
      bVar17 = bVar5 < *pbVar14;
      if (bVar5 != *pbVar14) goto LAB_00424c13;
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar17 = bVar5 < pbVar14[1];
      if (bVar5 != pbVar14[1]) goto LAB_00424c13;
      pbVar9 = pbVar9 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar5 != 0);
    iVar6 = 0;
    goto LAB_00424c18;
  case 0x43:
    pbVar14 = &DAT_005be02c;
    do {
      bVar5 = *pbVar9;
      bVar17 = bVar5 < *pbVar14;
      if (bVar5 != *pbVar14) goto LAB_00424c13;
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar17 = bVar5 < pbVar14[1];
      if (bVar5 != pbVar14[1]) goto LAB_00424c13;
      pbVar9 = pbVar9 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar5 != 0);
    iVar6 = 0;
LAB_00424c18:
    if (iVar6 == 0) {
      DAT_005cdbb8 = s_RECURSION_005be32c[0];
      DAT_005cdbb8_1._0_1_ = s_RECURSION_005be32c[1];
      DAT_005cdbb8_1._1_1_ = s_RECURSION_005be32c[2];
      DAT_005cdbb8_1._2_1_ = s_RECURSION_005be32c[3];
      DAT_005cdbbc = s_RECURSION_005be32c[4];
      DAT_005cdbbc_1._0_1_ = s_RECURSION_005be32c[5];
      DAT_005cdbbe = s_RECURSION_005be32c[6];
      DAT_005cdbbc_1._2_1_ = s_RECURSION_005be32c[7];
      _DAT_005cdbc0 = CONCAT22(uVar3,s_RECURSION_005be32c._8_2_);
      return &DAT_005cdbb8;
    }
    break;
  case 0x45:
    pbVar14 = &DAT_005be320;
    do {
      bVar5 = *pbVar9;
      bVar17 = bVar5 < *pbVar14;
      if (bVar5 != *pbVar14) {
LAB_00424ce5:
        iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_00424cea;
      }
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar17 = bVar5 < pbVar14[1];
      if (bVar5 != pbVar14[1]) goto LAB_00424ce5;
      pbVar9 = pbVar9 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar5 != 0);
    iVar6 = 0;
LAB_00424cea:
    if (iVar6 == 0) {
      DAT_005cdbb8 = s_EQUATION_005be23c[0];
      DAT_005cdbb8_1._0_1_ = s_EQUATION_005be23c[1];
      DAT_005cdbb8_1._1_1_ = s_EQUATION_005be23c[2];
      DAT_005cdbb8_1._2_1_ = s_EQUATION_005be23c[3];
      DAT_005cdbbc = s_EQUATION_005be23c[4];
      DAT_005cdbbc_1._0_1_ = s_EQUATION_005be23c[5];
      DAT_005cdbbe = s_EQUATION_005be23c[6];
      DAT_005cdbbc_1._2_1_ = s_EQUATION_005be23c[7];
      _DAT_005cdbc0 = CONCAT31(DAT_005cdbc0_1,s_EQUATION_005be23c[8]);
      return &DAT_005cdbb8;
    }
    break;
  case 0x46:
    if (pbVar9[1] != 0x41) {
      if (pbVar9[1] != 0x4d) {
        return (undefined1 *)0x0;
      }
      if (pbVar9[2] != 0x45) {
        return (undefined1 *)0x0;
      }
      if (pbVar9[3] != 0x4d) {
        return (undefined1 *)0x0;
      }
      if (pbVar9[4] == 0) {
        return (undefined1 *)0x0;
      }
      if (0x14 < pbVar9[4]) {
        return (undefined1 *)0x0;
      }
      if (pbVar9[5] != 0) {
        return (undefined1 *)0x0;
      }
      _DAT_005cdbb8 = DAT_005be380;
      _DAT_005cdbbc = CONCAT12(DAT_005be386,DAT_005be384);
      uVar7 = 0xffffffff;
      pcVar13 = &DAT_0057e23c + (uint)pbVar9[4] * 3;
      do {
        pcVar16 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar6 = -1;
      pcVar13 = &DAT_005cdbb8;
      do {
        pcVar15 = pcVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar15 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar1 != '\0');
      pcVar13 = pcVar16 + -uVar7;
      pcVar16 = pcVar15 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar16 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar16 = pcVar16 + 1;
      }
      return &DAT_005cdbb8;
    }
    pcVar13 = s_FACTOR_005bdcb8;
    do {
      bVar5 = *pbVar9;
      bVar17 = bVar5 < (byte)*pcVar13;
      if (bVar5 != *pcVar13) {
LAB_00424dfa:
        iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_00424dff;
      }
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar17 = bVar5 < ((byte *)pcVar13)[1];
      if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00424dfa;
      pbVar9 = pbVar9 + 2;
      pcVar13 = (char *)((byte *)pcVar13 + 2);
    } while (bVar5 != 0);
    iVar6 = 0;
LAB_00424dff:
    bVar17 = iVar6 == 0;
    goto LAB_00424e01;
  case 0x47:
    pcVar13 = s_GRAPHTBL_005bdce4;
    do {
      bVar5 = *pbVar9;
      bVar17 = bVar5 < (byte)*pcVar13;
      if (bVar5 != *pcVar13) {
LAB_00424e67:
        iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_00424e6c;
      }
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar17 = bVar5 < ((byte *)pcVar13)[1];
      if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00424e67;
      pbVar9 = pbVar9 + 2;
      pcVar13 = (char *)((byte *)pcVar13 + 2);
    } while (bVar5 != 0);
    iVar6 = 0;
LAB_00424e6c:
    if (iVar6 == 0) {
      DAT_005cdbb8 = s_TABLE_005be308[0];
      DAT_005cdbb8_1._0_1_ = s_TABLE_005be308[1];
      DAT_005cdbb8_1._1_1_ = s_TABLE_005be308[2];
      DAT_005cdbb8_1._2_1_ = s_TABLE_005be308[3];
      _DAT_005cdbbc = (undefined *)CONCAT22(uVar2,s_TABLE_005be308._4_2_);
      return &DAT_005cdbb8;
    }
    break;
  case 0x4d:
    if (((pbVar9[1] == 0x41) && (pbVar9[2] == 0x54)) && (pbVar9[3] == 0x5f)) {
      local_5[0] = 0x41;
      while ((iVar6 = _strncmp((char *)(pbVar9 + 4),(char *)local_5,1), iVar6 != 0 ||
             (pbVar9[5] != 0))) {
        pbVar12 = &DAT_005bdd2c;
        pbVar14 = pbVar9;
        do {
          bVar5 = *pbVar14;
          bVar17 = bVar5 < *pbVar12;
          if (bVar5 != *pbVar12) {
LAB_00424f09:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_00424f0e;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar14[1];
          bVar17 = bVar5 < pbVar12[1];
          if (bVar5 != pbVar12[1]) goto LAB_00424f09;
          pbVar14 = pbVar14 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar5 != 0);
        iVar6 = 0;
LAB_00424f0e:
        if (iVar6 == 0) {
          _DAT_005cdbb8 = DAT_005be370;
          _DAT_005cdbbc = PTR_LAB_005be374;
          return &DAT_005cdbb8;
        }
        local_5[0] = local_5[0] + 1;
        if (0x5a < local_5[0]) {
          return (undefined1 *)0x0;
        }
      }
      _DAT_005cdbb8 = DAT_005be378;
      _DAT_005cdbbc = (undefined *)CONCAT22(_DAT_005cdbbe,DAT_005be37c);
      uVar7 = 0xffffffff;
      pcVar13 = &DAT_005cdbb8;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      _strncpy((char *)(~uVar7 + 0x5cdbb6),(char *)local_5,1);
      return &DAT_005cdbb8;
    }
    break;
  case 0x50:
    if (pbVar9[1] == 0x49) {
      if (pbVar9[2] != 0x43) {
        return (undefined1 *)0x0;
      }
      if (pbVar9[3] != 0x54) {
        return (undefined1 *)0x0;
      }
      iVar6 = 1;
      pbVar11 = &DAT_0057e23f;
      pbVar14 = pbVar9 + 4;
      pbVar12 = pbVar11;
LAB_004250a8:
      do {
        bVar5 = *pbVar14;
        bVar17 = bVar5 < *pbVar11;
        if (bVar5 == *pbVar11) {
          if (bVar5 != 0) {
            bVar5 = pbVar14[1];
            bVar17 = bVar5 < pbVar11[1];
            if (bVar5 != pbVar11[1]) goto LAB_004250cc;
            pbVar11 = pbVar11 + 2;
            pbVar14 = pbVar14 + 2;
            if (bVar5 != 0) goto LAB_004250a8;
          }
          iVar10 = 0;
        }
        else {
LAB_004250cc:
          iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        }
        if (iVar10 == 0) {
          DAT_005cdbb8 = s_PICTURE_005be364[0];
          DAT_005cdbb8_1._0_1_ = s_PICTURE_005be364[1];
          DAT_005cdbb8_1._1_1_ = s_PICTURE_005be364[2];
          DAT_005cdbb8_1._2_1_ = s_PICTURE_005be364[3];
          DAT_005cdbbc = s_PICTURE_005be364[4];
          DAT_005cdbbc_1._0_1_ = s_PICTURE_005be364[5];
          DAT_005cdbbe = s_PICTURE_005be364[6];
          DAT_005cdbbc_1._2_1_ = s_PICTURE_005be364[7];
          uVar7 = 0xffffffff;
          pcVar13 = &DAT_0057e23c + iVar6 * 3;
          goto code_r0x00425113;
        }
        pbVar11 = pbVar12 + 3;
        iVar6 = iVar6 + 1;
        pbVar14 = pbVar9 + 4;
        pbVar12 = pbVar11;
        if (0x57e278 < (int)pbVar11) {
          return (undefined1 *)0x0;
        }
      } while( true );
    }
    if (pbVar9[1] != 0x4f) {
      return (undefined1 *)0x0;
    }
    if (pbVar9[2] != 0x4c) {
      return (undefined1 *)0x0;
    }
    if (pbVar9[3] != 0x59) {
      return (undefined1 *)0x0;
    }
    bVar5 = pbVar9[4];
    if (bVar5 == 0x43) {
      pcVar13 = s_POLYCOEF_005be2f4;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) goto LAB_0042534e;
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_0042534e;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
    }
    else if (bVar5 == 0x4d) {
      pcVar13 = s_POLYMULT_005bdd08;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) goto LAB_0042534e;
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_0042534e;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
    }
    else {
      if (bVar5 != 0x52) {
        return (undefined1 *)0x0;
      }
      pcVar13 = s_POLYRSLT_005bdd14;
      do {
        bVar5 = *pbVar9;
        bVar17 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) goto LAB_0042534e;
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar17 = bVar5 < ((byte *)pcVar13)[1];
        if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_0042534e;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar5 != 0);
      iVar6 = 0;
    }
LAB_00425353:
    if (iVar6 == 0) {
      DAT_005cdbb8 = s_EQUATION_005be23c[0];
      DAT_005cdbb8_1._0_1_ = s_EQUATION_005be23c[1];
      DAT_005cdbb8_1._1_1_ = s_EQUATION_005be23c[2];
      DAT_005cdbb8_1._2_1_ = s_EQUATION_005be23c[3];
      DAT_005cdbbc = s_EQUATION_005be23c[4];
      DAT_005cdbbc_1._0_1_ = s_EQUATION_005be23c[5];
      DAT_005cdbbe = s_EQUATION_005be23c[6];
      DAT_005cdbbc_1._2_1_ = s_EQUATION_005be23c[7];
      _DAT_005cdbc0 = CONCAT31(DAT_005cdbc0_1,s_EQUATION_005be23c[8]);
      return &DAT_005cdbb8;
    }
    break;
  case 0x52:
    pcVar13 = s_RECURTBL_005bdcd8;
    do {
      bVar5 = *pbVar9;
      bVar17 = bVar5 < (byte)*pcVar13;
      if (bVar5 != *pcVar13) {
LAB_00425178:
        iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_0042517d;
      }
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar17 = bVar5 < ((byte *)pcVar13)[1];
      if (bVar5 != ((byte *)pcVar13)[1]) goto LAB_00425178;
      pbVar9 = pbVar9 + 2;
      pcVar13 = (char *)((byte *)pcVar13 + 2);
    } while (bVar5 != 0);
    iVar6 = 0;
LAB_0042517d:
    if (iVar6 == 0) {
      DAT_005cdbb8 = s_RECURSION_005be32c[0];
      DAT_005cdbb8_1._0_1_ = s_RECURSION_005be32c[1];
      DAT_005cdbb8_1._1_1_ = s_RECURSION_005be32c[2];
      DAT_005cdbb8_1._2_1_ = s_RECURSION_005be32c[3];
      DAT_005cdbbc = s_RECURSION_005be32c[4];
      DAT_005cdbbc_1._0_1_ = s_RECURSION_005be32c[5];
      DAT_005cdbbe = s_RECURSION_005be32c[6];
      DAT_005cdbbc_1._2_1_ = s_RECURSION_005be32c[7];
      _DAT_005cdbc0 = CONCAT22(uVar3,s_RECURSION_005be32c._8_2_);
      return &DAT_005cdbb8;
    }
    break;
  case 0x53:
    if (pbVar9[1] == 0x49) {
      if (pbVar9[2] != 0x4d) {
        return (undefined1 *)0x0;
      }
      if (pbVar9[3] != 0x4c) {
        return (undefined1 *)0x0;
      }
      if (pbVar9[4] == 0x43) {
        pbVar14 = &DAT_005bdcfc;
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < *pbVar14;
          if (bVar5 != *pbVar14) goto LAB_0042534e;
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar17 = bVar5 < pbVar14[1];
          if (bVar5 != pbVar14[1]) goto LAB_0042534e;
          pbVar9 = pbVar9 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar5 != 0);
        iVar6 = 0;
      }
      else {
        if (pbVar9[4] != 0x52) {
          return (undefined1 *)0x0;
        }
        pbVar14 = &DAT_005bdcf0;
        do {
          bVar5 = *pbVar9;
          bVar17 = bVar5 < *pbVar14;
          if (bVar5 != *pbVar14) goto LAB_0042534e;
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar17 = bVar5 < pbVar14[1];
          if (bVar5 != pbVar14[1]) goto LAB_0042534e;
          pbVar9 = pbVar9 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar5 != 0);
        iVar6 = 0;
      }
      goto LAB_00425353;
    }
    if (pbVar9[1] != 0x54) {
      return (undefined1 *)0x0;
    }
    if (pbVar9[2] != 0x41) {
      return (undefined1 *)0x0;
    }
    if (pbVar9[3] != 0x54) {
      return (undefined1 *)0x0;
    }
    switch(pbVar9[4]) {
    case 0x30:
      if (pbVar9[5] == 0) {
        _DAT_005cdbbc = (undefined *)CONCAT31(DAT_005cdbbc_1,DAT_005be2e8);
        _DAT_005cdbb8 = DAT_005be2e4;
        return &DAT_005cdbb8;
      }
      break;
    case 0x31:
      if (pbVar9[5] == 0) {
        _DAT_005cdbb8 = DAT_005be2e4;
        _DAT_005cdbbc = (undefined *)CONCAT31(DAT_005cdbbc_1,DAT_005be2e8);
        return &DAT_005cdbb8;
      }
      break;
    case 0x32:
      bVar5 = pbVar9[5];
      goto LAB_004252d2;
    case 0x33:
      if (pbVar9[5] == 0) {
        _DAT_005cdbbc = (undefined *)CONCAT31(DAT_005cdbbc_1,DAT_005be2e8);
        _DAT_005cdbb8 = DAT_005be2e4;
        return &DAT_005cdbb8;
      }
      break;
    case 0x56:
      if (pbVar9[5] != 0x30) {
        if (pbVar9[5] != 0x31) {
          return (undefined1 *)0x0;
        }
        if (pbVar9[6] != 0) {
          return (undefined1 *)0x0;
        }
        _DAT_005cdbb8 = DAT_005be2e4;
        _DAT_005cdbbc = (undefined *)CONCAT31(DAT_005cdbbc_1,DAT_005be2e8);
        return &DAT_005cdbb8;
      }
      bVar5 = pbVar9[6];
LAB_004252d2:
      if (bVar5 == 0) {
        _DAT_005cdbb8 = DAT_005be2e4;
        _DAT_005cdbbc = (undefined *)CONCAT31(DAT_005cdbbc_1,DAT_005be2e8);
        return &DAT_005cdbb8;
      }
    }
    break;
  case 0x56:
    if (pbVar9[1] == 0x4d) {
      if (pbVar9[2] != 0x45) {
        return (undefined1 *)0x0;
      }
      if (pbVar9[3] != 0x4d) {
        return (undefined1 *)0x0;
      }
      iVar6 = 1;
      pbVar11 = &DAT_0057e23f;
      pbVar14 = pbVar9 + 4;
      pbVar12 = pbVar11;
LAB_0042541e:
      do {
        bVar5 = *pbVar14;
        bVar17 = bVar5 < *pbVar11;
        if (bVar5 == *pbVar11) {
          if (bVar5 != 0) {
            bVar5 = pbVar14[1];
            bVar17 = bVar5 < pbVar11[1];
            if (bVar5 != pbVar11[1]) goto LAB_00425442;
            pbVar11 = pbVar11 + 2;
            pbVar14 = pbVar14 + 2;
            if (bVar5 != 0) goto LAB_0042541e;
          }
          iVar10 = 0;
        }
        else {
LAB_00425442:
          iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        }
        if (iVar10 == 0) {
          _DAT_005cdbb8 = DAT_005be35c;
          uVar7 = 0xffffffff;
          pcVar13 = &DAT_0057e23c + iVar6 * 3;
          goto code_r0x0042548b;
        }
        pbVar11 = pbVar12 + 3;
        iVar6 = iVar6 + 1;
        pbVar14 = pbVar9 + 4;
        pbVar12 = pbVar11;
        if (0x57e24e < (int)pbVar11) {
          return (undefined1 *)0x0;
        }
      } while( true );
    }
    if (pbVar9[1] != 0x57) {
      return (undefined1 *)0x0;
    }
    if (pbVar9[2] != 0x49) {
      return (undefined1 *)0x0;
    }
    if (pbVar9[3] != 0x4e) {
      return (undefined1 *)0x0;
    }
    if (pbVar9[4] == 0) goto LAB_00424e07;
    if (pbVar9[4] != 0x52) {
      return (undefined1 *)0x0;
    }
    bVar17 = pbVar9[5] == 0;
LAB_00424e01:
    if (bVar17) {
LAB_00424e07:
      _DAT_005cdbb8 = DAT_005be310;
      _DAT_005cdbbc = CONCAT12(DAT_005be316,DAT_005be314);
      return &DAT_005cdbb8;
    }
  }
  return (undefined1 *)0x0;
LAB_004256ab:
  iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
  goto LAB_004256b0;
LAB_0042534e:
  iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
  goto LAB_00425353;
LAB_00424c13:
  iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
  goto LAB_00424c18;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar16 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar16;
    if (cVar1 == '\0') break;
code_r0x004257cd:
    pcVar16 = pcVar13;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  _DAT_005cdbbc = (undefined *)CONCAT22(CONCAT11(DAT_005cdbbc_1._2_1_,DAT_005be35a),DAT_005be358);
  iVar6 = -1;
  pcVar13 = &DAT_005cdbb8;
  do {
    pcVar15 = pcVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar15 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar1 != '\0');
  pcVar13 = pcVar16 + -uVar7;
  pcVar16 = pcVar15 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
  return &DAT_005cdbb8;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar16 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar16;
    if (cVar1 == '\0') break;
code_r0x00425e80:
    pcVar16 = pcVar13;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  iVar6 = -1;
  pcVar13 = &DAT_005cdbb8;
  do {
    pcVar15 = pcVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar15 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar1 != '\0');
  pcVar13 = pcVar16 + -uVar7;
  pcVar16 = pcVar15 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
  return &DAT_005cdbb8;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar16 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar16;
    if (cVar1 == '\0') break;
code_r0x00424b6a:
    pcVar16 = pcVar13;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  _DAT_005cdbc0 = CONCAT22(DAT_005cdbc0_1._1_2_,s_LISTFILE_005be394._8_2_);
  iVar6 = -1;
  pcVar13 = &DAT_005cdbb8;
  do {
    pcVar15 = pcVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar15 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar1 != '\0');
  pcVar13 = pcVar16 + -uVar7;
  pcVar16 = pcVar15 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
  return &DAT_005cdbb8;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar16 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar16;
    if (cVar1 == '\0') break;
code_r0x0042548b:
    pcVar16 = pcVar13;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  _DAT_005cdbbc = CONCAT12(DAT_005be362,DAT_005be360);
  iVar6 = -1;
  pcVar13 = &DAT_005cdbb8;
  do {
    pcVar15 = pcVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar15 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar1 != '\0');
  pcVar13 = pcVar16 + -uVar7;
  pcVar16 = pcVar15 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
  return &DAT_005cdbb8;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar16 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar16;
    if (cVar1 == '\0') break;
code_r0x00425113:
    pcVar16 = pcVar13;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  _DAT_005cdbc0 = CONCAT31(DAT_005cdbc0_1,s_PICTURE_005be364[8]);
  iVar6 = -1;
  pcVar13 = &DAT_005cdbb8;
  do {
    pcVar15 = pcVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar15 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar1 != '\0');
  pcVar13 = pcVar16 + -uVar7;
  pcVar16 = pcVar15 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
  return &DAT_005cdbb8;
}

