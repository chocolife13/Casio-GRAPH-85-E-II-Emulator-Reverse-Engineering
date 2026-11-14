// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523f00
// entry: 00523f00  size: 1267


undefined4
FUN_00523f00(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,char *param_5,
            int param_6,undefined4 param_7,uint param_8,int *param_9)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  char *local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18 [6];
  
  pcVar2 = param_5;
  local_2c = FUN_00526410();
  FUN_00526430(0x10);
  FUN_005234d0(&local_28);
  uVar7 = 0xfffffffa;
  if (param_1 != 0) {
    iVar3 = FUN_00523d50(param_8,*param_2);
    if (iVar3 == 0) goto LAB_005243dc;
    pcVar4 = param_5;
    for (uVar5 = param_6 + 1U >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + 4;
    }
    param_5 = (char *)0x0;
    for (uVar5 = param_6 + 1U & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = '\0';
      pcVar4 = pcVar4 + 1;
    }
    goto LAB_00523fbe;
  }
  switch(*param_2) {
  case 0x7532:
switchD_005240d3_caseD_7532:
    uVar7 = 0xfffffffe;
    break;
  default:
    uVar7 = 0xfffffffa;
    goto LAB_005243dc;
  case 0x753f:
    *param_5 = '\0';
    goto LAB_00523fb6;
  case 0x7545:
    if (((byte)param_8 & 6) != 4) {
      FUN_004e5470(param_4,param_5);
    }
LAB_00523fb6:
    param_5 = (char *)0x2;
LAB_00523fbe:
    local_3c = 0;
    local_34 = param_8 & 1;
    local_38 = 0;
    iVar9 = (-(uint)(local_34 != 0) & 2) + 1;
    FUN_005232d0(iVar9,param_3);
    FUN_005233e0(param_7);
    iVar3 = FUN_004b6bd0(param_7);
    iVar9 = iVar9 + iVar3;
    FUN_005232d0(iVar9,param_3);
    FUN_00527030();
LAB_00524005:
    if (param_5 != (char *)0x2) {
      param_5 = (char *)0x0;
    }
    if (param_1 != 0) {
      iVar3 = FUN_00523d50(param_8,*param_2);
      if (iVar3 != 0) {
        if (local_34 == 0) {
          local_38 = FUN_00525300(pcVar2,param_6,local_38,*param_2);
          local_3c = FUN_005252a0(pcVar2,local_3c,local_38,iVar9,param_3);
        }
        else {
          FUN_005232d0(0x13,param_3);
          FUN_005233e0(&DAT_005ad48c);
          local_38 = FUN_005254d0(pcVar2,param_6,local_38,*param_2);
          local_3c = FUN_005252d0(pcVar2,local_3c,local_38,iVar9,param_3,0x12);
        }
      }
      goto LAB_0052437b;
    }
    switch(*param_2) {
    case 0x7531:
      if (((param_8 & 6) == 2) || ((param_8 & 6) == 4)) {
        iVar3 = FUN_00526040();
        *param_2 = iVar3;
        if (local_34 == 0) {
          local_38 = FUN_00525300(pcVar2,param_6,local_38,iVar3);
          local_3c = FUN_005252a0(pcVar2,local_3c,local_38,iVar9,param_3);
        }
        else {
          FUN_005232d0(0x13,param_3);
          FUN_005233e0(&DAT_005ad48c);
          local_38 = FUN_005254d0(pcVar2,param_6,local_38,*param_2);
          local_3c = FUN_005252d0(pcVar2,local_3c,local_38,iVar9,param_3,0x12);
        }
      }
      break;
    case 0x7532:
      goto switchD_005240d3_caseD_7532;
    default:
      iVar3 = *param_9;
      piVar6 = param_9;
      while (iVar3 != 0) {
        if (iVar3 == *param_2) {
          uVar7 = 0xfffffff1;
          goto LAB_005243b5;
        }
        piVar1 = piVar6 + 1;
        piVar6 = piVar6 + 1;
        iVar3 = *piVar1;
      }
      break;
    case 0x7534:
      if (*pcVar2 == '\0') break;
      uVar7 = 0;
      if ((param_8 & 0x10) == 0) {
        local_30 = pcVar2;
        if ((param_8 & 4) == 0) {
          uVar10 = 2;
        }
        else {
          uVar10 = 3;
        }
        iVar3 = FUN_004f64a0(&local_30,uVar10,local_18);
        if (iVar3 == 0) {
          uVar7 = FUN_004e4020(local_18);
          FUN_0052b240(uVar7);
          pcVar4 = (char *)FUN_004b7780(pcVar2,local_30);
LAB_0052424f:
          local_38 = (int)pcVar4 - (int)pcVar2;
          if (local_34 == 0) {
            local_3c = FUN_00523dc0(iVar9,0x15,pcVar2,local_38,local_3c);
            local_3c = FUN_005252a0(pcVar2,local_3c,local_38,iVar9,param_3);
          }
          else {
            FUN_005232d0(0x13,param_3);
            FUN_005233e0(&DAT_005ad48c);
            local_3c = FUN_00523dc0(iVar9,0x12,pcVar2,local_38,local_3c);
            local_3c = FUN_005252d0(pcVar2,local_3c,local_38,iVar9,param_3,0x12);
          }
          break;
        }
        if (((param_8 & 0x80) == 0) && (iVar3 = FUN_004e4000(local_18), iVar3 == 1)) {
          FUN_0052b240(3);
          pcVar4 = local_30;
          goto LAB_0052424f;
        }
        puVar8 = local_18;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_4 = *puVar8;
          puVar8 = puVar8 + 1;
          param_4 = param_4 + 1;
        }
      }
      else {
        uVar7 = 0;
      }
      goto LAB_005243b5;
    case 0x753f:
    case 0x7544:
    case 0x7545:
    case 0x7549:
      if (param_5 == (char *)0x2) {
        param_5 = (char *)0x0;
        if (local_34 == 0) {
          local_3c = FUN_005252a0(pcVar2,local_3c,local_38,iVar9);
        }
        else {
          FUN_005232d0(0x13,param_3);
          FUN_005233e0(&DAT_005ad48c);
          local_3c = FUN_005252d0(pcVar2,local_3c,local_38,iVar9,param_3,0x12);
        }
        goto LAB_00524323;
      }
      if (local_34 == 0) {
        iVar3 = FUN_005249f0(pcVar2,param_6);
      }
      else {
        iVar3 = FUN_00524a20(pcVar2,param_6 + 1,&local_3c,&local_38,param_2,iVar9,param_3);
      }
      if (iVar3 == -4) {
        param_1 = 0;
        param_5 = (char *)0x0;
      }
      else {
        if (iVar3 != -3) break;
        param_1 = 1;
        param_5 = (char *)0x0;
      }
      goto LAB_00524005;
    case 0x754d:
      goto switchD_005240d3_caseD_754d;
    }
LAB_0052437b:
    if (param_5 == (char *)0x1) {
      param_5 = (char *)0x0;
    }
    else {
LAB_00524323:
      param_1 = FUN_00526620(param_2);
    }
    goto LAB_00524005;
  case 0x754d:
switchD_005240d3_caseD_754d:
    uVar7 = 0xffffffff;
  }
LAB_005243b5:
  FUN_005232d0(local_24,local_20);
  if (local_28 == -1) {
    FUN_00523740();
  }
LAB_005243dc:
  FUN_00526420(local_2c);
  return uVar7;
}

