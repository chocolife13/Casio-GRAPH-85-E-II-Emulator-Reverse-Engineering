// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00448650
// entry: 00448650  size: 3927


void FUN_00448650(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 extraout_var;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  uint local_2ec;
  int local_2e8;
  int local_2e4;
  undefined4 local_2e0;
  int local_2dc;
  undefined4 local_2d8;
  char local_2d2;
  char local_2d1;
  int local_2d0;
  undefined4 local_2cc;
  char local_2c8 [4];
  char local_2c4 [12];
  uint local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  uint local_2ac;
  undefined2 local_2a6;
  undefined4 local_2a4;
  undefined2 local_2a0;
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
  undefined4 local_298;
  uint local_294;
  undefined4 local_290;
  undefined4 local_28c;
  uint local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined1 local_268;
  undefined4 auStack_267 [4];
  uint local_254;
  undefined4 local_250;
  undefined4 local_24c;
  char cStack_23d;
  undefined4 local_23c [10];
  undefined1 local_214 [8];
  undefined1 local_20c [12];
  undefined4 local_200 [64];
  undefined4 local_100 [64];
  
  iVar10 = 0;
  local_2ec = 0;
  local_2ac = 0;
  local_2d0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2e4 = 0;
  local_2dc = 0;
  local_298 = 0;
  local_29c = 0x45;
  local_29b = 0x71;
  local_29a = 0x3a;
  local_299 = 0;
  local_2a4 = 0x20202020;
  local_2a0 = 0x20;
  local_2a6 = 0x3d;
  FUN_00526440();
  FUN_00526420(8);
  local_270 = FUN_00526410();
  FUN_00526420(0x66);
  FUN_00538a00(local_20c);
  FUN_0053c6f0(2);
  FUN_00538980(0,1,local_214);
  iVar11 = 0;
  do {
    puVar12 = (undefined4 *)((int)&DAT_0057fd18 + iVar11);
    puVar14 = (undefined4 *)((int)&DAT_005ce750 + iVar11);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    FUN_00538860(iVar10,(undefined4 *)((int)&DAT_005ce750 + iVar11));
    iVar11 = iVar11 + 0x30;
    iVar10 = iVar10 + 1;
  } while (iVar11 < 0x60);
  FUN_005387f0(0);
  FUN_004e5780(&local_2b8);
  bVar2 = false;
  local_2d2 = '\x01';
LAB_00448747:
  puVar12 = local_23c;
  for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_200;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_100;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar13 = "EQU_SOLV";
  do {
    pcVar15 = pcVar13;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar13 + 1;
    cVar4 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar4 != '\0');
  uVar7 = ~uVar7;
  pcVar13 = pcVar15 + -uVar7;
  pcVar15 = local_2c8;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar15 = pcVar15 + 1;
  }
  cVar4 = FUN_004acd20(4,local_2c8,1);
  if (cVar4 == '\0') {
    FUN_004ad2a0(4,local_2c8,&local_27c);
    FUN_004ad3f0(0,local_27c,local_100);
    FUN_004b7750(local_200,local_100);
  }
  FUN_00449cb0(local_200,local_23c,&local_2cc);
  FUN_0044a420(local_23c,local_2cc);
  FUN_00449ec0(&local_2d0,&local_2e8,local_23c,local_2cc,local_200,0);
  local_2d1 = '\x01';
  uVar7 = local_2ec;
  iVar10 = local_2e4;
  bVar3 = bVar2;
