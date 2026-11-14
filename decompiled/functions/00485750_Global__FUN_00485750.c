// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485750
// entry: 00485750  size: 616


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00485750(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [20];
  
  local_40 = 0;
  FUN_00538a00(local_2c);
  FUN_00538980(0,0,local_44);
  _DAT_005cf4dc = 0;
  DAT_005cf4d8 = local_40;
  puVar5 = &DAT_005cf4d8;
  puVar6 = &DAT_005cf4e0;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00538860(0,&DAT_005cf4d8);
  FUN_005387f0(0);
  local_40 = FUN_00526410();
  FUN_00526420(199);
  FUN_00530e70(local_20);
  iVar4 = 1;
switchD_0048584a_caseD_7533:
  do {
    iVar1 = FUN_00485a30(param_1);
    FUN_00538b30();
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
      FUN_00485170(param_1,iVar4,iVar1);
      break;
    case 0x13:
    case 0x15:
      FUN_00484ab0(iVar4,iVar1);
      break;
    case 0x14:
      FUN_00484860(iVar4,iVar1);
    }
    iVar2 = FUN_00526620(&local_48);
  } while (iVar2 != 0);
  switch(local_48) {
  case 0x7532:
    goto switchD_0048584a_caseD_7532;
  default:
    goto switchD_0048584a_caseD_7533;
  case 0x7534:
    local_4c = -0xc;
    goto LAB_0048597d;
  case 0x753f:
    local_4c = -0xd;
    goto LAB_0048597d;
  case 0x7542:
    if (1 < iVar4) {
      iVar4 = iVar4 + -1;
    }
    goto switchD_0048584a_caseD_7533;
  case 0x7547:
    if (iVar4 < iVar1 + -5) {
      iVar4 = iVar4 + 1;
    }
    goto switchD_0048584a_caseD_7533;
  case 0x754d:
    local_4c = -1;
    goto LAB_0048597d;
  case 0x754e:
    iVar1 = FUN_0052eb10(0);
    if (iVar1 != 0) goto switchD_0048584a_caseD_7533;
    break;
  case 0x7555:
    FUN_004b6ef0(local_38,s__STAT_005be2bc);
    uVar3 = FUN_004ab670(local_14,local_38);
    iVar1 = FUN_0055b770(uVar3);
    if ((iVar1 != 0) || (FUN_0052d2d0(local_14,&local_4c), local_4c != 1))
    goto switchD_0048584a_caseD_7533;
    break;
  case 0x7557:
    FUN_004ab670(local_14);
    iVar1 = FUN_0055b770(local_14,s__RUNMAT_005be2d4);
    if ((iVar1 != 0) && (iVar1 = FUN_0055b770(local_14,s__PROG_005bec48), iVar1 != 0)) {
      local_4c = -0xb;
      goto LAB_0048597d;
    }
    local_48 = 0;
    iVar1 = FUN_005037c0(&local_48);
    *param_2 = iVar1;
    if (iVar1 != 0) {
      FUN_0052b240(iVar1);
      goto switchD_0048584a_caseD_7532;
    }
    goto switchD_0048584a_caseD_7533;
  }
  local_4c = -0x15;
  goto LAB_0048597d;
switchD_0048584a_caseD_7532:
  local_4c = -2;
LAB_0048597d:
  FUN_00538810();
  FUN_005389c0(0,0,local_44);
  FUN_00526440();
  FUN_00526420(local_40);
  FUN_00538a50(local_2c);
  return local_4c;
}

