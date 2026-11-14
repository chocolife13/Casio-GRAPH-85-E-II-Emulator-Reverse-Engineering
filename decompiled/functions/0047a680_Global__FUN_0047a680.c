// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047a680
// entry: 0047a680  size: 1259


undefined4 FUN_0047a680(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined1 local_9c [8];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [52];
  undefined1 local_48 [72];
  
  local_a0 = FUN_00526410();
  FUN_00526440();
  FUN_00538a00(local_94);
  iVar4 = 0;
  FUN_00538980(0,1,local_9c);
  FUN_00526070(0x18,0);
  local_a8 = 1;
  local_b8 = 1;
  local_ac = 0;
  local_b0 = 0;
  iVar5 = 0;
  do {
    puVar6 = (undefined4 *)((int)&DAT_005830a8 + iVar5);
    puVar8 = (undefined4 *)((int)&DAT_005cf140 + iVar5);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_b4 = 6;
    FUN_00538860(iVar4,(undefined4 *)((int)&DAT_005cf140 + iVar5));
    iVar5 = iVar5 + 0x30;
    iVar4 = iVar4 + 1;
  } while (iVar5 < 0x60);
  FUN_005387f0(0);
  FUN_0053c6f0(2);
  FUN_0053edf0(2);
  FUN_0053c690(2);
  FUN_00538e10(0);
  FUN_00538d50(0);
  iVar4 = FUN_00530de0(local_48);
  if (iVar4 != 0) {
    iVar4 = FUN_00530d40();
    if (iVar4 != 0) {
      uVar7 = 0xfffffff5;
      FUN_0052b240(4);
      goto LAB_0047ab35;
    }
    iVar4 = FUN_00530de0(local_48);
    if (iVar4 != 0) {
      uVar7 = 0xfffffff5;
      FUN_0052b240(4);
      goto LAB_0047ab35;
    }
  }
switchD_0047a829_caseD_3:
  do {
    FUN_00433000(local_7c);
    FUN_0052a160(local_7c,local_a8,local_ac,local_b8,local_b0);
    FUN_00538b30();
    iVar4 = FUN_00526620(&local_a4);
    uVar2 = local_a4;
    if (iVar4 != 0) {
      iVar4 = 1;
      goto LAB_0047a9e2;
    }
    if (0x7542 < local_a4) {
      if (local_a4 < 0x7556) {
        if (local_a4 == 0x7555) {
          iVar4 = FUN_004ab6a0(s__STAT_005be2bc);
          if ((iVar4 != 0) || (iVar4 = FUN_004ab6a0(s__SSHEET_005be210), iVar4 != 0)) {
            uVar7 = FUN_004ab670(local_88,&local_b4);
            FUN_0052d2d0(uVar7);
            if (local_b4 == 1) goto LAB_0047ab20;
          }
          goto switchD_0047a829_caseD_3;
        }
        switch(local_a4) {
        case 0x7545:
switchD_0047a980_caseD_7545:
          local_b4 = 1;
          if (local_a4 == 0x7531) {
            uVar2 = FUN_00526040();
            iVar4 = local_b4;
            local_a4 = uVar2;
          }
          else {
            iVar4 = local_b4;
            if (local_a4 == 0x7545) {
              local_b4 = 0;
              iVar4 = local_b4;
            }
          }
          goto LAB_0047a9e2;
        default:
          goto switchD_0047a829_caseD_3;
        case 0x7547:
          goto switchD_0047a980_caseD_7547;
        case 0x7549:
          iVar4 = FUN_00529a70(local_b8);
          iVar5 = FUN_00433d10(local_b8);
          if ((iVar5 == 0) && (iVar5 = FUN_00529a70(local_b8), iVar4 != iVar5)) {
            if (local_a8 == local_b8) {
              local_ac = 0;
            }
LAB_0047aa60:
            local_b0 = 0;
          }
          goto switchD_0047a829_caseD_3;
        case 0x754d:
          goto switchD_0047a980_caseD_754d;
        case 0x754e:
          iVar4 = FUN_0052eb10(0);
          if (iVar4 == 0) goto LAB_0047ab20;
          goto switchD_0047a829_caseD_3;
        }
      }
      if ((local_a4 == 31000) && (iVar4 = FUN_0052aae0(), iVar4 == -5)) {
        uVar2 = 0xf91b;
        iVar4 = 1;
LAB_0047a9e2:
        iVar4 = FUN_0047abe0(uVar2,iVar4,local_7c,&local_a8,&local_ac,&local_b8,&local_b0);
        if (iVar4 != -1) goto switchD_0047a829_caseD_3;
switchD_0047a980_caseD_754d:
        uVar7 = 0xffffffff;
        goto LAB_0047ab35;
      }
      goto switchD_0047a829_caseD_3;
    }
    if (local_a4 == 0x7542) {
switchD_0047a980_caseD_7547:
      FUN_00529ba0(&local_a8,&local_ac,&local_b8,&local_b0,local_a4);
      goto switchD_0047a829_caseD_3;
    }
    if (local_a4 < 0x24) {
      if (local_a4 != 0x23) {
        switch(local_a4) {
        case 1:
          local_b4 = FUN_00517320(local_b8);
          if (((local_b4 != 0) && (local_b4 != 1)) &&
             (sVar1 = FUN_005172b0(local_b8), sVar1 == 0x108)) {
            uVar2 = FUN_00517450(local_b8,8,8);
            FUN_005177d0(local_b8,uVar2 ^ 1);
          }
          goto switchD_0047a829_caseD_3;
        case 2:
          iVar4 = FUN_00529a70(local_b8);
          iVar5 = FUN_00433d10(local_b8);
          if ((iVar5 == 0) && (iVar5 = FUN_00529a70(local_b8), iVar4 != iVar5)) {
            if (local_a8 != local_b8) goto LAB_0047aa60;
            local_ac = 0;
            local_b0 = 0;
          }
        default:
          goto switchD_0047a829_caseD_3;
        case 4:
          goto switchD_0047a829_caseD_4;
        case 0x1e:
        case 0x1f:
        case 0x20:
          break;
        }
      }
      switch(local_a4) {
      case 0x1e:
        local_b4 = 2;
        break;
      case 0x1f:
        local_b4 = 3;
        break;
      case 0x20:
        local_b4 = 5;
        break;
      case 0x23:
        local_b4 = 8;
      }
      iVar4 = FUN_00517320(local_b8);
      if ((iVar4 != 0) && (iVar4 != 1)) {
        FUN_00517660(local_b8,local_b4);
      }
      goto switchD_0047a829_caseD_3;
    }
    if (local_a4 == 0x7531) goto switchD_0047a980_caseD_7545;
    if (local_a4 == 0x7532) {
      uVar7 = 0xfffffffe;
      goto LAB_0047ab35;
    }
  } while (local_a4 != 0x7534);
switchD_0047a829_caseD_4:
  FUN_0050acb0(param_1);
  iVar4 = FUN_00515a70(param_1);
  if (iVar4 == 0) {
    uVar7 = 0;
  }
  else {
    FUN_00480280();
    FUN_0052b240(iVar4);
LAB_0047ab20:
    uVar7 = 0xfffffff5;
  }
LAB_0047ab35:
  FUN_00538810();
  FUN_005389c0(0,1,local_9c);
  FUN_00538a50(local_94);
  FUN_00526420(local_a0);
  return uVar7;
}

