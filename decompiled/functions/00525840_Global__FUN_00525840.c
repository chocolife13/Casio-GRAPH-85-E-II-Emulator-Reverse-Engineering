// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00525840
// entry: 00525840  size: 640


int FUN_00525840(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int *param_5,
                undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  uVar8 = 0;
  iVar3 = FUN_004b7550(param_1);
  if (iVar3 == 0) {
    iVar3 = -7;
    goto LAB_00525aa5;
  }
  if (*param_5 == 0x755a) {
LAB_0052588b:
    FUN_00523690(0xb);
    if (*(char *)(*param_4 + param_1) == '\0') {
      FUN_00524cc0(param_1,param_2,param_4,param_3,0x7544);
    }
    uVar8 = *param_4;
    FUN_00525260(param_1,param_3,uVar8,uVar8,param_6,param_7);
  }
  else if (*param_5 == 0x755b) {
    if (*(char *)(*param_4 + param_1) == '\0') {
      iVar3 = -7;
      goto LAB_00525aa5;
    }
    goto LAB_0052588b;
  }
LAB_005258ca:
  iVar3 = FUN_00526620(param_5);
  if (iVar3 != 0) goto LAB_00525980;
  uVar4 = *param_5 - 0x7532;
  switch(*param_5) {
  case 0x7532:
    iVar3 = -2;
    goto LAB_00525aa5;
  default:
    iVar3 = -4;
    goto LAB_00525aa5;
  case 0x7535:
  case 0x7558:
    goto switchD_005258fb_caseD_7535;
  case 0x7549:
  case 0x7553:
  case 0x7554:
  case 0x7563:
    uVar1 = *param_4;
    bVar2 = uVar1 < uVar8;
    if (bVar2) {
      *param_4 = uVar8;
      uVar4 = uVar8;
      uVar8 = uVar1;
    }
    iVar3 = FUN_004b7370(CONCAT31((int3)(uVar4 >> 8),*(undefined1 *)(*param_4 + param_1)));
    if (iVar3 == 0) {
      iVar3 = (*param_4 - uVar8) + 1;
    }
    else {
      iVar3 = (*param_4 - uVar8) + 2;
    }
    switch(*param_5) {
    default:
      break;
    case 0x7553:
      iVar3 = FUN_004b7dd0(uVar8 + param_1,iVar3);
      if ((iVar3 < 0) || (2 < iVar3)) {
        FUN_0052b240(4);
      }
      if (bVar2) {
        *param_4 = uVar8;
      }
      break;
    case 0x7563:
      iVar5 = FUN_004b7dd0(uVar8 + param_1,iVar3);
      if ((iVar5 < 0) || (2 < iVar5)) {
        FUN_0052b240(4);
        iVar3 = 0;
        goto LAB_00525aa5;
      }
    case 0x7549:
    case 0x7554:
      iVar5 = FUN_004b7550(uVar8 + iVar3 + param_1);
      if (-1 < iVar5) {
        puVar7 = (undefined1 *)(uVar8 + param_1);
        iVar5 = iVar5 + 1;
        do {
          *puVar7 = puVar7[iVar3];
          puVar7 = puVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *param_4 = uVar8;
      if (*param_5 == 0x7554) {
        uVar6 = FUN_00525520(param_1,param_4,param_2);
        FUN_0052b240(uVar6);
        iVar3 = 0;
        goto LAB_00525aa5;
      }
    }
    iVar3 = 0;
LAB_00525aa5:
    FUN_00527030();
    if ((iVar3 < -4) || (iVar5 = -2, -2 < iVar3)) {
      iVar5 = iVar3;
    }
    return iVar5;
  case 0x7559:
  case 0x755c:
    FUN_005262e0(0);
    iVar3 = -2;
    FUN_005387a0();
    goto LAB_00525aa5;
  case 0x755a:
    FUN_00524d20(param_1,param_2,param_4,param_3,0x7544);
    uVar4 = *param_4;
    break;
  case 0x755b:
    FUN_00524d20(param_1,param_2,param_4,param_3,0x7545);
    uVar4 = *param_4;
  }
  FUN_00525260(param_1,param_3,uVar4,uVar8,param_6,param_7);
switchD_005258fb_caseD_7535:
  iVar3 = FUN_0040ad00();
  if ((iVar3 == 2) && (iVar3 = FUN_005262f0(), iVar3 != 1)) {
    FUN_00523690(5);
  }
  else {
    FUN_00523690(0xb);
  }
  goto LAB_005258ca;
LAB_00525980:
  iVar3 = -3;
  goto LAB_00525aa5;
}

