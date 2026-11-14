// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00468630
// entry: 00468630  size: 1384


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00468630(int *param_1,int param_2,int param_3,short *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [52];
  uint local_4c;
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [52];
  
  FUN_00538980(0,0,local_38);
  local_3c = FUN_00526410();
  FUN_00526420(7);
  DAT_005cec00 = DAT_00581b60;
  _DAT_005cec04 = DAT_00581b64;
  puVar2 = &DAT_005cec00;
  puVar7 = &DAT_005cec08;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = 6;
  FUN_00538860(0,&DAT_005cec00);
  FUN_005387f0(0);
  local_90 = 0;
  if (0 < *param_1) {
    do {
      FUN_0046e7f0(param_1 + local_90 * 3 + 2,param_4,*(undefined4 *)(param_2 + local_90 * 4));
      local_90 = local_90 + 1;
    } while (local_90 < *param_1);
  }
  local_84 = 6;
  local_88 = 7;
  local_8c = 0;
switchD_00468aee_caseD_7548:
  do {
    do {
      FUN_00467380((int)*param_4);
      if (*param_4 == 0x32) {
        _DAT_005cec28 = DAT_00581b70;
        _DAT_005cec2c = DAT_00581b74;
      }
      else if (*param_4 == 0x3b) {
        _DAT_005cec28 = DAT_00581b68;
        _DAT_005cec2c = DAT_00581b6c;
      }
      FUN_00538b30();
      local_90 = local_8c;
      iVar4 = 2;
      if (*param_1 <= local_8c) goto LAB_00468a13;
      do {
        if (7 < iVar4) goto LAB_00468a30;
        local_80[0] = 0;
        iVar6 = param_3;
        if (0 < param_3) {
          do {
            FUN_004b6e70(local_80,&DAT_00581ac0);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar5 = 0;
        iVar6 = *(int *)(param_2 + local_90 * 4);
        if (DAT_00581ac4 != iVar6) {
          puVar2 = &DAT_00581ac4;
          do {
            piVar1 = puVar2 + 1;
            puVar2 = puVar2 + 1;
            iVar5 = iVar5 + 1;
          } while (*piVar1 != iVar6);
        }
        FUN_004b6e70(local_80,(&PTR_DAT_005bee84)[iVar5]);
        iVar6 = FUN_004b6bd0(local_80);
        if (iVar6 < 5) {
          iVar6 = 5 - iVar6;
          do {
            FUN_004b6e70(local_80,&DAT_00581ac0);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        switch(*(undefined4 *)(param_2 + local_90 * 4)) {
        case 1:
        case 2:
        case 3:
        case 0x16:
        case 0x19:
        case 0x20:
          if ((1 < param_1[1]) || (param_1[1] < -1)) {
            param_1[1] = 0;
          }
          break;
        default:
          FUN_004b6e70(local_80,&DAT_005be9e0);
          FUN_0046e890(param_1 + local_90 * 3 + 2,local_48);
          uVar3 = FUN_004b22b0(local_48,local_34);
          FUN_004b6e70(local_80,uVar3);
          goto switchD_0046885d_caseD_4;
        }
        FUN_004b6e70(local_80,(&PTR_DAT_005bee7c)[param_1[1]]);
        switch(*(undefined4 *)(param_2 + local_90 * 4)) {
        case 1:
        case 3:
          FUN_0046e890(param_1 + 2,local_48);
          uVar3 = FUN_004b22b0(local_48,local_34);
          FUN_004b6e70(local_80,uVar3);
          break;
        case 2:
          puVar8 = &DAT_005bf2ec;
          goto LAB_00468899;
        case 0x16:
          puVar8 = &DAT_005bf2f8;
LAB_00468899:
          FUN_004b6e70(local_80,puVar8);
          break;
        case 0x19:
          local_80[0] = 0;
          iVar6 = param_3;
          if (0 < param_3) {
            do {
              FUN_004b6e70(local_80,&DAT_00581ac0);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          FUN_004b6e70(local_80,&DAT_005befec);
          FUN_004b6e70(local_80,(&PTR_DAT_005bee7c)[param_1[1]]);
          FUN_004b6e70(local_80,&DAT_005bf31c);
          FUN_004b6e70(local_80,(&PTR_DAT_005bee7c)[param_1[1]]);
          FUN_004b6e70(local_80,&DAT_005a91c0);
          break;
        case 0x20:
          FUN_004b6e70(local_80,&DAT_005bf2f0);
        }
switchD_0046885d_caseD_4:
        FUN_005232d0(1,iVar4);
        FUN_00523470(local_80,0x14);
        FUN_004b6ef0(local_80,&DAT_00581ac0);
        if (iVar4 == 2) {
          if (local_8c != 0) {
            puVar8 = &DAT_005beb20;
LAB_004689e2:
            FUN_004b6ef0(local_80,puVar8);
          }
        }
        else if ((iVar4 == 7) && (local_88 <= *param_1)) {
          puVar8 = &DAT_005beb1c;
          goto LAB_004689e2;
        }
        FUN_00523470(local_80,0x15);
        local_90 = local_90 + 1;
        iVar4 = iVar4 + 1;
      } while (local_90 < *param_1);
      for (; iVar4 < 8; iVar4 = iVar4 + 1) {
LAB_00468a13:
        FUN_005232d0(1,iVar4);
        FUN_00523470(&DAT_005cd010,0x15);
      }
LAB_00468a30:
      iVar4 = FUN_00526620(&local_4c);
    } while (iVar4 != 0);
    if (0x7542 < local_4c) {
      switch(local_4c) {
      case 0x7547:
        if (local_84 < *param_1) {
          local_8c = local_8c + 1;
          local_88 = local_88 + 1;
          local_84 = local_84 + 1;
        }
      default:
        goto switchD_00468aee_caseD_7548;
      case 0x754d:
switchD_00468aee_caseD_754d:
        uVar3 = 2;
        goto LAB_00468b66;
      case 0x754e:
        iVar4 = FUN_0052eb10(0);
        if (iVar4 != 0) goto switchD_00468aee_caseD_7548;
        break;
      case 0x7555:
        FUN_0052d2d0(s__STAT_005be2bc,&local_90);
        if (local_90 != 1) goto switchD_00468aee_caseD_7548;
      }
LAB_00468b61:
      uVar3 = 3;
      goto LAB_00468b66;
    }
    if (local_4c == 0x7542) {
      if (0 < local_8c) {
        local_8c = local_8c + -1;
        local_88 = local_88 + -1;
        local_84 = local_84 + -1;
      }
    }
    else if (local_4c < 0x7533) {
      if (local_4c == 0x7532) goto LAB_00468b61;
      if (local_4c == 1) {
        iVar4 = FUN_0046a090(param_1 + 0xe,param_1 + 0x11);
        if (iVar4 == -1) goto switchD_00468aee_caseD_754d;
      }
      else if (local_4c == 2) {
        FUN_00437ef0();
      }
    }
    else if ((local_4c == 0x7534) || (local_4c == 0x753f)) {
      uVar3 = 4;
LAB_00468b66:
      FUN_00538810();
      FUN_00526440();
      FUN_00526420(local_3c);
      FUN_005389c0(0,0,local_38);
      return uVar3;
    }
  } while( true );
}

