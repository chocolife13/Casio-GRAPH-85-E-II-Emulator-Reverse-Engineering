// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00520e80
// entry: 00520e80  size: 2815


uint FUN_00520e80(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined3 uVar8;
  int iVar7;
  int local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_d8;
  int local_d4;
  code *local_d0;
  code *local_cc;
  int local_c8;
  undefined1 local_c4 [36];
  undefined2 local_a0;
  undefined1 local_9e;
  byte local_9d;
  undefined4 *local_9c;
  undefined1 *local_98;
  undefined1 local_8c [12];
  undefined1 local_80 [128];
  
  iVar1 = param_2;
  local_c8 = 0;
  local_d8 = 0;
  if ((*(byte *)(param_2 + 0x8e2) & 1) == 0) {
    local_cc = FUN_004e7310;
    local_d0 = FUN_004e72d0;
  }
  else {
    local_cc = FUN_004e72d0;
    local_d0 = FUN_004e7310;
  }
  local_9c = &local_10c;
  local_110 = *param_3;
  local_98 = local_f8;
  if ((param_1 == 0x12e) || (param_1 == 0x169)) {
    local_9d = 0;
  }
  else {
    local_9d = *(byte *)(param_2 + 0x8e1) >> 1 & 1;
  }
  iVar3 = local_110 * 0x20 + *(int *)(param_2 + 0x8dc);
  local_a0 = *(undefined2 *)(iVar3 + 0x18);
  local_9e = *(undefined1 *)(iVar3 + 0x1e);
  if ((*(byte *)(param_2 + 0x8e0) & 0xc0) != 0) {
    FUN_00510380(param_2,local_110);
  }
  if ((*(byte *)(iVar1 + 0x8e2) & 0x80) == 0) {
    uVar4 = 0x40;
    local_d4 = 0x7f;
    local_114 = 0x40;
  }
  else {
    uVar4 = 0x20;
    local_d4 = 0x3f;
    local_114 = 0x20;
  }
  iVar3 = iVar1 + 0x800;
  FUN_004d4da0(&local_10c,uVar4,iVar3,*(byte *)(iVar1 + 0x8e2));
  if (param_1 == 0x169) {
    local_9d = 0;
    local_10c = *(undefined4 *)(iVar1 + 0x8a8);
    local_108 = *(undefined4 *)(iVar1 + 0x8ac);
    local_104 = *(undefined4 *)(iVar1 + 0x8b0);
    FUN_004d5130(&local_10c,&local_114,iVar3,
                 CONCAT31((int3)((uint)local_10c >> 8),*(undefined1 *)(iVar1 + 0x8e2)));
  }
  if ((*(uint *)(local_110 * 0x20 + 0x18 + *(int *)(iVar1 + 0x8dc)) & 0x4000) != 0) {
    FUN_00520d40(&local_114,&local_10c,iVar1,local_110);
  }
  puVar2 = param_4;
  iVar5 = FUN_0050f060(&local_10c,local_f8,iVar1,local_110,*param_4);
  if (iVar5 != 0) {
    uVar6 = FUN_0051ff90(iVar5,&local_ec);
    return uVar6;
  }
  uVar4 = FUN_004d5210(local_f8,&local_fc,iVar3);
  if ((*(byte *)(iVar1 + 0x8e1) & 4) != 0) {
    if ((local_9d != 0) && (iVar5 = FUN_0051c420(local_c4,iVar1,local_110,*puVar2), iVar5 != 0)) {
LAB_00521091:
      uVar6 = FUN_0051ff90(iVar5,&local_ec);
      return uVar6;
    }
    FUN_0051eb90(local_c4);
  }
  if (param_1 == 0x12e) {
    FUN_00519af0(0x12e);
  }
  local_ec = local_114;
  local_e8 = local_fc;
  local_e4 = uVar4;
LAB_005210e5:
  do {
    while( true ) {
      FUN_0051f7b0(local_80);
      FUN_0051f870();
      FUN_00522500(&local_ec);
      iVar5 = FUN_00526620(&local_100);
      uVar6 = local_100;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        local_100 = 0x7531;
      }
      FUN_0051e2a0(*(undefined4 *)(iVar1 + 0x8dc));
      FUN_00522930(&local_ec);
      FUN_0051f7f0(local_80);
      iVar5 = FUN_0051c730();
      if (iVar5 != 0) {
        return 0xfffffffa;
      }
      if (local_100 < 0x754f) break;
      if (local_100 < 0x7603) {
        if (local_100 == 0x7602) {
          if ((param_1 != 0x12e) && (param_1 != 0x15a)) {
            return 0xfffffffa;
          }
          return 0x7602;
        }
        if (local_100 != 0x7554) {
          if (local_100 == 0x7555) {
            iVar5 = FUN_00502180();
            goto joined_r0x005214f7;
          }
          if (local_100 == 0x7557) {
            return 0xfffffff5;
          }
          goto switchD_00521181_caseD_7533;
        }
        iVar5 = FUN_004ab6a0(s__GRAPH_005be2ac);
        if ((iVar5 != 0) && ((*(byte *)(iVar1 + 0x8e0) & 0x30) == 0)) {
          return 0x16d;
        }
      }
      else if (local_100 == 0x7634) {
        FUN_0051af80(0x7634,iVar1);
      }
      else {
        if (local_100 == 0x7635) {
          FUN_0051af80(0x7635,iVar1);
          FUN_0050acb0(iVar1);
          if ((*(byte *)(iVar1 + 0x8e0) & 0xc0) != 0) {
            FUN_00510380(iVar1,local_110);
          }
          goto LAB_005215cc;
        }
        if (local_100 != 0x7957) {
switchD_00521181_caseD_7533:
          if ((local_100 != 0) && ((local_100 < 30000 || (0x75f7 < local_100)))) {
            return local_100;
          }
        }
      }
    }
    uVar8 = (undefined3)(local_100 >> 8);
    if (local_100 != 0x754e) {
      switch(local_100) {
      case 0x7531:
      case 0x7542:
      case 0x7544:
      case 0x7545:
      case 0x7547:
        switch(local_100) {
        case 0x7531:
          local_d8 = FUN_00522120(uVar6,param_1,&local_10c,iVar1,local_110);
          FUN_004d5130(&local_10c,&local_114,iVar3,*(undefined1 *)(iVar1 + 0x8e2));
          break;
        case 0x7542:
        case 0x7547:
          iVar5 = FUN_0051e8b0(param_1,&local_110,param_4,local_100,iVar1);
          if ((iVar5 != 0) && (param_1 == 0x169)) {
            *(undefined4 *)(iVar1 + 0x8a8) = local_10c;
            *(undefined4 *)(iVar1 + 0x8ac) = local_108;
            *(undefined4 *)(iVar1 + 0x8b0) = local_104;
            return (local_100 != 0x7542) + 0x2a;
          }
          uVar6 = *(uint *)(local_110 * 0x20 + 0x18 + *(int *)(iVar1 + 0x8dc));
          if (((uVar6 & 0x100) == 0) || ((uVar6 & 0x800) != 0)) {
            *param_3 = local_110;
            return 0;
          }
          if ((uVar6 & 0x4000) != 0) {
            FUN_00520d40(&local_114,&local_10c,iVar1,local_110);
          }
          iVar5 = local_110 * 0x20 + *(int *)(iVar1 + 0x8dc);
          local_a0 = *(undefined2 *)(iVar5 + 0x18);
          local_9e = *(undefined1 *)(iVar5 + 0x1e);
          if ((*(byte *)(iVar1 + 0x8e0) & 0xc0) != 0) {
            FUN_00510380(iVar1,local_110);
          }
          break;
        case 0x7544:
        case 0x7545:
          FUN_004d4da0(local_8c,local_114,iVar3,CONCAT31(uVar8,*(undefined1 *)(iVar1 + 0x8e2)));
          if (local_100 == 0x7545) {
            iVar5 = (*local_cc)(&local_10c,local_8c);
            if (iVar5 != 0) {
              local_114 = local_114 + 1;
            }
          }
          else {
            iVar5 = (*local_d0)(&local_10c,local_8c);
            if (iVar5 != 0) {
              local_114 = local_114 + -1;
            }
          }
          FUN_004d4da0(&local_10c,local_114,iVar3,*(undefined1 *)(iVar1 + 0x8e2));
          if ((*(uint *)(local_110 * 0x20 + 0x18 + *(int *)(iVar1 + 0x8dc)) & 0x4000) != 0) {
            FUN_00520d40(&local_114,&local_10c,iVar1,local_110);
          }
          if ((local_d4 < local_114) || (local_114 < 1)) {
            if (local_100 == 0x7545) {
              local_114 = local_114 + -1;
            }
            else {
              local_114 = local_114 + 1;
            }
            FUN_004d4da0(&local_10c,local_114,iVar3,*(undefined1 *)(iVar1 + 0x8e2));
            iVar5 = FUN_0051e3f0(iVar1,param_1);
            if (iVar5 != 0) {
              uVar6 = FUN_005223e0(&local_114,local_100,iVar1);
              if (uVar6 != 0) {
                return uVar6;
              }
              FUN_004d4da0(&local_10c,local_114,iVar3,*(undefined1 *)(iVar1 + 0x8e2));
              iVar5 = FUN_0050f060(&local_10c,local_f8,iVar1,local_110,*param_4);
              if (iVar5 != 0) goto LAB_005218ac;
              uVar4 = FUN_004d5210(local_f8,&local_fc,iVar3);
              if ((*(byte *)(iVar1 + 0x8e0) & 0xc0) != 0) {
                FUN_00510380(iVar1,local_110);
              }
              local_ec = local_114;
              local_e8 = local_fc;
              local_e4 = uVar4;
              FUN_0042fb70();
            }
          }
        }
        iVar5 = FUN_0050f060(&local_10c,local_f8,iVar1,local_110,*param_4);
        if (iVar5 != 0) {
LAB_005218ac:
          uVar6 = FUN_0051ff90(iVar5,&local_ec);
          return uVar6;
        }
        uVar4 = FUN_004d5210(local_f8,&local_fc,iVar3);
        if ((((*(byte *)(iVar1 + 0x8e1) & 4) != 0) && (local_9d != 0)) &&
           (iVar5 = FUN_0051c420(local_c4,iVar1,local_110,*param_4), iVar5 != 0)) goto LAB_00521091;
LAB_005215cc:
        if ((param_1 == 0x164) || (param_1 == 0x165)) {
          FUN_0051f840(&param_1);
          FUN_0050acb0(iVar1);
          if ((*(byte *)(iVar1 + 0x8e0) & 0xc0) != 0) {
            FUN_00510380(iVar1,local_110);
          }
        }
        if ((*(byte *)(iVar1 + 0x8e1) & 4) != 0) {
          FUN_0051eb90(local_c4);
        }
        if (param_1 == 0x15a) {
          FUN_0050fb90(local_c8);
        }
        local_ec = local_114;
        local_e8 = local_fc;
        local_e4 = uVar4;
        if (((local_100 != 0x7531) || (local_d8 != 0)) || ((param_1 != 0x12e && (param_1 != 0x15a)))
           ) goto LAB_005210e5;
        break;
      case 0x7532:
        return 0xfffffffe;
      default:
        goto switchD_00521181_caseD_7533;
      case 0x7534:
        iVar5 = FUN_004ab6a0(s__RUNMAT_005be2d4);
        if ((iVar5 != 0) || (iVar5 = FUN_004ab6a0(s__PROG_005bec48), iVar5 != 0)) {
          return 0xfffffff4;
        }
        break;
      case 0x753f:
        return 0x7956;
      case 0x754d:
        return 0xffffffff;
      }
      FUN_0051f840(&param_1);
      if (param_1 < 0x15b) {
        if (param_1 == 0x15a) {
          iVar5 = FUN_004e4020(local_f8);
          if (iVar5 == 0) {
            *(undefined4 *)(iVar1 + 0x8b4) = local_10c;
            *(undefined4 *)(iVar1 + 0x8b8) = local_108;
            *(undefined4 *)(iVar1 + 0x8bc) = local_104;
            iVar5 = FUN_004e71d0(iVar1 + 0x8a8,(undefined4 *)(iVar1 + 0x8b4));
            if (iVar5 == 0) {
              uVar6 = FUN_00521fb0(iVar1,local_110,*param_4);
              return uVar6;
            }
          }
        }
        else if (param_1 == 0x12e) {
          iVar7 = FUN_004e4020(local_f8);
          iVar5 = local_114;
          if (iVar7 == 0) {
            param_1 = 0x15a;
            *(undefined4 *)(iVar1 + 0x8a8) = local_10c;
            local_c8 = local_114;
            *(undefined4 *)(iVar1 + 0x8ac) = local_108;
            *(undefined4 *)(iVar1 + 0x8b0) = local_104;
            FUN_00519af0(0x15a);
            FUN_0050fb90(iVar5);
          }
        }
        else if ((param_1 == 0x12f) && (uVar6 = FUN_005209b0(&local_10c,iVar1), uVar6 != 0)) {
          return uVar6;
        }
      }
      else if ((0x760c < param_1) && (param_1 < 0x760f)) {
        iVar5 = FUN_0051c420(local_c4,iVar1,local_110,*param_4);
        if ((iVar5 != 0) ||
           (iVar5 = FUN_0051b1c0(&param_1,&local_10c,local_f8,local_c4,iVar1), iVar5 != 0)) {
          FUN_0052b240(iVar5);
          return (-(uint)(iVar5 != 3) & 0xfffffffb) - 6;
        }
        if ((*(byte *)(iVar1 + 0x8e0) & 0xc0) != 0) {
          FUN_00510380(iVar1,local_110);
        }
        if ((*(byte *)(iVar1 + 0x8e1) & 4) != 0) {
          FUN_0051f5e0(local_c4,iVar3);
        }
      }
      goto LAB_005210e5;
    }
    iVar5 = FUN_005022f0(CONCAT31(uVar8,*(byte *)(iVar1 + 0x8e0) >> 4) & 0xffffff03);
joined_r0x005214f7:
    if (iVar5 != 0) {
      return 0xfffffff2;
    }
  } while( true );
}

