// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049f420
// entry: 0049f420  size: 2781


uint FUN_0049f420(undefined4 param_1,char *param_2,undefined4 param_3,byte *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined1 local_5e8;
  undefined1 local_5e7;
  undefined1 local_5e6;
  undefined1 local_5e5;
  undefined1 local_5e4;
  undefined1 local_5e3;
  undefined1 local_5e2;
  undefined1 local_5e1;
  undefined1 local_5e0;
  undefined1 local_5df;
  undefined1 local_5de;
  undefined1 local_5dd;
  undefined1 local_5dc;
  byte local_5d8;
  undefined1 local_5d7;
  undefined1 local_5d6;
  undefined1 local_5d5;
  undefined1 local_5d4;
  undefined1 local_5d3;
  undefined1 local_5d2;
  undefined1 local_5d1;
  undefined1 local_5d0;
  undefined1 local_5cf;
  undefined1 local_5ce;
  undefined1 local_5cd;
  undefined1 local_5cc;
  uint local_5c8;
  byte local_5c4 [16];
  undefined1 local_5b4 [4];
  undefined4 local_5b0;
  undefined1 local_5ac [52];
  undefined1 local_578 [12];
  undefined2 local_56c [7];
  undefined1 local_55e [510];
  undefined1 local_360 [48];
  undefined1 local_330 [288];
  undefined1 local_210 [264];
  undefined1 local_108 [264];
  
  local_5d8 = 0;
  local_5d7 = 0;
  local_5d6 = 0;
  local_5d5 = 0;
  local_5d4 = 0;
  local_5d3 = 0;
  local_5d2 = 0;
  local_5d1 = 0;
  local_5d0 = 0;
  local_5cf = 0;
  local_5ce = 0;
  local_5cd = 0;
  local_5cc = 0;
  local_5c8 = 0;
  local_5c4[0] = 0;
  local_5c4[1] = 0;
  local_5c4[2] = 0;
  local_5c4[3] = 0;
  local_5c4[4] = 0;
  local_5c4[5] = 0;
  local_5c4[6] = 0;
  local_5c4[7] = 0;
  local_5c4[8] = 0;
  local_5c4[9] = 0;
  local_5c4[10] = 0;
  local_5c4[0xb] = 0;
  local_5c4[0xc] = 0;
  local_5e8 = 0;
  local_5e7 = 0;
  local_5e6 = 0;
  local_5e5 = 0;
  local_5e4 = 0;
  local_5e3 = 0;
  local_5e2 = 0;
  local_5e1 = 0;
  local_5e0 = 0;
  local_5df = 0;
  local_5de = 0;
  local_5dd = 0;
  local_5dc = 0;
  thunk_FUN_0040add0();
  FUN_0052f840();
  local_5b0 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538a00(local_578);
  FUN_00538980(0,0,local_5b4);
  FUN_004a00d0(local_360,param_3,1);
  FUN_005387f0(0);
  FUN_004a2c40(param_6,local_56c);
  if ((((*param_4 ^ (byte)param_6) & 0xf) == 0) && (iVar3 = FUN_004a0160(param_4), iVar3 != 0)) {
    pbVar7 = param_4 + 4;
    iVar3 = -1;
    pbVar6 = pbVar7;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    if (iVar3 != -2) {
      uVar4 = 0xffffffff;
      pbVar6 = pbVar7;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
      iVar3 = FUN_0042a410(local_56c,pbVar7,~uVar4 - 1);
      FUN_0042aac0(local_56c + iVar3);
      iVar3 = FUN_0042a410(local_56c);
      local_56c[iVar3] = 0x5c;
    }
    iVar3 = FUN_0042a410(local_56c,
                         *(int *)(param_4 + 0x20) + 0x10 + (uint)*(ushort *)(param_4 + 2) * 0x1c,0xc
                        );
    FUN_0042aac0(local_56c + iVar3);
    iVar3 = FUN_004299c0(param_5);
    if (iVar3 == 2) {
      FUN_004aacd0(0);
    }
    iVar3 = FUN_0042a3d0(param_5,local_56c,0x106);
    if (iVar3 == 0) {
      iVar3 = FUN_0042ac10(local_56c,0x5c);
      local_56c[(iVar3 - (int)local_56c >> 1) + 1] = 0;
      FUN_0042ab20(local_56c,0,0x105);
      uVar4 = 0xffffffff;
      pcVar8 = param_2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      iVar3 = FUN_0042a410(local_56c,param_2,~uVar4 - 1);
      FUN_0042aac0(local_56c + iVar3);
      iVar3 = -1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      if (iVar3 != -2) {
        uVar4 = 0xffffffff;
        pbVar7 = param_4 + 4;
        do {
          pbVar6 = pbVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pbVar6 = pbVar7 + 1;
          bVar1 = *pbVar7;
          pbVar7 = pbVar6;
        } while (bVar1 != 0);
        uVar4 = ~uVar4;
        pbVar7 = pbVar6 + -uVar4;
        pbVar6 = local_5c4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar6 = *(undefined4 *)pbVar7;
          pbVar7 = pbVar7 + 4;
          pbVar6 = pbVar6 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar6 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
        }
      }
      FUN_004a02b0(param_4,param_6);
      iVar3 = -1;
      pbVar7 = local_5c4;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      if (iVar3 != -2) {
        uVar4 = 0xffffffff;
        pbVar7 = local_5c4;
        do {
          pbVar6 = pbVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pbVar6 = pbVar7 + 1;
          bVar1 = *pbVar7;
          pbVar7 = pbVar6;
        } while (bVar1 != 0);
        uVar4 = ~uVar4;
        pbVar6 = pbVar6 + -uVar4;
        pbVar7 = param_4;
        for (uVar5 = uVar4 >> 2; pbVar7 = pbVar7 + 4, uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar7 = *(undefined4 *)pbVar6;
          pbVar6 = pbVar6 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar7 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
        }
      }
      FUN_0049d040(local_56c,param_4);
    }
    else {
      iVar3 = FUN_0042ac10(local_56c,0x5c);
      local_56c[(iVar3 - (int)local_56c >> 1) + 1] = 0;
      FUN_0042ab20(local_56c,0,0x105);
      uVar4 = 0xffffffff;
      pcVar8 = param_2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      iVar3 = FUN_0042a410(local_56c,param_2,~uVar4 - 1);
      FUN_0042aac0(local_56c + iVar3);
    }
    if (*(short *)(param_4 + 0x1e) == 0) goto LAB_0049f87b;
    iVar3 = FUN_0042ac10(param_5,0x5c);
  }
  else {
    iVar3 = FUN_004299c0(param_5);
    if (iVar3 == 2) {
      FUN_004aacd0(0);
    }
    uVar4 = 0xffffffff;
    pcVar8 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    iVar3 = FUN_0042a410(local_56c,param_2,~uVar4 - 1);
    FUN_0042aac0(local_56c + iVar3);
    FUN_004a02b0(param_4,param_6);
    FUN_0049d040(local_56c,param_4);
    if (*(short *)(param_4 + 0x1e) == 0) goto LAB_0049f87b;
    iVar3 = FUN_0042ac10(param_5,0x5c);
  }
  if (iVar3 == 0) {
    FUN_004a02e0(param_4,&local_5e8,*(int *)(param_4 + 0x20) + 0x10,1);
  }
  else {
    iVar3 = FUN_0042ac10(param_5,0x5c,0xc);
    FUN_0042aa50(&local_5d8,iVar3 + 2);
    FUN_004a02e0(param_4,&local_5e8,&local_5d8,1);
  }
