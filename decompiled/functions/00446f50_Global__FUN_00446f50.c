// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00446f50
// entry: 00446f50  size: 3914


undefined4 **** FUN_00446f50(uint *param_1)

{
  bool bVar1;
  undefined4 ****ppppuVar2;
  undefined4 ***pppuVar3;
  char cVar4;
  undefined4 ****ppppuVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *****pppppuVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  undefined4 *****pppppuVar17;
  undefined4 ****appppuStack_370 [6];
  undefined4 ***local_344;
  undefined4 ****local_340;
  undefined4 ****local_33c;
  uint local_338;
  char local_331;
  undefined4 ****local_330;
  uint local_32c;
  undefined4 ****local_328;
  undefined4 ***local_324;
  undefined4 ****local_320;
  int local_31c;
  char local_315;
  uint local_314;
  char local_30d;
  int local_30c;
  undefined4 ****local_308;
  undefined4 ****local_304;
  uint local_300;
  undefined4 ***local_2fc;
  undefined4 local_2f8;
  undefined4 ****local_2f4;
  uint local_2f0;
  undefined4 ***local_2ec;
  int local_2e8 [4];
  int local_2d8;
  undefined4 ***local_2d4;
  char local_2d0 [12];
  undefined1 local_2c4 [8];
  undefined4 local_2bc [6];
  undefined4 ***local_2a4 [6];
  undefined1 local_28c [11];
  undefined1 local_281;
  undefined4 ***local_280 [64];
  undefined4 ***local_180 [96];
  
  iVar10 = 0;
  local_324 = (undefined4 ****)0x0;
  local_314 = 0;
  local_2fc = (undefined4 ****)0x0;
  local_330 = (undefined4 *****)0x0;
  local_32c = 0;
  local_340 = (undefined4 *****)0x0;
  local_304 = (undefined4 *****)0x0;
  local_33c = (undefined4 ****)0x0;
  local_344 = (undefined4 ****)0x0;
  local_30c = 0;
  local_31c = 0;
  local_328 = (undefined4 *****)0x0;
  local_320 = (undefined4 *****)0x0;
  local_30d = '\x01';
  bVar1 = false;
  local_331 = '\0';
  local_2f4 = (undefined4 *****)0x0;
  appppuStack_370[5] = (undefined4 ****)0x446fa6;
  FUN_00526440();
  appppuStack_370[5] = (undefined4 ****)0x64;
  appppuStack_370[4] = (undefined4 ****)0x446fad;
  FUN_00526420();
  appppuStack_370[4] = (undefined4 ****)local_28c;
  appppuStack_370[3] = (undefined4 ****)0x446fba;
  FUN_00538a00();
  appppuStack_370[3] = (undefined4 ****)0x1;
  appppuStack_370[2] = (undefined4 ****)0x446fc1;
  FUN_0053c6f0();
  appppuStack_370[2] = (undefined4 ****)0x2;
  appppuStack_370[1] = (undefined4 ****)0x446fc8;
  FUN_0053edf0();
  appppuStack_370[1] = (undefined4 ****)local_2c4;
  appppuStack_370[0] = (undefined4 ****)0x1;
  FUN_00538980(0);
  iVar11 = 0;
  do {
    appppuStack_370[5] = (undefined4 ****)((int)&DAT_005ce690 + iVar11);
    puVar14 = (undefined4 *)((int)&DAT_0057fc20 + iVar11);
    puVar15 = appppuStack_370[5];
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    appppuStack_370[3] = (undefined4 ****)0x446ff9;
    appppuStack_370[4] = (undefined4 ****)iVar10;
    FUN_00538860();
    iVar11 = iVar11 + 0x30;
    iVar10 = iVar10 + 1;
  } while (iVar11 < 0x60);
  appppuStack_370[5] = (undefined4 ****)0x0;
  appppuStack_370[4] = (undefined4 ****)0x44700c;
  FUN_005387f0();
  local_2f0 = local_2f0 & 0xffffff00;
  local_338 = local_338 & 0xffffff00;
  piVar7 = local_2e8;
  ppppuVar5 = local_180;
  iVar10 = 4;
  do {
    *piVar7 = (int)ppppuVar5;
    ppppuVar5 = ppppuVar5 + 0x18;
    piVar7 = piVar7 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_300 = *param_1;
  if ((int)local_300 < 4) {
    local_33c = (undefined4 ****)(local_300 - 1);
  }
  else {
    local_33c = (undefined4 *****)0x3;
    local_300 = 3;
  }
  appppuStack_370[5] = &local_308;
  appppuStack_370[4] = (undefined4 ****)&local_2f8;
  appppuStack_370[3] = (undefined4 ****)0x21;
  appppuStack_370[2] = (undefined4 ****)0x44706b;
  iVar10 = FUN_00528a20();
  if (iVar10 < 0x10) {
    local_331 = '\x01';
  }
  appppuStack_370[5] = &local_308;
  appppuStack_370[4] = (undefined4 ****)&local_2f8;
  appppuStack_370[3] = (undefined4 ****)0x20;
  appppuStack_370[2] = (undefined4 ****)0x447089;
  FUN_00528a20();
  appppuStack_370[2] = (undefined4 ****)*param_1;
  appppuStack_370[1] = (undefined4 *****)0x20;
  appppuStack_370[0] = (undefined4 ****)0x447093;
  FUN_00443be0();
LAB_00447096:
  appppuStack_370[5] = (undefined4 ****)0x7;
  appppuStack_370[4] = (undefined4 ****)0x2;
  appppuStack_370[3] = (undefined4 ****)0x44709f;
  FUN_00443b00();
  ppppuVar5 = local_304;
  appppuStack_370[3] = local_308;
  appppuStack_370[2] = (undefined4 ****)local_2f8;
  appppuStack_370[1] = local_304;
  appppuStack_370[0] = local_340;
  FUN_00443b60(0x20,local_2e8);
  pppuVar3 = local_2fc;
  uVar8 = local_300;
  FUN_00444310(local_2e8,0x20,*param_1,&local_340,ppppuVar5,&local_330,local_32c,&local_33c,
               local_300,local_324,local_2fc,0,local_308,0,local_2a4,local_338);
  appppuStack_370[1] = (undefined4 ****)*param_1;
  appppuStack_370[5] = (undefined4 ****)uVar8;
  appppuStack_370[4] = local_33c;
  appppuStack_370[3] = ppppuVar5;
  appppuStack_370[2] = local_340;
  appppuStack_370[0] = (undefined4 ****)0x20;
  FUN_00443f90();
  FUN_00444b00(local_308,0);
  FUN_00448340(*param_1,local_33c,pppuVar3,local_340,ppppuVar5);
  local_315 = '\x01';
  ppppuVar5 = (undefined4 ****)local_344;
  pppppuVar12 = (undefined4 *****)local_304;
switchD_004474cf_caseD_7533:
switchD_0044730a_default:
  while( true ) {
    if (local_31c == 1) {
      local_31c = 0;
    }
    else {
      if (((((!bVar1) && (ppppuVar5 != (undefined4 ****)0x0)) &&
           (ppppuVar5 != (undefined4 ****)0x7540)) &&
          ((ppppuVar5 != (undefined4 ****)0x7538 && (ppppuVar5 != (undefined4 ****)0x7919)))) &&
         ((ppppuVar5 != (undefined4 ****)0x791f && (ppppuVar5 != (undefined4 ****)0x7918)))) {
        appppuStack_370[5] = (undefined4 ****)0x4471aa;
        FUN_00538810();
        appppuStack_370[5] = (undefined4 ****)0x0;
        appppuStack_370[4] = (undefined4 *****)0x4471b1;
        FUN_005387f0();
      }
      appppuStack_370[5] = (undefined4 ****)0x4471b9;
      FUN_00538b30();
      appppuStack_370[5] = &local_344;
      appppuStack_370[4] = (undefined4 *****)0x4471c3;
      local_30c = FUN_00526620();
      ppppuVar5 = (undefined4 ****)local_344;
    }
    uVar9 = local_2f0;
    uVar8 = local_300;
    ppppuVar2 = local_33c;
    if (local_30c == 0) break;
    if (!bVar1) {
      appppuStack_370[5] = (undefined4 ****)0x4471ed;
      FUN_00538810();
      appppuStack_370[5] = (undefined4 ****)0x1;
      appppuStack_370[4] = (undefined4 *****)0x4471f4;
      FUN_005387f0();
      ppppuVar5 = (undefined4 ****)local_344;
    }
    if ((ppppuVar5 != (undefined4 ****)0xd) && (ppppuVar5 != (undefined4 ****)0xe)) {
      appppuStack_370[5] = ppppuVar5;
      if (!bVar1) {
        local_320 = (undefined4 *****)0x0;
        ppppuVar5 = local_280;
        for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
          *ppppuVar5 = (undefined4 ***)0x0;
          ppppuVar5 = ppppuVar5 + 1;
        }
        local_328 = (undefined4 *****)0x0;
        appppuStack_370[5] = (undefined4 ****)0x447232;
        FUN_00527030();
        bVar1 = true;
        if ((int)local_33c < 3) {
          appppuStack_370[5] = (undefined4 ****)0x6;
          appppuStack_370[4] = (undefined4 ****)0x1;
          appppuStack_370[3] = (undefined4 ****)0x447249;
          FUN_005232d0();
          uVar8 = 0xffffffff;
          pcVar13 = "";
          do {
            pcVar16 = pcVar13;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar13 + 1;
            cVar4 = *pcVar13;
            pcVar13 = pcVar16;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8;
          appppuStack_370[3] = (undefined4 ****)0x15;
          pcVar13 = pcVar16 + -uVar8;
          ppppuVar5 = &local_2d4;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *ppppuVar5 = *(undefined4 ****)pcVar13;
            pcVar13 = pcVar13 + 4;
            ppppuVar5 = ppppuVar5 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(char *)ppppuVar5 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            ppppuVar5 = (undefined4 ****)((int)ppppuVar5 + 1);
          }
          appppuStack_370[2] = &local_2d4;
          appppuStack_370[1] = (undefined4 ****)0x447281;
          FUN_00523470();
        }
        local_338 = local_338 & 0xffffff00;
        appppuStack_370[5] = (undefined4 ****)local_344;
      }
      appppuStack_370[4] = local_328;
      appppuStack_370[2] = local_280;
      appppuStack_370[3] = (undefined4 *****)0xff;
      appppuStack_370[1] = (undefined4 ****)0x4472ac;
      local_328 = (undefined4 ****)FUN_00525300();
      appppuStack_370[1] = (undefined4 *****)0x7;
      appppuStack_370[0] = (undefined4 ****)0x1;
      local_320 = (undefined4 ****)FUN_005252a0(local_280,local_320,local_328);
      ppppuVar5 = (undefined4 ****)local_344;
    }
  }
  if (ppppuVar5 < (undefined4 ****)0x7546) {
    if ((undefined4 ****)0x7543 < ppppuVar5) goto LAB_004477cc;
    if ((undefined4 ****)0x7531 < ppppuVar5) {
      switch(ppppuVar5) {
      case (undefined4 ****)0x7532:
        if ((!bVar1) || (!bVar1)) goto LAB_00447e56;
        appppuStack_370[5] = (undefined4 ****)0x4474ef;
        FUN_00523740();
        appppuStack_370[5] = (undefined4 ****)0x0;
        appppuStack_370[3] = (undefined4 ****)*param_1;
        appppuStack_370[4] = local_33c;
        appppuStack_370[2] = (undefined4 *****)0x20;
        bVar1 = false;
        appppuStack_370[1] = local_180 + (local_32c + (int)local_330 * 4) * 6;
        appppuStack_370[0] = (undefined4 ****)0x447522;
        FUN_00444600();
        local_338 = local_338 & 0xffffff00;
        ppppuVar5 = (undefined4 ****)local_344;
        goto switchD_0044730a_default;
      case (undefined4 ****)0x7533:
      case (undefined4 ****)0x7535:
      case (undefined4 ****)0x7536:
      case (undefined4 ****)0x7537:
      case (undefined4 ****)0x7538:
      case (undefined4 ****)0x7539:
      case (undefined4 ****)0x753a:
      case (undefined4 ****)0x753b:
      case (undefined4 ****)0x753c:
      case (undefined4 ****)0x753d:
      case (undefined4 ****)0x753e:
      case (undefined4 ****)0x7540:
      case (undefined4 ****)0x7541:
        goto switchD_004474cf_caseD_7533;
      case (undefined4 ****)0x7534:
        goto switchD_004474cf_caseD_7534;
      case (undefined4 ****)0x753f:
      case (undefined4 ****)0x7542:
        goto switchD_004474cf_caseD_753f;
      default:
        goto switchD_0044730a_default;
      }
    }
    if (ppppuVar5 == (undefined4 ****)0x7531) {
      appppuStack_370[5] = (undefined4 ****)0x44749d;
      local_344 = (undefined4 ***)FUN_00526040();
      local_31c = 1;
      local_30c = 1;
      local_338 = local_338 & 0xffffff00;
      ppppuVar5 = (undefined4 ****)local_344;
    }
    else {
      switch(ppppuVar5) {
      case (undefined4 ****)0x1:
        if (bVar1) {
          appppuStack_370[5] = (undefined4 ****)0x3;
          appppuStack_370[4] = (undefined4 ****)0x447cda;
          FUN_0052b240();
          appppuStack_370[5] = (undefined4 ****)0x447ce2;
          FUN_00523740();
          bVar1 = false;
          goto LAB_00447096;
        }
        local_31c = 1;
        local_30c = 0;
        local_344 = (undefined4 ****)0x7534;
        local_338 = (uint)local_338._1_3_ << 8;
        ppppuVar5 = (undefined4 ****)0x7534;
        break;
      case (undefined4 ****)0x2:
        appppuStack_370[5] = (undefined4 ****)0x447316;
        cVar4 = FUN_004448b0();
        ppppuVar5 = (undefined4 ****)local_344;
        if (cVar4 == '\x01') {
          appppuStack_370[5] = (undefined4 ****)0x20;
          appppuStack_370[4] = (undefined4 ****)0x447e3f;
          FUN_00529950();
          appppuStack_370[4] = (undefined4 *****)0x21;
          appppuStack_370[3] = (undefined4 *****)0x447e46;
          FUN_00529950();
          *param_1 = 0;
          goto LAB_00447e56;
        }
        break;
      case (undefined4 ****)0x3:
        appppuStack_370[5] = (undefined4 ****)0x20;
        appppuStack_370[4] = (undefined4 ****)0x44732e;
        FUN_00529950();
        appppuStack_370[4] = (undefined4 *****)0x21;
        appppuStack_370[3] = (undefined4 ****)0x447335;
        FUN_00529950();
        appppuStack_370[2] = (undefined4 ****)*param_1;
        appppuStack_370[3] = (undefined4 ****)((int)appppuStack_370[2] + 1);
        appppuStack_370[1] = (undefined4 *****)0x20;
        appppuStack_370[0] = (undefined4 ****)0x447343;
        appppuStack_370[0] = (undefined4 ****)FUN_00529400();
        cVar4 = FUN_00444e60();
        ppppuVar5 = (undefined4 ****)local_344;
        if (cVar4 != '\0') {
          local_314 = 0;
          local_324 = (undefined4 ****)0x0;
          local_32c = 0;
          local_330 = (undefined4 *****)0x0;
          local_304 = (undefined4 *****)0x0;
          local_340 = (undefined4 *****)0x0;
          local_338 = local_338 & 0xffffff00;
          appppuStack_370[5] = (undefined4 ****)0x447cc9;
          FUN_00523740();
          bVar1 = false;
          goto LAB_00447096;
        }
        break;
      case (undefined4 ****)0x4:
        if (!bVar1) {
          ppppuVar5 = local_280;
          for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
            *ppppuVar5 = (undefined4 ***)0x0;
            ppppuVar5 = ppppuVar5 + 1;
          }
          appppuStack_370[5] = local_308;
          appppuStack_370[4] = (undefined4 ****)local_2f8;
          appppuStack_370[1] = (undefined4 ****)local_2e8;
          appppuStack_370[2] = local_340;
          appppuStack_370[0] = (undefined4 ****)0x20;
          appppuStack_370[3] = pppppuVar12;
          FUN_00443b60();
          FUN_004e5470(local_180 + (local_32c + (int)local_330 * 4) * 6,local_280);
          if ((int)local_33c < 3) {
            appppuStack_370[5] = (undefined4 ****)0x6;
            appppuStack_370[4] = (undefined4 ****)0x1;
            appppuStack_370[3] = (undefined4 ****)0x4473cc;
            FUN_005232d0();
            uVar8 = 0xffffffff;
            pcVar13 = "";
            do {
              pcVar16 = pcVar13;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar16 = pcVar13 + 1;
              cVar4 = *pcVar13;
              pcVar13 = pcVar16;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            appppuStack_370[3] = (undefined4 ****)0x15;
            pcVar13 = pcVar16 + -uVar8;
            ppppuVar5 = &local_2d4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *ppppuVar5 = *(undefined4 ****)pcVar13;
              pcVar13 = pcVar13 + 4;
              ppppuVar5 = ppppuVar5 + 1;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(char *)ppppuVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              ppppuVar5 = (undefined4 ****)((int)ppppuVar5 + 1);
            }
            appppuStack_370[2] = &local_2d4;
            appppuStack_370[1] = (undefined4 ****)0x447404;
            FUN_00523470();
          }
          appppuStack_370[5] = (undefined4 ****)0x7;
          appppuStack_370[4] = (undefined4 *****)0x1;
          appppuStack_370[3] = (undefined4 *****)0x0;
          appppuStack_370[1] = local_280;
          appppuStack_370[2] = (undefined4 *****)0x0;
          local_320 = (undefined4 ****)0x0;
          local_328 = (undefined4 *****)0x0;
          appppuStack_370[0] = (undefined4 ****)0x44742b;
          local_320 = (undefined4 ****)FUN_005252a0();
          appppuStack_370[0] = (undefined4 ****)0x7;
          FUN_005232d0(1);
          appppuStack_370[5] = (undefined4 ****)0x447440;
          FUN_00527030();
          if (!bVar1) {
            appppuStack_370[5] = (undefined4 ****)0x44744d;
            FUN_00538810();
            appppuStack_370[5] = (undefined4 ****)0x1;
            appppuStack_370[4] = (undefined4 *****)0x447454;
            FUN_005387f0();
          }
          bVar1 = true;
          local_338 = local_338 & 0xffffff00;
          ppppuVar5 = (undefined4 ****)local_344;
        }
      }
    }
    goto switchD_0044730a_default;
  }
  if (ppppuVar5 < (undefined4 ****)0x755c) {
    if ((undefined4 ****)0x7559 < ppppuVar5) goto LAB_004477cc;
    goto code_r0x00447783;
  }
  if ((undefined4 ****)0x791f < ppppuVar5) {
    if ((((undefined4 ****)0x7949 < ppppuVar5) && (ppppuVar5 < (undefined4 ****)0x794d)) && (!bVar1)
       ) {
      appppuStack_370[4] = local_2a4;
      appppuStack_370[5] = (undefined4 ****)local_338;
      appppuStack_370[3] = (undefined4 ****)0x0;
      appppuStack_370[2] = local_308;
      appppuStack_370[0] = (undefined4 ****)local_2fc;
      appppuStack_370[1] = ppppuVar5;
      FUN_00444310(local_2e8,0x20,*param_1,&local_340,pppppuVar12,&local_330,local_32c,&local_33c,
                   local_300,local_324);
      FUN_00443f90(0x20,*param_1,local_340,pppppuVar12,local_33c,uVar8);
      appppuStack_370[1] = (undefined4 ****)*param_1;
      appppuStack_370[4] = local_340;
      appppuStack_370[3] = ppppuVar2;
      appppuStack_370[2] = local_33c;
      appppuStack_370[0] = (undefined4 ****)0x447c95;
      appppuStack_370[5] = pppppuVar12;
      FUN_00448340();
      local_338 = CONCAT31(local_338._1_3_,1);
      ppppuVar5 = (undefined4 ****)local_344;
    }
    goto switchD_0044730a_default;
  }
  if (ppppuVar5 != (undefined4 ****)0x791f) {
    if (ppppuVar5 == (undefined4 ****)0x755e) goto LAB_004477cc;
    if ((ppppuVar5 < (undefined4 ****)0x7918) || ((undefined4 ****)0x7919 < ppppuVar5))
    goto switchD_0044730a_default;
  }
  if (bVar1) {
    if (ppppuVar5 == (undefined4 ****)0x7918) {
      local_2f4 = (undefined4 *****)0x3;
    }
    else if (ppppuVar5 == (undefined4 ****)0x7919) {
      local_2f4 = (undefined4 *****)0x1;
    }
    else if (ppppuVar5 == (undefined4 ****)0x791f) {
      local_2f4 = (undefined4 *****)0x2;
    }
    appppuStack_370[4] = &local_328;
    appppuStack_370[5] = (undefined4 ****)0xff;
    appppuStack_370[3] = local_280;
    appppuStack_370[2] = local_2f4;
    appppuStack_370[1] = (undefined4 *****)0x447bbc;
    iVar10 = FUN_0052a950();
    if ((iVar10 == -5) || ((ppppuVar5 = (undefined4 ****)local_344, -3 < iVar10 && (iVar10 < 1)))) {
      appppuStack_370[5] = (undefined4 ****)0x7;
      appppuStack_370[4] = (undefined4 *****)0x1;
      appppuStack_370[3] = local_328;
      appppuStack_370[1] = local_280;
      appppuStack_370[2] = local_320;
      appppuStack_370[0] = (undefined4 ****)0x447be7;
      local_320 = (undefined4 ****)FUN_005252a0();
      ppppuVar5 = (undefined4 ****)local_344;
    }
  }
  else if (ppppuVar5 == (undefined4 ****)0x7918) {
    appppuStack_370[5] = (undefined4 ****)0x447b55;
    iVar10 = FUN_0052aae0();
    ppppuVar5 = (undefined4 ****)local_344;
    if (iVar10 == -5) {
      local_31c = 1;
      local_30c = 1;
      local_344 = (undefined4 ****)0xf91b;
      local_338 = local_338 & 0xffffff00;
      ppppuVar5 = (undefined4 ****)0xf91b;
      goto switchD_0044730a_default;
    }
  }
  local_338 = local_338 & 0xffffff00;
  goto switchD_0044730a_default;
