// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051c760
// entry: 0051c760  size: 2795


uint FUN_0051c760(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 uVar5;
  int iVar4;
  undefined3 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  int local_d4;
  int local_d0;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined1 local_80 [128];
  
  local_d4 = 0;
  local_d0 = 0;
  bVar1 = false;
  if ((*(byte *)(param_2 + 0x8e2) & 0x80) == 0) {
    iVar8 = 0x40;
    local_9c = 0x7f;
  }
  else {
    iVar8 = 0x20;
    local_9c = 0x3f;
  }
  iVar7 = 0x20;
  if (param_1 < 0x7614) {
    if (param_1 == 0x7613) {
      FUN_0050fb90(iVar8);
    }
    else if (param_1 == 0x16a) {
      bVar1 = true;
      FUN_00517df0(&local_c4);
      FUN_00517d50();
      iVar7 = local_c0;
      iVar8 = local_c4;
    }
    else if (param_1 == 0x7611) {
      bVar1 = true;
      iVar3 = FUN_00517df0(&local_c4);
      iVar7 = local_c0;
      iVar8 = local_c4;
      if (iVar3 != 2) {
        return 0xfffffffa;
      }
      DAT_005d6800 = 0;
      local_d4 = local_bc;
      local_d0 = local_b8;
      FUN_0050f940(local_bc,local_b8,local_c4,local_c0,param_2,*(undefined1 *)(param_2 + 0x8e3),
                   *(undefined1 *)(param_2 + 0x8e2));
      param_1 = 0x7610;
    }
  }
  else if (param_1 == 0x7614) {
    FUN_0050fbb0(0x20,*(byte *)(param_2 + 0x8e2));
  }
  FUN_004d4da0(local_b4,iVar8,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
  FUN_004d4e70(local_a8,iVar7,param_2 + 0x800);
  FUN_0052f780(0x58,local_b4);
  FUN_0052f780(0x59,local_a8);
  if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
    FUN_0051eaa0(local_b4,local_a8);
  }
  local_8c = 0;
  iVar3 = iVar8;
  iVar2 = iVar7;
switchD_0051ce65_caseD_7533:
  while( true ) {
    local_90 = iVar2;
    local_94 = iVar3;
    FUN_0051f7b0(local_80);
    FUN_0051f870();
    FUN_00522500(&local_94);
    local_98 = FUN_00526620(&local_c8);
    FUN_00522930(&local_94);
    FUN_0051f7f0(local_80);
    uVar9 = FUN_0051c730();
    if ((int)uVar9 != 0) {
      if ((((param_1 == 0x16a) || (param_1 == 0x7610)) || (param_1 == 0x7611)) && (bVar1)) {
        local_c4 = iVar8;
        local_c0 = iVar7;
        FUN_00517c90(&local_c4);
      }
      if (param_1 == 0x7612) {
        FUN_0050ad60(param_2);
      }
      return 0xfffffffa;
    }
    if (local_98 == 0) break;
LAB_0051cfad:
    iVar3 = local_94;
    iVar2 = local_90;
    if (param_1 == 0x7616) {
      FUN_0050acb0(param_2);
      iVar8 = FUN_0051c4a0(0,local_c8,iVar8,iVar7,param_2,0x20,*(undefined1 *)(param_2 + 0x8e2));
      FUN_004d4da0(local_b4,iVar8,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
      FUN_0052f780(0x58,local_b4);
      iVar3 = iVar8;
      iVar2 = local_90;
      if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
        FUN_0051eaa0(local_b4,local_a8);
        iVar2 = local_90;
      }
    }
  }
  if (local_c8 == 0x7531) {
    FUN_0051c6f0(&local_c8);
    goto LAB_0051cfad;
  }
  iVar3 = iVar8;
  iVar2 = local_90;
  if (local_c8 < 0x754f) {
    if (local_c8 == 0x754e) {
      iVar4 = FUN_005022f0(CONCAT31((int3)((ulonglong)uVar9 >> 0x28),*(byte *)(param_2 + 0x8e0) >> 4
                                   ) & 0xffffff03);
joined_r0x0051cdd1:
      iVar3 = local_94;
      iVar2 = local_90;
      if (iVar4 != 0) {
        return 0xfffffff2;
      }
      goto switchD_0051ce65_caseD_7533;
    }
    switch(local_c8) {
    case 0x7532:
    case 0x753f:
    case 0x754d:
      goto switchD_0051c989_caseD_7532;
    default:
      goto switchD_0051c989_caseD_7533;
    case 0x7534:
      uVar6 = (undefined3)(local_c8 - 0x7532 >> 8);
      if (param_1 < 0x7611) {
        if (param_1 == 0x7610) {
LAB_0051cba4:
          local_c4 = iVar8;
          local_c0 = iVar7;
          FUN_00517c90(&local_c4);
switchD_0051cbea_caseD_5:
          if (param_1 == 0x7610) {
            uVar11 = *(undefined1 *)(param_2 + 0x8e2);
            bVar1 = true;
            uVar10 = 0x20;
          }
          else if ((param_1 == 0x7618) ||
                  ((param_1 == 0x7619 && (iVar3 = FUN_00507900(param_2,iVar8,iVar7), iVar3 != 0))))
          {
            uVar11 = *(undefined1 *)(param_2 + 0x8e2);
            uVar10 = 0xe0;
          }
          else {
            uVar11 = *(undefined1 *)(param_2 + 0x8e2);
            uVar10 = 0x20;
          }
          FUN_0050f990(iVar8,iVar7,param_2,uVar10,uVar11);
          local_d4 = iVar8;
          local_d0 = iVar7;
          if (param_1 == 0x16a) {
            return 0xfffffff4;
          }
        }
        else if (param_1 < 0x16b) {
          if (param_1 == 0x16a) goto LAB_0051cba4;
          if (param_1 == 300) {
            if ((iVar8 != local_d4) && (iVar7 != local_d0)) {
              if (iVar8 < local_d4) {
                iVar3 = local_d4;
                local_d4 = iVar8;
              }
              iVar8 = iVar7;
              if (iVar7 < local_d0) {
                iVar8 = local_d0;
                local_d0 = iVar7;
              }
              iVar7 = param_2 + 0x800;
              FUN_004d4da0(param_2 + 0x8a8,local_d4,iVar7,*(undefined1 *)(param_2 + 0x8e2));
              FUN_004d4e70(param_2 + 0x8c0,iVar8,iVar7);
              FUN_004d4da0(param_2 + 0x8b4,iVar3,iVar7,*(undefined1 *)(param_2 + 0x8e2));
              FUN_004d4e70(param_2 + 0x8cc,local_d0,iVar7);
              if ((*(byte *)(param_2 + 0x8e0) & 0x30) == 0x10) {
                local_bc = local_d4;
                local_b8 = local_d0;
                local_c4 = iVar3;
                local_c0 = iVar8;
                iVar8 = FUN_00517e50(&local_c4);
                if (iVar8 != 0) {
                  FUN_0052b240(4);
                  return 0xfffffff5;
                }
                return 0;
              }
              return 0;
            }
          }
          else if (param_1 == 0x12d) {
            DAT_005d6800 = 0;
            FUN_0050f940(iVar8,iVar7,local_d4,local_d0,param_2,*(undefined1 *)(param_2 + 0x8e3),
                         *(undefined1 *)(param_2 + 0x8e2));
            FUN_0050acb0(param_2);
            if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
              FUN_0051eaa0(local_b4,local_a8);
            }
            param_1 = 0x761a;
          }
          else if (param_1 == 0x163) {
            if ((iVar8 == local_d4) && (iVar7 == local_d0)) {
              FUN_0050f990(iVar8,iVar7,param_2,0x20,*(undefined1 *)(param_2 + 0x8e2));
            }
            else {
              FUN_004d4da0(param_2 + 0x8b4,iVar8,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
              FUN_004d4e70(param_2 + 0x8cc,iVar7,param_2 + 0x800);
              iVar3 = FUN_0051d450(param_2,0);
              if (iVar3 != 0) {
                FUN_0052b240(iVar3);
                iVar8 = FUN_004ab6a0(s__STAT_005be2bc);
                return (-(uint)(iVar8 != 0) & 9) - 0xb;
              }
            }
            FUN_0050ad60(param_2);
            if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
              FUN_0051eaa0(local_b4,local_a8);
            }
            param_1 = 0x7612;
          }
        }
        else {
          switch(param_1) {
          case 0x75f8:
            goto switchD_0051cb9d_caseD_75f8;
          case 0x75fa:
          case 0x75fb:
          case 0x7600:
            FUN_004d4da0(param_2 + 0x8a8,iVar8,param_2 + 0x800,
                         CONCAT31(uVar6,*(undefined1 *)(param_2 + 0x8e2)));
            FUN_004d4e70(param_2 + 0x8c0,iVar7,param_2 + 0x800);
            return 0;
          }
        }
      }
      else {
        uVar5 = (undefined3)((uint)(param_1 + -0x7612) >> 8);
        switch(param_1 + -0x7612) {
        case 0:
        case 8:
switchD_0051cb9d_caseD_75f8:
          if (param_1 == 0x75f8) {
            param_1 = 300;
            local_d4 = iVar8;
            local_d0 = iVar7;
          }
          else if (param_1 == 0x761a) {
            param_1 = 0x12d;
            local_d4 = iVar8;
            local_d0 = iVar7;
          }
          else {
            FUN_004d4da0(param_2 + 0x8a8,iVar8,param_2 + 0x800,
                         CONCAT31(uVar6,*(undefined1 *)(param_2 + 0x8e2)));
            FUN_004d4e70(param_2 + 0x8c0,iVar7,param_2 + 0x800);
            param_1 = 0x163;
            local_d4 = iVar8;
            local_d0 = iVar7;
          }
          break;
        case 1:
          DAT_005d6800 = 0;
          FUN_0050f940(iVar8,1,iVar8,0x3f,param_2,CONCAT31(uVar6,*(undefined1 *)(param_2 + 0x8e3)),
                       CONCAT31(uVar5,*(undefined1 *)(param_2 + 0x8e2)));
          break;
        case 2:
          DAT_005d6800 = 0;
          uVar10 = CONCAT31(uVar5,*(byte *)(param_2 + 0x8e2));
          if ((*(byte *)(param_2 + 0x8e2) & 0x80) == 0) {
            FUN_0050f940(1,iVar7,0x7f,iVar7,param_2,CONCAT31(uVar5,*(undefined1 *)(param_2 + 0x8e3))
                         ,uVar10);
          }
          else {
            FUN_0050f940(1,iVar7,0x3f,iVar7,param_2,*(undefined1 *)(param_2 + 0x8e3),uVar10);
          }
          break;
        case 3:
          if (bVar1) {
            bVar1 = false;
          }
          else {
            DAT_005d6800 = 0;
            FUN_0050f940(iVar8,iVar7,iVar8,iVar7,param_2,*(undefined1 *)(param_2 + 0x8e3),
                         CONCAT31(uVar6,*(undefined1 *)(param_2 + 0x8e2)));
            bVar1 = true;
            local_d4 = iVar8;
            local_d0 = iVar7;
          }
          break;
        case 5:
        case 6:
        case 7:
          goto switchD_0051cbea_caseD_5;
        }
      }
      FUN_0051d310(param_1,iVar8,iVar7,local_d4,local_d0,param_2);
      iVar3 = local_94;
      iVar2 = local_90;
      goto switchD_0051ce65_caseD_7533;
    case 0x7542:
    case 0x7544:
    case 0x7545:
    case 0x7547:
      goto switchD_0051c99f_switchD;
    }
  }
  if (0x7634 < local_c8) {
    if (local_c8 == 0x7635) {
      FUN_0051af80(0x7635,param_2);
      FUN_0050acb0(param_2);
      goto switchD_0051c99f_caseD_7543;
    }
    iVar3 = local_94;
    if (local_c8 != 0x7957) {
switchD_0051c989_caseD_7533:
      iVar3 = local_94;
      if ((local_c8 != 0) && ((local_c8 < 30000 || (0x75f7 < local_c8)))) {
        if (((param_1 == 0x16a) || ((param_1 == 0x7610 || (param_1 == 0x7611)))) && (bVar1)) {
          local_c4 = iVar8;
          local_c0 = iVar7;
          FUN_00517c90(&local_c4);
        }
        return local_c8;
      }
    }
    goto switchD_0051ce65_caseD_7533;
  }
  if (local_c8 == 0x7634) {
    FUN_0051af80(0x7634,param_2);
    iVar3 = local_94;
    iVar2 = local_90;
    goto switchD_0051ce65_caseD_7533;
  }
  if (local_c8 == 0x7554) {
    iVar4 = FUN_004ab6a0(s__GRAPH_005be2ac);
    iVar3 = local_94;
    iVar2 = local_90;
    if ((iVar4 == 0) || ((*(byte *)(param_2 + 0x8e0) & 0x30) != 0))
    goto switchD_0051ce65_caseD_7533;
  }
  else {
    if (local_c8 == 0x7555) {
      iVar4 = FUN_00502180();
      goto joined_r0x0051cdd1;
    }
    if (local_c8 != 0x7557) goto switchD_0051c989_caseD_7533;
  }
