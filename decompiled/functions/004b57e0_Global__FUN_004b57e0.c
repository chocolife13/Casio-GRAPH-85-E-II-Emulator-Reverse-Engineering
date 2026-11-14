// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b57e0
// entry: 004b57e0  size: 741


uint FUN_004b57e0(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  int *piVar6;
  int local_38 [3];
  char acStack_2c [16];
  int local_1c [3];
  char acStack_10 [16];
  
  pbVar2 = param_1;
  iVar4 = FUN_004b45a0(local_1c,param_1);
  if (iVar4 == -1) {
    return 0xffffffff;
  }
  piVar6 = local_38;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  if (((*param_1 & 0x80) != 0) && (iVar4 = FUN_004b45a0(local_38,param_1 + 0xc), iVar4 == -1)) {
    return 0xffffffff;
  }
  bVar3 = FUN_0052f6b0(0x3d);
  if ((bVar3 & 0x70) == 0x20) {
    iVar4 = FUN_004b6a50();
    uVar5 = FUN_004b6a60();
    if ((bVar3 & 0x80) != 0x80) {
      iVar4 = iVar4 + -3;
      iVar1 = uVar5 - 3;
      if ((-100 < iVar4) && (local_1c[0] - iVar4 < 10)) {
        uVar5 = 0;
        do {
          if (acStack_10[uVar5] != '\0') break;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 9);
        if (uVar5 != 9) {
          uVar5 = FUN_004b6a70(iVar4);
        }
      }
      if ((*param_1 & 0x80) == 0) {
        return uVar5;
      }
      if (iVar1 < -99) {
        return uVar5;
      }
      if (9 < local_38[0] - iVar1) {
        return local_38[0] - iVar1;
      }
      iVar4 = 0;
      do {
        if (acStack_2c[iVar4] != '\0') break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 9);
      if (iVar4 == 9) {
        return 9;
      }
      uVar5 = FUN_004b6a90(iVar1);
      return uVar5;
    }
    iVar4 = iVar4 + 3;
    iVar1 = uVar5 + 3;
    if ((iVar4 < 100) && (iVar4 - local_1c[0] < 10)) {
      uVar5 = 0;
      do {
        if (acStack_10[uVar5] != '\0') break;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 9);
      if (uVar5 != 9) {
        uVar5 = FUN_004b6a70(iVar4);
      }
    }
    if ((*param_1 & 0x80) == 0) {
      return uVar5;
    }
    if (99 < iVar1) {
      return uVar5;
    }
    if (9 < iVar1 - local_38[0]) {
      return iVar1 - local_38[0];
    }
    iVar4 = 0;
    do {
      if (acStack_2c[iVar4] != '\0') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 9);
    if (iVar4 == 9) {
      return 9;
    }
    uVar5 = FUN_004b6a90(iVar1);
    return uVar5;
  }
  if (*param_4 == 1) {
    bVar3 = bVar3 | 0x80;
  }
  else if ((bVar3 & 0x70) != 0x10) {
    FUN_0052f6c0(0x3d,CONCAT31((int3)((uint)unaff_EBX >> 8),bVar3) & 0xffffff8f);
    FUN_004b6a70(local_1c[0]);
    if ((*param_1 & 0x80) == 0) {
      return (uint)*param_1;
    }
    uVar5 = FUN_004b6a90(local_38[0]);
    return uVar5;
  }
  param_1 = (byte *)(CONCAT31(param_1._1_3_,bVar3) & 0xffffffaf | 0x20);
  FUN_0052f6c0(0x3d,param_1);
  if (local_1c[0] < 1) {
    uVar5 = local_1c[0] / 3;
    iVar4 = local_1c[0] % 3 + 3;
    if (iVar4 == 3) {
      iVar4 = 0;
    }
    if (((*param_4 == 1) || (iVar4 == 0)) || (uVar5 = bVar3 & 0xffffff80, (char)uVar5 != -0x80))
    goto joined_r0x004b590f;
joined_r0x004b5906:
    local_1c[0] = (local_1c[0] - iVar4) + 3;
    if (99 < local_1c[0]) goto LAB_004b591a;
  }
  else {
    uVar5 = local_1c[0] / 3;
    iVar4 = local_1c[0] % 3;
    if (((*param_4 != 1) && (iVar4 != 0)) && (uVar5 = bVar3 & 0xffffff80, (char)uVar5 == -0x80))
    goto joined_r0x004b5906;
joined_r0x004b590f:
    local_1c[0] = local_1c[0] - iVar4;
    if (local_1c[0] < -99) goto LAB_004b591a;
  }
  uVar5 = FUN_004b6a70(local_1c[0]);
LAB_004b591a:
  if ((*pbVar2 & 0x80) != 0) {
    if (local_38[0] < 1) {
      iVar4 = local_38[0] % 3 + 3;
      if (iVar4 == 3) {
        iVar4 = 0;
      }
      if (((*param_4 != 1) && (iVar4 != 0)) && ((bVar3 & 0x80) == 0x80)) {
        iVar4 = (local_38[0] - iVar4) + 3;
        if (99 < iVar4) {
          return local_38[0] / 3;
        }
        uVar5 = FUN_004b6a90(iVar4);
        return uVar5;
      }
    }
    else {
      iVar4 = local_38[0] % 3;
      if (((*param_4 != 1) && (iVar4 != 0)) && ((bVar3 & 0x80) == 0x80)) {
        iVar4 = (local_38[0] - iVar4) + 3;
        if (99 < iVar4) {
          return local_38[0] / 3;
        }
        uVar5 = FUN_004b6a90(iVar4);
        return uVar5;
      }
    }
    uVar5 = local_38[0] / 3;
    if (-100 < local_38[0] - iVar4) {
      uVar5 = FUN_004b6a90(local_38[0] - iVar4);
      return uVar5;
    }
  }
  return uVar5;
}