LAB_0049f87b:
  FUN_0049f380(param_1,param_4,local_5ac);
  if (*(short *)(param_4 + 0x12) == -1) {
    if ((*param_4 & 0xf) != 2) goto LAB_0049f8ea;
    iVar3 = FUN_004300c0();
    if (iVar3 != 0) goto LAB_0049f8ea;
    FUN_0049cc10(local_5ac,param_4);
  }
  else {
    FUN_004a29a0(param_4,local_330);
    FUN_004a14e0(local_5ac,param_4,local_330);
  }
switchD_0049fa40_caseD_2aa:
  FUN_00538b30();
  iVar3 = FUN_00526620(&local_5c8);
  if (iVar3 == 0) {
    if (local_5c8 < 0x3b1) {
      if (local_5c8 == 0x3b0) {
        if ((*(short *)(param_4 + 0x12) != -1) &&
           (cVar2 = FUN_004a0820(*(int *)(param_4 + 0x20) + (uint)*(ushort *)(param_4 + 2) * 0x1c,7)
           , cVar2 != '\0')) {
          FUN_0049e890(param_4);
        }
      }
      else if (local_5c8 < 0x188) {
        if (local_5c8 == 0x187) {
          if (*(short *)(param_4 + 0x12) != -1) {
            FUN_004a3900(param_4);
          }
        }
        else if (local_5c8 < 0x8e) {
          if (local_5c8 == 0x8d) {
            if (*(short *)(param_4 + 0x12) != -1) goto LAB_0049feb4;
          }
          else {
            if (local_5c8 != 0x37) {
              if (local_5c8 == 0x38) goto LAB_0049fc8d;
              goto switchD_0049fa40_caseD_2aa;
            }
            if (*(short *)(param_4 + 0x12) != -1) {
              FUN_0049dc40(param_4);
            }
          }
        }
        else {
          if (local_5c8 != 0x186) goto switchD_0049fa40_caseD_2aa;
          if ((*param_4 & 0xf) != 2) {
            iVar3 = FUN_0049d8d0(param_4,param_5);
            if (iVar3 != 1) {
              if (iVar3 == -1) {
                FUN_004a02b0(param_4,param_6);
                FUN_0049d040(local_56c,param_4);
                FUN_004a02e0(param_4,&local_5e8,*(int *)(param_4 + 0x20) + 0x10,1);
              }
              goto switchD_0049fa79_caseD_ffffffd8;
            }
            goto switchD_0049fa40_caseD_2a9;
          }
          FUN_0042aa50(local_210,param_5,0x105);
          iVar3 = FUN_00406ec0(local_210);
          if (iVar3 == 1) {
            FUN_0042aac0(param_5,local_210,0x105);
            goto switchD_0049fa40_caseD_2a9;
          }
        }
      }
      else {
        switch(local_5c8) {
        case 0x2a9:
          goto switchD_0049fa40_caseD_2a9;
        default:
          goto switchD_0049fa40_caseD_2aa;
        case 0x38d:
          FUN_004aacd0(0);
          if (*(short *)(param_4 + 0x12) != -1) {
            uVar9 = FUN_0049df80(param_4);
            switch(uVar9) {
            case 0xffffffd7:
            case 0xffffffdf:
            case 0xffffffe1:
            case 0xffffffe8:
            case 0xffffffe9:
            case 0xffffffef:
            case 0xfffffff8:
            case 0xfffffffb:
            case 0xfffffffd:
              FUN_004a02b0(param_4,param_6);
              FUN_0049d040(local_56c,param_4);
              FUN_004a02e0(param_4,&local_5e8,*(int *)(param_4 + 0x20) + 0x10,1);
            }
          }
          break;
        case 0x38e:
          FUN_0049e4c0(param_4);
          FUN_004a00d0(local_360,param_3,1);
          break;
        case 0x398:
          goto switchD_0049fa40_caseD_398;
        }
      }
    }
    else if (local_5c8 < 0x7543) {
      if (local_5c8 == 0x7542) {
        if (*(short *)(param_4 + 0x12) == -1) goto switchD_0049fa40_caseD_2aa;
        FUN_004a3c00(param_4);
      }
      else if (local_5c8 < 0x7533) {
        if (local_5c8 == 0x7532) goto LAB_0049fcc6;
        if (local_5c8 != 0x3b1) {
          if (local_5c8 == 1000) goto switchD_0049fa40_caseD_2a9;
          goto switchD_0049fa40_caseD_2aa;
        }
        if (*(short *)(param_4 + 0x12) != -1) {
          cVar2 = FUN_004a0820(*(int *)(param_4 + 0x20) + (uint)*(ushort *)(param_4 + 2) * 0x1c,7);
          if (cVar2 == '\0') {
            uVar9 = CONCAT22(extraout_var_00,*(undefined2 *)(param_4 + 2));
            goto LAB_0049feba;
          }
          FUN_0049f1a0(local_56c,param_4);
        }
        if ((*param_4 & 0xf) != 2) goto switchD_0049fa79_caseD_ffffffd8;
        FUN_0042aa50(local_108,param_5,0x105);
        iVar3 = FUN_00406e00(local_108);
        if (iVar3 == 1) {
          FUN_0042aac0(param_5,local_108,0x105);
          goto switchD_0049fa40_caseD_2a9;
        }
      }
      else {
        if ((local_5c8 != 0x7534) || (*(short *)(param_4 + 0x12) == -1))
        goto switchD_0049fa40_caseD_2aa;
        iVar3 = FUN_004299c0(param_5);
        if (iVar3 == 2) {
          FUN_004aacd0(0);
        }
        cVar2 = FUN_004a0820(*(int *)(param_4 + 0x20) + (uint)*(ushort *)(param_4 + 2) * 0x1c,7);
        if (cVar2 == '\0') {
          if (((byte)param_6 & 0xf0) == 0x10) {
            uVar9 = CONCAT22(extraout_var,*(undefined2 *)(param_4 + 2));
LAB_0049feba:
            FUN_0049d5c0(param_4,uVar9,param_5);
            goto switchD_0049fa40_caseD_2a9;
          }
          goto switchD_0049fa40_caseD_2aa;
        }
        FUN_0049f1a0(local_56c,param_4);
      }
    }
    else {
      if (0x754d < local_5c8) {
        if (local_5c8 == 0xffffffff) {
switchD_0049fa40_caseD_2a9:
          FUN_00538810();
          FUN_00538a50(local_578);
          FUN_005389c0(0,0,local_5b4);
          FUN_00526420(local_5b0);
          return local_5c8;
        }
        goto switchD_0049fa40_caseD_2aa;
      }
      if (local_5c8 == 0x754d) {
LAB_0049fcc6:
        if (param_4[4] == 0) {
          iVar3 = FUN_0055b770(param_2,s___g1e_005bfd58);
          if (iVar3 != 0) {
            iVar3 = FUN_004ab6a0(s__LINK_005bff14);
            if (iVar3 != 0) {
LAB_0049feb4:
              param_4[2] = 0;
              param_4[3] = 0;
              uVar9 = 0;
              goto LAB_0049feba;
            }
            goto switchD_0049fa40_caseD_2a9;
          }
          if (*(short *)(param_4 + 0x12) == -1) goto switchD_0049fa40_caseD_2aa;
          pbVar7 = (byte *)(*(int *)(param_4 + 0x20) + 0x10);
        }
        else {
          FUN_004a00d0(local_360,param_3,1);
          iVar3 = FUN_004299c0(param_5);
          if (iVar3 == 2) {
            FUN_004aacd0(0);
          }
          uVar4 = 0xffffffff;
          pbVar7 = param_4 + 4;
          do {
            pbVar6 = pbVar7;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pbVar6 = pbVar7 + 1;
            bVar1 = *pbVar7;
            pbVar7 = pbVar6;
          } while (bVar1 != 0);
          uVar4 = ~uVar4;
          pbVar7 = pbVar6 + -uVar4;
          pbVar6 = &local_5d8;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pbVar6 = *(undefined4 *)pbVar7;
            pbVar7 = pbVar7 + 4;
            pbVar6 = pbVar6 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pbVar6 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            pbVar6 = pbVar6 + 1;
          }
          FUN_0042aac0(local_55e,param_2,0xc);
          FUN_004a02b0(param_4,param_6);
          FUN_0049d040(local_56c,param_4);
          if (*(short *)(param_4 + 0x1e) == 0) goto switchD_0049fa79_caseD_ffffffd8;
          pbVar7 = &local_5d8;
        }
        FUN_004a02e0(param_4,&local_5e8,pbVar7,1);
      }
      else {
        if (local_5c8 != 0x7547) {
          if (local_5c8 == 0x7549) {
LAB_0049fc8d:
            if (*(short *)(param_4 + 0x12) != -1) {
              FUN_0049edc0(local_56c,param_4);
              goto switchD_0049fa79_caseD_ffffffd8;
            }
          }
          goto switchD_0049fa40_caseD_2aa;
        }
        if (*(short *)(param_4 + 0x12) == -1) goto switchD_0049fa40_caseD_2aa;
        FUN_0049f190(param_4);
      }
    }
  }
  else {
    if (local_5c8 != 0x41) goto switchD_0049fa40_caseD_2aa;
switchD_0049fa40_caseD_398:
    if (*(short *)(param_4 + 0x12) != -1) {
      FUN_0049dc50(param_4);
    }
  }
switchD_0049fa79_caseD_ffffffd8:
  FUN_0049f380(param_1,param_4,local_5ac);
  if (*(short *)(param_4 + 0x12) == -1) {
    if (((*param_4 & 0xf) == 2) && (iVar3 = FUN_004300c0(), iVar3 == 0)) {
      if (param_4[4] != 0) {
        param_4[4] = 0;
        FUN_0049f380(param_1,param_4,local_5ac);
      }
      FUN_0049cc10(local_5ac,param_4);
    }
    else {
LAB_0049f8ea:
      FUN_0049cb10(local_5ac,param_4);
    }
  }
  else {
    FUN_004a29a0(param_4,local_330);
    FUN_004a14e0(local_5ac,param_4,local_330);
  }
  goto switchD_0049fa40_caseD_2aa;
}

