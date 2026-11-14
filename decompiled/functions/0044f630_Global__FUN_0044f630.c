// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044f630
// entry: 0044f630  size: 3157


void FUN_0044f630(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  int local_36c;
  undefined2 *local_368;
  uint local_364;
  undefined1 local_360;
  undefined1 local_35f;
  undefined1 local_35e;
  undefined1 local_35d;
  undefined1 local_35c;
  undefined1 local_35b;
  undefined1 local_35a;
  undefined1 local_359;
  undefined1 local_358;
  undefined1 local_354;
  undefined1 local_353;
  undefined1 local_352;
  undefined1 local_351;
  undefined1 local_350;
  undefined1 local_34f;
  undefined1 local_34e;
  undefined1 local_34d;
  undefined1 local_34c;
  undefined2 local_34a;
  undefined1 local_348 [44];
  int local_31c;
  uint local_318;
  undefined2 local_314;
  undefined1 local_312;
  undefined4 local_311;
  undefined4 local_30d;
  undefined4 local_309;
  undefined1 local_305;
  byte local_304;
  uint local_303;
  byte local_2f8;
  uint local_2f7;
  undefined4 local_2ec [5];
  undefined1 local_2d7 [43];
  undefined1 local_2ac [24];
  undefined1 local_294 [12];
  undefined4 local_288 [6];
  undefined4 local_270 [10];
  undefined1 auStack_246 [254];
  int local_148;
  undefined1 local_144 [12];
  int local_138;
  int local_134 [3];
  undefined4 local_128 [10];
  undefined1 local_fe [254];
  
  local_312 = DAT_005bec7a;
  pcVar9 = s_Done_005bec60;
  puVar11 = local_288;
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    puVar11 = puVar11 + 1;
  }
  local_311 = 0;
  local_314 = DAT_005bec78;
  local_30d = 0;
  local_309 = 0;
  local_34a = DAT_005bec5c;
  local_305 = 0;
  local_360 = 0;
  local_35f = 0;
  local_35e = 0;
  local_35d = 0;
  local_35c = 0;
  local_35b = 0;
  local_35a = 0;
  local_359 = 0;
  local_358 = 0;
  local_354 = 0;
  local_353 = 0;
  local_352 = 0;
  local_351 = 0;
  local_350 = 0;
  local_34f = 0;
  local_34e = 0;
  local_34d = 0;
  local_34c = 0;
  *(undefined2 *)puVar11 = *(undefined2 *)pcVar9;
  local_318 = FUN_00526410();
  FUN_00538a00(local_294);
  iVar6 = 1;
  if (*(char *)(param_1[1] + 0x12) == '\x01') {
    FUN_00526420(0xe7);
  }
  else {
    FUN_00526420(0xc6);
    FUN_0053c6f0(6);
  }
  FUN_0053c690(0xe);
  FUN_00538860(5,0);
  FUN_005387f0(5);
  FUN_00414260();
  FUN_00523740();
  iVar8 = 0;
  do {
    puVar11 = (undefined4 *)((int)local_128 + iVar8);
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0x2020;
    local_fe[iVar8] = 0;
    puVar11 = (undefined4 *)((int)local_270 + iVar8);
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0x2020;
    auStack_246[iVar8] = 0;
    iVar8 = iVar8 + 0x2a;
  } while (iVar8 < 0x126);
  local_148 = 1;
  FUN_004b7710(&local_314,param_1[1]);
  FUN_004b7710(&local_314,&local_34a);
  local_368 = &local_314;
  if (*(char *)(param_1[1] + 0x12) == '\x01') {
    uVar13 = 9;
  }
  else {
    uVar13 = 0;
  }
  FUN_00526070(0x17,uVar13);
  iVar8 = FUN_004f6250(&local_368,0,&local_304,local_270);
  local_36c = local_138;
  if (iVar8 == 0) {
    if ((local_304 & 0xf0) == 0xf0) {
      uVar4 = local_303 & 0xff;
    }
    else {
      uVar4 = local_318;
      if (((local_304 & 0x80) != 0) && ((local_2f8 & 0xf0) == 0xf0)) {
        uVar4 = local_2f7 & 0xff;
      }
    }
    if (uVar4 == 0) {
      if (local_138 == 1) {
        FUN_005232d0(1,local_148 + 1);
        FUN_00523470(local_288,0x15);
      }
    }
    else {
      FUN_0052b240(uVar4);
    }
    FUN_004b7750(&local_360,local_144);
    FUN_0044e6f0(&local_360,param_1,1);
    if (param_1[1] == 0) {
      FUN_0052b240(4);
    }
    else {
      param_1[1] = param_1[2];
    }
    iVar6 = FUN_004b79b0(param_1[1] + 9,&local_354,8);
    if (iVar6 == 0) {
      puVar5 = (undefined2 *)FUN_0044f560(param_1[1]);
      iVar6 = FUN_004b7370(*(undefined1 *)(local_368 + -1));
      if (iVar6 != 0) {
        local_368 = (undefined2 *)((int)local_368 + -1);
      }
      if (puVar5 == (undefined2 *)0x0) {
        puVar5 = local_368;
      }
      FUN_0044bfa0((int)local_368 - (int)puVar5,param_1);
    }
    else {
      FUN_00414240();
    }
    goto LAB_0045025c;
  }
  if (iVar8 == 1) {
    iVar8 = 0;
    puVar11 = local_270;
    puVar10 = local_128;
    for (iVar7 = 0x49; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = *(undefined2 *)puVar11;
    puVar11 = local_128;
    do {
      iVar8 = iVar8 + 1;
      FUN_005232d0(1,iVar8);
      FUN_00523470(puVar11,0x15);
      puVar11 = (undefined4 *)((int)puVar11 + 0x2a);
    } while (iVar8 < 7);
    if (local_138 == 0) {
      if (local_134[0] == 0) {
        cVar1 = FUN_00526090(0x17);
        local_134[0] = (int)cVar1;
      }
      local_31c = 0;
      if (local_134[0] != 0) {
        local_36c = 1;
      }
      FUN_004b5060(&local_304,local_348,local_134);
      puVar11 = local_2ec;
      for (iVar8 = 0x15; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = 0x20202020;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = 0x2020;
      puVar3 = (undefined1 *)FUN_004b6f30(local_348,0xd);
      if (puVar3 == (undefined1 *)0x0) {
        iVar8 = FUN_004b6bd0(local_348,local_348);
        FUN_004b6ef0(local_2d7 + -iVar8);
LAB_0044f9de:
        if (local_148 != 8) goto LAB_0044f9ea;
LAB_0044f9f3:
        iVar8 = 7 - iVar6;
        if (0 < iVar8) {
          puVar11 = local_128;
          iVar7 = (int)local_128 + iVar6 * 0x2a;
          iVar12 = iVar8;
          do {
            iVar2 = 0;
            do {
              *(undefined1 *)((int)puVar11 + iVar2) = *(undefined1 *)(iVar7 + iVar2);
              iVar2 = iVar2 + 1;
            } while (iVar2 < 0x2a);
            iVar7 = iVar7 + 0x2a;
            puVar11 = (undefined4 *)((int)puVar11 + 0x2a);
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        iVar7 = 0;
        if (0 < iVar8) {
          puVar11 = local_128;
          do {
            iVar7 = iVar7 + 1;
            FUN_005232d0(1,iVar7);
            FUN_00523470(puVar11,0x15);
            puVar11 = (undefined4 *)((int)puVar11 + 0x2a);
          } while (iVar7 < iVar8);
        }
        local_148 = local_148 - iVar6;
      }
      else {
        *puVar3 = 0;
        iVar8 = FUN_004b6bd0(puVar3 + 1,puVar3 + 1);
        FUN_004b6ef0(local_2ac + -iVar8);
        iVar8 = FUN_004b6bd0(local_348,local_348);
        FUN_004b6ef0(local_2d7 + -iVar8);
        if (local_148 != 7) {
          iVar6 = 2;
          goto LAB_0044f9de;
        }
        local_31c = 1;
LAB_0044f9ea:
        if ((puVar3 != (undefined1 *)0x0) && (local_148 == 7)) goto LAB_0044f9f3;
      }
      iVar8 = 0;
      iVar6 = iVar6 + local_31c;
      if (0 < iVar6) {
        puVar11 = local_2ec;
        do {
          FUN_005232d0(1,local_148 + iVar8);
          FUN_00523470(puVar11,0x15);
          iVar8 = iVar8 + 1;
          puVar11 = (undefined4 *)((int)puVar11 + 0x2b);
        } while (iVar8 < iVar6);
      }
    }
    else if (local_138 == 2) {
      FUN_00526430(1);
    }
    else {
      FUN_00526430(1);
      if (local_148 == 8) {
        puVar11 = local_128;
        iVar6 = 6;
        do {
          iVar8 = 0;
          do {
            *(undefined1 *)((int)puVar11 + iVar8) = *(undefined1 *)((int)puVar11 + iVar8 + 0x2a);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x2a);
          puVar11 = (undefined4 *)((int)puVar11 + 0x2a);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar6 = 0;
        puVar11 = local_128;
        do {
          iVar6 = iVar6 + 1;
          FUN_005232d0(1,iVar6);
          FUN_00523470(puVar11,0x15);
          puVar11 = (undefined4 *)((int)puVar11 + 0x2a);
        } while (iVar6 < 6);
        local_148 = local_148 + -1;
      }
      FUN_005232d0(1,local_148);
      FUN_00523470(local_288,0x15);
    }
    FUN_00523740();
  }
LAB_0044faa6:
  do {
    do {
      FUN_00538b30();
      iVar6 = FUN_00526620(&local_364);
    } while (iVar6 != 0);
    if (local_364 < 0x754f) {
      if (local_364 == 0x754e) {
        if (*(char *)(param_1[1] + 0x12) != '\x01') {
          FUN_005237c0(1);
          cVar1 = FUN_00526090(0x22);
          iVar6 = (int)cVar1;
          if (iVar6 == 3) {
            iVar6 = 0;
          }
          FUN_0052eb10(iVar6);
          FUN_00523800(1);
        }
        goto LAB_0044faa6;
      }
      switch(local_364) {
      case 0x7532:
        param_1[2] = param_1[1];
        FUN_00414240();
        goto LAB_0045025c;
      default:
switchD_0044fae8_caseD_7533:
        if ((local_364 == 0) || ((29999 < local_364 && (local_364 < 0x75f8)))) goto LAB_0044faa6;
        break;
      case 0x7534:
      case 0x753f:
        param_1[2] = param_1[1];
        FUN_00414240();
        goto LAB_0045025c;
      case 0x754a:
        if (local_36c == 0) {
          FUN_004b5ad0(&local_304,local_348);
          puVar11 = local_2ec;
          for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar11 = 0x20202020;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = 0x2020;
          puVar3 = (undefined1 *)FUN_004b6f30(local_348,0xd);
          if (puVar3 == (undefined1 *)0x0) {
            iVar6 = FUN_004b6bd0(local_348,local_348);
            puVar3 = local_2d7 + -iVar6;
          }
          else {
            *puVar3 = 0;
            iVar6 = FUN_004b6bd0(puVar3 + 1,puVar3 + 1);
            FUN_004b6ef0(local_2ac + -iVar6);
            iVar6 = FUN_004b6bd0(local_348,local_348);
            puVar3 = local_2d7 + -iVar6;
          }
          FUN_004b6ef0(puVar3);
          iVar6 = 0;
          puVar11 = local_2ec;
          do {
            FUN_005232d0(1,local_148 + iVar6);
            FUN_00523470(puVar11,0x15);
            iVar6 = iVar6 + 1;
            puVar11 = (undefined4 *)((int)puVar11 + 0x2b);
          } while (iVar6 < 2);
        }
        goto LAB_0044faa6;
      case 0x754d:
        goto switchD_0044fae8_caseD_754d;
      }
    }
    else {
      if (0x794a < local_364) {
        if (local_364 == 0x794b) {
          if (local_36c == 0) {
            FUN_004b6330(&local_304,local_348,0);
            puVar11 = local_2ec;
            for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar11 = 0x20202020;
              puVar11 = puVar11 + 1;
            }
            *(undefined2 *)puVar11 = 0x2020;
            puVar3 = (undefined1 *)FUN_004b6f30(local_348,0xd);
            if (puVar3 == (undefined1 *)0x0) {
              iVar6 = FUN_004b6bd0(local_348,local_348);
              puVar3 = local_2d7 + -iVar6;
            }
            else {
              if (local_148 == 7) {
                puVar11 = local_128;
                iVar6 = 6;
                do {
                  iVar8 = 0x2a;
                  do {
                    *(undefined1 *)puVar11 = *(undefined1 *)((int)puVar11 + 0x2a);
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                iVar6 = 0;
                puVar11 = local_128;
                do {
                  iVar6 = iVar6 + 1;
                  FUN_005232d0(1,iVar6);
                  FUN_00523470(puVar11,0x15);
                  puVar11 = (undefined4 *)((int)puVar11 + 0x2a);
                } while (iVar6 < 6);
                local_148 = local_148 + -1;
              }
              *puVar3 = 0;
              iVar6 = FUN_004b6bd0(puVar3 + 1,puVar3 + 1);
              FUN_004b6ef0(local_2ac + -iVar6);
              iVar6 = FUN_004b6bd0(local_348,local_348);
              puVar3 = local_2d7 + -iVar6;
            }
            FUN_004b6ef0(puVar3);
            iVar6 = 0;
            puVar11 = local_2ec;
            do {
              FUN_005232d0(1,local_148 + iVar6);
              FUN_00523470(puVar11,0x15);
              iVar6 = iVar6 + 1;
              puVar11 = (undefined4 *)((int)puVar11 + 0x2b);
            } while (iVar6 < 2);
          }
        }
        else {
          if (local_364 != 0x794c) goto switchD_0044fae8_caseD_7533;
          if (local_36c == 0) {
            FUN_004b6330(&local_304,local_348,1);
            puVar11 = local_2ec;
            for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar11 = 0x20202020;
              puVar11 = puVar11 + 1;
            }
            *(undefined2 *)puVar11 = 0x2020;
            puVar3 = (undefined1 *)FUN_004b6f30(local_348,0xd);
            if (puVar3 != (undefined1 *)0x0) {
              if (local_148 == 7) {
                puVar11 = local_128;
                iVar6 = 6;
                do {
                  iVar8 = 0x2a;
                  do {
                    *(undefined1 *)puVar11 = *(undefined1 *)((int)puVar11 + 0x2a);
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                iVar6 = 0;
                puVar11 = local_128;
                do {
                  iVar6 = iVar6 + 1;
                  FUN_005232d0(1,iVar6);
                  FUN_00523470(puVar11,0x15);
                  puVar11 = (undefined4 *)((int)puVar11 + 0x2a);
                } while (iVar6 < 6);
                local_148 = local_148 + -1;
              }
              *puVar3 = 0;
              iVar6 = FUN_004b6bd0(puVar3 + 1,puVar3 + 1);
              FUN_004b6ef0(local_2ac + -iVar6);
            }
            iVar6 = FUN_004b6bd0(local_348,local_348);
            FUN_004b6ef0(local_2d7 + -iVar6);
            iVar6 = 0;
            puVar11 = local_2ec;
            do {
              FUN_005232d0(1,local_148 + iVar6);
              FUN_00523470(puVar11,0x15);
              iVar6 = iVar6 + 1;
              puVar11 = (undefined4 *)((int)puVar11 + 0x2b);
            } while (iVar6 < 2);
          }
        }
        goto LAB_0044faa6;
      }
      if (local_364 == 0x794a) {
        if (local_36c == 0) {
          FUN_004b6300(&local_304,local_348);
          puVar11 = local_2ec;
          for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar11 = 0x20202020;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = 0x2020;
          puVar3 = (undefined1 *)FUN_004b6f30(local_348,0xd);
          if (puVar3 != (undefined1 *)0x0) {
            if (local_148 == 7) {
              puVar11 = local_128;
              iVar6 = 6;
              do {
                iVar8 = 0;
                do {
                  *(undefined1 *)((int)puVar11 + iVar8) =
                       *(undefined1 *)((int)puVar11 + iVar8 + 0x2a);
                  iVar8 = iVar8 + 1;
                } while (iVar8 < 0x2a);
                puVar11 = (undefined4 *)((int)puVar11 + 0x2a);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              iVar6 = 0;
              puVar11 = local_128;
              do {
                iVar6 = iVar6 + 1;
                FUN_005232d0(1,iVar6);
                FUN_00523470(puVar11,0x15);
                puVar11 = (undefined4 *)((int)puVar11 + 0x2a);
              } while (iVar6 < 6);
              local_148 = local_148 + -1;
            }
            *puVar3 = 0;
            iVar6 = FUN_004b6bd0(puVar3 + 1,puVar3 + 1);
            FUN_004b6ef0(local_2ac + -iVar6);
          }
          iVar6 = FUN_004b6bd0(local_348,local_348);
          FUN_004b6ef0(local_2d7 + -iVar6);
          iVar6 = 0;
          puVar11 = local_2ec;
          do {
            FUN_005232d0(1,local_148 + iVar6);
            FUN_00523470(puVar11,0x15);
            iVar6 = iVar6 + 1;
            puVar11 = (undefined4 *)((int)puVar11 + 0x2b);
          } while (iVar6 < 2);
        }
        goto LAB_0044faa6;
      }
      if (local_364 != 0x7557) {
        if (local_364 != 0x755e) goto switchD_0044fae8_caseD_7533;
        if (local_36c == 0) {
          FUN_004b5e70(&local_304,local_348);
          puVar11 = local_2ec;
          for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar11 = 0x20202020;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = 0x2020;
          puVar3 = (undefined1 *)FUN_004b6f30(local_348,0xd);
          if (puVar3 == (undefined1 *)0x0) {
            iVar6 = FUN_004b6bd0(local_348,local_348);
            puVar3 = local_2d7 + -iVar6;
          }
          else {
            *puVar3 = 0;
            iVar6 = FUN_004b6bd0(puVar3 + 1,puVar3 + 1);
            FUN_004b6ef0(local_2ac + -iVar6);
            iVar6 = FUN_004b6bd0(local_348,local_348);
            puVar3 = local_2d7 + -iVar6;
          }
          FUN_004b6ef0(puVar3);
          iVar6 = 0;
          puVar11 = local_2ec;
          do {
            FUN_005232d0(1,local_148 + iVar6);
            FUN_00523470(puVar11,0x15);
            iVar6 = iVar6 + 1;
            puVar11 = (undefined4 *)((int)puVar11 + 0x2b);
          } while (iVar6 < 2);
        }
        goto LAB_0044faa6;
      }
      local_364 = 0;
    }
    FUN_005237c0(1);
    iVar6 = FUN_005037c0(&local_364);
    if (iVar6 != 0) {
      FUN_0052b240(iVar6);
    }
    FUN_00523800(1);
  } while (local_364 != 0x754d);
switchD_0044fae8_caseD_754d:
  FUN_0044e6f0(0,param_1,1);
  param_1[2] = *param_1;
  param_1[1] = *param_1;
  FUN_00414240();
LAB_0045025c:
  FUN_00538810();
  FUN_00538a50(local_294);
  FUN_00526420(local_318);
  return;
}