code_r0x00447783:
  switch(ppppuVar5) {
  case (undefined4 ****)0x7547:
  case (undefined4 ****)0x7549:
  case (undefined4 ****)0x754a:
  case (undefined4 ****)0x7554:
  case (undefined4 ****)0x7555:
switchD_004474cf_caseD_753f:
LAB_004477cc:
    if (!bVar1) {
      local_2fc = local_324;
      if (ppppuVar5 == (undefined4 ****)0x7544) {
        local_338 = (uint)local_338._1_3_ << 8;
        local_314 = local_314 - 1;
        if ((int)local_314 < 0) {
          local_314 = *param_1;
          ppppuVar5 = (undefined4 ****)0x7542;
          local_31c = 1;
          local_30c = 0;
          local_344 = (undefined4 ****)0x7542;
        }
        local_32c = local_32c - 1;
        if ((int)local_32c < 0) {
          local_32c = (local_314 != *param_1) - 1 & local_300;
          pppppuVar12 = (undefined4 *****)((int)pppppuVar12 + -1);
          local_304 = pppppuVar12;
          if ((int)pppppuVar12 < 0) {
            pppppuVar12 = (undefined4 *****)(local_314 - local_300);
            local_304 = pppppuVar12;
          }
        }
      }
      else if (ppppuVar5 == (undefined4 ****)0x7545) {
        local_314 = local_314 + 1;
        local_338 = (uint)local_338._1_3_ << 8;
        if ((int)*param_1 < (int)local_314) {
          ppppuVar5 = (undefined4 ****)0x7547;
          local_314 = 0;
          local_31c = 1;
          local_30c = 0;
          local_344 = (undefined4 ****)0x7547;
        }
        local_32c = local_32c + 1;
        if ((int)local_300 < (int)local_32c) {
          local_32c = local_300;
          if (local_314 == 0) {
            local_32c = 0;
          }
          pppppuVar12 = (undefined4 *****)(local_314 - local_300);
          local_304 = pppppuVar12;
          if ((int)pppppuVar12 < 0) {
            pppppuVar12 = (undefined4 *****)0x0;
            local_304 = (undefined4 *****)0x0;
          }
        }
      }
      else if (ppppuVar5 == (undefined4 ****)0x7542) {
        local_324 = (undefined4 ***)((int)local_324 + -1);
        local_338 = (uint)local_338._1_3_ << 8;
        if ((int)local_324 < 0) {
          local_324 = (undefined4 ***)(*param_1 - 1);
        }
        local_330 = (undefined4 ****)((int)local_330 - 1);
        if ((int)local_330 < 0) {
          local_330 = (undefined4 ****)
                      (((undefined4 ****)local_324 != (undefined4 ****)(*param_1 - 1)) - 1 &
                      (uint)local_33c);
          local_340 = (undefined4 ****)((int)local_340 + -1);
          if ((int)local_340 < 0) {
            local_340 = (undefined4 ****)((*param_1 - (int)local_33c) + -1);
          }
        }
      }
      else if (ppppuVar5 == (undefined4 ****)0x7547) {
        local_324 = (undefined4 ***)((int)local_324 + 1);
        local_338 = (uint)local_338._1_3_ << 8;
        if ((int)(*param_1 - 1) < (int)local_324) {
          local_330 = (undefined4 *****)0x3;
          local_324 = (undefined4 ****)0x0;
        }
        local_330 = (undefined4 ****)((int)local_330 + 1);
        if ((int)local_33c < (int)local_330) {
          if ((undefined4 ****)local_324 == (undefined4 ****)0x0) {
            local_330 = (undefined4 *****)0x0;
          }
          else {
            local_330 = local_33c;
            local_2f0 = local_2f0 & 0xffffff00;
            if ((undefined4 *****)local_33c == (undefined4 *****)0x2) {
              local_2f0 = CONCAT31(SUB43(uVar9,1),1);
            }
          }
          local_340 = (undefined4 ****)((int)local_324 - (int)local_33c);
          if ((int)local_340 < 0) {
            local_340 = (undefined4 *****)0x0;
          }
        }
      }
      else if ((ppppuVar5 != (undefined4 ****)0x755e) && (ppppuVar5 != (undefined4 ****)0x754a)) {
        if (ppppuVar5 != (undefined4 ****)0x7555) goto switchD_0044730a_default;
        local_2d4 = (undefined4 ***)s__EQUA_005be254._0_4_;
        appppuStack_370[5] = (undefined4 ****)&local_2d8;
        appppuStack_370[4] = &local_2d4;
        local_2d0[0] = s__EQUA_005be254[4];
        local_2d0[1] = s__EQUA_005be254[5];
        appppuStack_370[3] = (undefined4 ****)0x447a31;
        FUN_0052d2d0();
        appppuStack_370[3] = (undefined4 ****)*param_1;
        local_338 = local_338 & 0xffffff00;
        appppuStack_370[2] = (undefined4 *****)0x20;
        local_315 = '\0';
        appppuStack_370[1] = (undefined4 *****)0x447a45;
        FUN_00443be0();
        ppppuVar5 = (undefined4 ****)local_344;
        if (local_2d8 != 1) goto LAB_00447096;
      }
      if (local_31c == 0) {
        appppuStack_370[5] = local_308;
        appppuStack_370[4] = (undefined4 ****)local_2f8;
        appppuStack_370[1] = (undefined4 ****)local_2e8;
        appppuStack_370[2] = local_340;
        appppuStack_370[0] = (undefined4 ****)0x20;
        appppuStack_370[3] = pppppuVar12;
        FUN_00443b60();
        uVar8 = local_300;
        FUN_00444310(local_2e8,0x20,*param_1,&local_340,pppppuVar12,&local_330,local_32c,&local_33c,
                     local_300,local_324,local_2fc,local_344,local_308,local_2f0,local_2a4,local_338
                    );
        appppuStack_370[1] = (undefined4 ****)*param_1;
        local_2f0 = local_2f0 & 0xffffff00;
        appppuStack_370[5] = (undefined4 ****)uVar8;
        appppuStack_370[4] = local_33c;
        appppuStack_370[2] = local_340;
        appppuStack_370[0] = (undefined4 ****)0x20;
        appppuStack_370[3] = pppppuVar12;
        FUN_00443f90();
        FUN_00448340(*param_1,local_33c,ppppuVar2,local_340,pppppuVar12);
        ppppuVar5 = (undefined4 ****)local_344;
        if (((undefined4 ****)local_344 == (undefined4 ****)0x755e) ||
           ((undefined4 ****)local_344 == (undefined4 ****)0x754a)) {
          local_338 = CONCAT31(local_338._1_3_,1);
        }
      }
      pppppuVar12 = (undefined4 *****)local_304;
      if (local_315 != '\x01') goto LAB_00447096;
      goto switchD_004474cf_caseD_7533;
    }
    appppuStack_370[5] = (undefined4 ****)0x7;
    appppuStack_370[3] = &local_344;
    appppuStack_370[4] = (undefined4 *****)0x1;
    appppuStack_370[2] = &local_328;
    appppuStack_370[1] = &local_320;
    appppuStack_370[0] = (undefined4 ****)0xff;
    local_338 = (uint)local_338._1_3_ << 8;
    iVar10 = FUN_005249f0(local_280);
    ppppuVar5 = (undefined4 ****)local_344;
    if (iVar10 == -4) {
      local_30c = 0;
      local_31c = 1;
    }
    else if (iVar10 == -3) {
      local_30c = 1;
      local_31c = 1;
    }
    goto switchD_0044730a_default;
  case (undefined4 ****)0x7548:
  case (undefined4 ****)0x754b:
  case (undefined4 ****)0x754c:
  case (undefined4 ****)0x754e:
  case (undefined4 ****)0x754f:
  case (undefined4 ****)0x7550:
  case (undefined4 ****)0x7551:
  case (undefined4 ****)0x7552:
  case (undefined4 ****)0x7553:
    goto switchD_004474cf_caseD_7533;
  case (undefined4 ****)0x754d:
    appppuStack_370[5] = (undefined4 ****)0x447e56;
    FUN_00523740();
    break;
  default:
    goto switchD_0044730a_default;
  }
  goto LAB_00447e56;
