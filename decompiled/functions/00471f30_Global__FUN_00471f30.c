// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00471f30
// entry: 00471f30  size: 963


uint FUN_00471f30(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar7;
  undefined1 local_e0 [12];
  undefined1 local_d4 [4];
  undefined1 local_d0 [4];
  undefined4 local_cc;
  undefined1 local_c0 [12];
  undefined1 local_b4 [9];
  char local_ab;
  undefined1 local_80 [128];
  
  iVar2 = param_5;
LAB_00471f48:
  do {
    FUN_005237c0(5);
    FUN_00525b40(3);
    FUN_005232d0(1,3);
    uVar4 = FUN_0052f6f0(0x1bb,local_b4);
    FUN_005233e0(uVar4);
    FUN_005232d0(1,4);
    uVar4 = FUN_0052f6f0(0x1bc,local_b4);
    FUN_005233e0(uVar4);
    FUN_005232d0(1,5);
    iVar5 = FUN_0047c0b0(param_1,param_2,local_e0);
    if (iVar5 == -2) {
      uVar7 = 0xffffffeb;
LAB_004722dc:
      FUN_00523800(5);
      return uVar7;
    }
    if (iVar5 == -1) {
      uVar7 = 0xffffffea;
      goto LAB_004722dc;
    }
    if (iVar5 == 0) {
      FUN_00523800(5);
LAB_00471fd1:
      FUN_0050acb0(iVar2);
      cVar3 = FUN_00526090(0x21);
      if (cVar3 == '\0') {
        if (param_3 == 0) {
          FUN_004b6ef0(local_b4,s_Regression_005bf390);
        }
        else {
          FUN_004b6ef0(local_b4,s_StatGraph0_005bf384);
          local_ab = (char)param_3 + '0';
        }
        FUN_005232d0(1,1);
        FUN_00523470(local_b4,0x15);
      }
      FUN_0047c2c0(param_3,param_4,local_e0,local_c0);
      FUN_0052f780(0x58,local_e0);
      FUN_0052f780(0x59,local_c0);
      cVar3 = FUN_00526090(0x1b);
      uVar4 = extraout_ECX;
      if (cVar3 == '\0') {
        FUN_0051eaa0(local_e0,local_c0);
        uVar4 = extraout_ECX_00;
      }
      iVar5 = FUN_004d5130(local_e0,local_d4,iVar2 + 0x800,
                           CONCAT31((int3)((uint)uVar4 >> 8),*(byte *)(iVar2 + 0x8e0) >> 4) &
                           0xffffff03);
      if (iVar5 == 0) {
        iVar5 = FUN_004d5210(local_c0,local_d0,iVar2 + 0x800);
        local_cc = 0;
        if (iVar5 == 0) goto LAB_004720e3;
      }
      local_cc = 0x3000;
LAB_004720e3:
      bVar1 = true;
LAB_004720e8:
      while( true ) {
        while( true ) {
          if (!bVar1) goto LAB_00471f48;
          FUN_0051f7b0(local_80);
          FUN_0051f870();
          FUN_00522500(local_d4);
          iVar5 = FUN_00526620(&param_2);
          FUN_00522930(local_d4);
          FUN_0051f7f0(local_80);
          iVar6 = FUN_0051c730();
          if (iVar6 != 0) {
            return 0xffffffe2;
          }
          if (iVar5 == 0) break;
          iVar5 = FUN_0047c170(param_2);
          if (iVar5 == 1) {
            bVar1 = false;
            param_1 = 1;
          }
        }
        if (0x754d < param_2) break;
        if (param_2 == 0x754d) {
          return 0xffffffea;
        }
        switch(param_2) {
        case 0x7531:
        case 0x7534:
          param_1 = 0;
          local_cc = 0x3000;
          param_2 = 0x753f;
          bVar1 = false;
          break;
        case 0x7532:
          return 0xffffffeb;
        default:
switchD_00472189_caseD_7533:
          if ((param_2 != 0) && ((param_2 < 30000 || (0x75f7 < param_2)))) {
            return param_2;
          }
          break;
        case 0x753f:
          return 0x7956;
        case 0x7542:
          return 0xffffffe8;
        case 0x7547:
          return 0xffffffe7;
        }
      }
      switch(param_2) {
      case 0x754e:
        iVar5 = FUN_005022f0(0);
        break;
      default:
        goto switchD_00472189_caseD_7533;
      case 0x7555:
        iVar5 = FUN_00502180();
        break;
      case 0x7557:
        return 0xffffffe9;
      case 0x7634:
        goto switchD_004721c2_caseD_7634;
      case 0x7635:
        goto switchD_004721c2_caseD_7635;
      }
      if (iVar5 != 0) {
        return 0xffffffe5;
      }
      goto LAB_004720e8;
    }
  } while( true );
switchD_004721c2_caseD_7635:
  FUN_0051af80(param_2,iVar2);
  goto LAB_00471fd1;
switchD_004721c2_caseD_7634:
  FUN_0051af80(param_2,iVar2);
  goto LAB_004720e8;
}

