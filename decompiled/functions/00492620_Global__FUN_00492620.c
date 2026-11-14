// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00492620
// entry: 00492620  size: 1116


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00492620(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_960 [4];
  int local_95c;
  undefined4 local_958;
  undefined4 local_954;
  undefined4 local_950;
  undefined1 local_94c [12];
  undefined1 local_940 [12];
  undefined1 local_934 [12];
  undefined1 local_928 [12];
  undefined1 local_91c [12];
  undefined1 local_910 [24];
  undefined1 local_8f8 [2048];
  undefined1 local_f8 [12];
  undefined1 local_ec [236];
  
  bVar3 = false;
  bVar4 = false;
  FUN_00526440();
  FUN_00526420(8);
  uVar5 = FUN_00526410();
  FUN_00526420(0xc6);
  FUN_00538a00(local_940);
  FUN_0053c6f0(5);
  FUN_0053c690(9);
  FUN_00538980(0,0,local_960);
  _DAT_005cfc60 = DAT_005844d0;
  _DAT_005cfc64 = DAT_005844d4;
  FUN_00538860(0,&DAT_005cfc60);
  FUN_005387f0(0);
  iVar6 = FUN_004942d0(param_1,&local_95c);
  if (iVar6 == 0) {
    FUN_00526070(0x1d,1);
    iVar6 = FUN_00494740(local_8f8);
    if (iVar6 == 0) {
      FUN_004951d0(param_2);
      iVar6 = FUN_004947b0(local_8f8);
      if (iVar6 == 0) {
        FUN_004e57a0(local_94c);
        if (local_95c != 1) {
          FUN_004e5070(local_95c + -1,local_94c);
        }
        FUN_004e6dd0(local_ec,local_94c,local_94c);
        FUN_004e5780(local_928);
        iVar9 = 0;
        if (-1 < local_95c + -1) {
          do {
            FUN_004e5070(iVar9,local_91c);
            FUN_004e6d00(local_94c,local_91c,local_934);
            iVar9 = iVar9 + 1;
            iVar6 = FUN_00527570(0,*(undefined1 *)(param_1 + 0xf0),iVar9,local_910);
            if (iVar6 != 0) {
LAB_00492927:
              FUN_00538810();
              FUN_00538a50(local_940);
              FUN_005389c0(0,0,local_960);
              FUN_00526440();
              FUN_00526420(uVar5);
              FUN_00538240(0);
              return 4;
            }
            iVar6 = FUN_004d5130(local_934,&local_954,local_f8,0);
            iVar7 = FUN_004d5210(local_928,&local_950,local_f8);
            iVar8 = FUN_004d5210(local_910,&local_958,local_f8);
            if ((iVar6 != 0 || iVar7 != 0) || iVar8 != 0) goto LAB_00492927;
            FUN_0050f940(local_954,local_950,local_954,local_958,local_8f8,2,0);
            iVar6 = FUN_0052f820();
            if (iVar6 == 1) {
              FUN_00538810();
              FUN_00538a50(local_940);
              FUN_005389c0(0,0,local_960);
              FUN_00526440();
              FUN_00526420(uVar5);
              FUN_00538240(0);
              return 1;
            }
            iVar6 = 0;
          } while (iVar9 <= local_95c + -1);
        }
        FUN_00494940(local_8f8);
        FUN_0050acb0(local_8f8);
        FUN_00538240(1);
        FUN_005237c0(1);
        puVar1 = (uint *)(param_2 + 4);
switchD_004928bd_caseD_7533:
        while( true ) {
          do {
            iVar9 = FUN_00538700();
            if (iVar9 == 0) {
              bVar4 = false;
              bVar3 = false;
              FUN_00538240(1);
              FUN_00523800(1);
            }
            FUN_00538b30();
            iVar9 = FUN_00526620(puVar1);
          } while (iVar9 != 0);
          uVar2 = *puVar1;
          if (uVar2 < 0x754e) break;
          switch(uVar2) {
          case 0x7557:
            goto switchD_004928bd_caseD_753e;
          case 0x7602:
            goto switchD_004928bd_caseD_7539;
          case 0x7634:
            FUN_0051af80(0x7634,local_8f8);
            break;
          case 0x7635:
            FUN_0051af80(0x7635,local_8f8);
            FUN_0050acb0(local_8f8);
            FUN_005237c0(1);
          }
        }
        if (uVar2 != 0x754d) goto code_r0x004928b5;
      }
    }
  }
switchD_004928bd_caseD_7532:
  FUN_00538810();
  FUN_00538a50(local_940);
  FUN_005389c0(0,0,local_960);
  FUN_00526440();
  FUN_00526420(uVar5);
  FUN_00538240(0);
  return iVar6;
code_r0x004928b5:
  switch(uVar2) {
  case 0x7532:
    goto switchD_004928bd_caseD_7532;
  default:
    goto switchD_004928bd_caseD_7533;
  case 0x7536:
    if (bVar3) {
      bVar3 = false;
      FUN_00538240(1);
      FUN_00523800(1);
      goto switchD_004928bd_caseD_7533;
    }
    bVar3 = true;
    break;
  case 0x7538:
    if (bVar4) goto switchD_004928bd_caseD_7533;
    bVar4 = true;
    break;
  case 0x7539:
switchD_004928bd_caseD_7539:
    FUN_00538240(1);
    FUN_00492ba0(param_1,param_2,local_8f8);
    FUN_0050acb0(local_8f8);
    FUN_00538240(0);
  case 0x753e:
switchD_004928bd_caseD_753e:
    *puVar1 = 0x7532;
    goto switchD_004928bd_caseD_7532;
  }
  FUN_00538240(0);
  FUN_005237c0(1);
  goto switchD_004928bd_caseD_7533;
}

