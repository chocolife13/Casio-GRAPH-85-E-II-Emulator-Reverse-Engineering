// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00493700
// entry: 00493700  size: 558


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00493700(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_940;
  undefined4 local_93c;
  int local_938;
  undefined4 local_934;
  undefined1 local_930 [4];
  undefined4 local_92c;
  undefined4 local_928;
  undefined4 local_924;
  undefined4 local_920;
  undefined4 local_91c;
  undefined4 local_918;
  undefined4 local_914;
  undefined1 local_910 [12];
  undefined1 local_904 [12];
  undefined1 local_8f8 [2048];
  undefined1 local_f8 [248];
  
  bVar3 = false;
  local_938 = 0;
  FUN_00526440();
  FUN_00526420(8);
  uVar4 = FUN_00526410();
  local_92c = uVar4;
  FUN_00526420(0xc6);
  FUN_00538a00(local_904);
  FUN_0053c6f0(5);
  FUN_0053c690(9);
  FUN_00538980(0,0,local_930);
  _DAT_005cfc00 = DAT_005844e0;
  _DAT_005cfc04 = DAT_005844e4;
  FUN_00538860(0,&DAT_005cfc00);
  FUN_005387f0(0);
  iVar5 = FUN_004949c0(param_1,&local_928);
  if (((iVar5 == 0) && (iVar5 = FUN_00494a80(param_1,&local_91c), iVar5 == 0)) &&
     (iVar5 = FUN_004940c0(param_1,local_928,local_924,local_920,local_91c,local_918,local_914),
     iVar5 == 0)) {
    FUN_00526070(0x1d,1);
    iVar5 = FUN_00494740(local_8f8);
    if (((iVar5 == 0) && (iVar5 = FUN_004947b0(local_8f8), iVar5 == 0)) &&
       (iVar5 = FUN_00494810(param_1,local_8f8), iVar5 == 0)) {
      FUN_004e5780(local_910);
      iVar5 = FUN_004d5130(param_1,&local_934,local_f8,0);
      iVar6 = FUN_004d5210(local_910,&local_940,local_f8);
      iVar7 = FUN_004d5210(&local_91c,&local_93c,local_f8);
      if (iVar7 == 0 && (iVar5 == 0 && iVar6 == 0)) {
        FUN_0050f940(local_934,local_940,local_934,local_93c,local_8f8,2,0);
        FUN_004e5780(local_910);
        iVar5 = FUN_004d5130(param_1,&local_934,local_f8,0);
        iVar6 = FUN_004d5210(local_910,&local_940,local_f8);
        iVar7 = FUN_004d5210(&local_928,&local_93c,local_f8);
        if ((iVar5 == 0 && iVar6 == 0) && iVar7 == 0) {
          FUN_0050f940(local_934,local_940,local_934,local_93c,local_8f8,2,0);
          *(undefined4 *)(param_2 + 0x14) = local_928;
          *(undefined4 *)(param_2 + 0x18) = local_924;
          *(undefined4 *)(param_2 + 0x1c) = local_920;
          *(undefined4 *)(param_2 + 0x20) = local_91c;
          *(undefined4 *)(param_2 + 0x24) = local_918;
          *(undefined4 *)(param_2 + 0x28) = local_914;
          FUN_00494940(local_8f8);
          FUN_0050acb0(local_8f8);
          FUN_00538240(1);
          FUN_005237c0(1);
          puVar1 = (uint *)(param_2 + 4);
switchD_00493a14_caseD_7533:
          while( true ) {
            do {
              iVar5 = FUN_00538700();
              if (iVar5 == 0) {
                bVar3 = false;
                local_938 = 0;
                FUN_00538240(1);
                FUN_00523800(1);
              }
              FUN_00538b30();
              iVar5 = FUN_00526620(puVar1);
            } while (iVar5 != 0);
            uVar2 = *puVar1;
            if (uVar2 < 0x754e) break;
            switch(uVar2) {
            case 0x7557:
              goto switchD_00493a14_caseD_753e;
            case 0x7602:
              goto switchD_00493a14_caseD_7539;
            case 0x7634:
              FUN_0051af80(0x7634,local_8f8);
              break;
            case 0x7635:
              FUN_0051af80(0x7635,local_8f8);
              FUN_0050acb0(local_8f8);
              FUN_005237c0(1);
            }
          }
          if (uVar2 != 0x754d) goto code_r0x00493a0c;
          goto switchD_00493a14_caseD_7532;
        }
      }
      FUN_00538810();
      FUN_00538a50(local_904);
      FUN_005389c0(0,0,local_930);
      FUN_00526440();
      FUN_00526420(local_92c);
      FUN_00538240(0);
      return 3;
    }
  }
  FUN_00538810();
  FUN_00538a50(local_904);
  FUN_005389c0(0,0,local_930);
  FUN_00526440();
  FUN_00526420(uVar4);
  FUN_00538240(0);
  return iVar5;
code_r0x00493a0c:
  switch(uVar2) {
  case 0x7532:
    goto switchD_00493a14_caseD_7532;
  default:
    goto switchD_00493a14_caseD_7533;
  case 0x7536:
    if (bVar3) {
      bVar3 = false;
      FUN_00538240(1);
      FUN_00523800(1);
      goto switchD_00493a14_caseD_7533;
    }
    bVar3 = true;
    break;
  case 0x7538:
    if (local_938 != 0) goto switchD_00493a14_caseD_7533;
    local_938 = 1;
    break;
  case 0x7539:
switchD_00493a14_caseD_7539:
    FUN_00538240(1);
    FUN_00493ca0(param_1,param_2,local_8f8);
    FUN_0050acb0(local_8f8);
    FUN_00538240(0);
    *puVar1 = 0x7532;
    goto switchD_00493a14_caseD_7532;
  case 0x753e:
switchD_00493a14_caseD_753e:
    *puVar1 = 0x7532;
    FUN_00538810();
    goto switchD_00493a14_caseD_7532;
  }
  FUN_00538240(0);
  FUN_005237c0(1);
  goto switchD_00493a14_caseD_7533;
switchD_00493a14_caseD_7532:
  FUN_00538810();
  FUN_00538a50(local_904);
  FUN_005389c0(0,0,local_930);
  FUN_00526440();
  FUN_00526420(local_92c);
  FUN_00538240(0);
  return 0;
}

