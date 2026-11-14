// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00464660
// entry: 00464660  size: 2340


int FUN_00464660(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined1 local_578 [12];
  uint local_56c;
  undefined4 local_568;
  undefined4 local_564;
  uint local_560;
  undefined1 local_554 [12];
  int local_548;
  int local_544;
  int local_540;
  undefined4 local_53c [4];
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  int local_520;
  undefined1 local_51c [12];
  undefined1 local_510 [24];
  undefined1 local_4f8 [52];
  undefined1 local_4c4 [80];
  undefined1 local_474 [52];
  undefined1 local_440 [128];
  undefined4 local_3c0 [240];
  
  iVar7 = 0;
  local_524 = FUN_00526410();
  FUN_00538a00(local_51c);
  FUN_00538980(0,0x13,local_4c4);
  FUN_0053c6f0(5);
  FUN_0053c690(6);
  local_548 = 0;
  FUN_00526420(0xc6);
  local_544 = *(int *)(*(int *)(param_1 + 0x8dc) + 8);
  switch(local_544) {
  case 1:
  case 2:
  case 3:
  case 4:
    iVar7 = 0;
    break;
  case 5:
  case 6:
    iVar7 = 1;
    break;
  case 7:
    iVar7 = 2;
    break;
  case 8:
    iVar7 = 3;
    break;
  case 9:
    FUN_0053c690(0x13);
    local_548 = 0x13;
    goto LAB_0046472b;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    FUN_0053c690(0x14);
    local_548 = 0x14;
LAB_0046472b:
    iVar7 = FUN_00539970(local_548,local_3c0);
    iVar5 = 0;
    if (0 < iVar7) {
      puVar8 = local_3c0;
      do {
        FUN_00538860(iVar5,puVar8);
        iVar5 = iVar5 + 1;
        puVar8 = puVar8 + 0xc;
      } while (iVar5 < iVar7);
    }
    goto LAB_00464761;
  }
  puVar8 = &DAT_00581398 + iVar7 * 0xc;
  puVar9 = local_3c0;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_00538860(0,local_3c0);
LAB_00464761:
  FUN_005387f0(0);
  if ((0 < local_544) && (local_544 < 9)) {
    puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x8dc) + 4);
    local_53c[0] = *puVar8;
    local_53c[1] = puVar8[1];
    local_53c[2] = puVar8[2];
    iVar7 = *(int *)(*(int *)(param_1 + 0x8dc) + 4);
    local_53c[3] = *(undefined4 *)(iVar7 + 0xc);
    local_52c = *(undefined4 *)(iVar7 + 0x10);
    local_528 = *(undefined4 *)(iVar7 + 0x14);
  }