switchD_004474cf_caseD_7534:
  local_338 = (uint)local_338._1_3_ << 8;
  if (!bVar1) {
    appppuStack_370[5] = (undefined4 ****)*param_1;
    appppuStack_370[4] = (undefined4 *****)0x44754f;
    local_344 = (undefined4 ***)FUN_00447ef0();
    if ((undefined4 ****)local_344 == (undefined4 ****)0x754d) {
      local_344 = (undefined4 ****)0x754d;
      local_30d = '\0';
    }
    else {
      ppppuVar5 = (undefined4 ****)local_344;
      if ((undefined4 ****)local_344 == (undefined4 ****)0xffff) goto switchD_0044730a_default;
    }
    local_331 = '\x01';
    local_314 = 0;
    local_324 = (undefined4 ****)0x0;
    local_32c = 0;
    local_330 = (undefined4 *****)0x0;
    local_304 = (undefined4 *****)0x0;
    local_340 = (undefined4 *****)0x0;
    local_31c = 0;
    if (local_30d == '\x01') goto LAB_00447096;
LAB_00447e56:
    appppuStack_370[5] = (undefined4 ****)0x447e5b;
    FUN_00538810();
    appppuStack_370[5] = (undefined4 ****)local_28c;
    appppuStack_370[4] = (undefined4 ****)0x447e68;
    FUN_00538a50();
    appppuStack_370[4] = (undefined4 ****)local_2c4;
    appppuStack_370[3] = (undefined4 ****)0x0;
    appppuStack_370[2] = (undefined4 ****)0x0;
    appppuStack_370[1] = (undefined4 ****)0x447e79;
    FUN_005389c0();
    appppuStack_370[1] = (undefined4 ****)0x447e7e;
    FUN_00526410();
    appppuStack_370[1] = (undefined4 ****)0xe3;
    appppuStack_370[0] = (undefined4 ****)0x447e88;
    FUN_00526420();
    return (undefined4 ****)local_344;
  }
  appppuStack_370[5] = local_280;
  appppuStack_370[4] = (undefined4 *****)0x44757e;
  iVar10 = FUN_004b7550();
  if (iVar10 == 0) {
    uVar8 = *param_1;
    if (((undefined4 ****)local_324 == (undefined4 ****)(uVar8 - 1)) && (local_314 == uVar8)) {
      appppuStack_370[4] = local_2a4;
      appppuStack_370[5] = (undefined4 ****)0x0;
      appppuStack_370[3] = (undefined4 *****)0x0;
      appppuStack_370[2] = local_308;
      appppuStack_370[1] = (undefined4 *****)0x0;
      appppuStack_370[0] = (undefined4 ****)local_2fc;
      FUN_00444310(local_2e8,0x20,uVar8,&local_340,pppppuVar12,&local_330,local_32c,&local_33c,
                   local_300,local_324);
      appppuStack_370[5] = (undefined4 ****)0x4475ee;
      FUN_00523740();
      bVar1 = false;
      ppppuVar5 = (undefined4 ****)local_344;
    }
    else {
      local_31c = 1;
      local_30c = 0;
      local_344 = (undefined4 ****)0x7545;
      appppuStack_370[5] = (undefined4 ****)0x447619;
      FUN_00523740();
      bVar1 = false;
      ppppuVar5 = (undefined4 ****)local_344;
    }
    goto switchD_0044730a_default;
  }
  appppuStack_370[5] = (undefined4 ****)local_2bc;
  appppuStack_370[3] = &local_2ec;
  local_2ec = local_280;
  appppuStack_370[4] = (undefined4 ****)0x2;
  appppuStack_370[2] = (undefined4 *****)0x447646;
  iVar10 = FUN_004f64a0();
  if (iVar10 != 1) {
    puVar14 = local_2bc;
    pppppuVar17 = appppuStack_370;
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pppppuVar17 = (undefined4 ****)*puVar14;
      puVar14 = puVar14 + 1;
      pppppuVar17 = pppppuVar17 + 1;
    }
    FUN_00444e80();
    local_328 = (undefined4 ****)((int)local_2ec + (-1 - (int)local_280));
    if ((undefined4 *****)local_328 != (undefined4 *****)0x0) {
      appppuStack_370[5] = (undefined4 ****)((int)local_280 + (int)local_328);
      appppuStack_370[4] = (undefined4 ****)0x44772f;
      iVar10 = FUN_004b73a0();
      if (iVar10 != 0) {
        local_328 = (undefined4 ****)((int)local_328 + -1);
      }
    }
