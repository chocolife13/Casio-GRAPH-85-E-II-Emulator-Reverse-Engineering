// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00441ba0
// entry: 00441ba0  size: 1561


undefined4 FUN_00441ba0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  int local_108;
  undefined4 local_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined1 local_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  char *local_d0 [4];
  undefined *local_c0;
  undefined *local_bc;
  undefined *local_b8;
  undefined *local_b4;
  undefined *local_b0;
  undefined *local_ac;
  undefined *local_a8;
  undefined *local_a4;
  undefined *local_a0;
  undefined *local_9c;
  undefined *local_98;
  undefined1 local_94 [8];
  undefined1 local_8c [52];
  undefined1 local_58 [12];
  undefined1 local_4c [24];
  undefined1 local_34 [52];
  
  iVar4 = 0;
  local_108 = 1;
  local_d4 = 2;
  local_100 = 0;
  local_d0[1] = s_Start__005be978;
  local_d0[2] = s_End___005be970;
  local_d0[3] = &DAT_005bebf4;
  local_c0 = &DAT_005bebe8;
  local_bc = &DAT_005bebdc;
  local_b8 = &DAT_005bebd0;
  local_b4 = &DAT_005bebc4;
  local_b0 = &DAT_005bebb8;
  local_ac = &DAT_005bebac;
  local_a8 = &DAT_005beba0;
  local_a4 = &DAT_005beb94;
  local_a0 = &DAT_005beb88;
  local_9c = &DAT_005beb7c;
  local_98 = &DAT_005beb70;
  local_d0[0] = (char *)FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,1,local_94);
  iVar5 = 0;
  do {
    puVar6 = (undefined4 *)((int)&DAT_0057f780 + iVar4);
    puVar8 = (undefined4 *)((int)&DAT_005ce300 + iVar4);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_00538860(iVar5,(undefined4 *)((int)&DAT_005ce300 + iVar4));
    iVar4 = iVar4 + 0x30;
    iVar5 = iVar5 + 1;
  } while (iVar4 < 0x60);
  iVar4 = FUN_004426c0(1,&local_e0);
  if (iVar4 != 0) {
    FUN_0052b240(4);
    local_104 = 1;
LAB_00441ca8:
    FUN_005389c0(0,1,local_94);
    FUN_00526440();
    FUN_00526420(local_d0[0]);
    return local_104;
  }
  local_104 = 0;
  cVar1 = FUN_00526090(0x30);
  iVar5 = (int)cVar1;
  iVar4 = local_d4;
LAB_00441cf3:
  FUN_0052f6f0(0x131,local_8c);
  switch(iVar5) {
  case 0:
    FUN_004b6e70(local_8c,&DAT_005beb6c);
    uVar2 = 1;
    goto LAB_00441d4d;
  case 1:
  case 2:
    puVar9 = &DAT_005beb68;
    break;
  case 3:
  case 4:
    puVar9 = &DAT_005beb64;
    break;
  default:
    goto switchD_00441d0d_default;
  }
  FUN_004b6e70(local_8c,puVar9);
  uVar2 = 0;
LAB_00441d4d:
  FUN_005387f0(uVar2);
