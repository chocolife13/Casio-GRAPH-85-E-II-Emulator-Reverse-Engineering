// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004673d0
// entry: 004673d0  size: 3709


undefined4 FUN_004673d0(int *param_1,int *param_2,short *param_3,int param_4,int param_5)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined *puVar10;
  uint local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [52];
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [52];
  undefined1 local_54 [12];
  undefined1 local_48 [72];
  
  local_8c = FUN_00526410();
  FUN_00526450(0x20);
  FUN_00538a00(local_54);
  FUN_00538980(0,0x11,local_48);
  FUN_005387c0();
  FUN_005383a0(0);
  local_d4 = 1;
  local_d0 = 0;
LAB_00467435:
  if (param_3[1] == 1) {
    uVar8 = 6;
  }
  else {
    uVar8 = 2;
  }
  FUN_0053c690(uVar8);
  FUN_00467380((int)*param_3);
  puVar5 = &DAT_00581730;
  puVar7 = &DAT_005ce7e0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar6 = 0;
  FUN_00538860(0,&DAT_005ce7e0);
  local_d8 = *param_1 - 1;
  iVar4 = 2;
  local_90 = 2;
  local_c8 = 0;
  local_cc = 0;
  if ((int)param_3[4] <= (int)local_d8) goto LAB_00467beb;
  do {
    iVar6 = local_cc;
    if (7 < local_90) goto LAB_00467c08;
    iVar6 = 0;
    iVar4 = *(int *)(param_5 + local_d8 * 4);
    if (DAT_0058163c != iVar4) {
      puVar5 = &DAT_0058163c;
      do {
        piVar1 = puVar5 + 1;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + 1;
      } while (*piVar1 != iVar4);
    }
    FUN_004b6ef0(local_c4,(&PTR_s_Data___005bed7c)[iVar6]);
    iVar3 = *param_2;
    iVar4 = local_d8 + 1;
    if (iVar4 == iVar3) {
      local_cc = iVar6;
    }
    iVar6 = *(int *)(param_5 + local_d8 * 4);
    switch(iVar6) {
    case 1:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581760;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      if (param_3[2] != 0) {
        pcVar9 = &DAT_005bf314;
        goto LAB_00467a4c;
      }
      FUN_004b6e70(local_c4,s_Variable_005bd514);
      break;
    default:
      uVar8 = FUN_004b22b0(param_4 + local_d8 * 0xc,local_88);
      FUN_004b6e70(local_c4,uVar8);
      if (local_d8 + 1 == *param_2) {
        local_c8 = 1;
      }
      break;
    case 0xc:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581820;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      if (param_3[5] == 1) {
        FUN_004b6e70(local_c4,&DAT_005bf310);
      }
      else {
        FUN_004b6e70(local_c4,&DAT_005bf30c);
      }
      break;
    case 0x1a:
    case 0x28:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581940;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      if (param_3[0xb] != 0) {
        FUN_004b6e70(local_c4,&DAT_005bf314);
        iVar4 = (int)param_3[0xb];
        goto LAB_00467864;
      }
      FUN_004b6e70(local_c4,&DAT_005a91bc);
      break;
    case 0x1b:
    case 0x1e:
    case 0x1f:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_005817c0;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      FUN_004b6e70(local_c4,&DAT_005bf314);
      switch(*(undefined4 *)(param_5 + local_d8 * 4)) {
      case 0x1b:
      case 0x1e:
        sVar2 = param_3[9];
        goto LAB_00467730;
      default:
        sVar2 = param_3[7];
LAB_00467730:
        FUN_0055c2fe((int)sVar2,local_88,10);
        FUN_004b6e70(local_c4,local_88);
        break;
      case 0x1f:
        FUN_0055c2fe((int)param_3[10],local_88,10);
        FUN_004b6e70(local_c4,local_88);
        break;
      case 0x25:
      case 0x27:
        FUN_0055c2fe((int)param_3[8],local_88,10);
        FUN_004b6e70(local_c4,local_88);
      }
      break;
    case 0x1c:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581850;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      FUN_004b6e70(local_c4,&DAT_005bf314);
      iVar4 = (int)param_3[6];
LAB_00467864:
      FUN_0055c2fe(iVar4,local_88,10);
      FUN_004b6e70(local_c4,local_88);
      break;
    case 0x1d:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581880;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      FUN_0055c2fe((int)param_3[0xf],local_88,10);
      FUN_004b6e70(local_c4,local_88);
      break;
    case 0x21:
    case 0x34:
      break;
    case 0x22:
    case 0x33:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581790;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      if ((1 < param_3[3]) || (param_3[3] < -1)) {
        param_3[3] = 0;
      }
      FUN_004b6e70(local_c4,(&PTR_DAT_005bee70)[param_3[3]]);
      switch(*(undefined4 *)(param_5 + local_d8 * 4)) {
      case 0x22:
        FUN_004b6e70(local_c4,&DAT_005bf2f8);
        break;
      case 0x33:
        pcVar9 = (char *)&DAT_005a91c0;
        goto LAB_00467a4c;
      case 0x39:
        FUN_004b6e70(local_c4,&DAT_005bf2f4);
        break;
      case 0x3a:
        pcVar9 = &DAT_005bf2f0;
LAB_00467a4c:
        FUN_004b6e70(local_c4,pcVar9);
        break;
      case 0x3b:
        FUN_004b6e70(local_c4,&DAT_005bf2e8);
        break;
      case 0x3c:
        FUN_004b6e70(local_c4,&DAT_005bf2ec);
      }
      break;
    case 0x29:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581970;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      if (param_3[0xc] != 0) {
        FUN_004b6e70(local_c4,&DAT_005bf314);
        iVar4 = (int)param_3[0xc];
        goto LAB_00467864;
      }
      FUN_004b6e70(local_c4,&DAT_005a91bc);
      break;
    case 0x31:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_005819a0;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      FUN_004b6e70(local_c4,s_Mat_A_005bf2fc);
      sVar2 = param_3[0xd];
      iVar4 = FUN_004b6ca0(local_c4);
      local_c4[iVar4 + -1] = (char)sVar2 + '@';
      break;
    case 0x32:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_005819d0;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      FUN_004b6e70(local_c4,s_Mat_A_005bf2fc);
      sVar2 = param_3[0xe];
      iVar4 = FUN_004b6ca0(local_c4);
      local_c4[iVar4 + -1] = (char)sVar2 + '@';
      break;
    case 0x3d:
    case 0x41:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581730 + ((-(uint)(iVar6 != 0x3d) & 8) + 8) * 0xc;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      if (param_3[0x11] == 0) {
        pcVar9 = &DAT_005bf2e0;
        goto LAB_00467a4c;
      }
      FUN_004b6e70(local_c4,&DAT_005bf314);
      FUN_0055c2fe((int)param_3[0x11],local_88,10);
      FUN_004b6e70(local_c4,local_88);
      break;
    case 0x3e:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581a60;
LAB_00467aa0:
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      break;
    case 0x3f:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581a90;
        goto LAB_00467aa0;
      }
      break;
    case 0x40:
      if (iVar4 == iVar3) {
        puVar5 = &DAT_00581a00;
        puVar7 = &DAT_005ce7e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00538860(0,&DAT_005ce7e0);
      }
      sVar2 = param_3[0x10];
      if (sVar2 == -1) {
        FUN_004b6e70(local_c4,&DAT_005bf00c);
      }
      else if (sVar2 == 0) {
        FUN_004b6e70(local_c4,s_Central_005bf304);
      }
      else if (sVar2 == 1) {
        pcVar9 = s_Right_005bf004;
        goto LAB_00467a4c;
      }
    }
    iVar4 = local_90;
    FUN_005232d0(1,local_90);
    if ((*param_2 - *param_1) + 1 == iVar4 + -1) {
      FUN_00523490(local_c4);
    }
    else {
      FUN_00523470(local_c4,0x14);
    }
    FUN_005232d0(0x15,iVar4);
    FUN_004b6ef0(local_c4,&DAT_0058172c);
    if (iVar4 == 2) {
      if (*param_1 != 1) {
        puVar10 = &DAT_005beb20;
LAB_00467b8e:
        FUN_004b6ef0(local_c4,puVar10);
      }
    }
    else if ((iVar4 == 7) && (*param_1 + 6 <= (int)param_3[4])) {
      puVar10 = &DAT_005beb1c;
      goto LAB_00467b8e;
    }
    if ((*param_2 - *param_1) + 1 == iVar4 + -1) {
      FUN_00523490(local_c4);
    }
    else {
      FUN_00523470(local_c4,0x15);
    }
    local_d8 = local_d8 + 1;
    local_90 = iVar4 + 1;
    iVar4 = local_90;
    iVar6 = local_cc;
  } while ((int)local_d8 < (int)param_3[4]);
  for (; iVar4 < 8; iVar4 = iVar4 + 1) {
LAB_00467beb:
    FUN_005232d0(1,iVar4);
    FUN_00523470(&DAT_005cd010,0x15);
  }
