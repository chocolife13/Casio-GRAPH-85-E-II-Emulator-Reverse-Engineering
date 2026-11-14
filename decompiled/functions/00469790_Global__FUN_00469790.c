// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00469790
// entry: 00469790  size: 526


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00469790(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  FUN_00538980(0,0,local_4);
  local_8 = FUN_00526410();
  FUN_00526420(7);
  DAT_005ceb40 = DAT_00581b80;
  _DAT_005ceb44 = DAT_00581b84;
  puVar3 = &DAT_005ceb40;
  puVar6 = &DAT_005ceb48;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  local_10 = 6;
  FUN_00538860(0,&DAT_005ceb40);
  FUN_005387f0(0);
  local_10 = 1;
  do {
    FUN_005232d0(1,local_10);
    FUN_00523470(&DAT_005cd010,0x15);
    local_10 = local_10 + 1;
  } while (local_10 < 8);
  iVar2 = FUN_00527440(0,0);
LAB_00469837:
  iVar7 = 1;
  iVar4 = 1;
switchD_00469889_caseD_7533:
  do {
    FUN_00538b30();
    FUN_004696c0(iVar7,iVar2);
    FUN_00467380(param_1);
    FUN_004699f0(iVar7,iVar4,iVar2);
    FUN_00538b30();
    iVar1 = FUN_00526620(&local_c);
  } while (iVar1 != 0);
  switch(local_c) {
  case 0x7532:
  case 0x753f:
    break;
  default:
    goto switchD_00469889_caseD_7533;
  case 0x7534:
    uVar5 = 4;
    goto LAB_00469970;
  case 0x7542:
  case 0x7544:
    if (iVar4 <= iVar7) {
      if (iVar7 == 1) {
        iVar7 = iVar2 + -4;
        iVar4 = iVar2;
        if (iVar2 < 6) {
          iVar7 = 1;
        }
        goto switchD_00469889_caseD_7533;
      }
      iVar7 = iVar7 + -1;
    }
    iVar4 = iVar4 + -1;
    goto switchD_00469889_caseD_7533;
  case 0x7545:
  case 0x7547:
    if (iVar4 != iVar2) {
      if (iVar4 < iVar7 + 4) {
        iVar4 = iVar4 + 1;
      }
      else {
        if (iVar2 <= iVar4) goto LAB_00469837;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 1;
      }
      goto switchD_00469889_caseD_7533;
    }
    goto LAB_00469837;
  case 0x754d:
    uVar5 = 2;
    goto LAB_00469970;
  case 0x754e:
    iVar1 = FUN_0052eb10(0);
    if (iVar1 != 0) {
      local_10 = 1;
      do {
        FUN_005232d0(1,local_10);
        FUN_00523470(&DAT_005cd010,0x15);
        local_10 = local_10 + 1;
      } while (local_10 < 8);
      goto switchD_00469889_caseD_7533;
    }
    break;
  case 0x7555:
    FUN_0052d2d0(s__STAT_005be2bc,&local_10);
    if (local_10 != 1) {
      local_10 = 1;
      do {
        FUN_005232d0(1,local_10);
        FUN_00523470(&DAT_005cd010,0x15);
        local_10 = local_10 + 1;
      } while (local_10 < 8);
      goto switchD_00469889_caseD_7533;
    }
  }
  uVar5 = 3;
LAB_00469970:
  FUN_00538810();
  FUN_00526440();
  FUN_00526420(local_8);
  FUN_005389c0(0,0,local_4);
  return uVar5;
}