switchD_00441d0d_default:
  FUN_005232d0(1,1);
  FUN_00523470(local_8c,0x15);
  iVar3 = 2;
  do {
    iVar7 = local_108 + -2 + iVar3;
    if (iVar5 == 0) {
      if ((iVar7 < 1) || (2 < iVar7)) {
switchD_00441ebb_default:
        iVar7 = 0;
      }
    }
    else if ((iVar5 == 1) || (iVar5 == 2)) {
      switch(local_108 + -3 + iVar3) {
      case 0:
      case 1:
        break;
      case 2:
      case 3:
      case 4:
        if (iVar5 == 2) {
          iVar7 = iVar7 + 3;
        }
        break;
      case 5:
      case 6:
      case 7:
        iVar7 = iVar7 + 6;
        break;
      default:
        goto switchD_00441ebb_default;
      }
    }
    else {
      switch(local_108 + -3 + iVar3) {
      case 0:
      case 1:
        break;
      case 2:
        iVar7 = 3;
        break;
      case 3:
        iVar7 = 6;
        break;
      case 4:
        iVar7 = 4;
        break;
      case 5:
        iVar7 = 7;
        break;
      case 6:
        iVar7 = 5;
        break;
      case 7:
        iVar7 = 8;
        break;
      default:
        iVar7 = 0;
      }
      if ((iVar5 == 4) && (2 < iVar7)) {
        iVar7 = iVar7 + 3;
      }
    }
    FUN_005232d0(1,iVar3);
    if (iVar7 == 0) {
      puVar9 = &DAT_0057f5b4;
LAB_00441eec:
      FUN_00523470(puVar9,0x15);
    }
    else {
      FUN_004426c0(iVar7,&local_e0);
      FUN_004b6ef0(local_8c,local_d0[iVar7]);
      uVar2 = FUN_004e5780(local_58,local_4c);
      FUN_004e4120(&local_e0,uVar2);
      FUN_004b22b0(local_4c,local_34);
      FUN_004b6e70(local_8c,local_34);
      if (iVar4 != iVar3) {
        puVar9 = local_8c;
        goto LAB_00441eec;
      }
      FUN_00523490(local_8c);
      local_fc = local_e0;
      local_f8 = local_dc;
      local_f4 = local_d8;
      local_100 = iVar7;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  FUN_00538b30();
  iVar3 = FUN_00526620(&local_f0);
  if (local_f0 == 0x7531) {
    if (iVar3 == 0) {
      local_f0 = FUN_00526040();
    }
LAB_00441f34:
    iVar3 = FUN_00524460(1,local_f0,iVar4,&local_fc,local_d0[local_100]);
    if (iVar3 != 0) goto LAB_004421af;
    FUN_004e5640(&local_fc,local_ec);
    if ((local_100 == 1) || (local_100 == 2)) {
      FUN_004e7770(local_ec,&local_fc);
      FUN_004e7620(&local_fc,local_ec);
    }
    FUN_004427c0(local_100,local_ec);
    local_104 = 1;
    if (iVar4 == 2) {
      iVar4 = 3;
      FUN_00538810();
    }
    else {
      if ((6 < iVar4) || (iVar5 == 0)) goto LAB_004420d6;
      iVar4 = iVar4 + 1;
      FUN_00538810();
    }
    goto LAB_00441cf3;
  }
  if (iVar3 != 0) goto LAB_00441f34;
  if (local_f0 < 0x7543) {
    if (local_f0 != 0x7542) {
      if (0x7532 < local_f0) {
        if (local_f0 == 0x7534) goto LAB_00441ca8;
        FUN_00538810();
        goto LAB_00441cf3;
      }
      if (local_f0 != 0x7532) {
        if (local_f0 == 1) {
          if (iVar5 == 4) {
            iVar5 = 3;
          }
          else if (iVar5 == 2) {
            iVar5 = 1;
          }
        }
        else {
          if (local_f0 != 2) goto LAB_004421af;
          if (iVar5 == 3) {
            iVar5 = 4;
          }
          else if (iVar5 == 1) {
            iVar5 = 2;
          }
        }
        local_104 = 1;
        FUN_00526070(0x30,iVar5);
        FUN_00538810();
        goto LAB_00441cf3;
      }
      goto LAB_00441ca8;
    }
    if (2 < iVar4) {
      iVar4 = iVar4 + -1;
      FUN_00538810();
      goto LAB_00441cf3;
    }
    if ((iVar4 == 2) && (1 < local_108)) {
      local_108 = local_108 + -1;
      FUN_00538810();
      goto LAB_00441cf3;
    }
  }
  else if (local_f0 == 0x7545) {
    iVar3 = FUN_00524460(0,0x7545,iVar4,&local_fc,local_d0[local_100]);
    if (iVar3 == 0) {
      FUN_004e5640(&local_fc,local_ec);
      if ((local_100 == 1) || (local_100 == 2)) {
        FUN_004e7770(local_ec,&local_fc);
        FUN_004e7620(&local_fc,local_ec);
      }
      FUN_004427c0(local_100,local_ec);
      local_104 = 1;
      if (iVar4 == 2) {
        iVar4 = 3;
        FUN_00538810();
      }
      else {
        if ((6 < iVar4) || (iVar5 == 0)) {
          if ((iVar4 == 7) && (local_108 < 3)) {
            local_108 = local_108 + 1;
          }
          goto LAB_004421af;
        }
        iVar4 = iVar4 + 1;
        FUN_00538810();
      }
      goto LAB_00441cf3;
    }
  }
  else {
    if (local_f0 != 0x7547) {
      if (local_f0 == 0x754d) goto LAB_00441ca8;
      FUN_00538810();
      goto LAB_00441cf3;
    }
    if (iVar4 == 2) {
      iVar4 = 3;
      FUN_00538810();
      goto LAB_00441cf3;
    }
    if ((iVar4 < 7) && (iVar5 != 0)) {
      iVar4 = iVar4 + 1;
      FUN_00538810();
      goto LAB_00441cf3;
    }
LAB_004420d6:
    if ((iVar4 == 7) && (local_108 < 3)) {
      local_108 = local_108 + 1;
      FUN_00538810();
      goto LAB_00441cf3;
    }
  }
LAB_004421af:
  FUN_00538810();
  goto LAB_00441cf3;
}

