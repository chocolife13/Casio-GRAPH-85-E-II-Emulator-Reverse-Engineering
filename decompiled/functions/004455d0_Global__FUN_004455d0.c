// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004455d0
// entry: 004455d0  size: 3368


undefined4 **** FUN_004455d0(short *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 ****ppppuVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 ****ppppuVar16;
  undefined4 ***pppuVar17;
  undefined4 ***apppuStack_234 [6];
  undefined4 ***local_208;
  uint local_204;
  undefined4 ***local_200;
  undefined4 ***local_1fc;
  undefined4 ***local_1f8;
  undefined4 ***local_1f4;
  uint local_1f0;
  int local_1ec;
  char local_1e6;
  char local_1e5;
  undefined4 ***local_1e4;
  int local_1e0;
  int local_1dc;
  undefined4 ***local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  undefined4 **local_1cc;
  uint local_1c8;
  undefined4 ***local_1c4;
  undefined4 **local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  char local_1b4 [4];
  char local_1b0 [12];
  undefined4 **local_1a4 [2];
  undefined4 local_19c [6];
  undefined4 **local_184 [6];
  undefined1 local_16c [11];
  undefined1 local_161;
  undefined4 **local_160 [64];
  undefined4 **local_60 [24];
  
  iVar8 = 0;
  local_1ec = 0;
  local_1e0 = 0;
  local_204 = 0;
  local_1f8 = (undefined4 ****)0x0;
  local_1e4 = (undefined4 ****)0x0;
  local_1d8 = (undefined4 ****)0x0;
  local_200 = (undefined4 ****)0x0;
  local_1d4 = 0;
  local_1dc = 0;
  local_208 = (undefined4 ****)0x0;
  local_1fc = (undefined4 ****)0x0;
  local_1e5 = '\x01';
  bVar2 = false;
  bVar3 = false;
  local_1c4 = (undefined4 ****)0x0;
  apppuStack_234[5] = (undefined4 ***)0x44561e;
  local_1b8 = FUN_00526410();
  apppuStack_234[5] = (undefined4 ***)0x64;
  apppuStack_234[4] = (undefined4 ***)0x445629;
  FUN_00526420();
  apppuStack_234[4] = (undefined4 ***)local_16c;
  apppuStack_234[3] = (undefined4 ***)0x445636;
  FUN_00538a00();
  apppuStack_234[3] = (undefined4 ***)0x1;
  apppuStack_234[2] = (undefined4 ***)0x44563d;
  FUN_0053c6f0();
  apppuStack_234[2] = (undefined4 ****)0x2;
  apppuStack_234[1] = (undefined4 ***)0x445644;
  FUN_0053edf0();
  apppuStack_234[1] = local_1a4;
  apppuStack_234[0] = (undefined4 ***)0x1;
  FUN_00538980(0);
  iVar9 = 0;
  do {
    apppuStack_234[5] = (undefined4 ***)((int)&DAT_005ce600 + iVar9);
    puVar12 = (undefined4 *)((int)&DAT_0057fb28 + iVar9);
    puVar13 = apppuStack_234[5];
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    apppuStack_234[3] = (undefined4 ***)0x445675;
    apppuStack_234[4] = (undefined4 ***)iVar8;
    FUN_00538860();
    iVar9 = iVar9 + 0x30;
    iVar8 = iVar8 + 1;
  } while (iVar9 < 0x60);
  apppuStack_234[5] = (undefined4 ***)0x0;
  apppuStack_234[4] = (undefined4 ***)0x445688;
  FUN_005387f0();
LAB_0044568b:
  local_1cc = local_60;
  apppuStack_234[5] = (undefined4 ***)0x7;
  apppuStack_234[4] = (undefined4 ***)0x1;
  local_1f0 = local_1f0 & 0xffffff00;
  apppuStack_234[3] = (undefined4 ***)0x4456a4;
  FUN_00443b00();
  uVar14 = (uint)*param_1;
  if (3 < *param_1) {
    uVar14 = 3;
  }
  apppuStack_234[5] = &local_1f4;
  apppuStack_234[4] = (undefined4 ***)&local_1d0;
  apppuStack_234[3] = (undefined4 ***)0x1f;
  local_1d8 = (undefined4 ****)0x0;
  apppuStack_234[2] = (undefined4 ***)0x4456dc;
  local_1c8 = uVar14;
  iVar8 = FUN_00528a20();
  if (iVar8 < 0x10) {
    bVar3 = true;
  }
  apppuStack_234[5] = &local_1f4;
  apppuStack_234[4] = (undefined4 ***)&local_1d0;
  apppuStack_234[3] = (undefined4 ***)0x1e;
  apppuStack_234[2] = (undefined4 ***)0x4456fa;
  FUN_00528a20();
  apppuStack_234[2] = (undefined4 ***)(int)*param_1;
  apppuStack_234[1] = (undefined4 ***)0x1e;
  apppuStack_234[0] = (undefined4 ***)0x445705;
  FUN_00443be0();
  apppuStack_234[0] = (undefined4 ***)0x7;
  FUN_00443b00(2);
  pppuVar17 = local_1e4;
  FUN_00443b60(0x1e,&local_1cc,local_1f8,local_1e4,local_1d0,local_1f4);
  FUN_00444310(&local_1cc,0x1e,local_1d0,&local_1f8,pppuVar17,&local_1e0,local_204,&local_1d8,uVar14
               ,0,0,0,local_1f4,0,local_184,0);
  apppuStack_234[1] = (undefined4 ***)(int)*param_1;
  apppuStack_234[4] = local_1d8;
  apppuStack_234[3] = pppuVar17;
  apppuStack_234[2] = local_1f8;
  apppuStack_234[0] = (undefined4 ***)0x1e;
  apppuStack_234[5] = (undefined4 ***)uVar14;
  FUN_00443f90();
  FUN_00444b00(local_1f4,0);
  FUN_004468e0(local_1f4,local_1f8,pppuVar17);
  local_1e6 = '\x01';
  bVar1 = bVar2;
  ppppuVar10 = (undefined4 ****)local_1e4;
switchD_00445ad5_caseD_7533:
  do {
switchD_0044594b_default:
    while( true ) {
      apppuStack_234[5] = (undefined4 ***)0x4457d1;
      FUN_00538b30();
      if (local_1dc == 1) {
        local_1dc = 0;
      }
      else {
        if (((((!bVar1) && ((undefined4 ****)local_200 != (undefined4 ****)0x0)) &&
             ((undefined4 ****)local_200 != (undefined4 ****)0x7540)) &&
            (((undefined4 ****)local_200 != (undefined4 ****)0x7538 &&
             ((undefined4 ****)local_200 != (undefined4 ****)0x7919)))) &&
           (((undefined4 ****)local_200 != (undefined4 ****)0x791f &&
            ((undefined4 ****)local_200 != (undefined4 ****)0x7918)))) {
          apppuStack_234[5] = (undefined4 ***)0x445815;
          FUN_00538810();
          apppuStack_234[5] = (undefined4 ***)0x0;
          apppuStack_234[4] = (undefined4 ****)0x44581b;
          FUN_005387f0();
        }
        apppuStack_234[5] = (undefined4 ***)0x445827;
        FUN_00538b30();
        apppuStack_234[5] = &local_200;
        apppuStack_234[4] = (undefined4 ****)0x445831;
        local_1d4 = FUN_00526620();
      }
      if (local_1d4 == 0) break;
      if (!bVar1) {
        apppuStack_234[5] = (undefined4 ***)0x44584b;
        FUN_00538810();
        apppuStack_234[5] = (undefined4 ***)0x1;
        apppuStack_234[4] = (undefined4 ****)0x445851;
        FUN_005387f0();
      }
      if (((undefined4 ****)local_200 != (undefined4 ****)0xd) &&
         ((undefined4 ****)local_200 != (undefined4 ****)0xe)) {
        if (!bVar1) {
          local_1fc = (undefined4 ****)0x0;
          pppuVar17 = local_160;
          for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
            *pppuVar17 = (undefined4 **)0x0;
            pppuVar17 = pppuVar17 + 1;
          }
          local_208 = (undefined4 ****)0x0;
          apppuStack_234[5] = (undefined4 ***)0x44588b;
          FUN_00527030();
          bVar1 = true;
          apppuStack_234[5] = (undefined4 ***)0x6;
          apppuStack_234[4] = (undefined4 ***)0x1;
          bVar2 = true;
          apppuStack_234[3] = (undefined4 ***)0x44589a;
          FUN_005232d0();
          uVar14 = 0xffffffff;
          pcVar11 = "";
          do {
            pcVar15 = pcVar11;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar15 = pcVar11 + 1;
            cVar4 = *pcVar11;
            pcVar11 = pcVar15;
          } while (cVar4 != '\0');
          uVar14 = ~uVar14;
          apppuStack_234[3] = (undefined4 ***)0x15;
          pcVar11 = pcVar15 + -uVar14;
          pcVar15 = local_1b4;
          for (uVar7 = uVar14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar15 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar15 = pcVar15 + 1;
          }
          apppuStack_234[2] = (undefined4 ***)local_1b4;
          apppuStack_234[1] = (undefined4 ***)0x4458cc;
          FUN_00523470();
        }
        apppuStack_234[5] = local_200;
        apppuStack_234[4] = local_208;
        apppuStack_234[2] = local_160;
        apppuStack_234[3] = (undefined4 ****)0xff;
        apppuStack_234[1] = (undefined4 ***)0x4458f0;
        local_208 = (undefined4 ***)FUN_00525300();
        apppuStack_234[1] = (undefined4 ****)0x7;
        apppuStack_234[0] = (undefined4 ***)0x1;
        local_1fc = (undefined4 ***)FUN_005252a0(local_160,local_1fc,local_208);
      }
    }
    if ((undefined4 ****)0x7545 < local_200) {
      if (local_200 < (undefined4 ****)0x755c) {
        if ((undefined4 ****)0x7559 < local_200) goto LAB_00445db5;
        break;
      }
      if (local_200 < (undefined4 ****)0x7920) {
        if ((undefined4 ****)local_200 != (undefined4 ****)0x791f) {
          if ((undefined4 ****)local_200 == (undefined4 ****)0x755e) goto LAB_00445db5;
          if ((local_200 < (undefined4 ****)0x7918) || ((undefined4 ****)0x7919 < local_200))
          goto switchD_0044594b_default;
        }
        if (bVar1) {
          if ((undefined4 ****)local_200 == (undefined4 ****)0x7918) {
            local_1c4 = (undefined4 ****)0x3;
          }
          else if ((undefined4 ****)local_200 == (undefined4 ****)0x7919) {
            local_1c4 = (undefined4 ****)0x1;
          }
          else if ((undefined4 ****)local_200 == (undefined4 ****)0x791f) {
            local_1c4 = (undefined4 ****)0x2;
          }
          apppuStack_234[4] = &local_208;
          apppuStack_234[5] = (undefined4 ***)0xff;
          apppuStack_234[3] = local_160;
          apppuStack_234[2] = local_1c4;
          apppuStack_234[1] = (undefined4 ****)0x4460a1;
          iVar8 = FUN_0052a950();
          if ((iVar8 == -5) || ((-3 < iVar8 && (iVar8 < 1)))) {
            apppuStack_234[5] = (undefined4 ***)0x7;
            apppuStack_234[4] = (undefined4 ****)0x1;
            apppuStack_234[3] = local_208;
            apppuStack_234[1] = local_160;
            apppuStack_234[2] = local_1fc;
            apppuStack_234[0] = (undefined4 ***)0x4460cc;
            local_1fc = (undefined4 ***)FUN_005252a0();
          }
          local_1f0 = local_1f0 & 0xffffff00;
        }
        else if ((undefined4 ****)local_200 == (undefined4 ****)0x7918) {
          apppuStack_234[5] = (undefined4 ***)0x44603c;
          iVar8 = FUN_0052aae0();
          if (iVar8 == -5) {
            local_1dc = 1;
            local_1d4 = 1;
            local_200 = (undefined4 ****)0xf91b;
            local_1f0 = local_1f0 & 0xffffff00;
          }
        }
        goto switchD_0044594b_default;
      }
      if ((((undefined4 ****)0x7949 < local_200) && (local_200 < (undefined4 ****)0x794d)) &&
         (!bVar1)) {
        apppuStack_234[4] = local_184;
        apppuStack_234[5] = (undefined4 ***)local_1f0;
        apppuStack_234[3] = (undefined4 ****)0x0;
        apppuStack_234[2] = local_1f4;
        apppuStack_234[1] = local_200;
        apppuStack_234[0] = (undefined4 ***)0x0;
        FUN_00444310(&local_1cc,0x1e,local_1d0,&local_1f8,ppppuVar10,&local_1e0,local_204,&local_1d8
                     ,local_1c8,0);
        local_1f0 = CONCAT31(local_1f0._1_3_,1);
      }
      goto switchD_0044594b_default;
    }
    if ((undefined4 ****)0x7543 < local_200) goto LAB_00445db5;
    if ((undefined4 ****)0x7531 < local_200) {
      switch(local_200) {
      case (undefined4 ***)0x7532:
        if (!bVar1) goto LAB_00446294;
        apppuStack_234[5] = (undefined4 ***)0x445aea;
        FUN_00523740();
        apppuStack_234[5] = (undefined4 ***)0x0;
        apppuStack_234[4] = local_1d8;
        apppuStack_234[3] = (undefined4 ***)(int)*param_1;
        apppuStack_234[2] = (undefined4 ****)0x1e;
        bVar2 = false;
        apppuStack_234[1] = local_60 + (local_204 + local_1e0 * 4) * 6;
        apppuStack_234[0] = (undefined4 ***)0x445b1f;
        FUN_00444600();
        bVar1 = false;
      case (undefined4 ***)0x7533:
      case (undefined4 ***)0x7535:
      case (undefined4 ***)0x7536:
      case (undefined4 ***)0x7537:
      case (undefined4 ***)0x7538:
      case (undefined4 ***)0x7539:
      case (undefined4 ***)0x753a:
      case (undefined4 ***)0x753b:
      case (undefined4 ***)0x753c:
      case (undefined4 ***)0x753d:
      case (undefined4 ***)0x753e:
      case (undefined4 ***)0x7540:
      case (undefined4 ***)0x7541:
        goto switchD_00445ad5_caseD_7533;
      case (undefined4 ***)0x7534:
        goto switchD_00445ad5_caseD_7534;
      case (undefined4 ***)0x753f:
      case (undefined4 ***)0x7542:
        goto switchD_00445ad5_caseD_753f;
      default:
        goto switchD_0044594b_default;
      }
    }
    if ((undefined4 ****)local_200 == (undefined4 ****)0x7531) {
      apppuStack_234[5] = (undefined4 ***)0x445aad;
      local_200 = (undefined4 ***)FUN_00526040();
      local_1dc = 1;
      local_1d4 = 1;
      goto switchD_0044594b_default;
    }
    switch(local_200) {
    case (undefined4 ***)0x1:
      if (bVar1) {
        apppuStack_234[5] = (undefined4 ***)0x3;
        apppuStack_234[4] = (undefined4 ***)0x446177;
        FUN_0052b240();
        apppuStack_234[5] = (undefined4 ***)0x44617f;
        FUN_00523740();
        bVar2 = false;
        goto LAB_0044568b;
      }
      local_1dc = 1;
      local_1d4 = 0;
      local_200 = (undefined4 ****)0x7534;
      goto switchD_0044594b_default;
    case (undefined4 ***)0x2:
      apppuStack_234[5] = (undefined4 ***)0x445957;
      cVar4 = FUN_004448b0();
      if (cVar4 == '\x01') {
        apppuStack_234[5] = (undefined4 ***)0x1e;
        apppuStack_234[4] = (undefined4 ***)0x4462db;
        FUN_00529950();
        apppuStack_234[4] = (undefined4 ****)0x1f;
        apppuStack_234[3] = (undefined4 ***)0x4462e2;
        FUN_00529950();
        apppuStack_234[3] = (undefined4 ****)0x22;
        apppuStack_234[2] = (undefined4 ****)0x4462e9;
        FUN_00529950();
        *param_1 = 0;
        goto LAB_00446294;
      }
      goto switchD_0044594b_default;
    case (undefined4 ***)0x3:
      apppuStack_234[5] = (undefined4 ***)0x1e;
      apppuStack_234[4] = (undefined4 ***)0x44596b;
      FUN_00529950();
      apppuStack_234[4] = (undefined4 ****)0x1f;
      apppuStack_234[3] = (undefined4 ***)0x445972;
      FUN_00529950();
      apppuStack_234[3] = (undefined4 ****)0x22;
      apppuStack_234[2] = (undefined4 ***)0x445979;
      FUN_00529950();
      apppuStack_234[2] = (undefined4 ***)(*param_1 + 1);
      apppuStack_234[1] = (undefined4 ****)0x1;
      apppuStack_234[0] = (undefined4 ***)0x1e;
      uVar5 = FUN_00529400();
      cVar4 = FUN_00444e60(uVar5);
      if (cVar4 != '\0') {
        local_1ec = 0;
        local_204 = 0;
        local_1e0 = 0;
        local_1e4 = (undefined4 ****)0x0;
        local_1f8 = (undefined4 ****)0x0;
        apppuStack_234[5] = (undefined4 ***)0x446166;
        FUN_00523740();
        bVar2 = false;
        goto LAB_0044568b;
      }
      goto switchD_0044594b_default;
    case (undefined4 ***)0x4:
      if (bVar1) goto switchD_0044594b_default;
      apppuStack_234[5] = (undefined4 ***)(int)(short)local_1f4;
      pppuVar17 = local_160;
      for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pppuVar17 = (undefined4 **)0x0;
        pppuVar17 = pppuVar17 + 1;
      }
      apppuStack_234[4] = (undefined4 ***)(int)(short)local_1d0;
      apppuStack_234[1] = &local_1cc;
      apppuStack_234[2] = local_1f8;
      apppuStack_234[0] = (undefined4 ***)0x1e;
      apppuStack_234[3] = ppppuVar10;
      FUN_00443b60();
      FUN_004e5470(local_60 + (local_204 + local_1e0 * 4) * 6,local_160);
      FUN_005232d0(1,6);
      uVar14 = 0xffffffff;
      pcVar11 = "";
      break;
    default:
      goto switchD_0044594b_default;
    }
    do {
      pcVar15 = pcVar11;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar15 = pcVar11 + 1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar15;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    pcVar11 = pcVar15 + -uVar14;
    pcVar15 = local_1b4;
    for (uVar7 = uVar14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar15 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar15 = pcVar15 + 1;
    }
    FUN_00523470(local_1b4,0x15);
    local_1fc = (undefined4 ***)0x0;
    local_208 = (undefined4 ****)0x0;
    local_1fc = (undefined4 ***)FUN_005252a0(local_160,0,0,1,7);
    apppuStack_234[5] = (undefined4 ***)0x445a67;
    FUN_00527030();
    if (!bVar1) {
      apppuStack_234[5] = (undefined4 ***)0x445a70;
      FUN_00538810();
      apppuStack_234[5] = (undefined4 ***)0x1;
      apppuStack_234[4] = (undefined4 ****)0x445a77;
      FUN_005387f0();
    }
    local_1f0 = local_1f0 & 0xffffff00;
    bVar2 = true;
    bVar1 = true;
  } while( true );
  switch(local_200) {
  case (undefined4 ***)0x7547:
  case (undefined4 ***)0x7549:
  case (undefined4 ***)0x754a:
  case (undefined4 ***)0x7554:
  case (undefined4 ***)0x7555:
switchD_00445ad5_caseD_753f:
LAB_00445db5:
    if (!bVar1) {
      if ((undefined4 ****)local_200 == (undefined4 ****)0x7544) {
        local_1f0 = (uint)local_1f0._1_3_ << 8;
        local_1ec = local_1ec + -1;
        if (local_1ec < 0) {
          local_1ec = (int)*param_1;
        }
        local_204 = local_204 - 1;
        if ((int)local_204 < 0) {
          local_204 = (local_1ec != *param_1) - 1 & local_1c8;
          local_1e4 = (undefined4 ***)((int)ppppuVar10 + -1);
          ppppuVar10 = (undefined4 ****)local_1e4;
          if ((int)local_1e4 < 0) {
            local_1e4 = (undefined4 ***)(local_1ec - local_1c8);
            ppppuVar10 = (undefined4 ****)local_1e4;
          }
        }
      }
      else if ((undefined4 ****)local_200 == (undefined4 ****)0x7545) {
        local_1ec = local_1ec + 1;
        local_1f0 = (uint)local_1f0._1_3_ << 8;
        if (*param_1 < local_1ec) {
          local_1ec = 0;
        }
        local_204 = local_204 + 1;
        if ((int)local_1c8 < (int)local_204) {
          local_204 = local_1c8;
          if (local_1ec == 0) {
            local_204 = 0;
          }
          local_1e4 = (undefined4 ***)(local_1ec - local_1c8);
          ppppuVar10 = (undefined4 ****)local_1e4;
          if ((int)local_1e4 < 0) {
            local_1e4 = (undefined4 ****)0x0;
            ppppuVar10 = (undefined4 ****)0x0;
          }
        }
      }
      else if (((undefined4 ****)local_200 != (undefined4 ****)0x755e) &&
              ((undefined4 ****)local_200 != (undefined4 ****)0x754a)) {
        if ((undefined4 ****)local_200 != (undefined4 ****)0x7555) goto switchD_0044594b_default;
        local_1b4[0] = s__EQUA_005be254[0];
        local_1b4[1] = s__EQUA_005be254[1];
        local_1b4[2] = s__EQUA_005be254[2];
        local_1b4[3] = s__EQUA_005be254[3];
        apppuStack_234[5] = (undefined4 ***)&local_1bc;
        apppuStack_234[4] = (undefined4 ***)local_1b4;
        local_1b0[0] = s__EQUA_005be254[4];
        local_1b0[1] = s__EQUA_005be254[5];
        apppuStack_234[3] = (undefined4 ***)0x445f1a;
        FUN_0052d2d0();
        local_1e6 = '\0';
        apppuStack_234[3] = (undefined4 ***)(int)*param_1;
        apppuStack_234[2] = (undefined4 ****)0x20;
        apppuStack_234[1] = (undefined4 ****)0x445f31;
        FUN_00443be0();
        if (local_1bc == 1) {
          apppuStack_234[5] = (undefined4 ***)0x1f;
          apppuStack_234[4] = (undefined4 ***)0x445f43;
          FUN_00529950();
        }
        apppuStack_234[5] = (undefined4 ***)0x22;
        apppuStack_234[4] = (undefined4 ***)0x445f4d;
        FUN_00529950();
        ppppuVar10 = (undefined4 ****)local_1e4;
        if (local_1bc != 1) goto LAB_0044568b;
      }
      apppuStack_234[5] = local_1f4;
      apppuStack_234[4] = (undefined4 ***)local_1d0;
      apppuStack_234[1] = &local_1cc;
      apppuStack_234[2] = local_1f8;
      apppuStack_234[0] = (undefined4 ***)0x1e;
      apppuStack_234[3] = ppppuVar10;
      FUN_00443b60();
      uVar14 = local_1c8;
      FUN_00444310(&local_1cc,0x1e,local_1d0,&local_1f8,ppppuVar10,&local_1e0,local_204,&local_1d8,
                   local_1c8,0,0,local_200,local_1f4,0,local_184,local_1f0);
      apppuStack_234[5] = (undefined4 ***)uVar14;
      apppuStack_234[4] = local_1d8;
      apppuStack_234[1] = (undefined4 ***)(int)*param_1;
      apppuStack_234[2] = local_1f8;
      apppuStack_234[0] = (undefined4 ***)0x1e;
      apppuStack_234[3] = ppppuVar10;
      FUN_00443f90();
      FUN_004468e0(local_1f4,local_1f8,ppppuVar10);
      if (((undefined4 ****)local_200 == (undefined4 ****)0x755e) ||
         ((undefined4 ****)local_200 == (undefined4 ****)0x754a)) {
        local_1f0 = CONCAT31(local_1f0._1_3_,1);
      }
      bVar1 = bVar2;
      ppppuVar10 = (undefined4 ****)local_1e4;
      if (local_1e6 != '\x01') goto LAB_0044568b;
      goto switchD_00445ad5_caseD_7533;
    }
    apppuStack_234[5] = (undefined4 ***)0x7;
    apppuStack_234[3] = &local_200;
    apppuStack_234[4] = (undefined4 ****)0x1;
    apppuStack_234[2] = &local_208;
    apppuStack_234[1] = &local_1fc;
    apppuStack_234[0] = (undefined4 ***)0xff;
    local_1f0 = local_1f0 & 0xffffff00;
    iVar8 = FUN_005249f0(local_160);
    if (iVar8 == -4) {
      local_1d4 = 0;
      local_1dc = 1;
    }
    else if (iVar8 == -3) {
      local_1d4 = 1;
      local_1dc = 1;
    }
    goto switchD_0044594b_default;
  case (undefined4 ***)0x7548:
  case (undefined4 ***)0x754b:
  case (undefined4 ***)0x754c:
  case (undefined4 ***)0x754e:
  case (undefined4 ***)0x754f:
  case (undefined4 ***)0x7550:
  case (undefined4 ***)0x7551:
  case (undefined4 ***)0x7552:
  case (undefined4 ***)0x7553:
    goto switchD_00445ad5_caseD_7533;
  case (undefined4 ***)0x754d:
    apppuStack_234[5] = (undefined4 ***)0x44628f;
    FUN_00523740();
    break;
  default:
    goto switchD_0044594b_default;
  }
  goto LAB_00446294;
