// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00478960
// entry: 00478960  size: 2070


undefined4 FUN_00478960(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  short *psVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  short local_84 [2];
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 local_74 [2];
  short asStack_72 [35];
  undefined1 local_2c [44];
  
  local_78 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,10,local_2c);
  iVar8 = 0;
  do {
    iVar1 = 0;
    do {
      if (param_2 == 0) {
LAB_00478a04:
        iVar3 = iVar1 + iVar8 * 6;
        (&DAT_005cf1a0)[iVar3 * 2] = (&DAT_00582d30)[iVar3 * 2];
        (&DAT_005cf1a4)[iVar3 * 2] = (&DAT_00582d34)[iVar3 * 2];
        if (iVar8 == 10) {
          (&DAT_005cf380)[iVar1 * 2] = (&DAT_00582fa0)[iVar1 * 2];
          (&DAT_005cf384)[iVar1 * 2] = (&DAT_00582fa4)[iVar1 * 2];
        }
      }
      else if (iVar8 == 6) {
        (&DAT_005cf2c0)[iVar1 * 2] = (&DAT_00582f10)[iVar1 * 2];
        (&DAT_005cf2c4)[iVar1 * 2] = (&DAT_00582f14)[iVar1 * 2];
      }
      else if (iVar8 == 7) {
        (&DAT_005cf2f0)[iVar1 * 2] = (&DAT_00582f40)[iVar1 * 2];
        (&DAT_005cf2f4)[iVar1 * 2] = (&DAT_00582f44)[iVar1 * 2];
      }
      else {
        if (iVar8 != 8) goto LAB_00478a04;
        (&DAT_005cf320)[iVar1 * 2] = (&DAT_00582f70)[iVar1 * 2];
        (&DAT_005cf324)[iVar1 * 2] = (&DAT_00582f74)[iVar1 * 2];
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    FUN_00538860(iVar8,&DAT_005cf1a0 + iVar8 * 0xc);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xb);
  iVar8 = 1;
  local_90 = 1;
  local_88 = 1;
  local_80 = 1;
  FUN_005387c0();
  FUN_005383a0(0);
  local_7c = param_1 - (int)(asStack_72 + 5);
  psVar2 = asStack_72 + 5;
  psVar6 = (short *)(param_2 + 0x1c);
  local_8c = 5;
  do {
    if (param_1 == 0) {
      *psVar2 = psVar6[1];
      psVar2[-1] = *psVar6;
      psVar2[-5] = psVar6[-0xd];
      psVar2[-6] = psVar6[-0xe];
    }
    else {
      puVar7 = (undefined4 *)(local_7c + (int)psVar2);
      *(undefined4 *)(psVar2 + -6) = *puVar7;
      *(undefined4 *)(psVar2 + -4) = puVar7[1];
      *(undefined4 *)(psVar2 + -2) = puVar7[2];
      *psVar2 = *(short *)(puVar7 + 3);
    }
    psVar6 = psVar6 + 0x10;
    psVar2 = psVar2 + 7;
    local_8c = local_8c + -1;
    uVar9 = 1;
  } while (local_8c != 0);
switchD_00478cae_caseD_7:
  do {
    iVar1 = 0;
    if (DAT_00582c48 != 0) {
      puVar7 = &DAT_00582c48;
      iVar3 = DAT_00582c48;
      do {
        if (asStack_72[uVar9 * 7] == iVar3) break;
        iVar3 = puVar7[3];
        puVar7 = puVar7 + 3;
        iVar1 = iVar1 + 1;
      } while (iVar3 != 0);
    }
    psVar2 = asStack_72 + 5;
    local_8c = 5;
    psVar6 = (short *)(param_2 + 0x1c);
    do {
      if (param_1 == 0) {
        psVar6[1] = *psVar2;
        *psVar6 = psVar2[-1];
        psVar6[-0xd] = psVar2[-5];
        psVar6[-0xe] = psVar2[-6];
      }
      else {
        puVar7 = (undefined4 *)(local_7c + (int)psVar2);
        *puVar7 = *(undefined4 *)(psVar2 + -6);
        puVar7[1] = *(undefined4 *)(psVar2 + -4);
        puVar7[2] = *(undefined4 *)(psVar2 + -2);
        *(short *)(puVar7 + 3) = *psVar2;
        iVar8 = local_88;
      }
      psVar2 = psVar2 + 7;
      psVar6 = psVar6 + 0x10;
      local_8c = local_8c + -1;
    } while (local_8c != 0);
    if (param_1 == 0) {
      FUN_00489480(param_2);
      local_80 = FUN_004782a0(uVar9,iVar8,local_74 + uVar9 * 0xe,uVar9 * 0x20 + param_2,
                              (&DAT_00582c48)[iVar1 * 3],
                              *(undefined4 *)(&UNK_00582c4c + iVar1 * 0xc),
                              *(undefined4 *)(&UNK_00582c50 + iVar1 * 0xc),local_90);
    }
    else {
      FUN_00530eb0(param_1);
      FUN_004782a0(uVar9,iVar8,local_74 + uVar9 * 0xe,0,(&DAT_00582c48)[iVar1 * 3],
                   *(undefined4 *)(&UNK_00582c4c + iVar1 * 0xc),
                   *(undefined4 *)(&UNK_00582c50 + iVar1 * 0xc),local_90);
    }
    FUN_00538b30();
    local_90 = 0;
    iVar3 = FUN_00526620(&local_94);
    if (iVar3 == 0) {
      if (local_94 < 0x19) {
        if (local_94 == 0x18) {
          asStack_72[uVar9 * 7] = 0x12;
        }
        else {
          switch(local_94) {
          case 1:
          case 2:
          case 3:
            uVar9 = local_94;
            break;
          case 4:
            asStack_72[uVar9 * 7] = 1;
            break;
          case 5:
            asStack_72[uVar9 * 7] = 2;
            break;
          case 6:
            asStack_72[uVar9 * 7] = 3;
            break;
          case 8:
            asStack_72[uVar9 * 7] = 4;
            break;
          case 9:
            asStack_72[uVar9 * 7] = 5;
            break;
          case 10:
            asStack_72[uVar9 * 7] = 6;
            break;
          case 0xb:
            asStack_72[uVar9 * 7] = 7;
            break;
          case 0xc:
            asStack_72[uVar9 * 7] = 8;
            break;
          case 0xe:
            asStack_72[uVar9 * 7] = 9;
            break;
          case 0xf:
            asStack_72[uVar9 * 7] = 10;
            break;
          case 0x10:
            asStack_72[uVar9 * 7] = 0xb;
            break;
          case 0x11:
            asStack_72[uVar9 * 7] = 0xc;
            break;
          case 0x12:
            asStack_72[uVar9 * 7] = 0xd;
            break;
          case 0x14:
            asStack_72[uVar9 * 7] = 0xe;
            break;
          case 0x15:
            asStack_72[uVar9 * 7] = 0xf;
            break;
          case 0x16:
            asStack_72[uVar9 * 7] = 0x10;
            break;
          case 0x17:
            asStack_72[uVar9 * 7] = 0x11;
          }
        }
        goto switchD_00478cae_caseD_7;
      }
      if (0x7531 < local_94) break;
      if (local_94 == 0x7531) {
        local_94 = 0x58;
        goto LAB_00478f5a;
      }
      switch(local_94) {
      case 0x1a:
      case 0x1b:
      case 0x1d:
        iVar1 = FUN_004788d0(local_84);
        if (iVar1 == 0) {
          if (local_94 == 0x1a) {
            asStack_72[uVar9 * 7 + 1] = local_84[0];
          }
          else if (local_94 == 0x1b) {
            asStack_72[uVar9 * 7 + 2] = local_84[0];
          }
          else if (local_94 == 0x1d) {
            asStack_72[uVar9 * 7 + 3] = local_84[0];
          }
        }
        goto switchD_00478cae_caseD_7;
      case 0x1c:
        asStack_72[uVar9 * 7 + 3] = 0;
        if (param_2 != 0) {
          iVar1 = uVar9 * 0x20 + param_2;
          *(undefined2 *)(iVar1 + 0x14) = 0;
          *(undefined2 *)(iVar1 + 0x16) = 0;
          *(undefined2 *)(iVar1 + 0x18) = 0;
          *(undefined2 *)(iVar1 + 0x1a) = 0;
        }
        goto switchD_00478cae_caseD_7;
      case 0x1e:
        asStack_72[uVar9 * 7 + 4] = 2;
        goto switchD_00478cae_caseD_7;
      case 0x1f:
        asStack_72[uVar9 * 7 + 4] = 1;
        goto switchD_00478cae_caseD_7;
      case 0x20:
        asStack_72[uVar9 * 7 + 4] = 0;
      default:
        goto switchD_00478cae_caseD_7;
      case 0x28:
        iVar3 = param_2 + uVar9 * 0x20;
        pcVar12 = s_XCellRange__005bf5e4;
        iVar1 = iVar3 + 8;
        iVar3 = iVar3 + 4;
        break;
      case 0x29:
        iVar3 = param_2 + uVar9 * 0x20;
        pcVar12 = s_YCellRange__005bf5ac;
        iVar1 = iVar3 + 0x10;
        iVar3 = iVar3 + 0xc;
        break;
      case 0x2a:
        iVar3 = param_2 + uVar9 * 0x20;
        pcVar12 = s_Frequency___005bf5a0;
        iVar1 = iVar3 + 0x18;
        iVar3 = iVar3 + 0x14;
        uVar10 = 3;
        goto LAB_00478e9d;
      case 0x2b:
        uVar5 = 6;
        asStack_72[uVar9 * 7] = 6;
        if (param_1 == 0) goto LAB_00478f1c;
        *(undefined2 *)(uVar9 * 0xe + 2 + param_1) = 6;
        goto switchD_00478cae_caseD_7;
      case 0x2c:
        uVar5 = 5;
        asStack_72[uVar9 * 7] = 5;
        if (param_1 == 0) {
LAB_00478f1c:
          *(undefined2 *)(uVar9 * 0x20 + 2 + param_2) = uVar5;
        }
        else {
          *(undefined2 *)(uVar9 * 0xe + 2 + param_1) = 5;
        }
        goto switchD_00478cae_caseD_7;
      }
      uVar10 = 2;
LAB_00478e9d:
      uVar4 = FUN_004797b0(uVar10,0,0x7545,iVar3,iVar1,0xc,iVar8,pcVar12);
      goto joined_r0x00478eaa;
    }
LAB_00478f5a:
    if (param_1 == 0) {
      if (local_80 == 1) {
        iVar3 = uVar9 * 0x20 + param_2;
        pcVar12 = s_XCellRange__005bf5e4;
        iVar1 = iVar3 + 8;
        iVar3 = iVar3 + 4;
        uVar11 = 1;
        uVar10 = 2;
        goto LAB_004790a3;
      }
      if (local_80 == 2) {
        iVar3 = uVar9 * 0x20 + param_2;
        pcVar12 = s_YCellRange__005bf5ac;
        iVar1 = iVar3 + 0x10;
        iVar3 = iVar3 + 0xc;
        uVar11 = 1;
        uVar10 = 2;
        goto LAB_004790a3;
      }
      uVar4 = local_94;
      if (local_80 == 3) {
        uVar11 = 1;
        goto LAB_004790a1;
      }
      goto joined_r0x00478eaa;
    }
  } while( true );
  switch(local_94) {
  case 0x7532:
    goto switchD_0047900d_caseD_7532;
  default:
    goto switchD_00478cae_caseD_7;
  case 0x7534:
    uVar10 = 0;
    goto LAB_00479126;
  case 0x7542:
    local_90 = 1;
    if (1 < iVar8) {
      iVar8 = iVar8 + -1;
      local_88 = iVar8;
    }
    goto switchD_00478cae_caseD_7;
  case 0x7545:
    break;
  case 0x7547:
    local_90 = 1;
    switch(*(undefined4 *)(&UNK_00582c50 + iVar1 * 0xc)) {
    case 1:
      iVar1 = 6;
      break;
    default:
      iVar1 = 4;
      break;
    case 4:
    case 5:
      iVar1 = 5;
    }
    if (iVar8 < iVar1) {
      iVar8 = iVar8 + 1;
      local_88 = iVar8;
    }
    goto switchD_00478cae_caseD_7;
  case 0x754d:
    goto switchD_0047900d_caseD_754d;
  }
  if (param_1 != 0) goto switchD_00478cae_caseD_7;
  if (local_80 == 1) {
    iVar3 = param_2 + uVar9 * 0x20;
    pcVar12 = s_XCellRange__005bf5e4;
    iVar1 = iVar3 + 8;
    iVar3 = iVar3 + 4;
    uVar11 = 0;
    uVar10 = 2;
LAB_004790a3:
    local_94 = FUN_004797b0(uVar10,uVar11,local_94,iVar3,iVar1,0xc,iVar8,pcVar12);
    uVar4 = local_94;
  }
  else {
    if (local_80 == 2) {
      iVar3 = uVar9 * 0x20 + param_2;
      pcVar12 = s_YCellRange__005bf5ac;
      iVar1 = iVar3 + 0x10;
      iVar3 = iVar3 + 0xc;
      uVar11 = 0;
      uVar10 = 2;
      goto LAB_004790a3;
    }
    uVar4 = local_94;
    if (local_80 == 3) {
      uVar11 = 0;
LAB_004790a1:
      iVar3 = uVar9 * 0x20 + param_2;
      iVar1 = iVar3 + 0x18;
      iVar3 = iVar3 + 0x14;
      pcVar12 = s_Frequency___005bf5a0;
      uVar10 = 3;
      goto LAB_004790a3;
    }
  }
joined_r0x00478eaa:
  if (uVar4 != 0x754d) goto switchD_00478cae_caseD_7;
switchD_0047900d_caseD_754d:
  uVar10 = 0xffffffff;
  goto LAB_00479126;
switchD_0047900d_caseD_7532:
  uVar10 = 0xfffffffe;
LAB_00479126:
  FUN_00538810();
  if (param_1 == 0) {
    FUN_00489480(param_2);
  }
  else {
    FUN_00530eb0(param_1);
  }
  FUN_00526420(local_78);
  FUN_005389c0(0,10,local_2c);
  return uVar10;
}

