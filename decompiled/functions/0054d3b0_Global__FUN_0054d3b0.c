// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054d3b0
// entry: 0054d3b0  size: 1663


void FUN_0054d3b0(short *param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  short sVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar14;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar15;
  int local_4d4;
  int local_4d0;
  undefined4 local_4c0 [6];
  undefined1 local_4a8 [36];
  undefined1 local_484 [76];
  undefined1 local_438 [52];
  undefined1 local_404;
  undefined1 local_403 [227];
  int aiStack_320 [7];
  undefined1 local_304 [52];
  int aiStack_2d0 [20];
  int aiStack_280 [32];
  char local_200 [256];
  undefined1 local_100 [256];
  
  FUN_0054ca20((int)*param_1,*(undefined4 *)(param_1 + 1));
  FUN_005232d0(1,7);
  FUN_00523470(&DAT_005cd010,0x15);
  uVar4 = FUN_00488960((int)param_1[1],(int)param_1[2],local_304);
  FUN_00547850(uVar4);
  local_4d0 = 2;
  if (1 < *param_1 + 1) {
    local_4d4 = 9;
    do {
      iVar8 = 1;
      do {
        iVar5 = local_4d0 + iVar8 * 5;
        puVar13 = (undefined4 *)aiStack_320[iVar5];
        iVar2 = aiStack_280[iVar5];
        iVar5 = aiStack_2d0[iVar5];
        FUN_004b6ef0(local_100,s__005cb45c);
        if ((puVar13 == (undefined4 *)0x0) && (iVar2 == 0)) {
LAB_0054d5cc:
          if (iVar5 != 0) {
            FUN_004b6ef0(&local_404,s_ERROR_005bf324);
            FUN_005239e0(iVar8 * 0x1c + -10,local_4d4 + 1,&local_404,0x1c,0x10);
          }
        }
        else {
          if (iVar8 < 5) {
            iVar9 = iVar8 * 0x1c + -0xd;
            do {
              FUN_005239e0(iVar9 + 1,local_4d4 + 1,local_100,0x1b,0x10);
              FUN_004125f0(iVar9,local_4d4,iVar9,local_4d4 + 6);
              iVar9 = iVar9 + 0x1c;
            } while (iVar9 < 100);
          }
          if (puVar13 == (undefined4 *)0x0) {
            if (iVar2 == 0) goto LAB_0054d5cc;
            iVar10 = iVar8 * 0x1c;
            iVar9 = local_4d4 + 6;
            FUN_004143f0(iVar10 + -0xc,local_4d4,iVar10 + -0xc,iVar9);
            FUN_004143f0(iVar10 + -0xb,local_4d4,iVar10 + -0xb,iVar9);
            local_404 = 0;
            FUN_0054d340(iVar2,&local_404,0xff);
            FUN_00523a60(iVar10 + -9,local_4d4 + 1,local_403,0x10);
            if (iVar8 == 4) {
              FUN_004125f0(0x7f,local_4d4,0x7f,iVar9);
            }
          }
          else {
            local_4c0[0] = *puVar13;
            local_4c0[1] = puVar13[1];
            local_4c0[2] = puVar13[2];
            FUN_004e3800(local_4c0,local_4c0);
            FUN_00476ea0(local_4c0,&local_404);
            FUN_005239e0(iVar8 * 0x1c + -10,local_4d4 + 1,&local_404,0x1c,0x10);
          }
        }
        if ((((int)param_1[3] == param_1[1] + -1 + iVar8) &&
            ((int)param_1[4] == param_1[2] + -2 + local_4d0)) && (param_1[5] == 1)) {
          uVar4 = FUN_004138b0();
          iVar9 = CONCAT22(extraout_var,param_1[3]);
          iVar10 = CONCAT22(extraout_var_00,param_1[1]);
          iVar11 = ((int)param_1[3] - (int)param_1[1]) + 1;
          uVar14 = (undefined2)((uint)iVar11 >> 0x10);
          if ((iVar11 == 1) || (iVar11 == 3)) {
            FUN_0054cf90(uVar4,(iVar9 - iVar10) + 1,CONCAT22(uVar14,param_1[4] - param_1[2]) + 1,0);
          }
          else if ((iVar11 == 2) || (iVar11 == 4)) {
            FUN_0054d050(uVar4,(iVar9 - iVar10) + 1,CONCAT22(uVar14,param_1[4] - param_1[2]) + 1,0);
          }
          local_484[0] = 0;
          cVar3 = FUN_00526090(0x4f);
          if (cVar3 == '\0') {
            if (iVar5 == 0) {
              if (puVar13 == (undefined4 *)0x0) {
                if (iVar2 == 0) {
                  sVar1 = *param_1;
                  goto joined_r0x0054d9c7;
                }
                FUN_005232d0(1,7);
                FUN_0054dc70(&local_404);
              }
              else {
                if (param_3 == 0) {
                  puVar13 = local_4c0;
                  puVar15 = param_5;
                  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar15 = puVar15 + 1;
                  }
                }
                if (param_2 < 0x794b) {
                  if (param_2 == 0x794a) {
                    FUN_004b6300(param_5,param_4);
                  }
                  else if (param_2 == 0x754a) {
                    FUN_004b5ad0(param_5,param_4);
                  }
                  else {
                    if (param_2 != 0x755e) goto LAB_0054d7fa;
                    FUN_004b5e70(param_5,param_4);
                  }
                }
                else {
                  if (param_2 == 0x794b) {
                    uVar4 = 0;
                  }
                  else {
                    if (param_2 != 0x794c) {
LAB_0054d7fa:
                      if (param_3 == 0) {
                        FUN_004b5030(param_5,param_4);
                      }
                      goto LAB_0054d830;
                    }
                    uVar4 = 1;
                  }
                  FUN_004b6330(param_5,param_4,uVar4);
                }
LAB_0054d830:
                puVar7 = (undefined1 *)FUN_004b6f30(param_4,0xd);
                while (puVar7 != (undefined1 *)0x0) {
                  *puVar7 = 0;
                  FUN_004b6e70(param_4,puVar7 + 1);
                  puVar7 = (undefined1 *)FUN_004b6f30(param_4,0xd);
                }
                FUN_005232d0(1,7);
                FUN_0054dc70(param_4);
              }
            }
            else {
              FUN_004b6ef0(local_200,iVar5);
              pcVar12 = local_200;
              cVar3 = local_200[0];
              while (cVar3 != '\0') {
                uVar4 = FUN_004b78f0(pcVar12);
                iVar5 = FUN_004b7370(*pcVar12);
                if (iVar5 != 0) {
                  pcVar12 = pcVar12 + 1;
                }
                pcVar12 = pcVar12 + 1;
                FUN_004b79f0(uVar4,local_4a8);
                FUN_004b6e70(local_484,local_4a8);
                uVar6 = FUN_004b6ca0(local_484);
                if (0x14 < uVar6) break;
                cVar3 = *pcVar12;
              }
              FUN_004b4f20(local_438,local_484,0x15);
              FUN_005232d0(1,7);
              FUN_00523470(local_438,0x15);
            }
          }
          else if (puVar13 == (undefined4 *)0x0) {
            if (iVar2 == 0) {
              sVar1 = *param_1;
joined_r0x0054d9c7:
              if (sVar1 == 4) {
                FUN_005232d0(1,6);
                FUN_00523470(&DAT_005cd010,0x15);
              }
              FUN_005232d0(1,7);
              FUN_00523470(&DAT_005cd010,0x15);
            }
            else {
              FUN_005232d0(1,7);
              FUN_0054dc70(&local_404);
            }
          }
          else {
            if (param_3 == 0) {
              puVar13 = local_4c0;
              puVar15 = param_5;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar15 = puVar15 + 1;
              }
            }
            if (param_2 < 0x794b) {
              if (param_2 == 0x794a) {
                FUN_004b6300(param_5,param_4);
              }
              else if (param_2 == 0x754a) {
                FUN_004b5ad0(param_5,param_4);
              }
              else {
                if (param_2 != 0x755e) goto LAB_0054d947;
                FUN_004b5e70(param_5,param_4);
              }
            }
            else {
              if (param_2 == 0x794b) {
                uVar4 = 0;
              }
              else {
                if (param_2 != 0x794c) {
LAB_0054d947:
                  if (param_3 == 0) {
                    FUN_004b5030(param_5,param_4);
                  }
                  goto LAB_0054d97d;
                }
                uVar4 = 1;
              }
              FUN_004b6330(param_5,param_4,uVar4);
            }
LAB_0054d97d:
            FUN_005232d0(1,7);
            FUN_0054dc70(param_4);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      local_4d0 = local_4d0 + 1;
      local_4d4 = local_4d4 + 8;
    } while (local_4d0 <= *param_1 + 1);
  }
  return;
}

