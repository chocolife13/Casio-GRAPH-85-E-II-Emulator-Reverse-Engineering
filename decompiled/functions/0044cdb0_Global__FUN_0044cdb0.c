// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044cdb0
// entry: 0044cdb0  size: 2561


uint FUN_0044cdb0(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined2 *puVar13;
  uint local_1a4;
  char local_19d;
  undefined4 local_19c;
  undefined4 local_198;
  int local_194;
  int local_190;
  undefined2 local_18a;
  undefined2 local_188;
  undefined1 local_186;
  char *local_184;
  char local_180 [4];
  char local_17c [2];
  char local_17a;
  uint local_178;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  int local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined1 auStack_15f [19];
  undefined4 local_14c [6];
  undefined1 local_134 [52];
  char local_100 [256];
  
  local_17c = (char  [2])s________005bec28._4_2_;
  pcVar8 = s_______________________005bec30;
  puVar6 = local_14c;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    puVar6 = puVar6 + 1;
  }
  local_180 = (char  [4])s________005bec28._0_4_;
  local_17a = s________005bec28[6];
  local_188 = DAT_005bec24;
  *(undefined2 *)puVar6 = *(undefined2 *)pcVar8;
  local_186 = DAT_005bec26;
  local_18a = DAT_005ad48c;
  local_194 = 0;
  FUN_005262e0(0);
  if (*(char *)(param_2[1] + 0x12) == '\x01') {
    uVar12 = 0x58;
  }
  else {
    uVar12 = 0x51;
  }
  FUN_005387f0(uVar12);
  local_168 = param_1[0x83];
  pcVar8 = local_100;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  puVar6 = param_1;
  puVar10 = param_1 + 0x3f;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  local_170 = param_1[0x82];
  local_19d = '\x01';
  FUN_00523740();
  FUN_00414240();
  FUN_005232d0(1,1);
  FUN_0052f6f0(0xf6,local_134);
  FUN_00523470(local_134,0x15);
  FUN_005232d0(1,2);
  FUN_0052f6f0(0xf7,local_134);
  FUN_00523470(local_134,0x15);
  FUN_005232d0(1,3);
  uVar12 = FUN_004b6bd0(local_14c);
  FUN_00523470(local_14c,uVar12);
  FUN_005232d0(1,5);
  uVar12 = FUN_004b6bd0(local_14c);
  FUN_00523470(local_14c,uVar12);
  FUN_005232d0(1,4);
  FUN_00527030();
  local_198 = 0;
  local_19c = 0;
