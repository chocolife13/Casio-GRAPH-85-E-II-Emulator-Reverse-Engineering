// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a0cf0
// entry: 004a0cf0  size: 724


uint FUN_004a0cf0(uint param_1,byte *param_2,undefined1 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  uVar2 = (uint)*(ushort *)(param_2 + 0x1e);
  if ((int)uVar2 <= (int)param_1) {
    return 0;
  }
  if ((*param_2 & 0xf) != 0) {
    switch(param_3) {
    case 0:
      return 0;
    case 1:
      if ((int)(param_1 + 1) < (int)uVar2) {
        return param_1 + 1;
      }
      return 1000;
    case 2:
      if (param_1 != 0) {
        return param_1 - 1;
      }
      break;
    case 3:
      return uVar2 - 1;
    default:
      return 0;
    }
    goto LAB_004a0e06;
  }
  iVar3 = param_1 * 0x1c;
  cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + iVar3,6);
  if (cVar1 != '\0') {
    switch(param_3) {
    case 0:
      cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + -0x1c + iVar3,6);
      if (cVar1 == '\0') {
        return param_1;
      }
      do {
        if (param_1 == 0) {
          return 0;
        }
        iVar3 = iVar3 + -0x1c;
        param_1 = param_1 - 1;
        cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + -0x1c + iVar3,6);
      } while (cVar1 != '\0');
      return param_1;
    case 1:
      param_1 = param_1 + 1;
      if ((int)param_1 < (int)(uint)*(ushort *)(param_2 + 0x1e)) {
        cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + param_1 * 0x1c,6);
        bVar5 = cVar1 == '\0';
        goto LAB_004a0e04;
      }
      break;
    case 2:
      if ((param_1 != 0) &&
         (cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + -0x1c + iVar3,6), cVar1 != '\0')) {
        return param_1 - 1;
      }
      break;
    case 3:
      cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + iVar3,6);
      for (; (cVar1 != '\0' && ((int)param_1 < (int)(uint)*(ushort *)(param_2 + 0x1e)));
          param_1 = param_1 + 1) {
        iVar3 = iVar3 + 0x1c;
        cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + iVar3,6);
      }
      return param_1 - 1;
    default:
      goto switchD_004a0d4f_default;
    }
    goto LAB_004a0e06;
  }
  switch(param_3) {
  case 0:
    uVar4 = 0;
    cVar1 = FUN_004a0820(*(undefined4 *)(param_2 + 0x20),6);
    if (cVar1 != '\0') {
      iVar3 = 0;
      while ((int)uVar4 < (int)(uint)*(ushort *)(param_2 + 0x1e)) {
        iVar3 = iVar3 + 0x1c;
        uVar4 = uVar4 + 1;
        cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + iVar3,6);
        if (cVar1 == '\0') {
          return uVar4;
        }
      }
    }
    break;
  case 1:
    param_1 = param_1 + 1;
    if ((int)param_1 < (int)(uint)*(ushort *)(param_2 + 0x1e)) {
      iVar3 = param_1 * 0x1c;
      do {
        cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + iVar3,6);
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        iVar3 = iVar3 + 0x1c;
      } while ((int)param_1 < (int)(uint)*(ushort *)(param_2 + 0x1e));
    }
    bVar5 = param_1 == *(ushort *)(param_2 + 0x1e);
LAB_004a0e04:
    if (!bVar5) {
      return param_1;
    }
    goto LAB_004a0e06;
  case 2:
    if (param_1 != 0) {
      param_1 = param_1 - 1;
      if (param_1 == 0) {
        return 0;
      }
      iVar3 = param_1 * 0x1c;
      do {
        cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + iVar3,6);
        if (cVar1 == '\0') {
          return param_1;
        }
        param_1 = param_1 - 1;
        iVar3 = iVar3 + -0x1c;
      } while (param_1 != 0);
      return 0;
    }
LAB_004a0e06:
    uVar4 = 1000;
    break;
  case 3:
    uVar4 = (uint)*(ushort *)(param_2 + 0x1e);
    iVar3 = uVar4 * 0x1c;
    cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + -0x1c + iVar3,6);
    while (cVar1 != '\0') {
      if (uVar4 == 0) {
        return 0;
      }
      iVar3 = iVar3 + -0x1c;
      uVar4 = uVar4 - 1;
      cVar1 = FUN_004a0820(*(int *)(param_2 + 0x20) + -0x1c + iVar3,6);
    }
    if (uVar4 != 0) {
      return uVar4 - 1;
    }
  }
switchD_004a0d4f_default:
  return uVar4;
}

