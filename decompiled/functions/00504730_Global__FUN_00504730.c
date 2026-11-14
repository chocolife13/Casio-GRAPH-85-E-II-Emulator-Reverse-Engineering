// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00504730
// entry: 00504730  size: 1849


uint FUN_00504730(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_7d;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  undefined1 local_70 [24];
  undefined1 local_58 [44];
  undefined1 local_2c [44];
  
  local_78 = (uint)(param_2 == 0);
  local_7d = 0;
  FUN_00528a20(*(undefined1 *)(param_1 + 0x8e4),&local_74,&local_7c);
  FUN_0050a800(param_1,0);
  FUN_00528ac0(CONCAT31((int3)((uint)*(int *)(param_1 + 0x8e8) >> 8),
                        *(undefined1 *)(param_1 + 0x8e4)),
               *(int *)(param_1 + 0x8e8) + -1 + *(int *)(param_1 + 0x8f4),
               *(int *)(param_1 + 0x8ec) + -1 + *(int *)(param_1 + 0x8f0),local_70);
LAB_005047b0:
  while (FUN_00538b30(), local_78 != 0) {
    iVar2 = FUN_00526620(&param_2);
    if (iVar2 == 0) goto LAB_00504867;
    if ((((*(char *)(param_1 + 0x8e4) == '#') && ((*(byte *)(param_1 + 0x8e0) & 0x30) != 0x20)) &&
        (*(int *)(param_1 + 0x8f0) == 1)) && (iVar2 = FUN_004ab6a0(s__TABLE_005be208), iVar2 != 0))
    {
      iVar2 = FUN_005244e0(1,param_2,7,local_70,&local_7d);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      if (iVar2 == 0) {
        iVar2 = FUN_00509c60(local_70,param_1,
                             *(int *)(param_1 + 0x8e8) + -1 + *(int *)(param_1 + 0x8f4));
joined_r0x00504858:
        if (iVar2 != 0) {
          FUN_0052b240(iVar2);
          return 0xfffffff5;
        }
        FUN_00518190();
        FUN_0053c690(2);
      }
LAB_0050498d:
      FUN_0050a800(param_1,0);
    }
  }
  local_78 = 1;
LAB_00504867:
  if (param_2 < 0x169) {
    if (param_2 < 0x166) {
      switch(param_2) {
      case 0x15b:
        if (((*(char *)(param_1 + 0x8e4) == '#') && ((*(byte *)(param_1 + 0x8e0) & 0x30) != 0x20))
           && (*(int *)(param_1 + 0x8f0) == 1)) {
          FUN_00528ac0(0x23,*(int *)(param_1 + 0x8e8) + -1 + *(int *)(param_1 + 0x8f4),1,local_70);
          iVar2 = FUN_005244e0(0,0x7545,7,local_70,&local_7d);
          if (iVar2 == -1) {
            return 0xffffffff;
          }
          if (iVar2 == 0) {
            iVar2 = FUN_00509c60(local_70,param_1,
                                 *(int *)(param_1 + 0x8e8) + -1 + *(int *)(param_1 + 0x8f4));
            goto joined_r0x00504858;
          }
          goto LAB_0050498d;
        }
        break;
      case 0x15c:
switchD_00504893_caseD_15c:
        FUN_0050a800(param_1,2);
        return 0xfffffffe;
      case 0x15d:
        iVar2 = FUN_00501ff0();
        if (iVar2 == 0) {
          FUN_00518170(*(undefined1 *)(param_1 + 0x8e4));
          if ((*(byte *)(param_1 + 0x8e0) & 0x30) != 0x20) {
            return 0;
          }
          FUN_00529400(*(undefined1 *)(param_1 + 0x8e4),0,local_7c);
          return 0x23;
        }
        break;
      case 0x15e:
      case 0x15f:
        goto switchD_00504893_caseD_15e;
      case 0x160:
      case 0x161:
      case 0x162:
        FUN_00504ed0(param_2,param_1);
        FUN_0050a800(param_1,0);
        FUN_00528a20(*(undefined1 *)(param_1 + 0x8e4),&local_74,&local_7c);
        if ((*(byte *)(param_1 + 0x8e0) & 0x30) != 0x20) {
          FUN_00518190();
          FUN_0053c690(2);
        }
        break;
      default:
        goto switchD_00504893_default;
      }
    }
    else {
switchD_00504893_caseD_15e:
      FUN_0050a800(param_1,2);
      if (param_2 < 0x168) {
        if (param_2 == 0x167) {
          return 0x28;
        }
        if (param_2 == 0x15e) {
          return 0x21;
        }
        if (param_2 == 0x15f) {
          return 0x20;
        }
        if (param_2 == 0x166) {
          return 0x29;
        }
      }
      else {
        if (param_2 == 0x168) {
          return 0x26;
        }
        if (param_2 == 0x7956) {
          return 0x23;
        }
      }
    }
    goto LAB_005047b0;
  }
  if (param_2 < 0x754f) {
    if (param_2 == 0x754e) {
      iVar2 = FUN_005022f0(CONCAT31(0x75,*(byte *)(param_1 + 0x8e0) >> 4) & 0xffffff03);
      if (iVar2 != 0) {
        return 0xfffffff2;
      }
      goto LAB_005047b0;
    }
    switch(param_2) {
    case 0x7532:
      goto switchD_00504893_caseD_15c;
    case 0x7534:
      iVar2 = FUN_004ab6a0(s__RUNMAT_005be2d4);
      if ((iVar2 != 0) || (iVar2 = FUN_004ab6a0(s__PROG_005bec48), iVar2 != 0)) {
        return 0xfffffff4;
      }
      if (((*(byte *)(param_1 + 0x8e0) & 0x30) != 0x20) &&
         ((iVar2 = FUN_004ab6a0(s__RECUR_005be280), iVar2 == 0 ||
          ((*(byte *)(param_1 + 0x8e1) & 2) == 0)))) {
        FUN_0050a800(param_1,2);
        return 0x20;
      }
      goto LAB_005047b0;
    case 0x753f:
      bVar1 = *(byte *)(param_1 + 0x8e0) & 0x30;
      if ((bVar1 == 0x20) || (bVar1 == 0x30)) {
        iVar2 = FUN_00517c00();
        if (iVar2 != 0) {
          return 0x23;
        }
      }
      else {
        iVar2 = FUN_004ab6a0(s__RUNMAT_005be2d4);
        if ((iVar2 != 0) || (iVar2 = FUN_004ab6a0(s__PROG_005bec48), iVar2 != 0)) {
          return 0xfffffff3;
        }
      }
      goto LAB_005047b0;
    case 0x7542:
    case 0x7544:
    case 0x7545:
    case 0x7547:
      FUN_005059e0(param_1,param_2,local_74,local_7c);
      FUN_0050a800(param_1,0);
      FUN_00528ac0(CONCAT31((int3)((uint)*(int *)(param_1 + 0x8e8) >> 8),
                            *(undefined1 *)(param_1 + 0x8e4)),
                   *(int *)(param_1 + 0x8e8) + -1 + *(int *)(param_1 + 0x8f4),
                   *(int *)(param_1 + 0x8ec) + -1 + *(int *)(param_1 + 0x8f0),local_70);
      goto LAB_005047b0;
    case 0x754a:
switchD_005049d7_caseD_754a:
      if (param_2 == 0x755e) {
        FUN_004b5e70(local_70,local_58);
      }
      else {
        FUN_004b5ad0(local_70,local_58);
      }
      FUN_005232d0(1,7);
      uVar3 = FUN_004b4f20(local_2c,local_58,0x15,0x15);
      FUN_00523470(uVar3);
      goto LAB_005047b0;
    case 0x754d:
      return 0xffffffff;
    }
  }
  else if (param_2 < 0x794c) {
    if (0x7949 < param_2) {
      uVar3 = 0;
      if (param_2 != 0x794a) goto LAB_00504cf0;
      FUN_004b6300(local_70,local_58);
LAB_00504d03:
      FUN_005232d0(1,7);
      uVar3 = FUN_004b4f20(local_2c,local_58,0x15,0x15);
      FUN_00523470(uVar3);
      goto LAB_005047b0;
    }
    if (param_2 == 0x7555) {
      iVar2 = FUN_00502180();
      if (iVar2 != 0) {
        return 0xfffffff2;
      }
      FUN_0050a800(param_1,0);
      goto LAB_005047b0;
    }
    if (param_2 == 0x7557) {
      iVar2 = FUN_004ab6a0(s__PROG_005bec48);
      if ((iVar2 == 0) && (iVar2 = FUN_004ab6a0(s__RUNMAT_005be2d4), iVar2 == 0)) {
        bVar1 = *(byte *)(param_1 + 0x8e0) & 0x30;
        if (bVar1 == 0x20) {
          return 0xfffffff5;
        }
        if (bVar1 == 0x30) {
          return 0xfffffff5;
        }
        return 0x23;
      }
      goto LAB_005047b0;
    }
    if (param_2 == 0x755e) goto switchD_005049d7_caseD_754a;
  }
  else {
    if (param_2 == 0x794c) {
      uVar3 = 1;
LAB_00504cf0:
      FUN_004b6330(local_70,local_58,uVar3);
      goto LAB_00504d03;
    }
    if (param_2 == 0x7956) {
      iVar2 = FUN_00517c00();
      if (iVar2 != 0) goto switchD_00504893_caseD_15e;
      goto LAB_005047b0;
    }
    if (param_2 == 0x7957) {
      if (*(int *)(param_1 + 0x8f0) == 1) {
        iVar2 = 1;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x8f0) + -1 + *(int *)(param_1 + 0x8ec);
      }
      iVar4 = FUN_00505e20();
      if ((iVar4 != 0) &&
         (iVar2 = FUN_00505d50(iVar4,iVar2,*(undefined1 *)(param_1 + 0x8e4)), iVar2 != 0)) {
        FUN_0052b240(4);
      }
      goto LAB_005047b0;
    }
  }
switchD_00504893_default:
  if (param_2 != 0) {
    if (param_2 < 30000) {
      return param_2;
    }
    if (0x75f7 < param_2) {
      return param_2;
    }
  }
  goto LAB_005047b0;
}

