// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005219e0
// entry: 005219e0  size: 1377


uint FUN_005219e0(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int local_f4;
  int local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [36];
  undefined2 local_94;
  undefined1 local_92;
  byte local_91;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 local_80 [128];
  
  local_f4 = *param_3;
  local_90 = local_c4;
  local_8c = local_d0;
  local_91 = *(byte *)(param_2 + 0x8e1) >> 1 & 1;
  iVar1 = local_f4 * 0x20 + *(int *)(param_2 + 0x8dc);
  local_94 = *(undefined2 *)(iVar1 + 0x18);
  local_92 = *(undefined1 *)(iVar1 + 0x1e);
  if ((*(byte *)(param_2 + 0x8e0) & 0xc0) != 0) {
    FUN_00510380(param_2,local_f4);
  }
  iVar1 = param_2 + 0x800;
  local_f0 = 0x20;
  FUN_004d4e70(local_d0,0x20,iVar1);
  iVar2 = FUN_0050f060(local_d0,local_c4,param_2,local_f4,*param_4);
  if (iVar2 == 0) {
    uVar4 = FUN_004d5130(local_c4,&local_e8,iVar1,*(undefined1 *)(param_2 + 0x8e2));
    if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
      if (((*(byte *)(param_2 + 0x8e1) & 2) != 0) &&
         (iVar2 = FUN_0051c420(local_b8,param_2,local_f4,*param_4), iVar2 != 0)) {
LAB_00521aec:
        uVar3 = FUN_0051ff90(iVar2,&local_e4);
        return uVar3;
      }
      FUN_0051eb90(local_b8);
    }
    local_e4 = local_e8;
    local_e0 = local_f0;
    local_dc = uVar4;
    do {
      while( true ) {
        while( true ) {
          FUN_0051f7b0(local_80);
          FUN_0051f870();
          FUN_00522500(&local_e4);
          iVar2 = FUN_00526620(&local_ec);
          uVar3 = local_ec;
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            local_ec = 0x7531;
          }
          FUN_0051e2a0(*(undefined4 *)(param_2 + 0x8dc));
          FUN_00522930(&local_e4);
          FUN_0051f7f0(local_80);
          iVar2 = FUN_0051c730();
          if (iVar2 != 0) {
            return 0xfffffffa;
          }
          if (local_ec < 0x754f) break;
          if (local_ec < 0x7603) {
            if (local_ec == 0x7602) {
              return 0xfffffffa;
            }
            if (local_ec != 0x7554) {
              if (local_ec == 0x7555) {
                iVar2 = FUN_00502180();
                goto joined_r0x00521d78;
              }
              if (local_ec == 0x7557) {
                return 0xfffffff5;
              }
              goto switchD_00521bc2_caseD_7533;
            }
            iVar2 = FUN_004ab6a0(s__GRAPH_005be2ac);
            if ((iVar2 != 0) && ((*(byte *)(param_2 + 0x8e0) & 0x30) == 0)) {
              return 0x16d;
            }
          }
          else if (local_ec == 0x7634) {
            FUN_0051af80(0x7634,param_2);
          }
          else {
            if (local_ec == 0x7635) {
              FUN_0051af80(0x7635,param_2);
              FUN_0050acb0(param_2);
              if ((*(byte *)(param_2 + 0x8e0) & 0xc0) != 0) {
                FUN_00510380(param_2,local_f4);
              }
              goto LAB_00521e4d;
            }
            if (local_ec != 0x7957) goto switchD_00521bc2_caseD_7533;
          }
        }
        if (local_ec != 0x754e) break;
        iVar2 = FUN_005022f0(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                      *(byte *)(param_2 + 0x8e0) >> 4) & 0xffffff03);
joined_r0x00521d78:
        if (iVar2 != 0) {
          return 0xfffffff2;
        }
      }
      switch(local_ec) {
      case 0x7531:
      case 0x7542:
      case 0x7544:
      case 0x7545:
      case 0x7547:
        switch(local_ec) {
        case 0x7531:
          FUN_00522120(uVar3,param_1,local_d0,param_2,local_f4);
          FUN_004d5210(local_d0,&local_f0,iVar1);
          break;
        case 0x7542:
        case 0x7547:
          FUN_0051e8b0(param_1,&local_f4,param_4,local_ec,param_2);
          uVar3 = *(uint *)(local_f4 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc));
          if (((uVar3 & 0x200) == 0) || ((uVar3 & 0x800) != 0)) {
            *param_3 = local_f4;
            return 0;
          }
          if ((*(byte *)(param_2 + 0x8e0) & 0xc0) != 0) {
            FUN_00510380(param_2,local_f4);
          }
          break;
        case 0x7544:
        case 0x7545:
          if ((*(byte *)(local_f4 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc)) & 1) == 0) {
            if (local_ec == 0x7544) {
              if (local_f0 < 0x3f) {
                local_f0 = local_f0 + 1;
              }
            }
            else if (1 < local_f0) {
              local_f0 = local_f0 + -1;
            }
            FUN_004d4e70(local_d0,local_f0,iVar1);
          }
        }
        iVar2 = FUN_0050f060(local_d0,local_c4,param_2,local_f4,*param_4);
        if (iVar2 != 0) goto LAB_00521a8f;
        uVar4 = FUN_004d5130(local_c4,&local_e8,iVar1,*(undefined1 *)(param_2 + 0x8e2));
        if ((((*(byte *)(param_2 + 0x8e1) & 4) != 0) && ((*(byte *)(param_2 + 0x8e1) & 2) != 0)) &&
           (iVar2 = FUN_0051c420(local_b8,param_2,local_f4,*param_4), iVar2 != 0))
        goto LAB_00521aec;
LAB_00521e4d:
        if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
          FUN_0051eb90(local_b8);
        }
        local_e4 = local_e8;
        local_e0 = local_f0;
        local_dc = uVar4;
        if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
          FUN_0051f7b0(local_80);
        }
        break;
      case 0x7532:
        return 0xfffffffe;
      case 0x7534:
        iVar2 = FUN_004ab6a0(s__RUNMAT_005be2d4);
        if ((iVar2 != 0) || (iVar2 = FUN_004ab6a0(s__PROG_005bec48), iVar2 != 0)) {
          return 0xfffffff4;
        }
      default:
switchD_00521bc2_caseD_7533:
        if ((local_ec != 0) && ((local_ec < 30000 || (0x75f7 < local_ec)))) {
          return local_ec;
        }
        break;
      case 0x753f:
        return 0x7956;
      case 0x754d:
        return 0xffffffff;
      }
    } while( true );
  }
LAB_00521a8f:
  uVar3 = FUN_0051ff90(iVar2,&local_e4);
  return uVar3;
}

