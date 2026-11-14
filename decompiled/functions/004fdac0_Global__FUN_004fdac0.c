// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fdac0
// entry: 004fdac0  size: 530


undefined4 FUN_004fdac0(byte *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  
  bVar1 = *param_1;
  if (bVar1 != 0x7f) {
    if ((bVar1 == 0xf9) && (param_1[1] == 0x1b)) {
      cVar2 = param_1[2] - 0x30;
      if (param_1[3] != 0) {
        cVar2 = (param_1[3] - 0x30) + cVar2 * '\n';
      }
    }
    else {
      if (bVar1 < 0x14) {
        return 1;
      }
      if (0x19 < bVar1) {
        return 1;
      }
      cVar2 = bVar1 - 0x13;
    }
    iVar6 = FUN_004b7ca0(cVar2);
    *param_2 = iVar6;
    if (iVar6 != 0) {
      return 1;
    }
    goto LAB_004fdcac;
  }
  if ((param_1[1] < 0xf0) || (0xf4 < param_1[1])) {
    uVar4 = FUN_00501f50(param_3);
    return uVar4;
  }
  iVar6 = param_1[2] - 0x30;
  if (param_1[3] != 0) {
    iVar6 = (param_1[3] - 0x30) + iVar6 * 10;
  }
  uVar3 = FUN_005172b0(iVar6);
  if (uVar3 < 0x1a9) {
    if (uVar3 != 0x1a8) {
      if (uVar3 < 0x189) {
        if (uVar3 != 0x188) {
          if (uVar3 == 0) goto LAB_004fdcac;
          if (uVar3 != 0x108) {
            uVar4 = FUN_00501f50(param_3);
            return uVar4;
          }
        }
      }
      else if (uVar3 != 0x198) {
        uVar4 = FUN_00501f50(param_3);
        return uVar4;
      }
    }
LAB_004fdb87:
    bVar7 = param_1[1] == 0xf0;
LAB_004fdb8b:
    if (!bVar7) {
      uVar4 = FUN_00501f30(param_3);
      return uVar4;
    }
  }
  else {
    if (0x409 < uVar3) {
      if (uVar3 != 0x40a) {
LAB_004fdbc1:
        uVar4 = FUN_00501f50(param_3);
        return uVar4;
      }
      bVar7 = param_1[1] == 0xf1;
      goto LAB_004fdb8b;
    }
    if (uVar3 == 0x409) {
      if ((param_1[1] != 0xf2) && (param_1[1] != 0xf3)) {
        uVar4 = FUN_00501f30(param_3);
        return uVar4;
      }
    }
    else {
      if (uVar3 == 0x1b8) goto LAB_004fdb87;
      if (uVar3 != 0x209) goto LAB_004fdbc1;
      if (param_1[1] != 0xf4) {
        uVar4 = FUN_00501f30(param_3);
        return uVar4;
      }
    }
  }
  uVar8 = FUN_00517250(iVar6);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  pcVar5 = (char *)uVar8;
  *param_2 = (int)pcVar5;
  if (pcVar5 != (char *)0x0) {
    if (uVar3 == 0x409) {
      cVar2 = *pcVar5;
      if (param_1[1] == 0xf2) {
        if (cVar2 == -10) {
          uVar4 = FUN_00501ef0(param_3);
          return uVar4;
        }
      }
      else {
        while (cVar2 != -10) {
          uVar8 = FUN_004b7370(CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)*param_2));
          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if ((int)uVar8 == 0) {
            pcVar5 = (char *)(*param_2 + 1);
          }
          else {
            pcVar5 = (char *)(*param_2 + 2);
          }
          *param_2 = (int)pcVar5;
          cVar2 = *pcVar5;
        }
        iVar6 = *param_2;
        *param_2 = iVar6 + 1;
        if (*(char *)(iVar6 + 1) == '\0') {
          uVar4 = FUN_00501ef0(param_3);
          return uVar4;
        }
      }
    }
    return 1;
  }
LAB_004fdcac:
  uVar4 = FUN_00501ef0(param_3);
  return uVar4;
}