switchD_00464837_default:
  do {
    FUN_0051f7b0(local_440);
    if (local_548 == 0) {
      FUN_00538b30();
    }
    else {
      FUN_0051f870();
    }
    iVar7 = FUN_00526620(&local_584);
    FUN_0051f7f0(local_440);
    uVar3 = local_584;
  } while (iVar7 != 0);
  local_56c = local_584;
  uVar10 = 0;
  local_560 = 0x3000;
  if (0x7532 < local_584) goto code_r0x00464ba2;
  if (local_584 == 0x7532) goto switchD_00464baa_caseD_7557;
  switch(local_584) {
  case 1:
    while( true ) {
      FUN_0050acb0(param_1);
      puVar8 = local_53c + uVar10 * 3;
      uVar3 = FUN_004d5130(puVar8,&local_580,param_1 + 0x800,0);
      FUN_00509650(puVar8,local_578,param_1,0);
      local_560 = FUN_004d5210(local_578,&local_57c,param_1 + 0x800);
      local_560 = uVar3 | local_560;
      local_568 = local_580;
      local_564 = local_57c;
      FUN_0052f780(0x5a,puVar8);
      FUN_00465110(puVar8,0,0x5a,0,1);
      iVar7 = FUN_00465210(param_1,&local_584,local_56c,&local_568);
      if (iVar7 != 0) break;
      if (((local_584 != 0x7555) && (local_584 != 0x754e)) && (local_584 != 0x7635)) {
        uVar10 = uVar10 ^ 1;
      }
    }
    break;
  case 2:
    while( true ) {
      FUN_0050acb0(param_1);
      puVar8 = local_53c + uVar10 * 3;
      uVar3 = FUN_004d5130(puVar8,&local_580,param_1 + 0x800,0);
      FUN_00465d70(puVar8,local_578,param_1,0);
      local_560 = FUN_004d5210(local_578,&local_57c,param_1 + 0x800);
      local_560 = uVar3 | local_560;
      local_568 = local_580;
      local_564 = local_57c;
      FUN_0052f780(0x54,puVar8);
      FUN_00465110(puVar8,0,0x54,0,1);
      iVar7 = FUN_00465210(param_1,&local_584,local_56c,&local_568);
      if (iVar7 != 0) break;
      if (((local_584 != 0x7555) && (local_584 != 0x754e)) && (local_584 != 0x7635)) {
        uVar10 = uVar10 ^ 1;
      }
    }
    break;
  case 3:
    do {
      FUN_0050acb0(param_1);
      uVar10 = FUN_004d5130(local_53c,&local_580,param_1 + 0x800,0);
      FUN_00465e00(local_53c,local_578,param_1,0);
      local_560 = FUN_004d5210(local_578,&local_57c,param_1 + 0x800);
      local_560 = uVar10 | local_560;
      local_568 = local_580;
      local_564 = local_57c;
      FUN_0052f780(0x43,local_53c);
      FUN_00465110(local_53c,0,0x43,0,1);
      iVar7 = FUN_00465210(param_1,&local_584,uVar3,&local_568);
    } while (iVar7 == 0);
    break;
  case 4:
    while( true ) {
      FUN_0050acb0(param_1);
      puVar8 = local_53c + uVar10 * 3;
      uVar3 = FUN_004d5130(puVar8,&local_580,param_1 + 0x800,0);
      FUN_00465f90(puVar8,local_578,param_1,0);
      local_560 = FUN_004d5210(local_578,&local_57c,param_1 + 0x800);
      local_560 = uVar3 | local_560;
      local_568 = local_580;
      local_564 = local_57c;
      FUN_0052f780(0x46,puVar8);
      FUN_00465110(puVar8,0,0x46,0,1);
      iVar7 = FUN_00465210(param_1,&local_584,local_56c,&local_568);
      if (iVar7 != 0) break;
      if (((local_584 != 0x7555) && (local_584 != 0x754e)) && (local_584 != 0x7635)) {
        uVar10 = uVar10 ^ 1;
      }
    }
    break;
  case 5:
    do {
      FUN_0050acb0(param_1);
      FUN_0052f780(0x50,param_2);
      FUN_00465110(param_2,0,0x50,0,1);
      iVar7 = FUN_00465210(param_1,&local_584,uVar3,&local_568);
    } while (iVar7 == 0);
    break;
  default:
    goto switchD_00464837_default;
  }
LAB_00464a65:
  switch(iVar7) {
  case -0xe:
  case -0xd:
  case -0xc:
  case -0xb:
  case -2:
  case -1:
    goto switchD_00464a75_caseD_fffffff2;
  default:
    FUN_0050acb0(param_1);
  }
  goto switchD_00464837_default;
