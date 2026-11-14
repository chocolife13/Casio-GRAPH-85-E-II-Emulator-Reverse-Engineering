// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00473b70
// entry: 00473b70  size: 2121


/* WARNING: Removing unreachable block (ram,0x00474399) */
/* WARNING: Removing unreachable block (ram,0x004743a9) */

uint FUN_00473b70(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint unaff_retaddr;
  int iStack00000004;
  int iStack00000008;
  uint uStack0000000c;
  int *in_stack_000012b8;
  int in_stack_000012bc;
  int in_stack_000012c0;
  
  FUN_00553a90();
  iStack00000008 = 0;
  uStack0000000c = 0;
  bVar1 = true;
  if (in_stack_000012c0 == 0) {
    iVar2 = FUN_00516760();
    if (iVar2 != 0) {
      FUN_00480280();
      *in_stack_000012b8 = 4;
      FUN_0052b240();
      return 0;
    }
    FUN_00503490();
    iVar2 = FUN_00514940();
    *in_stack_000012b8 = iVar2;
    if (iVar2 == 0) {
      FUN_0050acb0();
      iStack00000004 = 1;
      do {
        if ((*(short *)(in_stack_000012bc + iStack00000004 * 0xe) == 1) &&
           (iStack00000008 = FUN_00481dc0(), iStack00000008 == 0)) break;
        iStack00000004 = iStack00000004 + 1;
      } while (iStack00000004 < 4);
LAB_00473c92:
      FUN_00526410();
      FUN_00538a00();
      FUN_00538980();
      if (iStack00000008 == 1) {
        FUN_0053c690();
      }
      else {
        FUN_0053c690();
      }
      iVar2 = FUN_00539970();
      FUN_0053c6f0();
      FUN_00526420();
      iVar4 = 0;
      do {
        puVar5 = (undefined4 *)((int)&DAT_005825b8 + iVar4);
        puVar6 = (undefined4 *)(&stack0x00000a24 + iVar4);
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_00538860();
        iVar4 = iVar4 + 0x30;
      } while (iVar4 < 0xf0);
      iStack00000004 = 0;
      if (0 < iVar2) {
        do {
          FUN_00538860();
          iStack00000004 = iStack00000004 + 1;
        } while (iStack00000004 < iVar2);
      }
      FUN_005387f0();
switchD_004740d4_caseD_ffffffe6:
      FUN_0050acb0();
      FUN_00538b30();
      if (bVar1) {
        iVar2 = FUN_00526620();
        if (iVar2 != 0) goto switchD_004740d4_caseD_ffffffe6;
      }
      else {
        bVar1 = true;
      }
      if (uStack0000000c < 0x7556) {
        if (uStack0000000c == 0x7555) {
          FUN_004ab670();
          FUN_0052d2d0();
          if (iStack00000004 == 1) {
LAB_0047434c:
            unaff_retaddr = 0xffffffe5;
            goto switchD_004740d4_caseD_ffffffe5;
          }
        }
        else if (uStack0000000c < 0x7543) {
          if (uStack0000000c == 0x7542) {
switchD_00474118_caseD_7544:
            unaff_retaddr = FUN_0051e460();
            if (unaff_retaddr == 0) {
              iVar2 = FUN_00475930();
              *in_stack_000012b8 = iVar2;
              if (iVar2 != 0) {
                FUN_00480280();
                FUN_0052b240();
                unaff_retaddr = 0;
                goto switchD_004740d4_caseD_ffffffe5;
              }
            }
          }
          else if (uStack0000000c < 0x3d) {
            if (uStack0000000c == 0x3c) {
LAB_0047405f:
              unaff_retaddr = FUN_0047b640();
              if (unaff_retaddr == 0xffffffff) goto switchD_00474118_caseD_754d;
              if (unaff_retaddr == 0) {
                iVar2 = 0;
                do {
                  if (iVar2 + 0x25U == uStack0000000c) break;
                  iVar2 = iVar2 + 1;
                } while (iVar2 < 0xd);
                unaff_retaddr = FUN_0047b380();
                switch(unaff_retaddr) {
                case 0:
                  goto switchD_004740d4_caseD_0;
                case 0xffffffe4:
                case 0xffffffe9:
                  break;
                case 0xffffffe5:
                case 0xffffffea:
                case 0xffffffeb:
                  goto switchD_004740d4_caseD_ffffffe5;
                default:
                  break;
                }
              }
            }
            else if (uStack0000000c == 2) {
              unaff_retaddr = FUN_0047a680();
              if (unaff_retaddr == 0xfffffff5) {
switchD_004740d4_caseD_0:
                unaff_retaddr = 0;
                goto switchD_004740d4_caseD_ffffffe5;
              }
              if (unaff_retaddr == 0xffffffff) goto switchD_00474118_caseD_754d;
              if (unaff_retaddr == 0) {
                FUN_00477e70();
              }
            }
            else if ((0x24 < uStack0000000c) && (uStack0000000c < 0x32)) goto LAB_0047405f;
          }
          else if ((uStack0000000c == 0x7532) || (uStack0000000c == 0x753f)) goto LAB_00474356;
        }
        else {
          switch(uStack0000000c) {
          case 0x7544:
          case 0x7545:
          case 0x7547:
            goto switchD_00474118_caseD_7544;
          case 0x754d:
switchD_00474118_caseD_754d:
            unaff_retaddr = 0xffffffea;
            goto switchD_004740d4_caseD_ffffffe5;
          case 0x754e:
            iVar2 = FUN_0052eb10();
            if (iVar2 == 0) goto LAB_0047434c;
          }
        }
        goto switchD_004740d4_caseD_ffffffe6;
      }
      if (0x760c < uStack0000000c) {
        if (uStack0000000c < 0x7636) {
          if (uStack0000000c < 0x7634) {
            if (0x760f < uStack0000000c) {
              if (uStack0000000c < 0x761b) {
LAB_00474270:
                unaff_retaddr = FUN_00475990();
                goto LAB_00474282;
              }
              if (uStack0000000c == 0x7625) {
                unaff_retaddr = FUN_00471dd0();
                goto LAB_00474282;
              }
            }
          }
          else {
            FUN_0051af80();
          }
        }
        else if (uStack0000000c == 0x7956) {
LAB_00474356:
          unaff_retaddr = 0xffffffeb;
switchD_004740d4_caseD_ffffffe5:
          FUN_00538810();
          FUN_005389c0();
          FUN_00538a50();
          FUN_00526420();
          return unaff_retaddr;
        }
        goto switchD_004740d4_caseD_ffffffe6;
      }
      if (uStack0000000c == 0x760c) goto LAB_00474270;
      switch(uStack0000000c) {
      case 0x7557:
        goto LAB_004741f1;
      default:
        goto switchD_004740d4_caseD_ffffffe6;
      case 0x75f8:
      case 0x75f9:
      case 0x75fa:
      case 0x75fb:
      case 0x75fd:
      case 0x75fe:
      case 0x75ff:
      case 0x7600:
      case 0x7601:
        unaff_retaddr = FUN_00475850();
        break;
      case 0x7602:
        unaff_retaddr = FUN_004744e0();
      }
LAB_00474282:
      FUN_00538410();
      switch(unaff_retaddr) {
      case 0xffffffe5:
      case 0xffffffea:
      case 0xffffffeb:
        goto switchD_004740d4_caseD_ffffffe5;
      default:
        if ((unaff_retaddr != 0) && (((int)unaff_retaddr < 30000 || (0x75f7 < (int)unaff_retaddr))))
        {
          bVar1 = false;
          uStack0000000c = unaff_retaddr;
        }
        break;
      case 0xffffffe9:
LAB_004741f1:
        iVar2 = FUN_0047b0f0();
        if (iVar2 == 0) goto switchD_004740d4_caseD_ffffffe5;
      }
      goto switchD_004740d4_caseD_ffffffe6;
    }
  }
  else {
    iVar2 = FUN_00516800();
    if (iVar2 != 0) {
      FUN_00480280();
      *in_stack_000012b8 = 4;
      FUN_0052b240();
      return 0;
    }
    iStack00000004 = 1;
    iVar2 = 0;
    do {
      iStack00000008 = iVar2;
      if (*(short *)(in_stack_000012bc + iStack00000004 * 0xe) == 1) {
        iVar4 = FUN_00481dc0();
        if (iVar4 == 0) {
          FUN_00480280();
          *in_stack_000012b8 = 2;
          FUN_0052b240();
          return 0;
        }
        iStack00000008 = iVar4;
        if ((((iVar2 != 0) && (iStack00000008 = iVar2, 0 < iVar2)) && (iVar2 < 3)) &&
           (iVar2 != iVar4)) {
          FUN_00480280();
          *in_stack_000012b8 = 0x1e;
          FUN_0052b240();
          return 0;
        }
      }
      iStack00000004 = iStack00000004 + 1;
      iVar2 = iStack00000008;
    } while (iStack00000004 < 4);
    if (iStack00000008 == 0) {
      FUN_00480280();
      *in_stack_000012b8 = 0x1e;
      FUN_0052b240();
      return 0;
    }
    iVar2 = FUN_00515e10();
    if (iVar2 != 0) {
      iVar2 = FUN_00515f70();
      if (iVar2 != 0) {
        FUN_00480280();
        *in_stack_000012b8 = 4;
        FUN_0052b240();
        return 0;
      }
      FUN_00515e10();
    }
    iVar2 = FUN_00482df0();
    *in_stack_000012b8 = iVar2;
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_0047bc90();
    *in_stack_000012b8 = iVar2;
    if (iVar2 == 0) {
      iVar2 = FUN_00516b30();
      *in_stack_000012b8 = iVar2;
      if (iVar2 == 0) {
        iVar2 = FUN_00482ca0();
        *in_stack_000012b8 = iVar2;
        if (iVar2 == 0) goto LAB_00473c92;
      }
    }
    FUN_00480280();
  }
  FUN_0052b240();
  return 0;
}