LAB_00447751:
    appppuStack_370[1] = local_280;
    appppuStack_370[5] = (undefined4 ****)0x7;
    appppuStack_370[4] = (undefined4 *****)0x1;
    appppuStack_370[0] = (undefined4 ****)0x447756;
    appppuStack_370[2] = local_320;
    appppuStack_370[3] = local_328;
    local_320 = (undefined4 ****)FUN_005252a0();
    ppppuVar5 = (undefined4 ****)local_344;
    goto switchD_004474cf_caseD_7533;
  }
  appppuStack_370[5] = (undefined4 ****)local_2bc;
  appppuStack_370[4] = (undefined4 ****)0x44765f;
  iVar10 = FUN_004e4000();
  if (iVar10 == 1) {
    appppuStack_370[5] = (undefined4 ****)0x3;
    appppuStack_370[4] = (undefined4 *****)0x44766e;
    FUN_0052b240();
    appppuStack_370[5] = (undefined4 ****)0x447676;
    FUN_00527030();
    ppppuVar5 = (undefined4 ****)local_344;
    goto switchD_004474cf_caseD_7533;
  }
  appppuStack_370[5] = (undefined4 ****)local_2bc;
  appppuStack_370[4] = (undefined4 ****)(local_314 + 1);
  appppuStack_370[3] = (undefined4 ****)((int)local_324 + 1);
  appppuStack_370[2] = (undefined4 *****)0x20;
  appppuStack_370[1] = (undefined4 ****)0x44769a;
  appppuStack_370[1] = (undefined4 ****)FUN_00528bf0();
  appppuStack_370[0] = (undefined4 ****)0x4476a0;
  cVar4 = FUN_00444e60();
  uVar8 = local_300;
  pppuVar3 = local_324;
  if (cVar4 == '\0') {
    local_328 = (undefined4 ****)((int)local_2ec + (-1 - (int)local_280));
    if ((undefined4 *****)local_328 != (undefined4 *****)0x0) {
      appppuStack_370[5] = (undefined4 ****)((int)local_280 + (int)local_328);
      appppuStack_370[4] = (undefined4 ****)0x4476cc;
      iVar10 = FUN_004b73a0();
      if (iVar10 != 0) {
        local_328 = (undefined4 ****)((int)local_328 + -1);
      }
    }
    goto LAB_00447751;
  }
  puVar14 = local_2bc;
  ppppuVar5 = local_180 + (local_32c + (int)local_330 * 4) * 6;
  for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
    *ppppuVar5 = (undefined4 ***)*puVar14;
    puVar14 = puVar14 + 1;
    ppppuVar5 = ppppuVar5 + 1;
  }
  uVar9 = *param_1;
  if (((undefined4 ****)local_324 == (undefined4 ****)(uVar9 - 1)) && (local_314 == uVar9)) {
    appppuStack_370[4] = local_2a4;
    appppuStack_370[5] = (undefined4 ****)0x0;
    appppuStack_370[3] = (undefined4 ****)0x0;
    appppuStack_370[2] = local_308;
    appppuStack_370[1] = (undefined4 ****)0x0;
    appppuStack_370[0] = (undefined4 ****)local_2fc;
    FUN_00444310(local_2e8,0x20,uVar9,&local_340,pppppuVar12,&local_330,local_32c,&local_33c,
                 local_300,local_324);
    FUN_00443f90(0x20,*param_1,local_340,pppppuVar12,local_33c,uVar8);
    appppuStack_370[1] = (undefined4 ****)*param_1;
    appppuStack_370[4] = local_340;
    appppuStack_370[3] = ppppuVar2;
    appppuStack_370[2] = local_33c;
    appppuStack_370[0] = (undefined4 ****)0x447ded;
    appppuStack_370[5] = pppppuVar12;
    FUN_00448340();
    local_2fc = pppuVar3;
  }
  else {
    local_31c = 1;
    local_30c = 0;
    local_344 = (undefined4 ****)0x7545;
  }
  appppuStack_370[5] = (undefined4 ****)0x447e13;
  FUN_00523740();
  bVar1 = false;
  if (local_331 == '\x01') {
    appppuStack_370[5] = (undefined4 ****)0x21;
    appppuStack_370[4] = (undefined4 ****)0x447e2b;
    FUN_00529950();
    local_331 = '\0';
  }
  goto LAB_00447096;
}

