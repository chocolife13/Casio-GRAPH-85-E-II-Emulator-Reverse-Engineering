// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00438c70
// entry: 00438c70  size: 2946


undefined4 FUN_00438c70(uint param_1,uint *param_2)

{
  undefined1 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined2 local_54;
  undefined1 local_52;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 uStack_2c;
  undefined1 local_2b;
  undefined2 uStack_2a;
  undefined1 uStack_28;
  undefined1 local_24 [36];
  
  puVar2 = param_2;
  local_4c = param_2[7];
  local_38 = param_2[6];
  local_50 = param_2[0x16];
  local_40 = 0;
  param_2[0x12] = 0;
  param_2[0x11] = 0;
  local_3c = local_4c;
  local_30 = local_38;
  if (param_2[0xb] == 1) {
    FUN_0043aa70(param_2);
    return 0;
  }
  if (param_2[9] == 1) {
    if (param_1 == 0xbb) {
      return 0;
    }
    FUN_00414240();
    FUN_00438a60(puVar2);
    puVar2[0x15] = 1;
    puVar2[10] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
  }
  uVar4 = FUN_004b7550(puVar2[0xb7]);
  iVar5 = FUN_004b7370(param_1 >> 8);
  if (iVar5 == 0) {
    if (0xfe < uVar4) {
      if (puVar2[4] == puVar2[5]) {
        return 0;
      }
      iVar5 = FUN_005262f0();
      if (iVar5 != 1) {
        return 0;
      }
      if (param_1 == 0xd) {
        return 0;
      }
    }
  }
  else if (0xfd < uVar4) {
    if (puVar2[4] == puVar2[5]) {
      return 0;
    }
    iVar5 = FUN_004b7370(*(undefined1 *)((puVar2[4] - 1) + puVar2[0xb7]));
    if ((iVar5 == 0) && (uVar4 != 0xfe)) {
      return 0;
    }
    iVar5 = FUN_005262f0();
    if (iVar5 != 1) {
      return 0;
    }
  }
  iVar5 = FUN_00438b20(param_1,puVar2);
  if (iVar5 == -1) {
    return 0;
  }
  if (puVar2[0xc] == 1) {
    switch(param_1) {
    case 0x81:
      param_1 = 0x1d;
      break;
    case 0x82:
      param_1 = 0x1e;
      break;
    case 0x83:
      param_1 = 0x1f;
      break;
    default:
      goto switchD_00438db7_caseD_84;
    case 0x85:
      param_1 = 0x1c;
      break;
    case 0x95:
      param_1 = 0x1b;
    }
  }
  else {
switchD_00438db7_caseD_84:
    if (param_1 == 0xd) {
      iVar5 = FUN_005262f0();
      if ((iVar5 == 1) && (puVar2[0x10] == 0)) {
        if (puVar2[1] != *puVar2) {
          do {
            iVar5 = FUN_0043c1d0((puVar2[7] - puVar2[3]) + puVar2[2],puVar2);
            if ((*(char *)(iVar5 + puVar2[0xb6] + -1 + puVar2[0x16]) == '\f') ||
               (iVar5 = FUN_0043c1d0((puVar2[7] - puVar2[3]) + puVar2[2],puVar2),
               *(char *)(iVar5 + puVar2[0xb6] + -1 + puVar2[0x16]) == '\r')) break;
            FUN_0043a310(0x7545,puVar2,0);
          } while (puVar2[1] != *puVar2);
        }
        iVar5 = FUN_0043c1d0((puVar2[2] - puVar2[3]) + puVar2[7],puVar2);
        if (*(char *)(iVar5 + puVar2[0xb6] + -1 + puVar2[0x16]) == '\f') {
          param_1 = 0xc;
        }
      }
    }
    else if (param_1 != 0xc) goto LAB_00438eee;
    local_40 = 0x15;
  }
LAB_00438eee:
  FUN_004b79f0(param_1,local_24);
  uVar4 = FUN_004b6ca0(local_24);
  local_44 = puVar2[1];
  local_48 = uVar4;
  if (local_44 == *puVar2) {
    puVar2[1] = local_44 + uVar4;
    *puVar2 = *puVar2 + uVar4;
    uVar6 = FUN_004071b0(puVar2[0xb6],local_44 + uVar4 + 0xff & 0xffffff00);
    puVar2[0xb6] = uVar6;
    if (uVar6 == 0) {
      FUN_0052b240(4);
      return 0xffffffff;
    }
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        puVar7 = local_24 + uVar6;
        uVar6 = uVar6 + 1;
        *(undefined1 *)((puVar2[0xb6] - uVar4) + puVar2[1] + -2 + uVar6) = *puVar7;
      } while (uVar6 < uVar4);
    }
  }
  else {
    iVar5 = FUN_005262f0();
    if (iVar5 == 1) {
      iVar5 = FUN_004b73a0((puVar2[4] - 1) + puVar2[0xb7]);
      if (iVar5 == 0) {
        iVar5 = puVar2[4] - 1;
      }
      else {
        iVar5 = puVar2[4] - 2;
      }
      iVar5 = FUN_00439aa0(iVar5,0x7545,0,puVar2);
      uVar6 = *puVar2 - 1;
      if (uVar6 < puVar2[1] - 1) {
        do {
          uVar6 = uVar6 + 1;
          *(undefined1 *)((puVar2[0xb6] - 1) + uVar6) =
               *(undefined1 *)(puVar2[0xb6] + iVar5 + -1 + uVar6);
        } while (uVar6 < puVar2[1] - 1);
      }
      uVar6 = puVar2[1];
      puVar2[1] = uVar6 - iVar5;
      uVar6 = FUN_004071b0(puVar2[0xb6],(uVar6 - iVar5) + 0xff & 0xffffff00);
      puVar2[0xb6] = uVar6;
      if (uVar6 == 0) {
        FUN_0052b240(4);
        return 0xffffffff;
      }
      *(undefined1 *)((uVar6 - 1) + puVar2[1]) = 0;
    }
    uVar6 = puVar2[1];
    puVar2[1] = uVar6 + uVar4;
    uVar6 = FUN_004071b0(puVar2[0xb6],uVar6 + uVar4 + 0xff & 0xffffff00);
    puVar2[0xb6] = uVar6;
    if (uVar6 == 0) {
      FUN_0052b240(4);
      return 0xffffffff;
    }
    uVar6 = puVar2[1] - 1;
    if (*puVar2 - 1 < uVar6) {
      do {
        uVar6 = uVar6 - 1;
        *(undefined1 *)(puVar2[0xb6] + 1 + uVar6) =
             *(undefined1 *)((puVar2[0xb6] - uVar4) + 1 + uVar6);
      } while (*puVar2 - 1 < uVar6);
    }
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        *(undefined1 *)(puVar2[0xb6] + *puVar2 + -1 + uVar6) = local_24[uVar6];
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
  }
  *(undefined1 *)((puVar2[0xb6] - 1) + puVar2[1]) = 0;
  uVar4 = puVar2[4];
  uVar9 = (undefined1)(param_1 >> 8);
  local_2b = uVar9;
  if (puVar2[5] == uVar4) {
    uVar15 = CONCAT13(uStack_28,CONCAT21(uStack_2a,uVar9));
    iVar5 = FUN_004b7370(uVar15);
    if (iVar5 == 0) {
      puVar2[5] = puVar2[5] + 1;
      puVar2[4] = puVar2[4] + 1;
    }
    else {
      puVar2[5] = puVar2[5] + 2;
      puVar2[4] = puVar2[4] + 2;
    }
    uVar4 = FUN_004071b0(puVar2[0xb7],puVar2[5] + 0xff & 0xffffff00);
    puVar2[0xb7] = uVar4;
    if (uVar4 == 0) {
      FUN_0052b240(4);
      return 0xffffffff;
    }
    iVar5 = FUN_004b7370(uVar15);
    *(undefined1 *)((puVar2[5] - 2) + puVar2[0xb7]) = (undefined1)param_1;
    if (iVar5 != 0) {
      *(undefined1 *)((puVar2[5] - 3) + puVar2[0xb7]) = uVar9;
    }
    goto LAB_004393c9;
  }
  iVar5 = FUN_005262f0();
  if (iVar5 == 2) {
    uVar15 = CONCAT13(uStack_28,CONCAT21(uStack_2a,local_2b));
    iVar5 = FUN_004b7370(uVar15);
    if (iVar5 == 0) {
      puVar2[5] = puVar2[5] + 1;
      puVar2[4] = puVar2[4] + 1;
    }
    else {
      puVar2[5] = puVar2[5] + 2;
      puVar2[4] = puVar2[4] + 2;
    }
    uVar6 = FUN_004071b0(puVar2[0xb7],puVar2[5] + 0xff & 0xffffff00);
    puVar2[0xb7] = uVar6;
    if (uVar6 == 0) {
      FUN_0052b240(4);
      return 0xffffffff;
    }
    iVar5 = FUN_004b7370(uVar15);
    if (iVar5 == 0) {
      uVar6 = puVar2[5] - 1;
      if (puVar2[4] - 2 < uVar6) {
        do {
          puVar7 = (undefined1 *)(uVar6 + puVar2[0xb7]);
          uVar6 = uVar6 - 1;
          *puVar7 = puVar7[-1];
        } while (puVar2[4] - 2 < uVar6);
      }
    }
    else {
      uVar6 = puVar2[5] - 1;
      if (puVar2[4] - 2 < uVar6) {
        do {
          puVar7 = (undefined1 *)(puVar2[0xb7] + uVar6);
          uVar6 = uVar6 - 1;
          *puVar7 = puVar7[-2];
        } while (puVar2[4] - 2 < uVar6);
      }
    }
  }
  else {
    iVar5 = FUN_004b7370(*(undefined1 *)((puVar2[4] - 1) + puVar2[0xb7]));
    uVar15 = CONCAT13(uStack_28,CONCAT21(uStack_2a,local_2b));
    if (iVar5 == 0) {
      iVar5 = FUN_004b7370(uVar15);
      if (iVar5 == 0) {
        uVar6 = puVar2[4] + 1;
LAB_00439392:
        puVar2[4] = uVar6;
      }
      else {
        uVar6 = puVar2[5];
        puVar2[5] = uVar6 + 1;
        puVar2[4] = puVar2[4] + 2;
        uVar6 = FUN_004071b0(puVar2[0xb7],uVar6 + 0x100 & 0xffffff00);
        puVar2[0xb7] = uVar6;
        if (uVar6 == 0) {
          FUN_0052b240(4);
          return 0xffffffff;
        }
        uVar6 = puVar2[5] - 1;
        if (puVar2[4] - 2 < uVar6) {
          do {
            puVar7 = (undefined1 *)(uVar6 + puVar2[0xb7]);
            uVar6 = uVar6 - 1;
            *puVar7 = puVar7[-1];
          } while (puVar2[4] - 2 < uVar6);
        }
      }
    }
    else {
      iVar5 = FUN_004b7370(uVar15);
      if (iVar5 != 0) {
        uVar6 = puVar2[4] + 2;
        goto LAB_00439392;
      }
      uVar6 = puVar2[4] + 1;
      if (uVar6 < puVar2[5] - 1) {
        do {
          puVar7 = (undefined1 *)(puVar2[0xb7] + uVar6);
          uVar6 = uVar6 + 1;
          puVar7[-1] = *puVar7;
        } while (uVar6 < puVar2[5] - 1);
      }
      uVar6 = puVar2[5];
      puVar2[5] = uVar6 - 1;
      puVar2[4] = puVar2[4] + 1;
      uVar6 = FUN_004071b0(puVar2[0xb7],uVar6 + 0xfe & 0xffffff00);
      puVar2[0xb7] = uVar6;
      if (uVar6 == 0) {
        FUN_0052b240(4);
        return 0xffffffff;
      }
    }
  }
  iVar5 = FUN_004b7370(uVar15);
  if (iVar5 == 0) {
    *(undefined1 *)((uVar4 - 1) + puVar2[0xb7]) = (undefined1)param_1;
  }
  else {
    *(undefined1 *)(uVar4 + puVar2[0xb7]) = (undefined1)param_1;
    *(undefined1 *)((uVar4 - 1) + puVar2[0xb7]) = uVar9;
  }
