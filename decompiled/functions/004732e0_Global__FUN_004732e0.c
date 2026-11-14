// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004732e0
// entry: 004732e0  size: 1568


undefined4 FUN_004732e0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  uint uVar10;
  undefined2 in_stack_00000050;
  int in_stack_00001308;
  uint *in_stack_00001310;
  
  FUN_00553a90();
  uVar10 = *in_stack_00001310;
  bVar9 = in_stack_00001310 == (uint *)0x0;
  FUN_00538a00();
  FUN_00538980();
  puVar4 = (undefined4 *)&stack0x00000a44;
  puVar7 = (undefined4 *)&stack0x00000a4c;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00538860();
  FUN_005387f0();
  iVar3 = FUN_00539970();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      FUN_00538860();
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  FUN_00526410();
  FUN_00526420();
  FUN_0053c690();
  FUN_0053c6f0();
  FUN_004e5780();
  iVar3 = FUN_00530de0();
  if (iVar3 == 0) {
LAB_0047341c:
    in_stack_00000050 = 0;
    FUN_00530eb0();
    FUN_00523740();
    if (in_stack_00001308 == 1) {
      FUN_00516760();
      FUN_00503490();
      iVar3 = FUN_00514940();
LAB_00473484:
      if (iVar3 == 0) {
switchD_00473718_caseD_7533:
        do {
          FUN_0050acb0();
          FUN_0051f870();
          if (bVar9) {
            iVar5 = FUN_00526620();
            if (iVar5 != 0) goto switchD_00473718_caseD_7533;
          }
          else {
            bVar9 = true;
          }
          if (uVar10 < 0x75fc) {
            if (0x75f7 < uVar10) {
switchD_00473796_caseD_75fd:
              uVar2 = FUN_00475850();
              goto LAB_004737df;
            }
            switch(uVar10) {
            case 0x7532:
            case 0x7534:
            case 0x753f:
            case 0x754d:
            case 0x7557:
              goto switchD_00473718_caseD_7532;
            default:
              goto switchD_00473718_caseD_7533;
            case 0x7542:
            case 0x7544:
            case 0x7545:
            case 0x7547:
              goto switchD_00473718_caseD_7542;
            case 0x754e:
              iVar5 = FUN_0052eb10();
              if (iVar5 == 0) {
                *in_stack_00001310 = 0xfffffff2;
                iVar3 = 0;
                goto LAB_00473633;
              }
              goto switchD_00473718_caseD_7533;
            }
          }
          if (uVar10 < 0x7636) {
            if (uVar10 < 0x7634) {
              switch(uVar10) {
              case 0x75fd:
              case 0x75fe:
              case 0x75ff:
              case 0x7600:
              case 0x7601:
                goto switchD_00473796_caseD_75fd;
              case 0x7602:
                uVar2 = FUN_004744e0();
                break;
              default:
                goto switchD_00473718_caseD_7533;
              case 0x760c:
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
                uVar2 = FUN_00475990();
              }
LAB_004737df:
              if ((uVar2 == 0xffffffe5) || ((-0x17 < (int)uVar2 && ((int)uVar2 < -0x14)))) break;
              if ((uVar2 != 0) && (((int)uVar2 < 30000 || (0x75f7 < (int)uVar2)))) {
                bVar9 = false;
                uVar10 = uVar2;
              }
              goto switchD_00473718_caseD_7533;
            }
            FUN_0051af80();
            goto switchD_00473718_caseD_7533;
          }
          if (((uVar10 == 0x7956) || (uVar10 == 0xffffffe9)) || (uVar10 == 0xfffffff4)) {
switchD_00473718_caseD_7532:
            if (0x7557 < uVar10) {
              if (uVar10 == 0x7956) {
switchD_0047386f_caseD_753f:
                *in_stack_00001310 = 0xfffffff3;
                goto switchD_0047386f_caseD_7533;
              }
              if (uVar10 != 0xffffffe9) {
                if (uVar10 == 0xfffffff4) goto switchD_0047386f_caseD_7534;
                goto switchD_0047386f_caseD_7533;
              }
              goto LAB_004738ae;
            }
            if (uVar10 == 0x7557) {
LAB_004738ae:
              iVar3 = FUN_005167a0();
              if (iVar3 == 0) {
                *in_stack_00001310 = 0xfffffff5;
                iVar3 = 0;
              }
              else {
                iVar3 = 4;
              }
            }
            else {
              switch(uVar10) {
              case 0x7532:
                *in_stack_00001310 = 0xfffffffe;
                iVar3 = 0;
                break;
              default:
switchD_0047386f_caseD_7533:
                iVar3 = 0;
                break;
              case 0x7534:
switchD_0047386f_caseD_7534:
                *in_stack_00001310 = 0xfffffff4;
                iVar3 = 0;
                break;
              case 0x753f:
                goto switchD_0047386f_caseD_753f;
              case 0x754d:
                *in_stack_00001310 = 0xffffffff;
                iVar3 = 0;
              }
            }
            break;
          }
        } while( true );
      }
      goto LAB_00473633;
    }
    iVar3 = FUN_00515e10();
    if (iVar3 == 0) {
LAB_00473507:
      iVar5 = 1;
      puVar8 = &stack0x00000028;
      iVar3 = 0;
      do {
        iVar6 = iVar3;
        if (*(short *)(puVar8 + -2) == 1) {
          iVar1 = FUN_00481dc0();
          if (iVar1 == 0) {
            iVar3 = 2;
            goto LAB_00473633;
          }
          iVar6 = iVar1;
          if ((((iVar3 != 0) && (iVar6 = iVar3, 0 < iVar3)) && (iVar3 < 3)) && (iVar3 != iVar1))
          goto LAB_0047354a;
        }
        iVar5 = iVar5 + 1;
        puVar8 = puVar8 + 0xe;
        iVar3 = iVar6;
      } while (iVar5 < 4);
      if (iVar6 == 0) {
LAB_0047354a:
        iVar3 = 0x1e;
      }
      else {
        iVar3 = FUN_00482df0();
        if (iVar3 == 0) {
          FUN_00523740();
          FUN_00503490();
          iVar3 = FUN_00514940();
          if (iVar3 == 0) {
            iVar3 = FUN_00517c00();
            if (iVar3 == 0) {
              iVar3 = FUN_00514820();
              if (iVar3 != 0) {
                FUN_00515dd0();
                goto LAB_00473633;
              }
            }
            else {
              FUN_00516760();
            }
            FUN_0050acb0();
            iVar3 = FUN_00516b30();
            if ((iVar3 == 0) && (iVar3 = FUN_00482ca0(), iVar3 == 0)) {
              *in_stack_00001310 = 0;
            }
          }
        }
      }
    }
    else {
      iVar3 = FUN_00515f70();
      if (iVar3 == 0) {
        iVar3 = FUN_00515e10();
        if (iVar3 == 0) goto LAB_00473507;
        iVar3 = 4;
      }
      else {
        iVar3 = 4;
      }
    }
  }
  else {
    iVar3 = FUN_00530d40();
    if (iVar3 == 0) {
      iVar3 = FUN_00530de0();
      if (iVar3 == 0) goto LAB_0047341c;
      iVar3 = 4;
    }
    else {
      iVar3 = 4;
    }
  }
LAB_00473633:
  FUN_00538810();
  FUN_005389c0();
  FUN_00526420();
  FUN_00538a50();
  if (iVar3 == 0) {
    if (*in_stack_00001310 == 0xfffffff2) {
      FUN_00480280();
      FUN_00515dd0();
    }
    else {
      iVar3 = FUN_005167a0();
      if (iVar3 != 0) {
        FUN_00480280();
        iVar3 = 4;
        FUN_00538810();
        FUN_005389c0();
        FUN_00526420();
        FUN_00538a50();
        goto LAB_004736b9;
      }
    }
    return 1;
  }
LAB_004736b9:
  FUN_00480280();
  if (iVar3 == 1) {
    FUN_00515dd0();
  }
  FUN_004e5630();
  return 0;
switchD_00473718_caseD_7542:
  iVar3 = FUN_0051e460();
  if (iVar3 == 0) goto code_r0x0047374b;
  goto switchD_00473718_caseD_7533;
code_r0x0047374b:
  iVar3 = FUN_00475930();
  goto LAB_00473484;
}

