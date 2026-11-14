// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047bce0
// entry: 0047bce0  size: 627


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047bce0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_00538a00(local_18);
  local_2c = FUN_00526410();
  FUN_00526420(199);
  FUN_0053c690(6);
  FUN_00530e70(local_c);
  FUN_004ab670(local_24);
  FUN_00538980(0,0,local_28);
  _DAT_005cf4a0 = DAT_005831f0;
  DAT_005cf478 = DAT_005831e0;
  _DAT_005cf47c = DAT_005831e4;
  puVar4 = &DAT_005cf478;
  puVar6 = &DAT_005cf480;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_34 = 5;
  _DAT_005cf4a4 = DAT_005831f4;
  if (((param_1 != 0x14) && (param_1 != 0x15)) && (param_1 != 0x13)) {
    _DAT_005cf498 = DAT_005831e8;
    _DAT_005cf49c = DAT_005831ec;
  }
  FUN_00538860(0,&DAT_005cf478);
  FUN_005387f0(0);
  iVar3 = 1;
switchD_0047bebf_caseD_754f:
  do {
    FUN_00538b30();
    iVar1 = FUN_00485a30(param_1);
    switch(param_1) {
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      FUN_00485170(param_1,iVar3,iVar1);
      break;
    case 0x13:
    case 0x15:
      FUN_00484ab0(iVar3,iVar1);
      break;
    case 0x14:
      FUN_00484860(iVar3,iVar1);
    }
    iVar2 = FUN_00526620(&local_30);
  } while (iVar2 != 0);
  if (local_30 < 0x7548) {
    if (local_30 == 0x7547) {
      if (iVar3 < iVar1 + -5) {
        iVar3 = iVar3 + 1;
      }
      goto switchD_0047bebf_caseD_754f;
    }
    if (local_30 < 0x7533) {
      if (local_30 == 0x7532) {
        uVar5 = 0xffffffeb;
        goto LAB_0047bf1a;
      }
      if (local_30 == 1) {
        if (((param_1 != 0x14) && (param_1 != 0x13)) &&
           ((param_1 != 0x15 && (iVar1 = FUN_0047a4d0(param_1), iVar1 == -1))))
        goto switchD_0047bebf_caseD_754d;
        goto switchD_0047bebf_caseD_754f;
      }
      if (local_30 != 2) goto switchD_0047bebf_caseD_754f;
    }
    else if (local_30 != 0x7534) {
      if ((local_30 == 0x7542) && (1 < iVar3)) {
        iVar3 = iVar3 + -1;
      }
      goto switchD_0047bebf_caseD_754f;
    }
    uVar5 = 0xffffffe4;
    goto LAB_0047bf1a;
  }
  switch(local_30) {
  case 0x754d:
    goto switchD_0047bebf_caseD_754d;
  case 0x754e:
    iVar1 = FUN_0052eb10(0);
    if (iVar1 != 0) goto switchD_0047bebf_caseD_754f;
    break;
  default:
    goto switchD_0047bebf_caseD_754f;
  case 0x7555:
    FUN_0052d2d0(local_24,&local_34);
    if (local_34 != 1) goto switchD_0047bebf_caseD_754f;
    break;
  case 0x7557:
    uVar5 = 0xffffffe9;
    goto LAB_0047bf1a;
  }
  uVar5 = 0xffffffe5;
  goto LAB_0047bf1a;
switchD_0047bebf_caseD_754d:
  uVar5 = 0xffffffea;
LAB_0047bf1a:
  FUN_00538810();
  FUN_00538a50(local_18);
  FUN_00526440();
  FUN_00526420(local_2c);
  FUN_005389c0(0,0,local_28);
  return uVar5;
}

