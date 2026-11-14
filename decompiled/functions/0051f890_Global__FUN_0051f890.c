// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051f890
// entry: 0051f890  size: 1488


/* WARNING: Type propagation algorithm not settling */

uint FUN_0051f890(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_114;
  uint local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [12];
  undefined1 local_f4 [12];
  uint local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  uint local_dc;
  undefined1 local_d0 [36];
  undefined2 local_ac;
  undefined1 local_aa;
  byte local_a9;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [128];
  
  iVar2 = param_2;
  local_a0 = local_8c;
  local_114 = *param_3;
  local_a4 = local_100;
  local_a8 = local_f4;
  local_9c = local_98;
  local_a9 = *(byte *)(param_2 + 0x8e1) >> 1 & 1;
  iVar6 = *(int *)(param_2 + 0x8dc) + local_114 * 0x20;
  iVar7 = 1;
  local_ac = *(undefined2 *)(iVar6 + 0x18);
  local_aa = *(undefined1 *)(iVar6 + 0x1e);
  if ((*(byte *)(param_2 + 0x8e0) & 0xc0) != 0) {
    FUN_00510380(param_2,local_114);
  }
  local_10c = *(int *)(local_114 * 0x20 + 4 + *(int *)(iVar2 + 0x8dc));
  FUN_0050df50(1,local_f4,local_100,iVar2,local_114);
  iVar6 = iVar2 + 0x800;
  local_110 = FUN_004d5130(local_f4,&local_108,iVar6,*(undefined1 *)(iVar2 + 0x8e2));
  uVar3 = FUN_004d5210(local_100,&local_104,iVar6);
  local_110 = local_110 | uVar3;
  if ((*(byte *)(local_114 * 0x20 + 0x18 + *(int *)(iVar2 + 0x8dc)) & 0x10) != 0) {
    FUN_0051f330(local_d0,iVar2,local_114,1);
  }
  bVar1 = *(byte *)(iVar2 + 0x8e1);
  do {
    if ((bVar1 & 4) != 0) {
      FUN_0051eb90(local_d0);
    }
    local_e4 = local_108;
    local_e0 = local_104;
    local_dc = local_110;
LAB_0051f9dd:
    while( true ) {
      do {
        FUN_0051f7b0(local_80);
        FUN_0051f870();
        FUN_00522500(&local_e4);
        iVar4 = FUN_00526620(&local_e8);
        FUN_0051e2a0(*(undefined4 *)(iVar2 + 0x8dc));
        FUN_00522930(&local_e4);
        FUN_0051f7f0(local_80);
        iVar5 = FUN_0051c730();
        if (iVar5 != 0) {
          return 0xfffffffa;
        }
      } while (iVar4 != 0);
      if (0x754e < local_e8) break;
      if (local_e8 == 0x754e) {
        iVar4 = FUN_005022f0(CONCAT31(0x75,*(byte *)(iVar2 + 0x8e0) >> 4) & 0xffffff03);
joined_r0x0051fca4:
        if (iVar4 != 0) {
          return 0xfffffff2;
        }
      }
      else {
        switch(local_e8) {
        case 0x7532:
          return 0xfffffffe;
        default:
switchD_0051fa68_caseD_7533:
          if ((local_e8 != 0) && ((local_e8 < 30000 || (0x75f7 < local_e8)))) {
            return local_e8;
          }
          break;
        case 0x7534:
          iVar4 = FUN_004ab6a0(s__RUNMAT_005be2d4);
          if ((iVar4 != 0) || (iVar4 = FUN_004ab6a0(s__PROG_005bec48), iVar4 != 0)) {
            return 0xfffffff4;
          }
          FUN_0051f840(&param_1);
          if ((0x760c < param_1) && (param_1 < 0x760f)) {
            iVar4 = FUN_0051c390(local_d0,iVar2,local_114);
            if ((iVar4 != 0) ||
               (iVar4 = FUN_0051b1c0(&param_1,local_f4,local_100,local_d0,iVar2), iVar4 != 0)) {
              FUN_0052b240(iVar4);
              return (-(uint)(iVar4 != 3) & 0xfffffffb) - 6;
            }
            if ((*(byte *)(iVar2 + 0x8e0) & 0xc0) != 0) {
              FUN_00510380(iVar2,local_114);
            }
            if ((*(byte *)(iVar2 + 0x8e1) & 4) != 0) {
              FUN_0051f5e0(local_d0,iVar6);
            }
          }
          break;
        case 0x753f:
          return 0x7956;
        case 0x7542:
        case 0x7544:
        case 0x7545:
        case 0x7547:
          switch(local_e8) {
          case 0x7542:
          case 0x7547:
            FUN_0051e8b0(param_1,&local_114,&local_110,local_e8,iVar2);
            if ((*(uint *)(local_114 * 0x20 + 0x18 + *(int *)(iVar2 + 0x8dc)) & 0x800) == 0) {
              *param_3 = local_114;
              return 0;
            }
            if ((*(byte *)(iVar2 + 0x8e0) & 0xc0) != 0) {
              FUN_00510380(iVar2,local_114);
            }
            iVar4 = local_114 * 0x20 + *(int *)(iVar2 + 0x8dc);
            local_aa = *(undefined1 *)(iVar4 + 0x1e);
            local_10c = *(int *)(iVar4 + 4);
            if (local_10c < iVar7) {
              iVar7 = local_10c;
            }
            break;
          case 0x7544:
            if (1 < iVar7) {
              iVar7 = iVar7 + -1;
            }
            break;
          case 0x7545:
            if (iVar7 < local_10c) {
              iVar7 = iVar7 + 1;
            }
          }
          FUN_0050df50(iVar7,local_f4,local_100,iVar2,local_114);
          local_110 = FUN_004d5130(local_f4,&local_108,iVar6,*(undefined1 *)(iVar2 + 0x8e2));
          uVar3 = FUN_004d5210(local_100,&local_104,iVar6);
          local_110 = local_110 | uVar3;
          if ((*(byte *)(local_114 * 0x20 + 0x18 + *(int *)(iVar2 + 0x8dc)) & 0x10) != 0) {
            FUN_0051f330(local_d0,iVar2,local_114,iVar7);
          }
          goto LAB_0051fd42;
        case 0x754d:
          return 0xffffffff;
        }
      }
    }
    if (local_e8 < 0x7603) {
      if (local_e8 == 0x7602) {
        return 0xfffffffa;
      }
      if (local_e8 != 0x7554) {
        if (local_e8 == 0x7555) {
          iVar4 = FUN_00502180();
          goto joined_r0x0051fca4;
        }
        if (local_e8 == 0x7557) {
          return 0xfffffff5;
        }
        goto switchD_0051fa68_caseD_7533;
      }
      iVar4 = FUN_004ab6a0(s__GRAPH_005be2ac);
      if ((iVar4 != 0) && ((*(byte *)(iVar2 + 0x8e0) & 0x30) == 0)) {
        return 0x16d;
      }
      goto LAB_0051f9dd;
    }
    if (local_e8 == 0x7634) {
      FUN_0051af80(0x7634,iVar2);
      goto LAB_0051f9dd;
    }
    if (local_e8 != 0x7635) {
      if (local_e8 != 0x7957) goto switchD_0051fa68_caseD_7533;
      goto LAB_0051f9dd;
    }
    FUN_0051af80(0x7635,iVar2);
    FUN_0050acb0(iVar2);
    if ((*(byte *)(iVar2 + 0x8e0) & 0xc0) != 0) {
      FUN_00510380(iVar2,local_114);
    }
LAB_0051fd42:
    if ((param_1 == 0x164) || (param_1 == 0x165)) {
      FUN_0051f840(&param_1);
      FUN_0050acb0(iVar2);
      if ((*(byte *)(iVar2 + 0x8e0) & 0xc0) != 0) {
        FUN_00510380(iVar2,local_114);
      }
    }
    bVar1 = *(byte *)(iVar2 + 0x8e1);
  } while( true );
}

