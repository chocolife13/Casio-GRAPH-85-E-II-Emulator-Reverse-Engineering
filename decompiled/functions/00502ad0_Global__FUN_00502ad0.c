// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00502ad0
// entry: 00502ad0  size: 1108


uint FUN_00502ad0(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = param_2 == 0;
switchD_00502c0d_caseD_0:
  FUN_0050acb0(param_1);
  FUN_0051f870();
  if (bVar5) {
    iVar2 = FUN_00526620(&param_2);
    if (iVar2 != 0) goto switchD_00502c0d_caseD_0;
  }
  else {
    bVar5 = true;
  }
  if (param_2 < 0x7555) {
    if (param_2 == 0x7554) {
      iVar2 = FUN_004ab6a0(s__GRAPH_005be2ac);
      if ((iVar2 != 0) && ((*(byte *)(param_1 + 0x8e0) & 0x30) == 0)) {
LAB_00502c8c:
        uVar4 = FUN_00502550(param_1);
        goto LAB_00502e21;
      }
      goto switchD_00502c0d_caseD_0;
    }
    if (0x7534 < param_2) {
      switch(param_2) {
      case 0x753f:
switchD_00502bf4_caseD_753f:
        bVar1 = *(byte *)(param_1 + 0x8e0) & 0x30;
        if (bVar1 == 0x20) {
          return 0x24;
        }
        if (bVar1 == 0x30) {
          return 0x1f;
        }
        goto LAB_00502ec8;
      default:
        goto switchD_00502bf4_caseD_7540;
      case 0x7542:
      case 0x7544:
      case 0x7545:
      case 0x7547:
        uVar3 = FUN_00517c00();
        switch(uVar3) {
        case 0:
        case 0xb:
        case 0xc:
        case 0x13:
        case 0x14:
          break;
        default:
          iVar2 = FUN_0051e460(param_2,*(undefined1 *)(param_1 + 0x8e2));
          if ((iVar2 == 0) && (uVar4 = FUN_0051b520(param_1,1), uVar4 != 0)) {
            return uVar4;
          }
        }
        break;
      case 0x754d:
        return 0xffffffff;
      case 0x754e:
        iVar2 = FUN_005022f0(CONCAT31((int3)(param_2 - 0x753f >> 8),*(byte *)(param_1 + 0x8e0) >> 4)
                             & 0xffffff03);
joined_r0x00502d51:
        if (iVar2 != 0) {
          return 0xfffffff2;
        }
      }
      goto switchD_00502c0d_caseD_0;
    }
    if (param_2 == 0x7534) {
      iVar2 = FUN_004ab6a0(s__RUNMAT_005be2d4);
      if ((iVar2 != 0) || (iVar2 = FUN_004ab6a0(s__PROG_005bec48), iVar2 != 0)) {
        return 0xfffffff4;
      }
      iVar2 = FUN_00517c00();
      if (iVar2 == 10) {
        bVar5 = false;
        param_2 = 0x7603;
      }
      goto switchD_00502c0d_caseD_0;
    }
    if (param_2 < 0x16b) {
      if (param_2 == 0x16a) goto switchD_00502cc7_caseD_760c;
      if (param_2 == 0x12f) goto switchD_00502cc7_caseD_7602;
      if (param_2 == 0x15e) {
        return 0x21;
      }
      if (param_2 == 0x15f) {
        return 0x20;
      }
    }
    else {
      if (param_2 == 0x16c) {
        param_2 = FUN_005026e0(param_1);
        bVar5 = false;
        goto switchD_00502c0d_caseD_0;
      }
      if (param_2 == 0x16d) goto LAB_00502c8c;
      if (param_2 == 0x7532) {
        uVar4 = 0xfffffffe;
        goto LAB_00502e79;
      }
    }
switchD_00502bf4_caseD_7540:
    if (param_2 != 0) {
      if (param_2 < 30000) {
        return param_2;
      }
      if (0x75f7 < param_2) {
        return param_2;
      }
    }
    goto switchD_00502c0d_caseD_0;
  }
  if (param_2 < 0x7628) {
    if (param_2 < 0x7620) {
      switch(param_2) {
      case 0x7555:
        iVar2 = FUN_00502180();
        goto joined_r0x00502d51;
      default:
        goto switchD_00502bf4_caseD_7540;
      case 0x7557:
        uVar4 = 0xfffffff5;
        goto LAB_00502e79;
      case 0x75f8:
      case 0x75f9:
      case 0x75fa:
      case 0x75fb:
      case 0x75fc:
      case 0x75fd:
      case 0x75fe:
      case 0x75ff:
      case 0x7600:
      case 0x7601:
        uVar4 = FUN_0051b860(param_2,param_1);
        if (uVar4 == 0) {
          if ((*(byte *)(param_1 + 0x8e0) & 0x30) == 0x10) {
            FUN_00503d40(param_1);
          }
          uVar4 = FUN_0051b520(param_1,2);
        }
        break;
      case 0x7602:
switchD_00502cc7_caseD_7602:
        uVar4 = FUN_0051e310((-(uint)((*(byte *)(param_1 + 0x8e0) & 0x30) != 0x20) & 0x74d3) + 0x12f
                             ,param_1);
        break;
      case 0x7603:
        uVar4 = FUN_00519290(param_1);
        break;
      case 0x760c:
      case 0x760d:
      case 0x760e:
      case 0x760f:
      case 0x7610:
      case 0x7611:
      case 0x7612:
      case 0x7613:
      case 0x7614:
      case 0x7615:
      case 0x7616:
      case 0x7617:
      case 0x7618:
      case 0x7619:
      case 0x761a:
switchD_00502cc7_caseD_760c:
        uVar4 = FUN_0051b790(param_2,param_1);
      }
    }
    else {
      uVar4 = FUN_00519ec0(param_2,param_1);
    }
  }
  else {
    if (param_2 < 0x7956) {
      if (param_2 == 0x7955) {
        FUN_00503b60(param_1);
        FUN_00517ee0();
        goto switchD_00502c0d_caseD_0;
      }
      if (param_2 < 0x7636) {
        if (param_2 < 0x7634) {
          if ((0x7627 < param_2) && (param_2 < 0x7633)) {
            uVar4 = FUN_0050bd60(param_2,param_1);
            goto LAB_00502e21;
          }
          goto switchD_00502bf4_caseD_7540;
        }
        FUN_0051af80(param_2,param_1);
        goto switchD_00502c0d_caseD_0;
      }
      if (param_2 == 0x7954) {
        FUN_00503cf0(param_1);
        FUN_00517ee0();
        uVar4 = FUN_0051b520(param_1,2);
        goto LAB_00502e21;
      }
      goto switchD_00502bf4_caseD_7540;
    }
    if (param_2 == 0x7956) goto switchD_00502bf4_caseD_753f;
    if (param_2 != 0x7958) goto switchD_00502bf4_caseD_7540;
    uVar4 = FUN_00505310(param_1);
  }
LAB_00502e21:
  if ((int)uVar4 < -5) {
    if (uVar4 == 0xfffffffa) goto switchD_00502c0d_caseD_0;
    if (uVar4 == 0xfffffff3) {
LAB_00502ecd:
      bVar1 = *(byte *)(param_1 + 0x8e0) & 0x30;
      if (bVar1 == 0x20) {
        return 0x24;
      }
      if (bVar1 == 0x30) {
        return 0x1f;
      }
LAB_00502e79:
      if (((*(byte *)(param_1 + 0x8e0) & 0x30) == 0) &&
         ((iVar2 = FUN_004ab6a0(s__TABLE_005be208), iVar2 != 0 ||
          (iVar2 = FUN_004ab6a0(s__RECUR_005be280), iVar2 != 0)))) {
        return 0x1f;
      }
      return uVar4;
    }
    if (uVar4 == 0xfffffff5) goto LAB_00502e79;
  }
  else {
    if (uVar4 == 0xfffffffe) goto LAB_00502e79;
    if (uVar4 == 0x7956) {
LAB_00502ec8:
      uVar4 = 0xfffffff3;
      goto LAB_00502ecd;
    }
  }
  if (uVar4 != 0) {
    if ((int)uVar4 < 30000) {
      return uVar4;
    }
    if (0x75f7 < (int)uVar4) {
      bVar5 = false;
      param_2 = uVar4;
    }
  }
  goto switchD_00502c0d_caseD_0;
}

