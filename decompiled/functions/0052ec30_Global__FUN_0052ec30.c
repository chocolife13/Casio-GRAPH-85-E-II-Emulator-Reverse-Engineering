// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052ec30
// entry: 0052ec30  size: 1171


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052ec30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  int local_100;
  uint local_fc;
  uint local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [4];
  undefined1 local_ec [132];
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  FUN_00538980(0,0,local_f0);
  local_f4 = 5;
  puVar6 = &DAT_00598f20;
  puVar7 = &DAT_005d0308;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_005232d0(1,1);
  switch(param_1) {
  case 0:
  case 0x11:
    _DAT_005d0330 = DAT_00598f58;
    _DAT_005d0334 = DAT_00598f5c;
    uVar2 = FUN_0052f6f0(0x1b0,local_68,0x15);
    FUN_00523470(uVar2);
    FUN_00515e10(local_ec);
    break;
  case 1:
    _DAT_005d0330 = DAT_00598f50;
    _DAT_005d0334 = DAT_00598f54;
    uVar2 = FUN_0052f6f0(0x1b1,local_68,0x15);
    FUN_00523470(uVar2);
    FUN_00515e10(local_ec);
    break;
  case 2:
    _DAT_005d0330 = DAT_00598f48;
    _DAT_005d0334 = DAT_00598f4c;
    uVar2 = FUN_0052f6f0(0x1b2,local_68,0x15);
    FUN_00523470(uVar2);
    FUN_00515ec0(local_ec);
  }
  FUN_00538860(0,&DAT_005d0308);
  FUN_005387f0(0);
  local_100 = 1;
  local_fc = 1;
  iVar5 = 1;
switchD_0052eed3_default:
  do {
    iVar3 = FUN_004ab6a0(s__TABLE_005be208);
    if ((iVar3 == 1) || (iVar3 = FUN_004ab6a0(s__RECUR_005be280), iVar3 == 1)) {
      if ((iVar5 != 4) || (cVar1 = FUN_00526090(0x31), cVar1 != '\0')) goto LAB_0052edce;
      iVar3 = 10;
    }
    else if (((param_1 < 1) || (((2 < param_1 && (param_1 != 0x11)) || (iVar5 != 4)))) ||
            (cVar1 = FUN_00526090(0x22), cVar1 == '\x03')) {
LAB_0052edce:
      iVar3 = iVar5 + -1;
    }
    else {
      iVar3 = 10;
    }
    iVar8 = iVar5 + -1;
    FUN_004b71f0(local_34,&DAT_00598e9c + iVar5 * 3,0x30);
    FUN_0052f2e0(local_100,iVar5,local_ec,local_100 + -1,param_1);
    FUN_00538b30();
    iVar4 = FUN_00526620(&local_f8);
    if (iVar4 == 0) {
      if (0x7531 < local_f8) break;
      if (local_f8 == 0x7531) goto switchD_0052efcd_caseD_7545;
      switch(local_f8) {
      case 1:
        if (param_1 == 2) {
          FUN_00515f70(0);
LAB_0052ef03:
          FUN_00515ec0(local_ec);
        }
        else {
          FUN_00515f70(1);
          FUN_00515e10(local_ec);
        }
        break;
      case 2:
        if (param_1 == 2) {
          FUN_00516020(0);
          goto LAB_0052ef03;
        }
        FUN_00516020(1);
        FUN_00515e10(local_ec);
        break;
      case 3:
        if (param_1 == 2) {
          FUN_00516050(0);
          goto LAB_0052ef03;
        }
        FUN_00516050(1);
        FUN_00515e10(local_ec);
        break;
      case 4:
        FUN_0052f480(local_ec);
        goto switchD_0052eed3_default;
      case 5:
        FUN_0052f540(local_ec,param_1);
        break;
      case 6:
        if (param_1 == 1) {
          local_fc = local_fc | 2;
          goto switchD_0052efcd_caseD_7532;
        }
        if (param_1 == 2) {
          local_fc = local_fc | 6;
          goto switchD_0052efcd_caseD_7532;
        }
      default:
        goto switchD_0052eed3_default;
      }
      local_fc = local_fc & 0xfffe;
      goto switchD_0052eed3_default;
    }
    iVar4 = FUN_005246b0(local_f8);
    if (iVar4 == 1) {
      uVar2 = 1;
      goto LAB_0052ee56;
    }
  } while( true );
  switch(local_f8) {
  case 0x7532:
  case 0x7534:
  case 0x754d:
    goto switchD_0052efcd_caseD_7532;
  default:
    goto switchD_0052eed3_default;
  case 0x7542:
    if (iVar5 < 2) {
      local_100 = 5;
      iVar5 = 10;
    }
    else {
      bVar9 = local_100 == iVar5;
      iVar5 = iVar8;
      if (bVar9) {
        local_100 = local_100 + -1;
      }
    }
    goto switchD_0052eed3_default;
  case 0x7545:
switchD_0052efcd_caseD_7545:
    if (local_f8 == 0x7531) {
      iVar4 = FUN_00529a70(iVar5);
      if (iVar4 == 0x409) {
        local_f8 = 0x54;
      }
      else if (iVar4 == 0x40a) {
        local_f8 = 0xce;
      }
      else {
        local_f8 = 0x58;
      }
      local_f4 = 1;
      uVar2 = local_f4;
    }
    else {
      uVar2 = local_f4;
      if (local_f8 == 0x7545) {
        local_f4 = 0;
        uVar2 = local_f4;
      }
    }
LAB_0052ee56:
    iVar3 = FUN_0052f130(param_1,uVar2,local_f8,local_100,iVar5,local_ec,iVar3,local_34,&local_fc);
    if ((iVar3 != 0) || (iVar5 == 10)) goto switchD_0052eed3_default;
    break;
  case 0x7547:
    if (iVar5 == 10) {
      local_100 = 1;
      iVar5 = 1;
      goto switchD_0052eed3_default;
    }
  }
  if (local_100 + 5 == iVar5) {
    local_100 = local_100 + 1;
  }
  iVar5 = iVar5 + 1;
  goto switchD_0052eed3_default;
switchD_0052efcd_caseD_7532:
  FUN_00538810();
  FUN_005389c0(0,0,local_f0);
  return local_fc;
}