switchD_0044d17e_caseD_7535:
  do {
    while( true ) {
      iVar11 = 0;
      FUN_00538b30();
      iVar4 = iVar11;
      if (local_194 != 1) {
        local_164 = FUN_0040ad00();
        local_190 = FUN_00526620(&local_1a4);
        iVar4 = local_194;
      }
      local_194 = iVar4;
      if (local_190 == 0) break;
      if (*(char *)(param_2[1] + 0x12) == '\x01') {
        switch(local_1a4) {
        case 0x81:
          local_1a4 = 0x1d;
          break;
        case 0x82:
          local_1a4 = 0x1e;
          break;
        case 0x83:
          local_1a4 = 0x1f;
          break;
        case 0x85:
          local_1a4 = 0x1c;
          break;
        case 0x95:
          local_1a4 = 0x1b;
        }
      }
      iVar4 = FUN_0044ab50(local_1a4,param_2);
      if ((iVar4 != -1) && ((local_1a4 < 0xc || (0xd < local_1a4)))) {
        local_198 = FUN_00525300(local_100,0xff,local_198,local_1a4);
        FUN_00527030();
        local_19c = FUN_005252a0(local_100,local_19c,local_198,1,4);
      }
    }
    if (local_1a4 < 0x754a) {
      if (local_1a4 != 0x7549) {
        if (local_1a4 < 0x7533) {
          if (local_1a4 == 0x7532) {
            FUN_00414240();
            FUN_005232d0(1,1);
            FUN_005233e0(local_180);
            iVar11 = 0;
            iVar4 = 0;
            puVar9 = &local_160;
            do {
              FUN_004b79f0(*(undefined1 *)(iVar11 + param_2[1]),puVar9);
              iVar3 = FUN_004b6ab0(*puVar9);
              iVar7 = iVar4;
              if (iVar3 != 0) {
                iVar7 = iVar4 + 1;
                puVar9 = puVar9 + 1;
              }
              iVar11 = iVar11 + 1;
              iVar4 = iVar7 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar11 < 9);
            auStack_15f[iVar7] = 0;
            FUN_005232d0(7,1);
            FUN_005233e0(&local_160);
            FUN_005232d0(0xf,1);
            FUN_005233e0(local_180);
            FUN_005232d0(0x15,1);
            if (*(char *)(param_2[1] + 0x12) == '\x01') {
              puVar13 = &local_188;
            }
            else {
              puVar13 = &local_18a;
            }
            FUN_005233e0(puVar13);
            FUN_0044a5a0(param_1);
            param_1[0x83] = local_168;
            param_1[0x82] = local_170;
            FUN_005232d0(local_170,local_168 + 1);
            FUN_00527030();
            FUN_00538810();
            return local_1a4;
          }
          if (local_1a4 == 0x1e) {
            switch(local_164) {
            case 4:
              FUN_005262e0(8);
              FUN_00527030();
              break;
            case 8:
              FUN_005262e0(4);
              FUN_00527030();
              break;
            case 0x84:
              FUN_005262e0(0x88);
              FUN_00527030();
              break;
            case 0x88:
              FUN_005262e0(0x84);
            default:
              FUN_00527030();
            }
            goto switchD_0044d17e_caseD_7535;
          }
          if (local_1a4 == 0x22) {
            local_1a4 = FUN_00522bb0(1);
            if (local_1a4 != 0) goto LAB_0044d0ab;
          }
          else {
            if (local_1a4 != 0x7531) goto switchD_0044d17e_caseD_7535;
            if (*(char *)(param_2[1] + 0x12) == '\x01') {
              local_1a4 = 0x1a;
            }
            else {
              local_1a4 = FUN_00526040();
            }
LAB_0044d0ab:
            local_198 = FUN_00525300(local_100,0xff,local_198,local_1a4);
          }
          FUN_00527030();
          local_19c = FUN_005252a0(local_100,local_19c,local_198,1,4);
          goto switchD_0044d17e_caseD_7535;
        }
        switch(local_1a4) {
        case 0x7534:
          bVar1 = true;
          local_174 = 0;
          FUN_00523740();
          uVar2 = FUN_004b7550(local_100);
          if (uVar2 == 0) {
            FUN_00527030();
          }
          else {
            uVar5 = param_1[0x80];
            if (uVar2 < (uint)param_1[0x81]) {
              thunk_FUN_0040add0();
              do {
                if (param_1[0x81] - uVar2 <= uVar5) {
                  if (bVar1) goto LAB_0044d3ac;
                  break;
                }
                bVar1 = true;
                local_184 = local_100;
                pcVar8 = (char *)(param_1[0x7f] + uVar5);
                local_178 = uVar2;
                if ((uVar5 == 0) || (iVar4 = FUN_004b7370(pcVar8[-1]), iVar4 == 0)) {
                  bVar1 = false;
                  while ((uVar2 != 0 && (!bVar1))) {
                    if (*pcVar8 == *local_184) {
                      pcVar8 = pcVar8 + 1;
                      local_184 = local_184 + 1;
                    }
                    else {
                      bVar1 = true;
                    }
                    uVar2 = uVar2 - 1;
                  }
                }
                uVar5 = uVar5 + 1;
                FUN_0052f840();
                uVar2 = local_178;
                iVar4 = FUN_0052f820();
                if (iVar4 == 1) {
                  FUN_0052b240(1);
                  goto LAB_0044d377;
                }
              } while (bVar1);
              uVar2 = param_1[0x80];
              local_178 = param_1[0x7e];
              if (uVar2 != uVar5) {
LAB_0044d2a8:
                FUN_0044a770(0x7545,param_1);
                if (param_1[0x8f] == 1) {
                  FUN_0044dfc0(param_1,param_1[0x80],param_1[0x82],param_1[0x83]);
                }
                FUN_0052f840();
                iVar4 = FUN_0052f820();
                if (iVar4 != 1) goto code_r0x0044d2ec;
                FUN_0052b240(1);
                param_1[0x7e] = local_178;
                param_1[0x80] = uVar2;
                param_1[0x82] = local_170;
                param_1[0x83] = local_168;
                puVar6 = param_1 + 0x3f;
                puVar10 = param_1;
                for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar10 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar10 = puVar10 + 1;
                }
                local_174 = 1;
              }
LAB_0044d347:
              FUN_0044dfc0(param_1,param_1[0x80],param_1[0x82],param_1[0x83]);
              if (local_174 != 1) {
                FUN_00414240();
                FUN_005232d0(1,1);
                FUN_005233e0(local_180);
                iVar4 = 0;
                iVar11 = 0;
                puVar9 = &local_160;
                do {
                  FUN_004b79f0(*(undefined1 *)(iVar4 + param_2[1]),puVar9);
                  iVar3 = FUN_004b6ab0(*puVar9);
                  iVar7 = iVar11;
                  if (iVar3 != 0) {
                    iVar7 = iVar11 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  iVar4 = iVar4 + 1;
                  iVar11 = iVar7 + 1;
                  puVar9 = puVar9 + 1;
                } while (iVar4 < 9);
                auStack_15f[iVar7] = 0;
                FUN_005232d0(7,1);
                FUN_005233e0(&local_160);
                FUN_005232d0(0xf,1);
                FUN_005233e0(local_180);
                FUN_005232d0(0x15,1);
                if (*(char *)(param_2[1] + 0x12) == '\x01') {
                  puVar13 = &local_188;
                }
                else {
                  puVar13 = &local_18a;
                }
                FUN_005233e0(puVar13);
                iVar4 = 0;
                puVar6 = param_1;
                do {
                  FUN_005232d0(1,iVar4 + 2);
                  FUN_00523470(puVar6,0x15);
                  iVar4 = iVar4 + 1;
                  puVar6 = (undefined4 *)((int)puVar6 + 0x2a);
                } while (iVar4 < 6);
                FUN_005232d0(param_1[0x82],param_1[0x83] + 1);
                FUN_00527030();
                local_1a4 = FUN_0044d8a0(local_100,param_1,param_2);
                FUN_00538810();
                return local_1a4;
              }
              FUN_00527030();
            }
            else {
LAB_0044d3ac:
              FUN_0052b240(0x15);
            }
LAB_0044d377:
            local_19c = FUN_005252a0(local_100,local_19c,local_198,1,4);
          }
        default:
          goto switchD_0044d17e_caseD_7535;
        case 0x753f:
        case 0x7544:
        case 0x7545:
          break;
        }
      }
switchD_0044d17e_caseD_753f:
      FUN_005249f0(local_100,0xff,&local_19c,&local_198,&local_1a4,1,4);
      FUN_00527030();
      local_19c = FUN_005252a0(local_100,local_19c,local_198,1,4);
      goto switchD_0044d17e_caseD_7535;
    }
    if (local_1a4 < 0x755c) {
      if (local_1a4 < 0x755a) {
        if (local_1a4 == 0x754d) {
          FUN_00523740();
          FUN_00414240();
          FUN_0044e6f0(0,param_2,1);
          param_2[2] = *param_2;
          param_2[1] = *param_2;
          FUN_00538810();
          return local_1a4;
        }
        if (local_1a4 != 0x7554) {
          if (local_1a4 == 0x7555) {
            FUN_00538710();
            if (*(char *)(param_2[1] + 0x12) == '\x01') {
              FUN_005386a0(0x50);
            }
            else {
              FUN_005386a0(0x39);
            }
          }
          goto switchD_0044d17e_caseD_7535;
        }
      }
      if (*(char *)(param_2[1] + 0x12) != '\x01') goto switchD_0044d17e_caseD_753f;
      goto switchD_0044d17e_caseD_7535;
    }
    if (local_1a4 == 31000) {
      FUN_00523740();
      FUN_005237c0(1);
      if (local_19d < '\x10') {
        iVar4 = (int)local_19d;
      }
      else {
        iVar4 = 0xf;
      }
      iVar4 = FUN_0052ab40(iVar4);
      if (iVar4 == -5) {
        local_194 = 1;
        local_190 = 1;
        local_1a4 = 0xf91b;
      }
      else if (iVar4 == -4) {
        local_194 = 1;
        local_1a4 = 0x791f;
        local_190 = iVar11;
      }
      else if (iVar4 == -3) {
        local_194 = 1;
        local_1a4 = 0x7919;
        local_190 = iVar11;
      }
      local_19d = '\x01';
      FUN_00523800(1);
      FUN_00527030();
    }
    else if (local_1a4 == 0x7919) {
      FUN_00523740();
      iVar4 = FUN_0052ad00(&local_16c);
      if (iVar4 == 0) {
        iVar4 = FUN_004b7d00(local_16c,local_100);
        if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
          local_19d = (char)local_16c;
          local_194 = 1;
          local_1a4 = 31000;
          local_190 = iVar11;
        }
        else {
          FUN_0052b240(4);
          FUN_00527030();
          local_194 = iVar11;
        }
      }
      else {
        FUN_00527030();
        local_194 = iVar11;
      }
    }
  } while( true );
code_r0x0044d2ec:
  if (param_1[0x80] == uVar5) goto LAB_0044d347;
  goto LAB_0044d2a8;
}

