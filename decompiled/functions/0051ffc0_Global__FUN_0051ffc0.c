// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051ffc0
// entry: 0051ffc0  size: 2438


/* WARNING: Type propagation algorithm not settling */

uint FUN_0051ffc0(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int iVar9;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114 [12];
  uint local_108;
  undefined1 local_104 [12];
  undefined1 local_f8 [12];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  undefined1 local_c4 [12];
  undefined1 local_b8 [36];
  undefined2 local_94;
  undefined1 local_92;
  byte local_91;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined4 *local_88;
  undefined1 *local_84;
  undefined1 local_80 [128];
  
  iVar2 = param_2;
  local_88 = &local_120;
  local_124 = *param_3;
  local_8c = local_c4;
  local_90 = local_104;
  local_84 = local_f8;
  local_91 = *(byte *)(param_2 + 0x8e1) >> 1 & 1;
  iVar8 = *(int *)(param_2 + 0x8dc) + local_124 * 0x20;
  local_94 = *(undefined2 *)(iVar8 + 0x18);
  local_92 = *(undefined1 *)(iVar8 + 0x1e);
  if ((*(byte *)(param_2 + 0x8e0) & 0xc0) != 0) {
    FUN_00510380(param_2,local_124);
  }
  FUN_00520bf0(0,&local_e4,local_114,iVar2,local_124);
  uVar4 = FUN_004e6b40(local_114,&local_e4,local_104,(byte *)(iVar2 + 0x884),local_104);
  FUN_004e6d90(uVar4);
  uVar4 = FUN_004e76a0(local_104,local_104);
  FUN_004e50a0(uVar4);
  bVar3 = *(byte *)(iVar2 + 0x884) & 0xf0;
  if ((bVar3 == 0x50) || (bVar1 = false, bVar3 == 0x60)) {
    bVar1 = true;
  }
  local_120 = local_e4;
  local_11c = local_e0;
  local_118 = local_dc;
  iVar9 = 0;
  iVar8 = FUN_0050e230(&local_120,local_104,local_c4,local_f8,iVar2,local_124,*param_4);
  if (iVar8 != 0) {
LAB_00520112:
    uVar5 = FUN_0051ff90(iVar8,&local_d8);
    return uVar5;
  }
  uVar5 = FUN_004d5130(local_104,&local_e8,iVar2 + 0x800,*(undefined1 *)(iVar2 + 0x8e2));
  uVar6 = FUN_004d5210(local_c4,&local_ec,iVar2 + 0x800);
  uVar5 = uVar5 | uVar6;
  if ((*(byte *)(iVar2 + 0x8e1) & 4) == 0) goto LAB_005201bd;
  if (((*(byte *)(iVar2 + 0x8e1) & 2) != 0) &&
     (iVar8 = FUN_0051c420(local_b8,iVar2,local_124,*param_4), iVar8 != 0)) {
LAB_00520194:
    uVar5 = FUN_0051ff90(iVar8,&local_d8);
    return uVar5;
  }
LAB_005201ad:
  FUN_0051eb90(local_b8);
LAB_005201bd:
  local_d8 = local_e8;
  local_d4 = local_ec;
  local_d0 = uVar5;
LAB_005201d1:
  while( true ) {
    FUN_0051f7b0(local_80);
    FUN_0051f870();
    FUN_00522500(&local_d8);
    iVar8 = FUN_00526620(&local_108);
    uVar6 = local_108;
    if (iVar8 == 0) {
      uVar6 = 0;
    }
    else {
      local_108 = 0x7531;
    }
    FUN_0051e2a0(*(undefined4 *)(iVar2 + 0x8dc));
    FUN_00522930(&local_d8);
    FUN_0051f7f0(local_80);
    iVar8 = FUN_0051c730();
    if (iVar8 != 0) {
      return 0xfffffffa;
    }
    if (0x754e < local_108) break;
    if (local_108 == 0x754e) {
      iVar8 = FUN_005022f0(CONCAT31((int3)((uint)extraout_ECX >> 8),*(byte *)(iVar2 + 0x8e0) >> 4) &
                           0xffffff03);
joined_r0x00520753:
      if (iVar8 != 0) {
        return 0xfffffff2;
      }
    }
    else {
      switch(local_108) {
      case 0x7531:
      case 0x7542:
      case 0x7544:
      case 0x7545:
      case 0x7547:
        switch(local_108) {
        case 0x7531:
          FUN_00522120(uVar6,param_1,&local_120,iVar2,local_124);
          iVar9 = FUN_0051feb0(&local_120,iVar2,local_124);
          break;
        case 0x7542:
        case 0x7547:
          FUN_0051e8b0(param_1,&local_124,param_4,local_108,iVar2);
          uVar5 = *(uint *)(local_124 * 0x20 + 0x18 + *(int *)(iVar2 + 0x8dc));
          if (((uVar5 & 0x400) == 0) || ((uVar5 & 0x800) != 0)) {
            *param_3 = local_124;
            return 0;
          }
          FUN_00520bf0(&local_120,&local_e4,local_114,iVar2,local_124);
          uVar4 = FUN_004e6b40(local_114,&local_e4,local_104,(byte *)(iVar2 + 0x884),local_104);
          FUN_004e6d90(uVar4);
          uVar4 = FUN_004e76a0(local_104,local_104);
          FUN_004e50a0(uVar4);
          bVar3 = *(byte *)(iVar2 + 0x884) & 0xf0;
          if ((bVar3 == 0x50) || (bVar1 = false, bVar3 == 0x60)) {
            bVar1 = true;
          }
          iVar9 = FUN_0051feb0(&local_120,iVar2,local_124);
          iVar8 = *(int *)(iVar2 + 0x8dc) + local_124 * 0x20;
          local_94 = *(undefined2 *)(iVar8 + 0x18);
          local_92 = *(undefined1 *)(iVar8 + 0x1e);
          if (((*(byte *)(iVar2 + 0x8e1) & 4) != 0) && ((*(byte *)(iVar2 + 0x8e1) & 2) == 0)) {
            FUN_0050acb0(iVar2);
          }
          if ((*(byte *)(iVar2 + 0x8e0) & 0xc0) != 0) {
            FUN_00510380(iVar2,local_124);
          }
          break;
        case 0x7544:
        case 0x7545:
          uVar4 = FUN_004e5070(iVar9,local_114,local_114);
          iVar8 = iVar2 + 0x884;
          FUN_004e6d00(iVar8,uVar4);
          FUN_004e7910(local_114,local_114);
          FUN_004e6a00(&local_e4,local_114,local_f8);
          FUN_004e7910(local_f8,local_f8);
          FUN_004d4d50(local_f8,iVar8);
          if (local_108 == 0x7545) {
            if (bVar1) {
              uVar5 = *(uint *)(local_124 * 0x20 + 0x18 + *(int *)(iVar2 + 0x8dc));
joined_r0x00520352:
              if ((uVar5 & 0x4000) == 0) {
                iVar7 = FUN_004e7310(&local_120,local_f8);
                goto joined_r0x00520399;
              }
              iVar7 = FUN_004e72d0(&local_120,local_f8);
              if (iVar7 != 0) {
                iVar9 = iVar9 + 1;
              }
            }
            else {
              iVar7 = FUN_004e7310(&local_120,local_f8);
              if (iVar7 != 0) {
                iVar9 = iVar9 + 1;
              }
            }
          }
          else {
            if (bVar1) {
              uVar5 = *(uint *)(local_124 * 0x20 + 0x18 + *(int *)(iVar2 + 0x8dc));
              goto joined_r0x00520352;
            }
            iVar7 = FUN_004e72d0(&local_120,local_f8);
joined_r0x00520399:
            if (iVar7 != 0) {
              iVar9 = iVar9 + -1;
            }
          }
          uVar4 = FUN_004e5070(iVar9,local_114,local_114);
          FUN_004e6d00(iVar8,uVar4);
          FUN_004e7910(local_114,local_114);
          FUN_004e6a00(&local_e4,local_114,&local_120);
          FUN_004e7910(&local_120,&local_120);
          FUN_004d4d50(&local_120,iVar8);
          FUN_00520bf0(&local_120,&local_e4,local_114,iVar2,local_124);
          iVar9 = FUN_0051feb0(&local_120,iVar2,local_124);
        }
        iVar8 = FUN_0050e230(&local_120,local_104,local_c4,local_f8,iVar2,local_124,*param_4);
        if (iVar8 != 0) goto LAB_00520194;
        uVar5 = FUN_004d5130(local_104,&local_e8,iVar2 + 0x800,*(undefined1 *)(iVar2 + 0x8e2));
        uVar6 = FUN_004d5210(local_c4,&local_ec,iVar2 + 0x800);
        uVar5 = uVar5 | uVar6;
        if ((((*(byte *)(iVar2 + 0x8e1) & 4) == 0) || ((*(byte *)(iVar2 + 0x8e1) & 2) == 0)) ||
           (iVar8 = FUN_0051c420(local_b8,iVar2,local_124,*param_4), iVar8 == 0)) goto LAB_00520828;
        goto LAB_00520112;
      case 0x7532:
        return 0xfffffffe;
      default:
        goto switchD_0052026d_caseD_7533;
      case 0x7534:
        iVar8 = FUN_004ab6a0(s__RUNMAT_005be2d4);
        if ((iVar8 != 0) || (iVar8 = FUN_004ab6a0(s__PROG_005bec48), iVar8 != 0)) {
          return 0xfffffff4;
        }
        FUN_0051f840(&param_1);
        if (param_1 == 0x12f) {
          uVar6 = FUN_005209b0(&local_120,iVar2);
          if (uVar6 != 0) {
            return uVar6;
          }
        }
        else if ((0x760c < param_1) && (param_1 < 0x760f)) {
          iVar8 = FUN_0051c420(local_b8,iVar2,local_124,*param_4);
          if ((iVar8 != 0) ||
             (iVar8 = FUN_0051b1c0(&param_1,local_104,local_c4,local_b8,iVar2), iVar8 != 0)) {
            FUN_0052b240(iVar8);
            return (-(uint)(iVar8 != 3) & 0xfffffffb) - 6;
          }
          if ((*(byte *)(iVar2 + 0x8e0) & 0xc0) != 0) {
            FUN_00510380(iVar2,local_124);
          }
          if ((*(byte *)(iVar2 + 0x8e1) & 4) != 0) {
            FUN_0051f5e0(local_b8,iVar2 + 0x800);
          }
        }
        break;
      case 0x753f:
        return 0x7956;
      case 0x754d:
        return 0xffffffff;
      }
    }
  }
  if (local_108 < 0x7603) {
    if (local_108 == 0x7602) {
      return 0xfffffffa;
    }
    if (local_108 == 0x7554) {
      iVar8 = FUN_004ab6a0(s__GRAPH_005be2ac);
      if ((iVar8 != 0) && ((*(byte *)(iVar2 + 0x8e0) & 0x30) == 0)) {
        return 0x16d;
      }
      goto LAB_005201d1;
    }
    if (local_108 == 0x7555) {
      iVar8 = FUN_00502180();
      goto joined_r0x00520753;
    }
    if (local_108 == 0x7557) {
      return 0xfffffff5;
    }
  }
  else {
    if (local_108 == 0x7634) {
      FUN_0051af80(0x7634,iVar2);
      goto LAB_005201d1;
    }
    if (local_108 == 0x7635) goto LAB_005207fc;
    if (local_108 == 0x7957) goto LAB_005201d1;
  }
switchD_0052026d_caseD_7533:
  if (local_108 != 0) {
    if (local_108 < 30000) {
      return local_108;
    }
    if (0x75f7 < local_108) {
      return local_108;
    }
  }
  goto LAB_005201d1;
LAB_005207fc:
  FUN_0051af80(0x7635,iVar2);
  FUN_0050acb0(iVar2);
  if ((*(byte *)(iVar2 + 0x8e0) & 0xc0) != 0) {
    FUN_00510380(iVar2,local_124);
  }
LAB_00520828:
  if ((param_1 == 0x164) || (param_1 == 0x165)) {
    FUN_0051f840(&param_1);
    FUN_0050acb0(iVar2);
    if ((*(byte *)(iVar2 + 0x8e0) & 0xc0) != 0) {
      FUN_00510380(iVar2,local_124);
    }
  }
  if ((*(byte *)(iVar2 + 0x8e1) & 4) != 0) goto LAB_005201ad;
  goto LAB_005201bd;
}