LAB_00467c08:
  if ((local_d4 != 0) || (local_d0 != 0x7536)) {
    FUN_005383e0(0);
  }
  FUN_00538b30();
  local_d4 = FUN_00526620(&local_d0);
  if (local_d4 != 0) goto code_r0x00467c3f;
  if (0x7531 < local_d0) {
    switch(local_d0) {
    case 0x7532:
      uVar8 = 3;
      goto LAB_00468211;
    case 0x7534:
      uVar8 = 4;
      goto LAB_00468211;
    case 0x7542:
      if (*param_2 < 2) {
        iVar4 = (int)param_3[4];
        *param_2 = iVar4;
        if (6 < iVar4) {
          *param_1 = iVar4 + -5;
          FUN_0046e270(param_3);
          goto LAB_00467435;
        }
      }
      else {
        iVar4 = *param_2 + -1;
        *param_2 = iVar4;
        if (iVar4 < *param_1) {
          *param_1 = *param_1 + -1;
          FUN_0046e270(param_3);
          goto LAB_00467435;
        }
      }
      break;
    case 0x7545:
      goto switchD_00468007_caseD_7545;
    case 0x7547:
      if ((int)param_3[4] <= *param_2) {
        *param_1 = 1;
        *param_2 = 1;
        FUN_0046e270(param_3);
        goto LAB_00467435;
      }
      iVar4 = *param_2 + 1;
      *param_2 = iVar4;
      if (*param_1 + 6 <= iVar4) {
        *param_1 = *param_1 + 1;
        FUN_0046e270(param_3);
        goto LAB_00467435;
      }
      break;
    case 0x754d:
      uVar8 = 2;
      param_3[1] = 0;
      goto LAB_00468211;
    case 0x754e:
      iVar4 = FUN_0052eb10(0);
      if (iVar4 == 0) {
        param_3[1] = 0;
      }
      break;
    case 0x7555:
      FUN_0052d2d0(s__STAT_005be2bc,&local_d8);
      if (local_d8 == 1) {
        param_3[1] = 0;
        FUN_0046e270(param_3);
        goto LAB_00467435;
      }
      break;
    case 0x7557:
      uVar8 = 6;
      goto LAB_00468211;
    }
switchD_00467ccd_default:
    FUN_0046e270(param_3);
    goto LAB_00467435;
  }
  if (local_d0 == 0x7531) {
switchD_00468007_caseD_7545:
    if (local_c8 != 1) goto switchD_00467ccd_default;
    if (local_d0 == 0x7531) {
      local_d4 = 1;
      local_d0 = FUN_00526040();
    }
    local_d8 = (uint)((&DAT_0058163c)[iVar6] == 0xb);
    iVar4 = FUN_00469ea0(local_d4,local_d0,param_1,param_2,param_4 + -0xc + *param_2 * 0xc,
                         (&PTR_s_Data___005bed7c)[iVar6],(&DAT_0058163c)[iVar6],param_3,local_d8);
    if (iVar4 == -1) {
LAB_004681e8:
      uVar8 = 2;
LAB_00468211:
      FUN_00526420(local_8c);
      FUN_00538810();
      FUN_005389c0(0,0x11,local_48);
      FUN_00538a50(local_54);
      return uVar8;
    }
    if (iVar4 == 0) {
      param_3[1] = 0;
      FUN_0046e270(param_3);
      goto LAB_00467435;
    }
    goto switchD_00467ccd_default;
  }
  switch(local_d0) {
  case 1:
    uVar8 = 1;
    param_3[2] = 1;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00468211;
  case 2:
    param_3[2] = 0;
    break;
  case 3:
    param_3[3] = 0;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 4:
    param_3[3] = 1;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 5:
    param_3[3] = -1;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 6:
    iVar4 = FUN_00469ae0(&local_d8,0x1a);
    if (iVar4 != 0) goto switchD_00467d44_caseD_1c;
    switch((&DAT_0058163c)[iVar6]) {
    case 0x1b:
    case 0x1e:
      param_3[9] = (short)local_d8;
      param_3[1] = 0;
      FUN_0046e270(param_3);
      goto LAB_00467435;
    case 0x1f:
      param_3[10] = (short)local_d8;
      param_3[1] = 0;
      FUN_0046e270(param_3);
      goto LAB_00467435;
    case 0x23:
    case 0x24:
    case 0x26:
      param_3[7] = (short)local_d8;
      param_3[1] = 0;
      FUN_0046e270(param_3);
      goto LAB_00467435;
    case 0x25:
    case 0x27:
      param_3[8] = (short)local_d8;
      param_3[1] = 0;
      FUN_0046e270(param_3);
      goto LAB_00467435;
    }
    goto switchD_00467d44_caseD_1c;
  case 7:
  case 0x12:
  case 0x13:
    param_3[0xb] = 0;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 8:
    iVar4 = FUN_00469ae0(&local_d8,0x1a);
    if (iVar4 == 0) {
      param_3[0xb] = (short)local_d8;
    }
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 9:
    param_3[5] = 1;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 10:
    param_3[5] = 0;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0xb:
    iVar4 = FUN_00469ae0(&local_d8,0x1a);
    if (iVar4 == 0) {
      param_3[6] = (short)local_d8;
    }
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0xc:
    uVar8 = 1;
    param_3[0xf] = 1;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00468211;
  case 0xd:
    param_3[0xf] = 2;
    break;
  case 0xe:
    param_3[0x11] = 0;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0xf:
    iVar4 = FUN_00469ae0(&local_d8,0x1a);
    if (iVar4 == 0) {
      param_3[0x11] = (short)local_d8;
    }
switchD_00467d44_caseD_1c:
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x10:
    uVar8 = 4;
    goto LAB_00468211;
  case 0x11:
    uVar8 = 5;
    FUN_0046e270(param_3);
    goto LAB_00468211;
  case 0x14:
    iVar4 = FUN_00469ae0(&local_d8,0x1a);
    if (iVar4 == 0) {
      param_3[0xb] = (short)local_d8;
    }
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x15:
    param_3[0xc] = 0;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x16:
    iVar4 = FUN_00469ae0(&local_d8,0x1a);
    if (iVar4 == 0) {
      param_3[0xc] = (short)local_d8;
    }
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x17:
    iVar4 = FUN_00469c30(&local_d8);
    if (iVar4 == 0) {
      param_3[0xd] = (short)local_d8;
    }
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x18:
    FUN_00437ef0();
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x19:
    iVar4 = FUN_00469c30(&local_d8);
    if (iVar4 == 0) {
      param_3[0xe] = (short)local_d8;
    }
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x1a:
    param_3[0x10] = -1;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x1b:
    param_3[0x10] = 1;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x1c:
    param_3[0x10] = 0;
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  case 0x1d:
    iVar4 = FUN_00469ae0(&local_d8,0x16);
    if (iVar4 == 0) {
      param_3[0x11] = (short)local_d8;
    }
    param_3[1] = 0;
    FUN_0046e270(param_3);
    goto LAB_00467435;
  default:
    goto switchD_00467ccd_default;
  }
  uVar8 = 1;
  param_3[1] = 0;
  FUN_0046e270(param_3);
  goto LAB_00468211;
code_r0x00467c3f:
  if (local_c8 == 1) {
    local_d8 = (uint)((&DAT_0058163c)[iVar6] == 0xb);
    iVar4 = FUN_00469ea0(local_d4,local_d0,param_1,param_2,param_4 + -0xc + *param_2 * 0xc,
                         (&PTR_s_Data___005bed7c)[iVar6],(&DAT_0058163c)[iVar6],param_3,local_d8);
    if (iVar4 == -1) goto LAB_004681e8;
    if (iVar4 == 0) {
      param_3[1] = 0;
    }
  }
  goto LAB_00467435;
}

