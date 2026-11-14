// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00475210
// entry: 00475210  size: 806


uint FUN_00475210(undefined4 param_1,int param_2,int param_3,int *param_4,undefined4 *param_5,
                 undefined4 param_6,int param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [128];
  
  FUN_004ab670(local_8c);
LAB_0047523c:
  iVar2 = FUN_00474cc0(param_1,param_2,param_3,*param_4,param_6,local_98,&local_b8,&local_b4);
  if (iVar2 != 0) {
switchD_0047536c_caseD_7532:
    local_b0 = 0xffffffeb;
    goto LAB_0047551e;
  }
  if (((local_b8 == -1) || (local_b4 < 0)) || (0x3f < local_b4)) {
    *param_5 = 0x3000;
    sVar1 = *(short *)(param_2 + 2);
    iVar2 = *param_4;
    local_a4 = 0x3000;
  }
  else {
    local_a8 = local_b4;
    local_ac = local_b8;
    *param_5 = 0;
    iVar2 = *param_4;
    sVar1 = *(short *)(param_2 + 2);
    local_a4 = 0;
  }
  FUN_00475080(param_1,(int)sVar1,iVar2,param_6,local_98,param_3);
  do {
    FUN_0051f7b0(local_80);
    FUN_0051f870();
    FUN_00522500(&local_ac);
    iVar2 = FUN_00526620(&local_b0);
    FUN_00522930(&local_ac);
    FUN_0051f7f0(local_80);
    iVar3 = FUN_0051c730();
    if (iVar3 != 0) goto switchD_00475476_caseD_7602;
  } while (iVar2 != 0);
  if (0x754d < local_b0) {
    switch(local_b0) {
    case 0x754e:
      iVar2 = FUN_005022f0(0);
      break;
    default:
switchD_0047536c_caseD_7533:
      if ((local_b0 != 0) && ((local_b0 < 30000 || (0x75f7 < local_b0)))) goto LAB_0047551e;
      goto LAB_0047523c;
    case 0x7555:
      iVar2 = FUN_00502180();
      break;
    case 0x7557:
      local_b0 = 0xffffffe9;
      goto LAB_0047551e;
    case 0x7602:
switchD_00475476_caseD_7602:
      local_b0 = 0xffffffe2;
      goto LAB_0047551e;
    case 0x7634:
      FUN_0051af80(local_b0,param_3);
      goto LAB_0047523c;
    case 0x7635:
      FUN_0051af80(local_b0,param_3);
      FUN_0050acb0(param_3);
      goto LAB_0047523c;
    }
    if (iVar2 != 0) {
      local_b0 = 0xffffffe5;
      goto LAB_0047551e;
    }
    goto LAB_0047523c;
  }
  if (local_b0 == 0x754d) {
    local_b0 = 0xffffffea;
    goto LAB_0047551e;
  }
  switch(local_b0) {
  case 0x7532:
    goto switchD_0047536c_caseD_7532;
  default:
    goto switchD_0047536c_caseD_7533;
  case 0x7534:
    goto switchD_0047536c_caseD_7534;
  case 0x753f:
    local_b0 = 0x7956;
    goto LAB_0047551e;
  case 0x7542:
    local_b0 = 0xffffffe8;
    goto LAB_0047551e;
  case 0x7544:
    sVar1 = *(short *)(param_2 + 2);
    if ((sVar1 != 7) && ((sVar1 < 9 || (0x12 < sVar1)))) {
      if (1 < *param_4) {
        *param_4 = *param_4 + -1;
      }
      goto LAB_0047523c;
    }
    if ((local_b8 == -1) || (local_b8 = local_b8 + -1, local_b8 < 1)) goto LAB_0047523c;
    break;
  case 0x7545:
    sVar1 = *(short *)(param_2 + 2);
    if ((sVar1 != 7) && ((sVar1 < 9 || (0x12 < sVar1)))) {
      if (*param_4 < param_7) {
        *param_4 = *param_4 + 1;
      }
      goto LAB_0047523c;
    }
    if ((local_b8 == -1) || (local_b8 = local_b8 + 1, 0x7f < local_b8)) goto LAB_0047523c;
    break;
  case 0x7547:
    local_b0 = 0xffffffe7;
    goto LAB_0047551e;
  }
  FUN_004d4da0(param_6,local_b8,param_3 + 0x800,0);
  goto LAB_0047523c;
switchD_0047536c_caseD_7534:
  iVar2 = FUN_0055b770(local_8c,s__RUNMAT_005be2d4);
  if ((iVar2 == 0) || (iVar2 = FUN_0055b770(local_8c,s__PROG_005bec48), iVar2 == 0)) {
    local_b0 = 0xfffffff4;
LAB_0047551e:
    *param_5 = 0x3000;
    return local_b0;
  }
  goto LAB_0047523c;
}