code_r0x00464ba2:
  switch(local_584) {
  case 0x754d:
    goto switchD_00464baa_caseD_754d;
  case 0x754e:
    iVar7 = FUN_005022f0(0);
    break;
  default:
    goto switchD_00464837_default;
  case 0x7555:
    iVar7 = FUN_00502180();
    break;
  case 0x7557:
switchD_00464baa_caseD_7557:
    iVar7 = -0xb;
    goto switchD_00464a75_caseD_fffffff2;
  case 0x7602:
    FUN_00538710();
    FUN_004666a0(&local_540,&local_520);
    iVar5 = 1;
    do {
      iVar7 = 1;
switchD_00464d7d_caseD_7543:
      do {
        iVar6 = iVar7;
        FUN_0050acb0(param_1);
        cVar2 = FUN_00526090(0x21);
        if (cVar2 == '\0') {
          FUN_00527570(0xff,2,iVar6,local_510);
          FUN_004b6ef0(local_4f8,s_Factor_B__005bed44);
          uVar4 = FUN_004b22b0(local_510,local_474);
          FUN_004b6e70(local_4f8,uVar4);
          FUN_005232d0(1,1);
          FUN_00523470(local_4f8,0x15);
        }
        FUN_004666d0(local_554,iVar5);
        uVar3 = FUN_004d5130(local_554,&local_580,param_1 + 0x800,0);
        FUN_00466750(local_578,iVar5,iVar6);
        local_560 = FUN_004d5210(local_578,&local_57c,param_1 + 0x800);
        local_560 = uVar3 | local_560;
        local_568 = local_580;
        local_564 = local_57c;
        FUN_00466710(local_554,iVar5);
        FUN_0052f780(0x41,local_554);
        FUN_0052f780(0x4d,local_578);
        FUN_00465110(local_554,local_578,0x41,0x4d,0);
        iVar7 = FUN_00465210(param_1,&local_584,local_56c,&local_568);
        if ((iVar7 != 0) || (local_584 == 0x7602)) goto LAB_00464a65;
        iVar7 = iVar6;
      } while (((local_584 == 0x7555) || (local_584 == 0x754e)) || (local_584 == 0x7635));
      switch(local_584) {
      case 0x7542:
        iVar7 = local_540;
        if (1 < iVar6) {
          iVar7 = iVar6 + -1;
        }
      default:
        goto switchD_00464d7d_caseD_7543;
      case 0x7544:
        if (1 < iVar5) {
          iVar5 = iVar5 + -1;
        }
        goto switchD_00464d7d_caseD_7543;
      case 0x7545:
        if (iVar5 < local_520) {
          iVar5 = iVar5 + 1;
        }
        goto switchD_00464d7d_caseD_7543;
      case 0x7547:
        if (iVar6 < local_540) {
          iVar7 = iVar6 + 1;
          goto switchD_00464d7d_caseD_7543;
        }
      }
    } while( true );
  case 0x7625:
    do {
      FUN_00538710();
      bVar1 = true;
      uVar3 = 0;
      while( true ) {
        FUN_0050acb0(param_1);
        if ((bVar1) && (iVar7 = FUN_00466340(uVar3,local_554,param_1), iVar7 != 0))
        goto LAB_00464a65;
        uVar10 = FUN_004d5130(local_554,&local_580,param_1 + 0x800,0);
        switch(local_544) {
        case 10:
          FUN_004661b0(local_554,local_578,param_1,0);
          break;
        case 0xb:
          FUN_00465d70(local_554,local_578,param_1,0);
          break;
        case 0xc:
          FUN_00465e00(local_554,local_578,param_1,0);
          break;
        case 0xd:
          FUN_00465f90(local_554,local_578,param_1,0);
        }
        local_560 = FUN_004d5210(local_578,&local_57c,param_1 + 0x800);
        local_560 = uVar10 | local_560;
        local_568 = local_580;
        local_564 = local_57c;
        FUN_0052f780(0x58,local_554);
        FUN_0052f780(0x50,local_578);
        FUN_00465110(local_554,local_578,0x58,0x50,0);
        iVar7 = FUN_00465210(param_1,&local_584,local_56c,&local_568);
        if ((iVar7 != 0) && (iVar7 != -0xc)) goto LAB_00464a65;
        if (local_584 == 0x7625) break;
        if (((local_584 == 0x7555) || (local_584 == 0x754e)) || (local_584 == 0x7635)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          uVar3 = 0;
          if (iVar7 == -0xc) {
            uVar3 = local_584;
          }
        }
      }
    } while( true );
  case 0x7634:
  case 0x7635:
    iVar7 = FUN_0051af80(local_584,param_1);
    goto LAB_00464a65;
  }
  if (iVar7 != 0) {
    iVar7 = -0xe;
    goto switchD_00464a75_caseD_fffffff2;
  }
  goto switchD_00464837_default;
switchD_00464baa_caseD_754d:
  iVar7 = -1;
switchD_00464a75_caseD_fffffff2:
  FUN_00538810();
  FUN_00538a50(local_51c);
  FUN_005389c0(0,0x13,local_4c4);
  FUN_00526420(local_524);
  return iVar7;
}

