// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00491af0
// entry: 00491af0  size: 1703


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00491af0(byte *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_968;
  undefined4 local_964;
  undefined4 local_960;
  int local_95c;
  undefined1 local_958 [12];
  undefined4 local_94c;
  int local_948;
  undefined1 local_944 [4];
  char local_940;
  char local_93f;
  undefined1 local_934 [12];
  undefined1 local_928 [12];
  undefined1 local_91c [12];
  undefined1 local_910 [12];
  undefined1 local_904 [12];
  undefined1 local_8f8 [2048];
  undefined1 local_f8 [12];
  undefined1 local_ec [236];
  
  local_95c = 0;
  local_948 = 0;
  FUN_00526440();
  FUN_00526420(8);
  local_94c = FUN_00526410();
  FUN_00526420(0xc6);
  FUN_00538a00(local_928);
  FUN_0053c6f0(5);
  FUN_0053c690(9);
  FUN_00538980(0,0,local_944);
  _DAT_005cfc90 = DAT_005844c8;
  _DAT_005cfc94 = DAT_005844cc;
  FUN_00538860(0,&DAT_005cfc90);
  FUN_005387f0(0);
  iVar5 = FUN_004941c0(param_1);
  if (iVar5 == 0) {
    FUN_00526070(0x1d,1);
    iVar5 = FUN_00494740(local_8f8);
    if (iVar5 == 0) {
      FUN_004951d0(param_2);
      if (((*param_1 & 0xf0) == 0x50) || ((*param_1 & 0xf0) == 0x60)) {
LAB_00492154:
        FUN_00538810();
        FUN_00538a50(local_928);
        FUN_005389c0(0,0,local_944);
        FUN_00526440();
        FUN_00526420(local_94c);
        FUN_00538240(0);
        return 3;
      }
      FUN_004e5780(local_934);
      FUN_004e76c0(param_1,local_910);
      FUN_004e76a0(param_1,&local_940);
      iVar5 = FUN_004947b0(local_8f8);
      if (iVar5 == 0) {
        FUN_004e57a0(local_958);
        if ((*param_1 == 0) && (param_1[1] == 0)) goto LAB_00492154;
        iVar5 = FUN_00469e60(param_1,local_958);
        if (iVar5 < 1) {
          iVar5 = FUN_00494810(param_1,local_8f8);
          if (iVar5 == 0) {
            iVar5 = FUN_004d5130(local_ec,&local_968,local_f8,0);
            iVar6 = FUN_004d5210(local_934,&local_964,local_f8);
            iVar7 = FUN_004d5210(param_1 + 0x24,&local_960,local_f8);
            if (iVar7 == 0 && (iVar5 == 0 && iVar6 == 0)) {
              FUN_0050f940(local_968,local_964,local_968,local_960,local_8f8,2,0);
              iVar5 = FUN_004d5130(local_ec,&local_968,local_f8,0);
              iVar6 = FUN_004d5210(local_934,&local_964,local_f8);
              iVar7 = FUN_004d5210(param_1 + 0x30,&local_960,local_f8);
              if ((iVar5 == 0 && iVar6 == 0) && iVar7 == 0) {
                FUN_0050f940(local_968,local_964,local_968,local_960,local_8f8,2,0);
                goto LAB_00491f93;
              }
            }
            goto LAB_00492154;
          }
        }
        else {
          iVar5 = FUN_00494810(param_1,local_8f8);
          if (iVar5 == 0) {
            FUN_004e6b80(local_ec,local_f8,local_958);
            FUN_004e6b80(local_958,local_910,local_958);
            FUN_004e6dd0(local_958,&local_940,local_91c);
            FUN_004e6a00(local_f8,local_910,local_958);
            cVar4 = FUN_00526090(0x27);
            if (cVar4 == '\x01') {
              FUN_004e6a00(local_958,local_91c,local_958);
            }
            FUN_004e57a0(local_904);
            bVar3 = true;
            do {
              iVar5 = FUN_004d5130(local_958,&local_968,local_f8,0);
              iVar6 = FUN_004d5210(local_934,&local_964,local_f8);
              iVar7 = FUN_004d5210(param_1 + 0x24,&local_960,local_f8);
              if (iVar7 != 0 || (iVar5 != 0 || iVar6 != 0)) goto LAB_00492154;
              FUN_0050f940(local_968,local_964,local_968,local_960,local_8f8,2,0);
              FUN_004e6b80(&local_940,local_904,&local_940);
              if ((local_940 == '\0') && (local_93f == '\0')) {
                bVar3 = false;
              }
              FUN_004e6a00(local_958,local_91c,local_958);
              iVar5 = FUN_0052f820();
              if (iVar5 == 1) {
                FUN_00538810();
                FUN_00538a50(local_928);
                FUN_005389c0(0,0,local_944);
                FUN_00526440();
                FUN_00526420(local_94c);
                FUN_00538240(0);
                return 1;
              }
            } while (bVar3);
            iVar5 = FUN_004d5130(local_ec,&local_968,local_f8,0);
            iVar6 = FUN_004d5210(local_934,&local_964,local_f8);
            iVar7 = FUN_004d5210(param_1 + 0x30,&local_960,local_f8);
            if ((iVar5 == 0 && iVar6 == 0) && iVar7 == 0) {
              FUN_0050f940(local_968,local_964,local_968,local_960,local_8f8,2,0);
LAB_00491f93:
              iVar5 = 0;
              FUN_00494940(local_8f8);
              FUN_0050acb0(local_8f8);
              FUN_00538240(1);
              FUN_005237c0(1);
              puVar1 = (uint *)(param_2 + 4);
switchD_0049201d_caseD_7533:
              while( true ) {
                do {
                  iVar6 = FUN_00538700();
                  if (iVar6 == 0) {
                    local_948 = 0;
                    local_95c = 0;
                    FUN_00538240(1);
                    FUN_00523800(1);
                  }
                  FUN_00538b30();
                  iVar6 = FUN_00526620(puVar1);
                } while (iVar6 != 0);
                uVar2 = *puVar1;
                if (uVar2 < 0x754e) break;
                switch(uVar2) {
                case 0x7557:
                  goto switchD_0049201d_caseD_753e;
                case 0x7602:
                  goto switchD_0049201d_caseD_7539;
                case 0x7634:
                  FUN_0051af80(0x7634,local_8f8);
                  break;
                case 0x7635:
                  FUN_0051af80(0x7635,local_8f8);
                  FUN_0050acb0(local_8f8);
                  FUN_005237c0(1);
                }
              }
              if (uVar2 != 0x754d) goto code_r0x00492015;
              goto switchD_0049201d_caseD_7532;
            }
            goto LAB_00492154;
          }
        }
      }
    }
  }
switchD_0049201d_caseD_7532:
  FUN_00538810();
  FUN_00538a50(local_928);
  FUN_005389c0(0,0,local_944);
  FUN_00526440();
  FUN_00526420(local_94c);
  FUN_00538240(0);
  return iVar5;
code_r0x00492015:
  switch(uVar2) {
  case 0x7532:
    goto switchD_0049201d_caseD_7532;
  default:
    goto switchD_0049201d_caseD_7533;
  case 0x7536:
    if (local_95c != 0) {
      local_95c = 0;
      FUN_00538240(1);
      FUN_00523800(1);
      goto switchD_0049201d_caseD_7533;
    }
    local_95c = 1;
    break;
  case 0x7538:
    if (local_948 != 0) goto switchD_0049201d_caseD_7533;
    local_948 = 1;
    break;
  case 0x7539:
switchD_0049201d_caseD_7539:
    FUN_00538240(1);
    FUN_004922c0(param_1,param_2,local_8f8);
    FUN_0050acb0(local_8f8);
    FUN_00538240(0);
  case 0x753e:
switchD_0049201d_caseD_753e:
    *puVar1 = 0x7532;
    goto switchD_0049201d_caseD_7532;
  }
  FUN_00538240(0);
  FUN_005237c0(1);
  goto switchD_0049201d_caseD_7533;
}

