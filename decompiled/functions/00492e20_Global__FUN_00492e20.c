// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00492e20
// entry: 00492e20  size: 1110


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00492e20(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_ac0 [4];
  undefined1 auStack_abc [12];
  undefined1 local_ab0 [12];
  undefined1 auStack_aa4 [12];
  undefined1 auStack_a98 [12];
  undefined1 local_a8c [24];
  undefined1 auStack_a74 [12];
  undefined1 auStack_a68 [216];
  undefined1 auStack_990 [124];
  undefined4 uStack_914;
  undefined1 auStack_8f8 [2060];
  undefined1 auStack_ec [236];
  
  bVar3 = false;
  bVar4 = false;
  FUN_00526440();
  FUN_00526420(8);
  uVar5 = FUN_00526410();
  FUN_00526420(0xc6);
  FUN_00538a00(local_ab0);
  FUN_0053c6f0(5);
  FUN_0053c690(9);
  FUN_00538980(0,0,local_ac0);
  _DAT_005cfc30 = DAT_005844d8;
  _DAT_005cfc34 = DAT_005844dc;
  FUN_00538860(0,&DAT_005cfc30);
  FUN_005387f0(0);
  FUN_00491a50(local_a8c);
  FUN_004e76a0(local_a8c,local_a8c);
  FUN_004e5780(auStack_abc);
  iVar6 = FUN_00469e60(auStack_a74,auStack_abc);
  if (iVar6 != 0) {
    iVar6 = FUN_00469e60(auStack_a74,auStack_abc);
    iVar7 = FUN_00469e60(auStack_a68,auStack_abc);
    if ((iVar7 == 0) || (iVar7 = FUN_00469e60(auStack_a68,auStack_abc), iVar6 < 0 == iVar7 < 0))
    goto LAB_00492f3e;
  }
  iVar6 = FUN_00469e60(local_a8c,auStack_abc);
  if (0 < iVar6) {
    iVar6 = FUN_004944d0(local_a8c);
    if ((iVar6 == 0) && (iVar6 = FUN_00494740(auStack_8f8), iVar6 == 0)) {
      FUN_004951d0(param_1);
      FUN_004e7620(auStack_a68,auStack_aa4);
      iVar6 = FUN_004948a0(auStack_abc,auStack_aa4,auStack_ec,auStack_aa4,auStack_8f8);
      if (iVar6 == 0) {
        uStack_914 = *param_1;
        iVar6 = FUN_00489a20(local_a8c,auStack_a98,auStack_990,auStack_8f8);
        if (iVar6 != 0) {
          FUN_00495540(param_1,iVar6);
          param_1[1] = 0x7532;
          FUN_00538810();
          FUN_00538a50(local_ab0);
          FUN_005389c0(0,0,local_ac0);
          FUN_00526440();
          FUN_00526420(uVar5);
          FUN_00538240(0);
          return 0;
        }
        FUN_00494940(auStack_8f8);
        FUN_0050acb0(auStack_8f8);
        FUN_00538240(1);
        FUN_005237c0(1);
        puVar1 = param_1 + 1;
switchD_00493138_caseD_7533:
        while( true ) {
          do {
            iVar6 = FUN_00538700();
            if (iVar6 == 0) {
              bVar4 = false;
              bVar3 = false;
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
            goto switchD_00493138_caseD_753e;
          case 0x7602:
            goto switchD_00493138_caseD_7539;
          case 0x7634:
            FUN_0051af80(0x7634,auStack_8f8);
            break;
          case 0x7635:
            FUN_0051af80(0x7635,auStack_8f8);
            FUN_0050acb0(auStack_8f8);
            FUN_005237c0(1);
          }
        }
        if (uVar2 != 0x754d) goto code_r0x00493130;
        goto switchD_00493138_caseD_7532;
      }
    }
    FUN_00538810();
    FUN_00538a50(local_ab0);
    FUN_005389c0(0,0,local_ac0);
    FUN_00526440();
    FUN_00526420(uVar5);
    FUN_00538240(0);
    return iVar6;
  }
LAB_00492f3e:
  FUN_00538810();
  FUN_00538a50(local_ab0);
  FUN_005389c0(0,0,local_ac0);
  FUN_00526440();
  FUN_00526420(uVar5);
  FUN_00538240(0);
  return 3;
code_r0x00493130:
  switch(uVar2) {
  case 0x7532:
    goto switchD_00493138_caseD_7532;
  default:
    goto switchD_00493138_caseD_7533;
  case 0x7536:
    if (bVar3) {
      bVar3 = false;
      FUN_00538240(1);
      FUN_00523800(1);
      goto switchD_00493138_caseD_7533;
    }
    bVar3 = true;
    break;
  case 0x7538:
    if (bVar4) goto switchD_00493138_caseD_7533;
    bVar4 = true;
    break;
  case 0x7539:
switchD_00493138_caseD_7539:
    FUN_00538240(1);
    uStack_914 = 0x2f;
    FUN_004933a0(local_a8c,param_1,auStack_990,auStack_8f8);
    FUN_0050acb0(auStack_8f8);
    FUN_00538240(0);
  case 0x753e:
switchD_00493138_caseD_753e:
    *puVar1 = 0x7532;
    goto switchD_00493138_caseD_7532;
  }
  FUN_00538240(0);
  FUN_005237c0(1);
  goto switchD_00493138_caseD_7533;
switchD_00493138_caseD_7532:
  FUN_00538810();
  FUN_00538a50(local_ab0);
  FUN_005389c0(0,0,local_ac0);
  FUN_00526440();
  FUN_00526420(uVar5);
  FUN_00538240(0);
  return 0;
}

