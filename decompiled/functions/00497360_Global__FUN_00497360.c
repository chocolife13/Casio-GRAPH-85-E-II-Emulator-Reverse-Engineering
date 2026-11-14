// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00497360
// entry: 00497360  size: 859


void FUN_00497360(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  
  if (param_1 == 0x7542) {
    if (DAT_005d6d90 < 0) {
      if (DAT_005d6d90 + 8 < 1) {
        DAT_005d6d90 = DAT_005d6d90 + 8;
        return;
      }
      DAT_005d6d90 = 0;
      return;
    }
  }
  else if ((param_1 == 0x7547) && (iVar6 = FUN_00495970(DAT_005d6d88), 0x38 < DAT_005d6d90 + iVar6))
  {
    if (0x37 < DAT_005d6d90 + -8 + iVar6) {
      DAT_005d6d90 = DAT_005d6d90 + -8;
      return;
    }
    DAT_005d6d90 = 0x38 - iVar6;
    return;
  }
  uVar1 = FUN_004956d0(DAT_005d6d88);
  iVar6 = DAT_005d6d88;
  if (0x7542 < param_1) {
    if (param_1 == 0x7547) {
switchD_00497432_caseD_19:
      if (DAT_005d6d88 < DAT_005d6dbc + -1) {
        DAT_005d6d88 = DAT_005d6d88 + 1;
        iVar2 = FUN_00495970(iVar6);
        DAT_005d6d90 = DAT_005d6d90 + iVar2;
      }
      goto switchD_00497432_caseD_9;
    }
    iVar2 = DAT_005d6d88;
    iVar10 = DAT_005d6d90;
    if (param_1 == 0x7564) {
      do {
        iVar2 = iVar2 + -1;
        iVar3 = FUN_00495970(iVar2);
        iVar10 = iVar10 - iVar3;
        if (iVar2 < 0) goto LAB_00497554;
      } while (-1 < iVar10);
      if (iVar2 < 0) {
LAB_00497554:
        iVar2 = 0;
      }
      if (iVar6 == iVar2) {
        DAT_005d6d88 = iVar2;
        if (iVar2 == 0) goto LAB_00497530;
        iVar2 = iVar2 + -1;
      }
      DAT_005d6d88 = iVar2;
      iVar2 = FUN_00495970(iVar2);
      DAT_005d6d90 = 0x38 - iVar2;
    }
    else {
      if (param_1 != 0x7565) goto switchD_00497432_caseD_9;
      do {
        iVar9 = iVar2;
        iVar2 = iVar9 + 1;
        iVar3 = FUN_00495970(iVar9);
        iVar10 = iVar10 + iVar3;
        if (DAT_005d6dbc <= iVar2) break;
      } while (iVar10 < 0x38);
      if (iVar2 == DAT_005d6dbc) {
        iVar2 = DAT_005d6dbc + -1;
      }
      else if (iVar10 != 0x38) {
        iVar2 = iVar9;
      }
      DAT_005d6d88 = iVar2;
      if ((iVar6 == iVar2) && (iVar2 != DAT_005d6dbc + -1)) {
        DAT_005d6d88 = iVar2 + 1;
      }
LAB_00497530:
      DAT_005d6d90 = 0;
    }
    iVar2 = FUN_00538700();
    if ((iVar2 < 100) && (iVar2 = FUN_00538700(), iVar2 != 4)) {
      FUN_005382e0();
    }
    *param_2 = 0;
    goto switchD_00497432_caseD_9;
  }
  if (param_1 == 0x7542) {
switchD_00497432_caseD_18:
    if (DAT_005d6d88 != 0) {
      DAT_005d6d88 = DAT_005d6d88 + -1;
      iVar2 = FUN_00495970(DAT_005d6d88);
      DAT_005d6d90 = DAT_005d6d90 - iVar2;
      iVar2 = FUN_00495970(DAT_005d6d88);
      if (0x38 < iVar2) {
        DAT_005d6d90 = 0x38 - iVar2;
      }
    }
  }
  else {
    switch(param_1) {
    case 7:
      DAT_005d6d90 = 0;
      DAT_005d6d88 = 0;
      *param_2 = 0;
      FUN_0049b570();
      break;
    case 8:
      DAT_005d6d88 = DAT_005d6dbc + -1;
      iVar2 = FUN_00495970(DAT_005d6d88);
      if (0x38 < iVar2) {
        DAT_005d6d90 = 0x38 - iVar2;
      }
      *param_2 = 0;
      FUN_0049b570();
      break;
    case 0x18:
      goto switchD_00497432_caseD_18;
    case 0x19:
      goto switchD_00497432_caseD_19;
    }
  }
switchD_00497432_caseD_9:
  uVar4 = FUN_004956d0(DAT_005d6d88);
  if ((uVar1 == 0x81000000) &&
     (((uVar4 == 0x81000000 || (uVar4 == 0x7000000)) && (*param_2 < 0x15)))) {
    if (*param_2 == 0x14) {
      uVar5 = FUN_00495770(iVar6);
      iVar6 = FUN_004b7490(uVar5);
      if (iVar6 < 0x15) {
        uVar5 = FUN_00495770(DAT_005d6d88);
        uVar7 = FUN_004b7490(uVar5);
        if (uVar7 < 0x15) goto LAB_0049763f;
      }
      goto LAB_00497638;
    }
  }
  else {
LAB_00497638:
    *param_2 = 0;
  }
LAB_0049763f:
  if ((uVar1 & 0x80000000) == 0) {
LAB_00497658:
    FUN_0049b570();
LAB_0049765d:
    iVar6 = DAT_005d6d88;
    if (uVar4 != 0x7000000) goto LAB_00497681;
  }
  else {
    if ((uVar4 & 0x80000000) != 0) goto LAB_0049765d;
    if (uVar4 != 0x7000000) goto LAB_00497658;
  }
  iVar6 = DAT_005d6d88 + 1;
  uVar4 = FUN_004956d0(iVar6);
LAB_00497681:
  if (uVar4 == 0x3000000) {
    iVar6 = FUN_00495720(iVar6);
    psVar8 = (short *)(iVar6 + 4);
  }
  else {
    if (uVar4 != 0x4000000) {
      return;
    }
    iVar6 = FUN_00495720(iVar6);
    psVar8 = (short *)(iVar6 + 0x1c);
  }
  if (*psVar8 != 0) {
    *psVar8 = 1;
  }
  return;
}

