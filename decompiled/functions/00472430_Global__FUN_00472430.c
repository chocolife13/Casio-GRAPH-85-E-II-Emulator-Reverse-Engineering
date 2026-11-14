// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00472430
// entry: 00472430  size: 680


uint FUN_00472430(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined1 local_b4 [9];
  char local_ab;
  undefined1 local_80 [128];
  
  FUN_0050acb0(param_3);
  param_1 = param_1 + param_2 * 0xe;
LAB_00472464:
  do {
    if (param_2 == 0) {
      FUN_004b6ef0(local_b4,s_Regression_005bf390);
    }
    else {
      FUN_004b6ef0(local_b4,s_StatGraph0_005bf384);
      local_ab = (char)param_2 + '0';
    }
    FUN_005232d0(1,1);
    FUN_00523470(local_b4,0x15);
    iVar1 = FUN_0047b900(param_2,param_1,param_3,&local_cc,&local_d0);
    if (iVar1 != 0) {
      FUN_0052b240(iVar1);
switchD_00472581_caseD_7532:
      return 0xffffffeb;
    }
    if ((local_cc == -1) || (local_d0 == -1)) {
      local_c0 = 0x3000;
    }
    else {
      local_c0 = 0;
      local_c8 = local_cc;
      local_c4 = local_d0;
    }
    FUN_0051f7b0(local_80);
    FUN_0051f870();
    FUN_00522500(&local_c8);
    iVar1 = FUN_00526620(&local_d4);
    FUN_00522930(&local_c8);
    FUN_0051f7f0(local_80);
    iVar2 = FUN_0051c730();
    if (iVar2 != 0) {
      return 0xffffffe2;
    }
    if (iVar1 == 0) {
      if (local_d4 < 0x754e) {
        if (local_d4 == 0x754d) {
          return 0xffffffea;
        }
        switch(local_d4) {
        case 0x7531:
        case 0x7534:
          uVar3 = FUN_00471f30(0,0x753f,param_2,param_1,param_3);
          return uVar3;
        case 0x7532:
          goto switchD_00472581_caseD_7532;
        case 0x753f:
          return 0x7956;
        case 0x7542:
          return 0xffffffe8;
        case 0x7547:
          return 0xffffffe7;
        }
switchD_00472581_caseD_7533:
        if (local_d4 != 0) {
          if (local_d4 < 30000) {
            return local_d4;
          }
          if (0x75f7 < local_d4) {
            return local_d4;
          }
        }
        goto LAB_00472464;
      }
      switch(local_d4) {
      case 0x754e:
        iVar1 = FUN_005022f0(0);
        break;
      default:
        goto switchD_00472581_caseD_7533;
      case 0x7555:
        iVar1 = FUN_00502180();
        break;
      case 0x7557:
        return 0xffffffe9;
      case 0x7634:
        FUN_0051af80(local_d4,param_3);
        goto LAB_00472464;
      case 0x7635:
        FUN_0051af80(local_d4,param_3);
        FUN_0050acb0(param_3);
        goto LAB_00472464;
      }
      if (iVar1 != 0) {
        return 0xffffffe5;
      }
      goto LAB_00472464;
    }
    iVar1 = FUN_0047c170(local_d4);
    if (iVar1 == 1) {
      uVar3 = FUN_00471f30(1,local_d4,param_2,param_1,param_3);
      return uVar3;
    }
  } while( true );
}