switchD_00448cbe_default:
  do {
    while( true ) {
      bVar1 = bVar3;
      if (local_2dc == 1) {
        local_2dc = 0;
        iVar11 = iVar10;
      }
      else {
        if (((((!bVar1) && (uVar7 != 0)) && (uVar7 != 0x7538)) &&
            ((uVar7 != 0x7919 && (uVar7 != 0x791f)))) && (uVar7 != 31000)) {
          FUN_00538810();
          FUN_005387f0(0);
        }
        FUN_00538b30();
        iVar11 = FUN_00526620(&local_2ec);
        uVar7 = local_2ec;
        local_2e4 = iVar11;
      }
      iVar10 = iVar11;
      bVar3 = bVar1;
      if (iVar11 == 0) break;
      if ((!bVar1) && (local_2ac == 0)) {
        FUN_005387f0(1);
        uVar7 = local_2ec;
      }
      if (((uVar7 != 0xd) && (uVar7 != 0xe)) &&
         ((local_2e8 == 0 ||
          ((((((uVar7 != 0x20 && (uVar7 != 0x22)) && (uVar7 != 0x2c)) &&
             (((uVar7 != 0x5b && (uVar7 != 0x5d)) &&
              ((uVar7 != 0x3d && ((uVar7 != 0x7b && (uVar7 != 0x7d)))))))) && (uVar7 != 0xc0)) &&
           ((uVar7 != 0x7f40 && (uVar7 != 0x7f51)))))))) {
        if (!bVar1) {
          local_2e0 = 0;
          local_2d8 = 0;
          FUN_00527030();
          bVar1 = true;
          bVar2 = true;
          FUN_005232d0(1,(local_2e8 - local_2d0) + 1);
          if (local_2e8 == 0) {
            FUN_004b6ef0(&local_26c,&local_29c);
            FUN_005233e0(&local_26c);
            uVar7 = local_2ec;
            if (local_2ec != 0x7545) {
              puVar12 = local_200;
              for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar12 = 0;
                puVar12 = puVar12 + 1;
              }
            }
          }
          else {
            puVar12 = local_200;
            for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            cVar4 = *(char *)((int)local_23c + local_2e8 + -1);
            uVar7 = local_2ec;
            if (cVar4 == 'l') {
              uVar8 = 0xffffffff;
              pcVar13 = " Lower=";
              do {
                pcVar15 = pcVar13;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar15 = pcVar13 + 1;
                cVar4 = *pcVar13;
                pcVar13 = pcVar15;
              } while (cVar4 != '\0');
              uVar8 = ~uVar8;
              pcVar13 = pcVar15 + -uVar8;
              pcVar15 = (char *)&local_26c;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar15 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar15 = pcVar15 + 1;
              }
              if (local_2ec == 0x7545) {
                FUN_0044a490(&local_288,&local_294);
                local_2b8 = local_288;
                local_2b4 = local_284;
                uVar7 = local_2ec;
                local_2b0 = local_280;
              }
            }
            else if (cVar4 == 'u') {
              uVar8 = 0xffffffff;
              pcVar13 = " Upper=";
              do {
                pcVar15 = pcVar13;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar15 = pcVar13 + 1;
                cVar4 = *pcVar13;
                pcVar13 = pcVar15;
              } while (cVar4 != '\0');
              uVar8 = ~uVar8;
              pcVar13 = pcVar15 + -uVar8;
              pcVar15 = (char *)&local_26c;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar15 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar15 = pcVar15 + 1;
              }
              if (local_2ec == 0x7545) {
                FUN_0044a490(&local_288,&local_294);
                local_2b8 = local_294;
                local_2b4 = local_290;
                uVar7 = local_2ec;
                local_2b0 = local_28c;
              }
            }
            else {
              FUN_004b79f0(cVar4,&local_278);
              local_26c = local_2a4;
              local_268 = (undefined1)local_2a0;
              auStack_267[0] = local_278;
              iVar10 = FUN_004b6ca0(&local_278);
              *(undefined2 *)((int)auStack_267 + iVar10) = local_2a6;
              uVar7 = local_2ec;
              if (local_2ec == 0x7545) {
                FUN_0052f760(CONCAT31((int3)(CONCAT22(extraout_var,local_2a6) >> 8),
                                      *(undefined1 *)((int)local_23c + local_2e8 + -1)),&local_254);
                local_2b4 = local_250;
                local_2b8 = local_254;
                local_2b0 = local_24c;
                uVar7 = local_2ec;
                if (((byte)local_254 & 0x80) == 0x80) {
                  local_2b8 = local_254 & 0xffffff7f;
                }
              }
            }
          }
        }
        if (local_2e8 == 0) {
          if (uVar7 != 0x7545) {
            local_2d8 = FUN_00525300(local_200,0xff,local_2d8,uVar7);
          }
LAB_00448857:
          iVar10 = local_2e8 - local_2d0;
LAB_00448877:
          local_2e0 = FUN_005252a0(local_200,local_2e0,local_2d8,4,iVar10 + 1);
          uVar7 = local_2ec;
          iVar10 = iVar11;
          bVar3 = bVar1;
        }
        else {
          if (uVar7 == 0x7545) {
            iVar11 = 0;
          }
          FUN_00538b30();
          local_2ac = FUN_00524460(iVar11,local_2ec,(local_2e8 - local_2d0) + 1,&local_2b8,
                                   &local_26c);
          iVar10 = 0;
          bVar1 = true;
          local_2dc = 1;
          local_2e4 = 0;
          bVar2 = true;
          bVar3 = bVar1;
          if (local_2ac == 0xfffffffe) {
            local_2ec = 0x7532;
            uVar7 = 0x7532;
          }
          else if (local_2ac == 0xffffffff) {
            local_2ec = 0x754d;
            uVar7 = 0x754d;
          }
          else {
            uVar7 = local_2ec;
            bVar3 = true;
            if (local_2ac == 0) {
              local_2ec = 0x7534;
              FUN_00538810();
              uVar7 = local_2ec;
              bVar3 = bVar1;
            }
          }
        }
      }
    }
    if (uVar7 < 0x7545) {
      if (uVar7 != 0x7544) {
        if (uVar7 < 0x7532) {
          if (uVar7 == 0x7531) {
            uVar7 = FUN_00526040();
            local_2ec = uVar7;
LAB_00448d79:
            local_2dc = 1;
            local_2e4 = 1;
            iVar10 = 1;
          }
          else {
            switch(uVar7) {
            case 1:
              if (!bVar1) {
                iVar11 = FUN_00449610(local_200);
                if (iVar11 == 0x7532) goto LAB_0044954e;
                if (iVar11 == 0x7534) {
                  local_2e8 = 0;
                  local_2d0 = 0;
                  FUN_00443b00(1,7);
                  local_2dc = 1;
                  local_2ec = 0x7545;
                  local_2e4 = 0;
                  uVar7 = 0x7545;
                  iVar10 = 0;
                }
                else {
                  uVar7 = local_2ec;
                  if (iVar11 == 0x754d) goto LAB_00449564;
                }
              }
              break;
            case 2:
              cVar4 = FUN_004449f0();
              uVar7 = local_2ec;
              if (cVar4 == '\x01') {
                uVar7 = 0xffffffff;
                pcVar13 = "EQU_SOLV";
                goto code_r0x00449478;
              }
              break;
            case 3:
              if ((!bVar1) && (local_2e8 != 0)) {
                local_2dc = 1;
                local_2e4 = 0;
                local_2ec = 0x7534;
                uVar7 = 0x7534;
                iVar10 = 0;
              }
              break;
            case 4:
              FUN_005387a0();
              uVar7 = local_2ec;
            }
          }
          goto switchD_00448cbe_default;
        }
        switch(uVar7) {
        case 0x7532:
          if (bVar1) {
            bVar2 = false;
            FUN_00523740();
            FUN_00538810();
            local_2ac = 0;
          }
          else {
            local_2d2 = '\0';
            FUN_00538810();
            local_2ac = 0;
          }
          goto LAB_0044954e;
        case 0x7534:
          if (!bVar1) {
            cVar4 = *(char *)((int)local_23c + local_2e8 + -1);
            if (((cVar4 != 'l') && (cVar4 != 'u')) && (0 < local_2e8)) {
              FUN_0044a490(&local_288,&local_294);
              iVar11 = FUN_004e72d0(&local_294,&local_288);
              if (iVar11 != 1) {
                cVar4 = FUN_00449830(local_200,*(undefined1 *)((int)local_23c + local_2e8 + -1));
                if (cVar4 != '\0') goto LAB_0044954e;
                goto LAB_00449564;
              }
              FUN_0052b240(3);
              uVar7 = local_2ec;
            }
            break;
          }
          if (local_2e8 == 0) {
            local_2c8[0] = s__EQUA_005be254[0];
            local_2c8[1] = s__EQUA_005be254[1];
            local_2c8[2] = s__EQUA_005be254[2];
            local_2c8[3] = s__EQUA_005be254[3];
            local_2c4[0] = s__EQUA_005be254[4];
            local_2c4[1] = s__EQUA_005be254[5];
            cVar4 = FUN_004aceb0(local_2c8,s_EQSLVLMT_005bec08,1);
            local_2ac = FUN_0044a490(&local_288,&local_294);
            if (local_2ac != 0) {
              FUN_0052b240(local_2ac);
              local_2e0 = 0;
              local_2d8 = 0;
              local_2e0 = FUN_005252a0(local_200,0,0,4,1);
              uVar7 = local_2ec;
              bVar3 = bVar2;
              break;
            }
            local_2ac = FUN_00449cb0(local_200,local_23c,&local_2cc);
            if (local_2ac != 0) {
              FUN_0052b240(local_2ac);
              local_2e0 = 0;
              local_2d8 = 0;
              local_2e0 = FUN_005252a0(local_200,0,0,4,1);
              uVar7 = local_2ec;
              iVar10 = local_2e4;
              bVar3 = bVar2;
              if (cVar4 != '\0') {
                local_2c8[0] = s__EQUA_005be254[0];
                local_2c8[1] = s__EQUA_005be254[1];
                local_2c8[2] = s__EQUA_005be254[2];
                local_2c8[3] = s__EQUA_005be254[3];
                local_2c4[0] = s__EQUA_005be254[4];
                local_2c4[1] = s__EQUA_005be254[5];
                FUN_004ac750(local_2c8,s_EQSLVLMT_005bec08);
                uVar7 = local_2ec;
                iVar10 = iVar11;
              }
              break;
            }
            FUN_004b7750(local_100,local_200);
            uVar7 = 0xffffffff;
            pcVar13 = "EQU_SOLV";
            do {
              pcVar15 = pcVar13;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar15 = pcVar13 + 1;
              cVar5 = *pcVar13;
              pcVar13 = pcVar15;
            } while (cVar5 != '\0');
            uVar7 = ~uVar7;
            pcVar13 = pcVar15 + -uVar7;
            pcVar15 = local_2c8;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar15 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar15 = pcVar15 + 1;
            }
            cVar5 = FUN_004acd20(4,local_2c8,1);
            if (cVar5 == '\0') {
              FUN_004ac5a0(4,local_2c8);
            }
            iVar10 = FUN_004b7550(local_100,local_100);
            local_2ac = FUN_004aba60(4,local_2c8,iVar10 + 1);
            local_2ac = local_2ac & 0xff;
            if (((local_2ac != 0) && (local_2ac != 1)) && (local_2ac != 2)) {
              FUN_0052b240(4);
              local_2e0 = 0;
              local_2d8 = 0;
              local_2e0 = FUN_005252a0(local_200,0,0,4,1);
              uVar7 = local_2ec;
              iVar10 = local_2e4;
              bVar3 = bVar2;
              if (cVar4 != '\0') {
                local_2c8[0] = s__EQUA_005be254[0];
                local_2c8[1] = s__EQUA_005be254[1];
                local_2c8[2] = s__EQUA_005be254[2];
                local_2c8[3] = s__EQUA_005be254[3];
                local_2c4[0] = s__EQUA_005be254[4];
                local_2c4[1] = s__EQUA_005be254[5];
                FUN_004ac750(local_2c8,s_EQSLVLMT_005bec08);
                uVar7 = local_2ec;
                iVar10 = iVar11;
              }
              break;
            }
            local_2c8[0] = s__EQUA_005be254[0];
            local_2c8[1] = s__EQUA_005be254[1];
            local_2c8[2] = s__EQUA_005be254[2];
            local_2c8[3] = s__EQUA_005be254[3];
            local_2c4[0] = s__EQUA_005be254[4];
            local_2c4[1] = s__EQUA_005be254[5];
            FUN_004ac750(local_2c8,s_EQSLVLMT_005bec08);
            FUN_0044a490(&local_288,&local_294);
            FUN_0044a420(local_23c,local_2cc);
            FUN_00538810();
            iVar11 = 0;
            local_2dc = 1;
            local_2ec = 0x7547;
            local_2e4 = 0;
          }
          else {
            cVar4 = *(char *)((int)local_23c + local_2e8 + -1);
            if (cVar4 == 'l') {
              local_288 = local_2b8;
              local_284 = local_2b4;
              local_280 = local_2b0;
              FUN_0044a560(0,&local_288);
LAB_00449120:
              iVar11 = 0;
              local_2ec = 0x7547;
              local_2e4 = 0;
            }
            else {
              if (cVar4 != 'u') {
                local_254 = local_2b8;
                local_250 = local_2b4;
                local_24c = local_2b0;
                FUN_0052f780(cVar4,&local_254);
                goto LAB_00449120;
              }
              local_294 = local_2b8;
              local_290 = local_2b4;
              local_28c = local_2b0;
              FUN_0044a560(1,&local_294);
              local_2d1 = '\0';
            }
            uVar7 = 0xffffffff;
            pcVar13 = "EQU_SOLV";
            do {
              pcVar15 = pcVar13;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar15 = pcVar13 + 1;
              cVar4 = *pcVar13;
              pcVar13 = pcVar15;
            } while (cVar4 != '\0');
            uVar7 = ~uVar7;
            pcVar13 = pcVar15 + -uVar7;
            pcVar15 = local_2c8;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar15 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar15 = pcVar15 + 1;
            }
            cVar4 = FUN_004acd20(4,local_2c8,1);
            if (cVar4 == '\0') {
              FUN_004ad2a0(4,local_2c8,&local_27c);
              FUN_004ad3f0(0,local_27c,local_100);
              FUN_004b7750(local_200,local_100);
            }
            FUN_00449ec0(&local_2d0,&local_2e8,local_23c,local_2cc,local_200,local_2ec);
          }
          bVar2 = false;
          FUN_00523740();
          if (local_2d1 != '\x01') goto LAB_0044954e;
          uVar7 = local_2ec;
          iVar10 = iVar11;
          bVar3 = false;
          break;
        case 0x753f:
          goto switchD_00448d9f_caseD_753f;
        case 0x7542:
switchD_00448d9f_caseD_7542:
          if (!bVar1) {
            FUN_00449ec0(&local_2d0,&local_2e8,local_23c,local_2cc,local_200,uVar7);
            uVar7 = local_2ec;
          }
        }
        goto switchD_00448cbe_default;
      }