LAB_004393c9:
  *(undefined1 *)((puVar2[5] - 1) + puVar2[0xb7]) = 0;
  if (((6 < puVar2[7]) && (puVar2[0xd] == 1)) && (iVar5 = FUN_0043c020(puVar2), iVar5 == 1)) {
    puVar13 = puVar2 + 0x18;
    puVar2[7] = 7;
    puVar2[3] = 7;
    iVar5 = 6;
    puVar12 = puVar13;
    do {
      iVar5 = iVar5 + -1;
      puVar10 = (uint *)((int)puVar12 + 0x2a);
      puVar11 = puVar12;
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      *(short *)puVar11 = (short)*puVar10;
      puVar12 = (uint *)((int)puVar12 + 0x2a);
    } while (iVar5 != 0);
    puVar12 = puVar2 + 0x57;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = 0x20202020;
      puVar12 = puVar12 + 1;
    }
    *(undefined2 *)puVar12 = 0x2020;
    if (puVar2[0x10] == 0) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        FUN_005232d0(1,uVar4);
        FUN_00523470(puVar13,0x15);
        puVar13 = (uint *)((int)puVar13 + 0x2a);
      } while (uVar4 < 7);
    }
    puVar2[6] = 1;
    puVar2[0x16] = 1;
    FUN_005232d0(1,puVar2[7]);
  }
  uVar6 = puVar2[1];
  uVar4 = *puVar2 - 1;
  if (uVar6 == *puVar2) {
    uVar4 = uVar4 - local_48;
  }
  if (local_44 < uVar6) {
    local_44 = uVar6 - 1;
  }
  uVar14 = puVar2[7];
  uVar6 = uVar6 - 1;
  uStack_2c = (undefined1)uVar14;
  local_2b = (undefined1)(uVar14 >> 8);
  uStack_2a = (undefined2)(uVar14 >> 0x10);
  uVar14 = local_30;
  local_34 = uVar4;
  if (uVar4 < uVar6) {
    do {
      local_54 = 0;
      local_52 = 0;
      if (uVar4 < uVar6) {
        iVar5 = FUN_004b6ab0(*(undefined1 *)(puVar2[0xb6] + uVar4));
        if (iVar5 == 0) {
          local_54 = CONCAT11(local_54._1_1_,*(undefined1 *)(puVar2[0xb6] + uVar4));
          *(undefined1 *)(puVar2[0x16] + puVar2[7] * 0x2a + 0x35 + (int)puVar2) =
               *(undefined1 *)(puVar2[0xb6] + uVar4);
        }
        else {
          uVar9 = *(undefined1 *)(puVar2[0xb6] + uVar4);
          uVar1 = *(undefined1 *)(puVar2[0xb6] + uVar4 + 1);
          local_54 = CONCAT11(uVar1,uVar9);
          *(undefined1 *)(puVar2[0x16] + puVar2[7] * 0x2a + 0x35 + (int)puVar2) = uVar9;
          uVar4 = uVar4 + 1;
          *(undefined1 *)(puVar2[0x16] + puVar2[7] * 0x2a + 0x36 + (int)puVar2) = uVar1;
          puVar2[0x16] = puVar2[0x16] + 1;
        }
      }
      else {
        local_54 = 0x20;
      }
      FUN_005232d0(puVar2[6],puVar2[7]);
      if (puVar2[0x10] == 0) {
        FUN_005233e0(&local_54);
      }
      if ((((char)local_54 == '\r') || ((char)local_54 == '\f')) || (uVar4 == puVar2[1] - 2)) {
        param_2 = (uint *)((uint)param_2 & 0xffff0000);
        if (puVar2[0x10] == 0) {
          uVar6 = puVar2[6];
          while (uVar6 = uVar6 + 1, uVar6 < 0x16) {
            param_2._1_3_ = (undefined3)((uint)param_2 >> 8);
            param_2 = (uint *)CONCAT31(param_2._1_3_,0x20);
            FUN_005232d0(uVar6,puVar2[7]);
            FUN_005233e0(&param_2);
          }
          if (puVar2[7] + 1 < 8) {
            uVar6 = 1;
            do {
              param_2 = (uint *)CONCAT31(param_2._1_3_,0x20);
              FUN_005232d0(uVar6,puVar2[7] + 1);
              FUN_005233e0(&param_2);
              uVar6 = uVar6 + 1;
            } while (uVar6 < 0x16);
          }
        }
        for (uVar6 = puVar2[0x16]; uVar6 < 0x2a; uVar6 = uVar6 + 1) {
          *(undefined1 *)(uVar6 + puVar2[7] * 0x2a + 0x36 + (int)puVar2) = 0x20;
        }
        if (puVar2[7] < 7) {
          uVar6 = 0;
          do {
            iVar5 = uVar6 + puVar2[7] * 0x2a;
            uVar6 = uVar6 + 1;
            *(undefined1 *)(iVar5 + 0x60 + (int)puVar2) = 0x20;
          } while (uVar6 < 0x2a);
        }
      }
      uVar3 = local_44;
      uVar6 = puVar2[6];
      puVar2[6] = uVar6 + 1;
      puVar2[0x16] = puVar2[0x16] + 1;
      if (((0x15 < uVar6 + 1) || ((char)local_54 == '\r')) || ((char)local_54 == '\f')) {
        uVar6 = puVar2[7];
        puVar2[6] = 1;
        puVar2[0x16] = 1;
        puVar2[7] = uVar6 + 1;
        if (7 < uVar6 + 1) {
          if (puVar2[1] == *puVar2) {
            puVar2[7] = 7;
            if (puVar2[0x10] == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = 1;
            }
          }
          else {
            if (((CONCAT22(uStack_2a,CONCAT11(local_2b,uStack_2c)) == 7) && (param_1 == 0xd)) &&
               (iVar5 = FUN_005262f0(), iVar5 == 1)) {
              local_3c = 7;
              local_4c = 7;
            }
            iVar5 = FUN_004b6bd0(local_24);
            uVar6 = local_38;
            uVar4 = uVar3;
            if ((iVar5 + local_40 + local_38 < 0x16) || (local_3c < 7)) goto LAB_0043976e;
            iVar5 = FUN_004b6bd0(local_24);
            if (iVar5 + uVar6 < 0x16) {
              local_50 = puVar2[0x16];
              uVar14 = puVar2[6];
            }
            else {
              iVar5 = uVar6 - 0x15;
              iVar8 = FUN_004b6bd0(local_24);
              uVar14 = iVar8 + iVar5;
              iVar8 = FUN_004b6bd0(local_24);
              local_50 = iVar8 + iVar5;
            }
            puVar2[7] = 7;
            if (puVar2[0x10] == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = 1;
            }
          }
          FUN_00439830(uVar15,puVar2);
        }
      }
LAB_0043976e:
      if (uVar4 - local_34 == local_48 - 1) {
        local_50 = puVar2[0x16];
        local_4c = puVar2[7];
        uVar14 = puVar2[6];
      }
      uVar4 = uVar4 + 1;
      uVar6 = puVar2[1] - 1;
    } while (uVar4 < uVar6);
  }
  if (puVar2[1] != *puVar2) {
    puVar2[0x16] = local_50;
    puVar2[6] = uVar14;
    puVar2[7] = local_4c;
    *puVar2 = *puVar2 + local_48;
  }
  FUN_005232d0(puVar2[6],puVar2[7]);
  FUN_00527030();
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  if (puVar2[10] == 0) {
    puVar2[8] = 0;
  }
  return 0;
}

