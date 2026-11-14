// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00526620
// entry: 00526620  size: 1653


bool FUN_00526620(uint *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  short *psVar8;
  bool bVar9;
  short local_6a;
  int local_68;
  int local_64;
  uint local_60 [12];
  short local_30 [24];
  
  FUN_0040ae30();
  FUN_0052f880();
  do {
    sVar2 = FUN_00538700();
    if (sVar2 < 0) {
      FUN_00430070(0xffffffff,0);
      sVar2 = FUN_005384a0();
    }
    iVar3 = FUN_005384c0((int)sVar2,local_30);
    if (iVar3 != 0) {
      iVar3 = 0;
      psVar8 = local_30;
      do {
        FUN_00430070(iVar3,(int)*psVar8);
        iVar3 = iVar3 + 1;
        psVar8 = psVar8 + 4;
      } while (iVar3 < 6);
    }
    do {
      do {
        FUN_0042fd50(&local_64,&local_68,0,1,0,&local_6a);
      } while (0xc < local_68);
    } while (((local_68 < -2) || (7 < local_64)) || (local_64 < -2));
    if ((local_68 < 0) || (local_64 < 0)) {
      bVar9 = local_68 == -1;
      *param_1 = (int)local_6a;
      goto LAB_00526752;
    }
  } while (((local_64 < 1) || (local_68 < 1)) || ((7 < local_64 || (0xc < local_68))));
  uVar4 = FUN_005262a0(*(undefined4 *)(&DAT_005986f0 + (local_68 * 7 + local_64) * 4));
  *param_1 = uVar4;
  if (uVar4 == 0) {
    uVar4 = FUN_005262c0(*(undefined4 *)(&DAT_005986f0 + (local_68 * 7 + local_64) * 4));
    *param_1 = uVar4;
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
LAB_00526752:
  switch(*param_1) {
  case 0x7535:
    uVar5 = FUN_0040ad00();
    switch(uVar5) {
    case 0:
    case 1:
    case 4:
    case 8:
    case 0x84:
    case 0x88:
switchD_005267df_caseD_0:
      uVar5 = 2;
      goto LAB_00526883;
    case 2:
      goto switchD_0052682f_caseD_0;
    }
    break;
  case 0x7536:
    uVar5 = FUN_0040ad00();
    switch(uVar5) {
    case 0:
    case 2:
    case 4:
    case 8:
    case 0x84:
    case 0x88:
      uVar5 = 1;
      goto LAB_00526883;
    case 1:
      goto switchD_0052682f_caseD_0;
    }
    break;
  case 0x7537:
    uVar5 = FUN_0040ad00();
    switch(uVar5) {
    case 0:
    case 2:
      uVar5 = 4;
      break;
    case 1:
      uVar5 = 0x84;
      break;
    default:
      goto switchD_0052682f_caseD_3;
    case 4:
    case 8:
    case 0x84:
    case 0x88:
      goto switchD_0052682f_caseD_0;
    }
    goto LAB_00526883;
  default:
    uVar5 = FUN_0040ad00();
    switch(uVar5) {
    case 2:
      uVar4 = *param_1;
      if ((((uVar4 != 0x755b) && (uVar4 != 0x755a)) && (uVar4 != 0x7559)) && (uVar4 != 0x755c))
      goto switchD_0052682f_caseD_0;
      break;
    case 0x84:
    case 0x88:
      switch(*param_1) {
      case 0x7532:
      case 0x7534:
      case 0x753f:
        break;
      default:
        goto switchD_0052682f_caseD_3;
      case 0x755f:
        iVar3 = FUN_00526460();
        if (iVar3 == 1) {
          *param_1 = 32000;
        }
      }
    case 0:
    case 1:
    case 4:
    case 8:
switchD_0052682f_caseD_0:
      uVar5 = 0;
LAB_00526883:
      FUN_005262e0(uVar5);
    }
    break;
  case 0x7562:
    uVar5 = FUN_0040ad00();
    switch(uVar5) {
    case 0:
    case 1:
    case 4:
    case 8:
    case 0x84:
    case 0x88:
      if ((((byte)DAT_005d03ca & 0x10) == 0) && (cVar1 = FUN_005234b0(), cVar1 != -1))
      goto switchD_005267df_caseD_0;
      break;
    case 2:
      break;
    default:
      goto switchD_0052682f_caseD_3;
    }
    goto switchD_0052682f_caseD_0;
  }
switchD_0052682f_caseD_3:
  uVar4 = *param_1;
  if (uVar4 < 0x7560) {
    if (uVar4 == 0x755f) {
      *param_1 = 0x7534;
    }
    else if (0x754e < uVar4) {
      if (uVar4 < 0x7551) {
        FUN_005262e0(1);
        *param_1 = 0;
        return false;
      }
      if (uVar4 == 0x7551) {
        FUN_00526310();
      }
    }
  }
  else if (uVar4 == 32000) {
    FUN_005264e0();
  }
  cVar1 = FUN_005234b0();
  if (cVar1 != -1) {
    FUN_00527030();
  }
  if ((bVar9 != false) || (iVar3 = FUN_00538390(), iVar3 != 0)) goto switchD_00526ae3_default;
  uVar4 = *param_1;
  if (uVar4 != 0x7539) {
    if (((uVar4 == 0x753a) || (uVar4 == 0x753b)) ||
       ((uVar4 == 0x753c || ((uVar4 == 0x753d || (uVar4 == 0x753e)))))) {
      if (uVar4 == 0x7539) goto LAB_00526a3b;
      if (uVar4 == 0x753a) {
        puVar7 = (uint *)0x1;
      }
      else if (uVar4 == 0x753b) {
        puVar7 = (uint *)0x2;
      }
      else if (uVar4 == 0x753c) {
        puVar7 = (uint *)0x3;
      }
      else if (uVar4 == 0x753d) {
        puVar7 = (uint *)0x4;
      }
      else {
        puVar7 = (uint *)0x5;
        if (uVar4 != 0x753e) {
          puVar7 = param_1;
        }
      }
      goto LAB_00526a87;
    }
    if (uVar4 == 0x7594) {
      if (((byte)DAT_005d03ca & 0x80) == 0) {
        uVar4 = FUN_00523100(0);
        *param_1 = uVar4;
        if (uVar4 != 0) {
          bVar9 = true;
        }
      }
      goto switchD_00526ae3_default;
    }
    if (uVar4 == 0x7538) {
      if (((byte)DAT_005d03ca & 1) == 0) {
        FUN_005263b0();
      }
      goto switchD_00526ae3_default;
    }
    if (uVar4 == 0x7540) {
      if (((byte)DAT_005d03ca & 2) == 0) {
        FUN_005263d0();
      }
      goto switchD_00526ae3_default;
    }
    if (uVar4 == 0x754c) {
      if (((byte)DAT_005d03ca & 4) == 0) {
        FUN_00526350();
      }
      goto switchD_00526ae3_default;
    }
    if (uVar4 == 0x7562) {
      if ((((byte)DAT_005d03ca & 0x10) == 0) && (cVar1 = FUN_005234b0(), cVar1 != -1)) {
        FUN_005263f0();
      }
      goto switchD_00526ae3_default;
    }
    if (uVar4 != 0x7532) goto switchD_00526ae3_default;
    sVar2 = FUN_005387b0();
    if (sVar2 == 0) {
      FUN_005384a0();
      goto switchD_00526ae3_default;
    }
    if ((sVar2 == -1) || (sVar2 == -2)) goto switchD_00526ae3_default;
    goto LAB_00526b5f;
  }
LAB_00526a3b:
  puVar7 = (uint *)0x0;
LAB_00526a87:
  FUN_00430040(puVar7,0);
  sVar2 = FUN_00538700();
  if (sVar2 < 0) {
    sVar2 = FUN_005384a0();
  }
  iVar3 = FUN_005384c0((int)sVar2,local_60);
  if ((iVar3 == 0) ||
     (FUN_00430040(puVar7,(int)(short)local_60[(int)puVar7 * 2]),
     (short)local_60[(int)puVar7 * 2] == 0)) goto switchD_00526ae3_default;
  switch(*(undefined2 *)((int)local_60 + ((int)puVar7 * 4 + 1) * 2)) {
  case 0:
    iVar3 = FUN_00538700();
    if (((0xbf < iVar3) && (iVar3 < 0xd5)) && (iVar3 == 0xc0)) {
      FUN_00538710();
      FUN_00526370();
    }
    uVar4 = local_60[(int)puVar7 * 2 + 1];
    goto LAB_00526b57;
  case 1:
    bVar9 = true;
    *param_1 = local_60[(int)puVar7 * 2 + 1];
    break;
  case 2:
    uVar4 = local_60[(int)puVar7 * 2 + 1];
    *param_1 = uVar4;
    if (uVar4 == 0x7553) {
      FUN_005262e0(0);
      iVar3 = FUN_00538700();
      if (iVar3 == 0xeb) {
        FUN_005387a0();
      }
    }
    break;
  case 3:
    FUN_005387a0();
    uVar4 = local_60[(int)puVar7 * 2 + 1];
LAB_00526b57:
    FUN_005386a0(uVar4);
LAB_00526b5f:
    *param_1 = 0;
  }
switchD_00526ae3_default:
  iVar3 = FUN_00538700();
  iVar6 = FUN_0040ad00();
  if (((iVar6 != 2) && (0xe9 < iVar3)) && (iVar3 < 0xed)) {
    FUN_005387a0();
  }
  iVar6 = FUN_0040ad00();
  if (iVar6 == 1) {
    if ((iVar3 < 0xc0) || (0xd4 < iVar3)) {
      if (((byte)DAT_005d03ca & 0x20) == 0) {
        FUN_00538780();
        FUN_00526370();
      }
    }
    else if (*param_1 == 0x7536) {
      FUN_00526370();
    }
  }
  else if (iVar3 == 0xc0) {
    FUN_005387a0();
  }
  iVar3 = FUN_00538700();
  iVar6 = FUN_0040ad00();
  if ((((iVar6 == 4) || (iVar6 = FUN_0040ad00(), iVar6 == 0x84)) ||
      (iVar6 = FUN_0040ad00(), iVar6 == 8)) || (iVar6 = FUN_0040ad00(), iVar6 == 0x88)) {
    if (((iVar3 < 0xed) || (0xef < iVar3)) && (((byte)DAT_005d03ca & 0x40) == 0)) {
      FUN_00526390();
    }
  }
  else if (iVar3 == 0xed) {
    FUN_005387a0();
  }
  if (*param_1 == 0x7567) {
    FUN_005265f0(0x7568,0);
  }
  if (*param_1 == 0x7568) {
    FUN_00525ed0();
  }
  if (bVar9 == true) {
    FUN_00430000(*param_1);
    FUN_00430020(0);
    return true;
  }
  FUN_00430000(0);
  FUN_00430020(*param_1);
  return bVar9;
}

