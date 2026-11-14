// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00549cc0
// entry: 00549cc0  size: 2877


/* WARNING: Removing unreachable block (ram,0x0054a649) */

undefined4 FUN_00549cc0(short *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_150;
  short local_14c;
  short local_148;
  short local_146;
  short local_144;
  short local_142;
  int local_13c;
  int local_138;
  undefined4 local_134;
  uint local_130;
  undefined4 local_12c;
  int local_128;
  undefined1 local_124 [4];
  undefined1 local_120 [32];
  undefined1 local_100 [256];
  
  iVar9 = 0;
  sVar2 = 0;
  FUN_00538980(0,7,local_120);
  iVar8 = 0;
  do {
    puVar12 = (undefined4 *)((int)&DAT_00599a20 + iVar9);
    puVar10 = (undefined4 *)((int)&DAT_005d3090 + iVar9);
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_00538860(iVar8,(undefined4 *)((int)&DAT_005d3090 + iVar9));
    iVar9 = iVar9 + 0x30;
    iVar8 = iVar8 + 1;
  } while (iVar9 < 0x180);
  FUN_005383a0(0);
  FUN_005382b0();
  local_138 = 0;
  iVar8 = local_13c;
  iVar9 = local_13c;
switchD_00549e03_caseD_2:
  do {
    do {
      FUN_0054d3b0(param_1,0,2,0,0);
      FUN_0054da30(param_1,sVar2,0);
      if (*param_2 == 0) {
        uVar11 = 2;
      }
      else {
        uVar11 = 6;
      }
      FUN_0053c690(uVar11);
      if ((param_1[3] == 0) && (param_1[4] == 0)) {
        FUN_005382b0();
        FUN_005383a0(7);
        local_138 = 1;
      }
      else if (local_138 != 2) {
        FUN_005382b0();
        FUN_005383a0(0);
        local_138 = 2;
      }
      FUN_00538b30();
      iVar7 = FUN_00526620(&local_130);
    } while (iVar7 != 0);
    if (0x7542 < local_130) {
      switch(local_130) {
      case 0x7544:
        if (sVar2 == 0) {
          if (param_1[3] < 1) goto switchD_00549e03_caseD_2;
          sVar4 = param_1[3] + -1;
          param_1[3] = sVar4;
        }
        else {
          if ((sVar2 != 1) || (param_1[3] < 2)) goto switchD_00549e03_caseD_2;
          sVar4 = param_1[3] + -1;
          param_1[8] = param_1[8] + -1;
          param_1[3] = sVar4;
        }
        if ((0 < sVar4) && (sVar4 < param_1[1])) {
          param_1[1] = param_1[1] + -1;
        }
        goto switchD_00549e03_caseD_2;
      case 0x7545:
        sVar4 = param_1[3];
        if ((sVar4 < 0x1a) && (sVar4 != 0)) {
          param_1[3] = sVar4 + 1;
          if (sVar2 == 1) {
            param_1[8] = param_1[8] + 1;
          }
          if (param_1[1] + 3 < (int)(short)(sVar4 + 1)) {
            param_1[1] = param_1[1] + 1;
          }
          goto switchD_00549e03_caseD_2;
        }
        if ((sVar2 != 0) || (sVar4 != 0)) goto switchD_00549e03_caseD_2;
        param_1[3] = 1;
        sVar4 = param_1[4];
        break;
      default:
        goto switchD_00549e03_caseD_2;
      case 0x7547:
        sVar4 = param_1[4];
        if ((sVar4 < 999) && (sVar4 != 0)) {
          param_1[4] = sVar4 + 1;
          if (sVar2 == 1) {
            param_1[9] = param_1[9] + 1;
          }
          if (param_1[2] + -1 + (int)*param_1 < (int)(short)(sVar4 + 1)) {
            param_1[2] = param_1[2] + 1;
          }
          goto switchD_00549e03_caseD_2;
        }
        if ((sVar2 != 0) || (sVar4 != 0)) goto switchD_00549e03_caseD_2;
        sVar4 = param_1[3];
        param_1[4] = 1;
        break;
      case 0x754d:
        goto switchD_0054a542_caseD_754d;
      case 0x754e:
        *param_2 = 0;
        FUN_0052eb10(0);
        goto switchD_00549e03_caseD_2;
      case 0x7555:
        *param_2 = 0;
        FUN_0052d2d0(s__SSHEET_005be210,local_124);
        goto switchD_00549e03_caseD_2;
      case 0x7557:
        if (*param_2 == 1) {
          uVar11 = FUN_0054f340(0,0);
          switch(uVar11) {
          case 0xffffffe5:
          case 0xffffffeb:
            *param_2 = 0;
            break;
          case 0xffffffe9:
            *param_2 = 1;
            break;
          case 0xffffffea:
            uVar11 = 0xffffffff;
            *param_2 = 0;
            goto LAB_0054a7d0;
          }
        }
        goto switchD_00549e03_caseD_2;
      case 0x7562:
        sVar4 = param_1[3];
        if (sVar4 == 0) {
          if (param_1[4] == 0) goto switchD_00549e03_caseD_2;
          param_1[5] = 0;
          param_1[0xc] = param_1[4];
          param_1[0xf] = 1;
          param_1[0xb] = 1;
          param_1[0xd] = 0x1a;
          param_1[0xe] = param_1[4];
        }
        else if (param_1[4] == 0) {
          param_1[5] = 0;
          param_1[0xf] = 1;
          param_1[0xb] = sVar4;
          param_1[0xc] = 1;
          param_1[0xd] = sVar4;
          param_1[0xe] = 999;
        }
        sVar2 = 1;
        param_1[10] = 1;
        param_1[6] = param_1[0xb];
        param_1[7] = param_1[0xc];
        param_1[8] = param_1[0xd];
        param_1[9] = param_1[0xe];
        goto switchD_00549e03_caseD_2;
      }
      if (sVar4 != 0) {
        uVar11 = 0;
        goto LAB_0054a7d0;
      }
      goto switchD_00549e03_caseD_2;
    }
    if (local_130 == 0x7542) {
      if (sVar2 == 0) {
        if (param_1[4] < 1) goto switchD_00549e03_caseD_2;
        sVar4 = param_1[4] + -1;
        param_1[4] = sVar4;
      }
      else {
        if ((sVar2 != 1) || (param_1[4] < 2)) goto switchD_00549e03_caseD_2;
        sVar4 = param_1[4] + -1;
        param_1[9] = param_1[9] + -1;
        param_1[4] = sVar4;
      }
      if ((0 < sVar4) && (sVar4 < param_1[2])) {
        param_1[2] = param_1[2] + -1;
      }
      goto switchD_00549e03_caseD_2;
    }
    if (0x2d < local_130) {
      if (local_130 == 0x36) {
        uVar11 = 1;
        local_12c = 1;
        *param_2 = 0;
        FUN_0052f860();
        if (param_1[3] != 0) {
          if (param_1[4] == 0) {
            if (sVar2 == 0) {
              iVar9 = 1;
              iVar8 = (int)param_1[3];
            }
            else {
              sVar4 = param_1[8];
              sVar1 = param_1[6];
              if (sVar4 < sVar1) {
                iVar8 = (int)sVar4;
                iVar9 = (sVar1 - iVar8) + 1;
              }
              else {
                iVar8 = (int)sVar1;
                iVar9 = (sVar4 - iVar8) + 1;
              }
            }
            uVar5 = FUN_00488960(iVar8,iVar9);
            FUN_00546e80(uVar5);
LAB_0054a3e7:
            uVar5 = FUN_00488960(&local_15c,&local_160,local_158,0);
            iVar7 = FUN_005475b0(uVar5);
            while (iVar7 == 1) {
              local_100[0] = 0;
              FUN_00549710(local_158,local_100,iVar8,uVar11,iVar9,local_15c,local_160);
              uVar5 = FUN_00488960(local_15c,local_160,local_100);
              FUN_00547440(uVar5);
              uVar5 = FUN_00488960(&local_15c,&local_160,local_158,0);
              iVar7 = FUN_005475e0(uVar5);
            }
            goto LAB_0054a476;
          }
          goto switchD_00549e03_caseD_2;
        }
        if (param_1[4] == 0) goto switchD_00549e03_caseD_2;
        if (sVar2 == 0) {
          iVar9 = 1;
          iVar8 = (int)param_1[4];
        }
        else {
          sVar4 = param_1[9];
          sVar1 = param_1[7];
          if (sVar4 < sVar1) {
            iVar8 = (int)sVar4;
            iVar9 = (sVar1 - iVar8) + 1;
          }
          else {
            iVar8 = (int)sVar1;
            iVar9 = (sVar4 - iVar8) + 1;
          }
        }
        iVar7 = 1;
        do {
          uVar11 = FUN_00488960(iVar7,iVar8,iVar9);
          FUN_005477c0(uVar11);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x1b);
      }
      else {
        if (local_130 != 0x37) {
          if (local_130 == 0x7532) {
            param_1[5] = 1;
            sVar2 = 0;
            param_1[10] = 0;
            param_1[0xf] = 0;
          }
          goto switchD_00549e03_caseD_2;
        }
        uVar11 = 0;
        local_12c = 0;
        *param_2 = 0;
        FUN_0052f860();
        if (param_1[3] == 0) {
          if (param_1[4] != 0) {
            if (sVar2 == 0) {
              iVar9 = 1;
              iVar8 = (int)param_1[4];
            }
            else {
              sVar4 = param_1[9];
              sVar1 = param_1[7];
              if (sVar4 < sVar1) {
                iVar8 = (int)sVar4;
                iVar9 = (sVar1 - iVar8) + 1;
              }
              else {
                iVar8 = (int)sVar1;
                iVar9 = (sVar4 - iVar8) + 1;
              }
            }
            iVar7 = FUN_00549350(iVar8,iVar9);
            if (iVar7 != 0) {
              FUN_0052b240(iVar7);
              goto switchD_00549e03_caseD_2;
            }
          }
        }
        else if (param_1[4] == 0) {
          if (sVar2 == 0) {
            iVar9 = 1;
            iVar8 = (int)param_1[3];
          }
          else {
            sVar4 = param_1[8];
            sVar1 = param_1[6];
            if (sVar4 < sVar1) {
              iVar8 = (int)sVar4;
              iVar9 = (sVar1 - iVar8) + 1;
            }
            else {
              iVar8 = (int)sVar1;
              iVar9 = (sVar4 - iVar8) + 1;
            }
          }
          uVar5 = FUN_00488960(iVar8,iVar9);
          iVar7 = FUN_005470a0(uVar5);
          if (iVar7 == 0) goto LAB_0054a3e7;
          FUN_0052b240(iVar7);
          goto switchD_00549e03_caseD_2;
        }
      }
      uVar11 = FUN_00488960(0);
      FUN_004865d0(uVar11);
      uVar11 = FUN_00488960(&local_15c,&local_160,local_158,0);
      iVar7 = FUN_005475b0(uVar11);
      if (iVar7 == 1) {
        iVar7 = (int)(short)local_12c;
        do {
          local_100[0] = 0;
          FUN_005499a0(local_158,local_100,iVar8,iVar7,iVar9,local_15c,local_160);
          uVar11 = FUN_00488960(local_15c,local_160,local_100);
          FUN_00547440(uVar11);
          uVar11 = FUN_00488960(&local_15c,&local_160,local_158,0);
          iVar6 = FUN_005475e0(uVar11);
        } while (iVar6 == 1);
      }
      goto LAB_0054a476;
    }
    if (local_130 < 0x1c) {
      switch(local_130) {
      case 1:
        *param_2 = 0;
        FUN_0052f860();
        thunk_FUN_0040add0();
        if (param_1[3] == 0) {
          if (param_1[4] != 0) {
            if (sVar2 == 0) {
              iVar9 = 1;
              iVar8 = (int)param_1[4];
            }
            else {
              sVar4 = param_1[9];
              sVar1 = param_1[7];
              if (sVar4 < sVar1) {
                iVar8 = (int)sVar4;
                iVar9 = (sVar1 - iVar8) + 1;
              }
              else {
                iVar8 = (int)sVar1;
                iVar9 = (sVar4 - iVar8) + 1;
              }
            }
            iVar7 = 1;
            do {
              uVar11 = FUN_00488960(iVar7,iVar8,iVar9);
              FUN_004888a0(uVar11);
              uVar11 = FUN_00488960(iVar7,iVar8,iVar9);
              FUN_004876e0(uVar11);
              uVar11 = FUN_00488960(iVar7,iVar8,iVar9);
              FUN_00547460(uVar11);
              iVar7 = iVar7 + 1;
            } while (iVar7 < 0x1b);
          }
        }
        else if (param_1[4] == 0) {
          if (sVar2 == 0) {
            iVar9 = 1;
            iVar8 = (int)param_1[3];
          }
          else {
            sVar4 = param_1[8];
            sVar1 = param_1[6];
            if (sVar4 < sVar1) {
              iVar8 = (int)sVar4;
              iVar9 = (sVar1 - iVar8) + 1;
            }
            else {
              iVar8 = (int)sVar1;
              iVar9 = (sVar4 - iVar8) + 1;
            }
          }
          uVar11 = FUN_00488960(iVar8,iVar9);
          FUN_00546e40(uVar11);
        }
        break;
      default:
        goto switchD_00549e03_caseD_2;
      case 8:
        *param_2 = 0;
        iVar7 = FUN_0054a8a0(param_1,(sVar2 != 0) + '\x02',2,&local_13c);
        if ((iVar7 == -0xc) || (iVar7 == -2)) goto LAB_00549e7b;
        if (iVar7 == -1) goto switchD_0054a542_caseD_754d;
        goto switchD_00549e03_caseD_2;
      case 9:
        *param_2 = 0;
        iVar7 = FUN_0054a8a0(param_1,(sVar2 != 0) + '\x02',1,&local_13c);
        if (iVar7 == -1) goto switchD_0054a542_caseD_754d;
LAB_00549e7b:
        param_1[5] = 1;
        param_1[10] = 0;
        param_1[0xf] = 0;
        sVar2 = 0;
        goto switchD_00549e03_caseD_2;
      case 0xe:
      case 0xf:
        FUN_0052f860();
        thunk_FUN_0040add0();
        sVar4 = param_1[3];
        if ((sVar4 == 0) && (param_1[4] == 0)) goto switchD_00549e03_caseD_2;
        if ((sVar2 == 1) && ((param_1[6] != param_1[8] && (param_1[7] != param_1[9])))) {
          FUN_0052b240(0x1c);
          goto switchD_00549e03_caseD_2;
        }
        if (sVar4 == 0) {
          local_146 = param_1[4];
          local_148 = 1;
          local_144 = 0x1a;
          local_142 = local_146;
        }
        else if (param_1[4] == 0) {
          local_146 = 1;
          local_142 = 999;
          local_148 = sVar4;
          local_144 = sVar4;
        }
        *param_2 = 0;
        if (local_130 == 0xe) {
          local_128 = FUN_00550be0(&local_148);
        }
        else if (local_130 == 0xf) {
          local_128 = FUN_00550bf0(&local_148);
        }
        if (local_128 != 0) {
          FUN_0052b240(local_128);
          goto switchD_00549e03_caseD_2;
        }
      }
LAB_0054a476:
      cVar3 = FUN_00526090(0x4e);
      if (cVar3 == '\0') {
        FUN_00488980(0,0);
        uVar11 = FUN_00488960(0);
        FUN_004865d0(uVar11);
        FUN_0052f860();
        thunk_FUN_0040add0();
        iVar7 = FUN_0054ed60(0);
        if (iVar7 != 0) {
          uVar11 = FUN_00488980(0,1);
          FUN_0052b240(uVar11);
        }
      }
      goto switchD_00549e03_caseD_2;
    }
    iVar7 = FUN_0054c890(local_130,&local_134);
    if (iVar7 != 0) {
      FUN_0052f860();
      thunk_FUN_0040add0();
      if (param_1[10] == 0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        local_154 = *(undefined4 *)(param_1 + 6);
        local_150 = *(undefined4 *)(param_1 + 8);
        local_14c = param_1[10];
        if ((short)local_150 < (short)local_154) {
          FUN_00488d30(&local_154,&local_150);
        }
        if (local_150._2_2_ < local_154._2_2_) {
          FUN_00488d30((int)&local_154 + 2,(int)&local_150 + 2);
        }
        puVar12 = &local_154;
      }
      break;
    }
  } while( true );
  uVar11 = FUN_0054f340(local_134,puVar12);
  switch(uVar11) {
  case 0xffffffe5:
  case 0xffffffeb:
    *param_2 = 0;
    break;
  case 0xffffffe9:
    *param_2 = 1;
    break;
  case 0xffffffea:
    *param_2 = 0;
switchD_0054a542_caseD_754d:
    uVar11 = 0xffffffff;
LAB_0054a7d0:
    param_1[5] = 1;
    param_1[10] = 0;
    param_1[0xf] = 0;
    FUN_005389c0(0,7,local_120);
    return uVar11;
  }
  goto switchD_00549e03_caseD_2;
}