switchD_00445ad5_caseD_7534:
  if (!bVar1) {
    apppuStack_234[5] = (undefined4 ***)(int)*param_1;
    apppuStack_234[4] = (undefined4 ****)0x445b3c;
    local_200 = (undefined4 ***)FUN_00446350();
    if ((undefined4 ****)local_200 == (undefined4 ****)0x754d) {
      local_200 = (undefined4 ****)0x754d;
      local_1e5 = '\0';
    }
    else if ((undefined4 ****)local_200 == (undefined4 ****)0xffff)
    goto switchD_00445ad5_caseD_7533;
    bVar3 = true;
    local_1ec = 0;
    local_204 = 0;
    local_1e0 = 0;
    local_1e4 = (undefined4 ****)0x0;
    local_1f8 = (undefined4 ****)0x0;
    local_1dc = 0;
    if (local_1e5 == '\x01') goto LAB_0044568b;
LAB_00446294:
    apppuStack_234[5] = (undefined4 ***)0x446299;
    FUN_00538810();
    apppuStack_234[5] = (undefined4 ***)local_16c;
    apppuStack_234[4] = (undefined4 ***)0x4462a6;
    FUN_00538a50();
    apppuStack_234[4] = local_1a4;
    apppuStack_234[3] = (undefined4 ***)0x1;
    apppuStack_234[2] = (undefined4 ***)0x0;
    apppuStack_234[1] = (undefined4 ***)0x4462b3;
    FUN_005389c0();
    apppuStack_234[1] = (undefined4 ***)0x4462b8;
    FUN_00526440();
    apppuStack_234[1] = (undefined4 ***)local_1b8;
    apppuStack_234[0] = (undefined4 ***)0x4462c2;
    FUN_00526420();
    return (undefined4 ****)local_200;
  }
  apppuStack_234[5] = local_160;
  apppuStack_234[4] = (undefined4 ****)0x445b6b;
  iVar8 = FUN_004b7550();
  if (iVar8 == 0) {
    if (local_1ec == *param_1) {
      apppuStack_234[4] = local_184;
      apppuStack_234[5] = (undefined4 ***)local_1f0;
      apppuStack_234[3] = (undefined4 ****)0x0;
      apppuStack_234[2] = local_1f4;
      apppuStack_234[1] = (undefined4 ****)0x0;
      apppuStack_234[0] = (undefined4 ***)0x0;
      FUN_00444310(&local_1cc,0x1e,local_1d0,&local_1f8,ppppuVar10,&local_1e0,local_204,&local_1d8,
                   local_1c8,0);
      apppuStack_234[5] = (undefined4 ***)0x445bdd;
      FUN_00523740();
      bVar1 = false;
      bVar2 = false;
    }
    else {
      local_1d4 = 0;
      local_1dc = 1;
      local_200 = (undefined4 ****)0x7545;
      apppuStack_234[5] = (undefined4 ***)0x445c06;
      FUN_00523740();
      bVar1 = false;
      bVar2 = false;
    }
    goto switchD_0044594b_default;
  }
  apppuStack_234[5] = (undefined4 ***)local_19c;
  apppuStack_234[3] = &local_1c0;
  local_1c0 = local_160;
  apppuStack_234[4] = (undefined4 ***)0x2;
  apppuStack_234[2] = (undefined4 ****)0x445c30;
  iVar8 = FUN_004f64a0();
  if (iVar8 != 1) {
    puVar12 = local_19c;
    ppppuVar16 = apppuStack_234;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppppuVar16 = (undefined4 ***)*puVar12;
      puVar12 = puVar12 + 1;
      ppppuVar16 = ppppuVar16 + 1;
    }
    FUN_00444e80();
    local_208 = (undefined4 ***)((int)local_1c0 + (-1 - (int)local_160));
    if ((undefined4 ****)local_208 != (undefined4 ****)0x0) {
      apppuStack_234[5] = (undefined4 ***)((int)local_160 + (int)local_208);
      apppuStack_234[4] = (undefined4 ***)0x445d1e;
      iVar8 = FUN_004b73a0();
      if (iVar8 != 0) {
        local_208 = (undefined4 ***)((int)local_208 + -1);
      }
    }
    apppuStack_234[5] = (undefined4 ***)0x7;
    apppuStack_234[4] = (undefined4 ****)0x1;
    apppuStack_234[1] = local_160;
    apppuStack_234[2] = local_1fc;
    apppuStack_234[0] = (undefined4 ***)0x445d45;
    apppuStack_234[3] = local_208;
    local_1fc = (undefined4 ***)FUN_005252a0();
    goto switchD_00445ad5_caseD_7533;
  }
  apppuStack_234[5] = (undefined4 ***)local_19c;
  apppuStack_234[4] = (undefined4 ***)0x445c4d;
  iVar8 = FUN_004e4000();
  if (iVar8 == 1) {
    apppuStack_234[5] = (undefined4 ***)0x3;
    apppuStack_234[4] = (undefined4 ****)0x445c5b;
    FUN_0052b240();
    apppuStack_234[5] = (undefined4 ***)0x445c63;
    FUN_00527030();
    goto switchD_0044594b_default;
  }
  apppuStack_234[5] = (undefined4 ***)local_19c;
  apppuStack_234[4] = (undefined4 ***)(local_1ec + 1);
  apppuStack_234[3] = (undefined4 ***)0x1;
  apppuStack_234[2] = (undefined4 ****)0x1e;
  apppuStack_234[1] = (undefined4 ***)0x445c7e;
  apppuStack_234[1] = (undefined4 ***)FUN_00528bf0();
  apppuStack_234[0] = (undefined4 ***)0x445c84;
  cVar4 = FUN_00444e60();
  if (cVar4 == '\0') {
    local_208 = (undefined4 ***)((int)local_1c0 + (-1 - (int)local_160));
    if ((undefined4 ****)local_208 != (undefined4 ****)0x0) {
      apppuStack_234[5] = (undefined4 ***)((int)local_160 + (int)local_208);
      apppuStack_234[4] = (undefined4 ***)0x445cb0;
      iVar8 = FUN_004b73a0();
      if (iVar8 != 0) {
        local_208 = (undefined4 ***)((int)local_208 + -1);
      }
    }
    apppuStack_234[5] = (undefined4 ***)0x7;
    apppuStack_234[4] = (undefined4 ****)0x1;
    apppuStack_234[1] = local_160;
    apppuStack_234[2] = local_1fc;
    apppuStack_234[0] = (undefined4 ***)0x445cd6;
    apppuStack_234[3] = local_208;
    local_1fc = (undefined4 ***)FUN_005252a0();
    goto switchD_0044594b_default;
  }
  puVar12 = local_19c;
  pppuVar17 = local_60 + (local_204 + local_1e0 * 4) * 6;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pppuVar17 = (undefined4 **)*puVar12;
    puVar12 = puVar12 + 1;
    pppuVar17 = pppuVar17 + 1;
  }
  if (local_1ec == *param_1) {
    apppuStack_234[4] = local_184;
    apppuStack_234[5] = (undefined4 ***)local_1f0;
    apppuStack_234[3] = (undefined4 ***)0x0;
    apppuStack_234[2] = local_1f4;
    apppuStack_234[1] = (undefined4 ****)0x0;
    apppuStack_234[0] = (undefined4 ***)0x0;
    FUN_00444310(&local_1cc,0x1e,local_1d0,&local_1f8,ppppuVar10,&local_1e0,local_204,&local_1d8,
                 local_1c8,0);
  }
  else {
    local_1dc = 1;
    local_1d4 = 0;
    local_200 = (undefined4 ****)0x7545;
  }
  apppuStack_234[5] = (undefined4 ***)0x44625e;
  FUN_00523740();
  bVar2 = false;
  if (bVar3) {
    apppuStack_234[5] = (undefined4 ***)0x1f;
    apppuStack_234[4] = (undefined4 ***)0x446276;
    FUN_00529950();
    apppuStack_234[4] = (undefined4 ***)0x22;
    apppuStack_234[3] = (undefined4 ***)0x44627d;
    FUN_00529950();
    bVar3 = false;
  }
  goto LAB_0044568b;
}