switchD_0051c989_caseD_7532:
  if ((((param_1 == 0x16a) || (param_1 == 0x7610)) || (param_1 == 0x7611)) && (bVar1)) {
    local_c4 = iVar8;
    local_c0 = iVar7;
    FUN_00517c90(&local_c4);
  }
  if (param_1 == 0x7612) {
    FUN_0050ad60(param_2);
  }
  iVar3 = local_94;
  iVar2 = local_90;
  switch(local_c8) {
  case 0x7532:
    return 0xfffffffe;
  case 0x753f:
    return (-(uint)(param_1 != 0x7615) & 0x795c) - 6;
  case 0x754d:
    return 0xffffffff;
  case 0x7554:
    return 0x16d;
  case 0x7557:
    return 0xfffffff5;
  }
  goto switchD_0051ce65_caseD_7533;
switchD_0051c99f_switchD:
  switch(local_c8) {
  case 0x7542:
  case 0x7547:
    if (param_1 != 0x7613) {
      if (local_c8 == 0x7542) {
        iVar8 = iVar7 + -1;
        if (iVar7 + -1 < 1) {
          iVar8 = iVar7;
        }
      }
      else {
        iVar8 = iVar7 + 1;
        if (0x3f < iVar7 + 1) {
          iVar8 = iVar7;
        }
      }
      FUN_004d4e70(local_a8,iVar8,param_2 + 0x800);
      FUN_0052f780(0x59,local_a8);
      iVar7 = iVar8;
    }
    break;
  case 0x7544:
  case 0x7545:
    if (param_1 != 0x7614) {
      if (local_c8 == 0x7545) {
        iVar3 = iVar8 + 1;
        if (local_9c < iVar8 + 1) {
          iVar3 = iVar8;
        }
      }
      else {
        iVar3 = iVar8 + -1;
        if (iVar8 + -1 < 1) {
          iVar3 = iVar8;
        }
      }
      FUN_004d4da0(local_b4,iVar3,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
      FUN_0052f780(0x58,local_b4);
    }
  }
switchD_0051c99f_caseD_7543:
  iVar8 = iVar3;
  iVar2 = iVar7;
  if (param_1 < 0x164) {
    if ((param_1 == 0x163) || ((299 < param_1 && (param_1 < 0x12e)))) {
LAB_0051cf58:
      FUN_0050acb0(param_2);
      if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
        FUN_0051eaa0(local_b4,local_a8);
      }
      FUN_0051d310(param_1,iVar3,iVar7,local_d4,local_d0,param_2);
      goto switchD_0051ce65_caseD_7533;
    }
  }
  else if ((0x7612 < param_1) && (param_1 < 0x7615)) goto LAB_0051cf58;
  if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
    FUN_0051eaa0(local_b4,local_a8);
  }
  if ((param_1 == 0x7615) && (bVar1)) {
    FUN_0050f830(local_d4,local_d0,iVar3,iVar7,param_2,*(undefined1 *)(param_2 + 0x8e3),
                 *(undefined1 *)(param_2 + 0x8e2));
    local_d4 = iVar3;
    local_d0 = iVar7;
  }
  goto switchD_0051ce65_caseD_7533;
}

