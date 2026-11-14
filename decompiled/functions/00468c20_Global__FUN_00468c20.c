// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00468c20
// entry: 00468c20  size: 740


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00468c20(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  FUN_00538980(0,0,local_4);
  local_8 = FUN_00526410();
  FUN_00526420(7);
  DAT_005ceba0 = DAT_00581b78;
  _DAT_005ceba4 = DAT_00581b7c;
  puVar4 = &DAT_005ceba0;
  puVar7 = &DAT_005ceba8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  local_10 = 6;
  FUN_00538860(0,&DAT_005ceba0);
  FUN_005387f0(0);
  iVar2 = 1;
  local_10 = 1;
  do {
    FUN_005232d0(1,local_10);
    FUN_00523470(&DAT_005cd010,0x15);
    local_10 = local_10 + 1;
  } while (local_10 < 8);
  iVar5 = 1;
  iVar8 = 1;
  if (param_1 == 1) {
    iVar3 = 2;
  }
  else {
    iVar3 = (*(int *)(param_3 + 0x10) != 1) + 3;
  }
switchD_00468d7e_caseD_7533:
  do {
    FUN_004125f0(0,0x10,0x7c,0x10);
    local_10 = 0;
    do {
      iVar1 = local_10 * 0x1c + 0xc;
      FUN_004125f0(iVar1,8,iVar1,iVar3 * 8 + 0xf);
      local_10 = local_10 + 1;
    } while (local_10 < 5);
    if (param_1 == 1) {
      FUN_00468f50(param_2);
    }
    else {
      FUN_00469220(param_3,iVar2,iVar8,iVar5);
    }
    FUN_00538b30();
    iVar1 = FUN_00526620(&local_c);
  } while (iVar1 != 0);
  switch(local_c) {
  case 0x7532:
  case 0x753f:
    goto switchD_00468d7e_caseD_7532;
  default:
    goto switchD_00468d7e_caseD_7533;
  case 0x7534:
    uVar6 = 4;
    goto LAB_00468ed5;
  case 0x7542:
    if (iVar5 < 2) {
      iVar5 = iVar3;
      if (3 < iVar8) {
        iVar5 = iVar3 + -1;
      }
    }
    else {
      iVar5 = iVar5 + -1;
    }
    goto switchD_00468d7e_caseD_7533;
  case 0x7544:
    if (iVar8 == iVar2) {
      if (iVar2 < 2) {
        if (iVar5 == 1) {
          iVar2 = 1;
          iVar8 = 3;
          iVar5 = iVar3;
        }
        else {
          iVar8 = 5;
          iVar2 = 2;
          iVar5 = iVar5 + -1;
        }
        goto switchD_00468d7e_caseD_7533;
      }
      iVar2 = iVar2 + -1;
    }
    iVar8 = iVar8 + -1;
    goto switchD_00468d7e_caseD_7533;
  case 0x7545:
    if ((iVar8 != 3) || (iVar5 != iVar3)) {
      if (iVar2 + 3 <= iVar8) {
        if (1 < iVar2) {
          iVar2 = 1;
          iVar5 = iVar5 + 1;
          iVar8 = iVar2;
          goto switchD_00468d7e_caseD_7533;
        }
        iVar2 = iVar2 + 1;
      }
      iVar8 = iVar8 + 1;
      goto switchD_00468d7e_caseD_7533;
    }
    iVar2 = 1;
    iVar8 = 1;
    break;
  case 0x7547:
    if (iVar5 < iVar3) {
      if ((iVar8 < 4) || (iVar5 < iVar3 + -1)) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar5 = 1;
      }
      goto switchD_00468d7e_caseD_7533;
    }
    break;
  case 0x754d:
    uVar6 = 2;
    goto LAB_00468ed5;
  case 0x754e:
    iVar1 = FUN_0052eb10(0);
    if (iVar1 == 0) goto switchD_00468d7e_caseD_7532;
    local_10 = 1;
    do {
      FUN_005232d0(1,local_10);
      FUN_00523470(&DAT_005cd010,0x15);
      local_10 = local_10 + 1;
    } while (local_10 < 8);
    goto switchD_00468d7e_caseD_7533;
  case 0x7555:
    FUN_0052d2d0(s__STAT_005be2bc,&local_10);
    if (local_10 == 1) goto switchD_00468d7e_caseD_7532;
    local_10 = 1;
    do {
      FUN_005232d0(1,local_10);
      FUN_00523470(&DAT_005cd010,0x15);
      local_10 = local_10 + 1;
    } while (local_10 < 8);
    goto switchD_00468d7e_caseD_7533;
  }
  iVar5 = 1;
  goto switchD_00468d7e_caseD_7533;
switchD_00468d7e_caseD_7532:
  uVar6 = 3;
LAB_00468ed5:
  FUN_00538810();
  FUN_00526440();
  FUN_00526420(local_8);
  FUN_005389c0(0,0,local_4);
  return uVar6;
}