switchD_00448d9f_caseD_753f:
      if (bVar1) {
        iVar11 = FUN_005249f0(local_200,0xff,&local_2e0,&local_2d8,&local_2ec,4,local_2e8 + 1);
        uVar7 = local_2ec;
        if (iVar11 == -4) {
          local_2dc = 1;
          local_2e4 = 0;
          iVar10 = 0;
        }
        else {
          iVar10 = local_2e4;
          bVar3 = bVar2;
          if (iVar11 == -3) {
            local_2e4 = 1;
            local_2dc = 1;
            iVar10 = 1;
            bVar3 = bVar1;
          }
        }
      }
      goto switchD_00448cbe_default;
    }
    if (uVar7 < 0x7555) {
      if (uVar7 == 0x7554) goto switchD_00448d9f_caseD_753f;
      switch(uVar7) {
      case 0x7545:
        if (!bVar1) goto LAB_00448d79;
        iVar11 = FUN_005249f0(local_200,0xff,&local_2e0,&local_2d8,&local_2ec,4,local_2e8 + 1);
        uVar7 = local_2ec;
        if (iVar11 == -4) {
          local_2dc = 1;
          local_2e4 = 0;
          iVar10 = 0;
        }
        else {
          iVar10 = local_2e4;
          bVar3 = bVar2;
          if (iVar11 == -3) {
            local_2dc = 1;
            local_2e4 = 1;
            iVar10 = 1;
            bVar3 = bVar1;
          }
        }
      default:
        goto switchD_00448cbe_default;
      case 0x7547:
        goto switchD_00448d9f_caseD_7542;
      case 0x7549:
        goto switchD_00448d9f_caseD_753f;
      case 0x754d:
        FUN_00538810();
        FUN_00523740();
        goto LAB_00449564;
      }
    }
    if (0x7919 < uVar7) {
      if (uVar7 == 0x791f) {
LAB_00449375:
        if (bVar1) {
          if (uVar7 == 31000) {
            local_298 = 3;
          }
          else if (uVar7 == 0x7919) {
            local_298 = 1;
          }
          else if (uVar7 == 0x791f) {
            local_298 = 2;
          }
          iVar6 = FUN_0052a950(local_298,local_200,&local_2d8,0xff);
          if (iVar6 == -5) {
            iVar10 = local_2e8 - local_2d0;
            goto LAB_00448877;
          }
          uVar7 = local_2ec;
          iVar10 = local_2e4;
          bVar3 = bVar2;
          if ((-3 < iVar6) && (iVar6 < 1)) goto LAB_00448857;
        }
        else if ((uVar7 == 31000) &&
                (iVar11 = FUN_0052aae0(), uVar7 = local_2ec, iVar10 = local_2e4, bVar3 = bVar2,
                iVar11 == -5)) {
          local_2dc = 1;
          local_2e4 = 1;
          local_2ec = 0xf91b;
          uVar7 = 0xf91b;
          iVar10 = 1;
          bVar3 = bVar1;
        }
      }
      goto switchD_00448cbe_default;
    }
    if (30999 < uVar7) goto LAB_00449375;
    if (uVar7 != 0x7555) {
      if ((0x7559 < uVar7) && (uVar7 < 0x755c)) goto switchD_00448d9f_caseD_753f;
      goto switchD_00448cbe_default;
    }
  } while (bVar1);
  local_2c8[0] = s__EQUA_005be254[0];
  local_2c8[1] = s__EQUA_005be254[1];
  local_2c8[2] = s__EQUA_005be254[2];
  local_2c8[3] = s__EQUA_005be254[3];
  local_2c4[0] = s__EQUA_005be254[4];
  local_2c4[1] = s__EQUA_005be254[5];
  FUN_0052d2d0(local_2c8,&local_274);
  if (local_274 == 1) {
    FUN_00449ec0(&local_2d0,&local_2e8,local_23c,local_2cc,local_200,0);
  }
  goto LAB_0044954e;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar13 + 1;
    cVar4 = *pcVar13;
    pcVar13 = pcVar15;
    if (cVar4 == '\0') break;
code_r0x00449478:
    pcVar15 = pcVar13;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  pcVar13 = pcVar15 + -uVar7;
  pcVar15 = local_2c8;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_004ac5a0(4,local_2c8);
  local_2c8[0] = s__EQUA_005be254[0];
  local_2c8[1] = s__EQUA_005be254[1];
  local_2c8[2] = s__EQUA_005be254[2];
  local_2c8[3] = s__EQUA_005be254[3];
  local_2c4[0] = s__EQUA_005be254[4];
  local_2c4[1] = s__EQUA_005be254[5];
  FUN_004ac750(local_2c8,s_EQSLVLMT_005bec08);
  local_2e8 = 0;
  local_2d0 = 0;
LAB_0044954e:
  if (local_2d2 != '\x01') {
LAB_00449564:
    FUN_00538810();
    FUN_00538a50(local_20c);
    FUN_005389c0(0,1,local_214);
    FUN_00526440();
    FUN_00526420(local_270);
    return;
  }
  goto LAB_00448747;
}

