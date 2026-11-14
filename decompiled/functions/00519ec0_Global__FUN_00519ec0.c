// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00519ec0
// entry: 00519ec0  size: 3031


uint FUN_00519ec0(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [12];
  int local_120;
  undefined4 local_11c [3];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e0 [3];
  undefined1 local_d4 [12];
  undefined4 local_c8;
  undefined1 local_c4 [36];
  undefined4 local_a0;
  undefined1 *local_9c;
  undefined4 *local_98;
  undefined1 *local_94;
  undefined4 *local_90;
  undefined1 local_8c [12];
  undefined1 local_80 [128];
  
  uVar7 = 0;
  local_130 = 0;
  local_134 = 0;
  FUN_00538710();
  uVar2 = FUN_0051dbe0(&local_120,param_1,param_2);
  if (uVar2 != 0) {
    return uVar2;
  }
LAB_00519efe:
  FUN_0050acb0(param_2);
  iVar3 = *(int *)(param_2 + 0x8dc) + local_120 * 0x20;
  uVar1 = *(ushort *)(iVar3 + 0x18);
  local_a0 = (uint)CONCAT12(*(undefined1 *)(iVar3 + 0x1e),uVar1);
  if ((uVar1 & 0x400) == 0) {
    local_9c = local_12c;
    local_98 = &local_110;
  }
  else {
    local_9c = local_d4;
    local_98 = local_e0;
  }
  local_90 = &local_110;
  local_94 = local_12c;
  switch(param_1) {
  case 0x7620:
  case 0x7624:
  case 0x7626:
    if (param_1 == 0x7620) {
      FUN_004e5780(&local_100);
    }
    else if ((param_1 == 0x7626) &&
            (iVar3 = FUN_00522120(0,0x7626,&local_100,param_2,local_120), iVar3 != 0)) {
switchD_0051a920_caseD_7532:
      return 0xfffffffe;
    }
    FUN_00519cc0(param_1,param_2,&local_120,0x7544,local_8c);
    FUN_004e5630(3,local_12c);
    iVar3 = FUN_004d60d0(param_2,&local_120,0x7545,&local_100,local_8c,local_12c,param_1);
    if (iVar3 == 0) {
      if ((local_a0 & 0x100) == 0) {
        iVar3 = FUN_0050e230(local_12c,local_d4,local_e0,&local_110,param_2,local_120,local_11c[0]);
        if (iVar3 != 0) break;
        uVar9 = *(undefined1 *)(param_2 + 0x8e2);
        puVar6 = local_d4;
      }
      else {
        uVar9 = *(undefined1 *)(param_2 + 0x8e2);
        puVar6 = local_12c;
      }
      uVar7 = FUN_004d5130(puVar6,&local_130,param_2 + 0x800,uVar9);
      if (param_1 == 0x7624) {
        iVar3 = FUN_0050f060(local_12c,&local_110,param_2,local_120,local_11c[0]);
        if (iVar3 != 0) break;
      }
      else {
        if ((local_a0 & 0x100) != 0) {
          FUN_0052f780(0x58,local_12c);
        }
        local_110 = local_100;
        local_10c = local_fc;
        local_108 = local_f8;
        FUN_0052f780(0x59,&local_110);
      }
      if ((local_a0 & 0x100) == 0) {
        puVar8 = local_e0;
      }
      else {
        puVar8 = &local_110;
      }
      uVar2 = FUN_004d5210(puVar8,&local_134,param_2 + 0x800);
      uVar7 = uVar7 | uVar2;
      FUN_0051ad90(param_2,param_1,&local_120,local_c4);
      local_f4 = local_130;
      local_f0 = local_134;
      local_ec = uVar7;
      goto switchD_00519f94_default;
    }
    break;
  case 0x7621:
  case 0x7622:
    FUN_004e5780(&local_100);
    FUN_00519cc0(param_1,param_2,&local_120,0x7544,local_8c);
    FUN_004e5630(3,local_12c);
    iVar3 = FUN_004d5510(param_1,param_2,&local_120,0x7545,local_8c,local_12c);
    if (iVar3 == 0) {
      uVar7 = FUN_004d5130(local_12c,&local_130,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
      iVar3 = FUN_0050f060(local_12c,&local_110,param_2,local_120,local_11c[0]);
      if (iVar3 == 0) {
        uVar2 = FUN_004d5210(&local_110,&local_134,param_2 + 0x800);
        uVar7 = uVar7 | uVar2;
        FUN_0051ad90(param_2,param_1,&local_120,local_c4);
        goto LAB_0051a829;
      }
    }
    break;
  case 0x7623:
  case 0x7625:
    if (param_1 == 0x7623) {
      uVar4 = FUN_004e5780(local_12c);
      iVar3 = FUN_00520ab0(uVar4);
      if (iVar3 != 0) goto LAB_0051a9d8;
    }
    else {
      iVar3 = FUN_00522120(0,param_1,local_12c,param_2,local_120);
      if (iVar3 != 0) {
        return 0xfffffffe;
      }
    }
    if ((local_a0 & 0x100) == 0) {
      iVar3 = FUN_0050e230(local_12c,local_d4,local_e0,&local_110,param_2,local_120,local_11c[0]);
      if (iVar3 != 0) break;
      uVar7 = FUN_004d5130(local_d4,&local_130,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
      puVar8 = local_e0;
    }
    else {
      iVar3 = FUN_0050f060(local_12c);
      if (iVar3 != 0) break;
      uVar7 = FUN_004d5130(local_12c,&local_130,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
      puVar8 = &local_110;
    }
    uVar2 = FUN_004d5210(puVar8,&local_134,param_2 + 0x800);
    uVar7 = uVar7 | uVar2;
    iVar3 = param_1;
    if (param_1 != 0x7623) goto LAB_0051a820;
    if ((local_a0 & 0x401) == 0x401) {
      iVar5 = FUN_004e4020(local_d4);
      if (iVar5 != 0) goto LAB_0051a9d8;
      iVar5 = FUN_004e4020(local_e0);
    }
    else {
      iVar5 = FUN_004e4020(&local_110);
    }
    if (iVar5 == 0) goto LAB_0051a820;
LAB_0051a9d8:
    FUN_0052b240(0x15);
    return 0xfffffff5;
  case 0x7627:
    FUN_00414db0();
    uVar2 = FUN_00520e80(0x12e,param_2,&local_120,local_11c);
    FUN_00414db0();
    if (uVar2 != 0) {
      return uVar2;
    }
    local_c8 = *(undefined4 *)(local_120 * 0x20 + *(int *)(param_2 + 0x8dc));
    uVar4 = FUN_004e5780(&local_100,&local_c8,local_12c);
    iVar3 = FUN_0051ab30(param_2,param_2 + 0x8a8,param_2 + 0x8b4,uVar4);
    if (iVar3 == 0) {
      local_ec = 1;
      goto switchD_00519f94_default;
    }
    break;
  default:
switchD_00519f94_default:
    do {
      FUN_0051f7b0(local_80);
      FUN_0051f870();
      FUN_00522500(&local_f4);
      iVar3 = FUN_00526620(&local_104);
      FUN_0051e2a0(*(undefined4 *)(param_2 + 0x8dc));
      FUN_00522930(&local_f4);
      FUN_0051f7f0(local_80);
      iVar5 = FUN_0051c730();
      if (iVar5 != 0) {
        if (param_1 == 0x7624) {
          FUN_0050ad60(param_2);
        }
        return 0xfffffffa;
      }
    } while (iVar3 != 0);
    if (local_104 < 0x754f) {
      if (local_104 == 0x754e) {
        iVar3 = FUN_005022f0(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                      *(byte *)(param_2 + 0x8e0) >> 4) & 0xffffff03);
joined_r0x0051a8c4:
        if (iVar3 != 0) {
          return 0xfffffff2;
        }
        goto switchD_00519f94_default;
      }
      switch(local_104) {
      case 0x7531:
        if (param_1 != 0x7626) {
          if (param_1 == 0x7625) {
            iVar3 = FUN_00522120(0,0x7625,local_12c,param_2,local_120);
            if (iVar3 != 0) {
              return 0xfffffffe;
            }
            if ((local_a0 & 0x100) == 0) {
              iVar3 = FUN_0050e230(local_12c,local_d4,local_e0,&local_110,param_2,local_120,
                                   local_11c[0]);
              if (iVar3 != 0) goto LAB_0051aa20;
              uVar7 = FUN_004d5130(local_d4,&local_130,param_2 + 0x800,
                                   *(undefined1 *)(param_2 + 0x8e2));
              puVar8 = local_e0;
            }
            else {
              iVar3 = FUN_0050f060(local_12c);
              if (iVar3 != 0) goto LAB_0051aa20;
              uVar7 = FUN_004d5130(local_12c,&local_130,param_2 + 0x800,
                                   *(undefined1 *)(param_2 + 0x8e2));
              puVar8 = &local_110;
            }
            uVar2 = FUN_004d5210(puVar8,&local_134,param_2 + 0x800);
            uVar7 = uVar7 | uVar2;
            iVar3 = 0x7625;
LAB_0051a820:
            FUN_0051ad90(param_2,iVar3,&local_120,local_c4);
LAB_0051a829:
            local_f4 = local_130;
            local_f0 = local_134;
            local_ec = uVar7;
          }
          goto switchD_00519f94_default;
        }
        goto LAB_00519efe;
      case 0x7532:
      case 0x753f:
      case 0x754d:
        goto switchD_0051a4a6_caseD_7532;
      default:
switchD_0051a4a6_caseD_7533:
        if ((local_104 != 0) && ((local_104 < 30000 || (0x75f7 < local_104)))) {
          if (param_1 != 0x7624) {
            return local_104;
          }
          FUN_0050ad60(param_2);
          return local_104;
        }
        goto switchD_00519f94_default;
      case 0x7534:
        if (((*(byte *)(param_2 + 0x8e0) & 0x30) == 0x20) && (param_1 != 0x7627)) {
          FUN_005209b0(local_12c,param_2);
        }
        goto switchD_00519f94_default;
      case 0x7544:
      case 0x7545:
        if (((param_1 != 0x7627) && (param_1 != 0x7623)) && (param_1 != 0x7625)) {
          FUN_0050ad60(param_2);
          if (((param_1 == 0x7620) || (param_1 == 0x7624)) || (param_1 == 0x7626)) {
            iVar3 = FUN_004d60d0(param_2,&local_120,local_104,&local_100,local_8c,local_12c,param_1)
            ;
            if ((iVar3 != 0) && (iVar3 != 0x15)) goto LAB_0051aa20;
            if ((local_a0 & 0x100) == 0) {
              iVar3 = FUN_0050e230(local_12c,local_d4,local_e0,&local_110,param_2,local_120,
                                   local_11c[0]);
              if (iVar3 != 0) goto LAB_0051aa20;
              uVar9 = *(undefined1 *)(param_2 + 0x8e2);
              puVar6 = local_d4;
            }
            else {
              uVar9 = *(undefined1 *)(param_2 + 0x8e2);
              puVar6 = local_12c;
            }
            uVar7 = FUN_004d5130(puVar6,&local_130,param_2 + 0x800,uVar9);
            if (param_1 == 0x7624) {
              iVar3 = FUN_0050f060(local_12c,&local_110,param_2,local_120,local_11c[0]);
              if (iVar3 != 0) goto LAB_0051aa20;
            }
            else {
              if ((local_a0 & 0x100) != 0) {
                FUN_0052f780(0x58,local_12c);
              }
              local_110 = local_100;
              local_10c = local_fc;
              local_108 = local_f8;
              FUN_0052f780(0x59,&local_110);
            }
            if ((local_a0 & 0x100) == 0) {
              puVar8 = local_e0;
            }
            else {
              puVar8 = &local_110;
            }
            uVar2 = FUN_004d5210(puVar8,&local_134,param_2 + 0x800);
            uVar7 = uVar7 | uVar2;
          }
          else if ((param_1 == 0x7621) || (param_1 == 0x7622)) {
            iVar3 = FUN_004d5510(param_1,param_2,&local_120,local_104,local_8c,local_12c);
            if ((iVar3 != 0) && (iVar3 != 0x15)) goto LAB_0051aa20;
            uVar7 = FUN_004d5130(local_12c,&local_130,param_2 + 0x800,
                                 *(undefined1 *)(param_2 + 0x8e2));
            iVar3 = FUN_0050f060(local_12c,&local_110,param_2,local_120,local_11c[0]);
            if (iVar3 != 0) goto LAB_0051aa20;
            uVar2 = FUN_004d5210(&local_110,&local_134,param_2 + 0x800);
            uVar7 = uVar7 | uVar2;
            FUN_004e5780(local_c4);
          }
          FUN_0051ad90(param_2,param_1,&local_120,local_c4);
          local_f4 = local_130;
          local_f0 = local_134;
          local_ec = uVar7;
        }
        goto switchD_00519f94_default;
      }
    }
    if (0x7634 < local_104) {
      if (local_104 == 0x7635) {
        FUN_0051af80(0x7635,param_2);
        FUN_0050acb0(param_2);
        if (param_1 == 0x7627) {
          FUN_0051ac70(param_2,param_2 + 0x8a8,param_2 + 0x8b4,local_12c);
        }
        else {
          FUN_0051ad90(param_2,param_1,&local_120,local_c4);
        }
      }
      else if (local_104 != 0x7957) goto switchD_0051a4a6_caseD_7533;
      goto switchD_00519f94_default;
    }
    if (local_104 == 0x7634) {
      FUN_0051af80(0x7634,param_2);
      goto switchD_00519f94_default;
    }
    if (local_104 != 0x7554) {
      if (local_104 == 0x7555) {
        iVar3 = FUN_00502180();
        goto joined_r0x0051a8c4;
      }
      if (local_104 != 0x7557) goto switchD_0051a4a6_caseD_7533;
      goto switchD_0051a4a6_caseD_7532;
    }
    iVar3 = FUN_004ab6a0(s__GRAPH_005be2ac);
    if ((iVar3 == 0) || ((*(byte *)(param_2 + 0x8e0) & 0x30) != 0)) goto switchD_00519f94_default;
switchD_0051a4a6_caseD_7532:
    if (param_1 == 0x7624) {
      FUN_0050ad60(param_2);
    }
    switch(local_104) {
    case 0x7532:
      goto switchD_0051a920_caseD_7532;
    case 0x753f:
      return 0xfffffff3;
    case 0x754d:
      return 0xffffffff;
    case 0x7554:
      return 0x16d;
    case 0x7557:
      goto switchD_0051a920_caseD_7557;
    }
    goto switchD_00519f94_default;
  }
LAB_0051aa20:
  FUN_0052b240(iVar3);
switchD_0051a920_caseD_7557:
  return 0xfffffff5;
}

