// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00507b30
// entry: 00507b30  size: 260


undefined4 FUN_00507b30(char *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((*param_1 == '\0') && (param_1[1] == '\0')) {
    *param_2 = 0;
    return 0;
  }
  if (*param_1 != '\x10') {
    return 8;
  }
  bVar1 = param_1[1];
  uVar2 = (uint)bVar1;
  if ((bVar1 & 0xf0) == 0) {
    iVar3 = 2;
    do {
      if (param_1[iVar3] != '\0') {
        return 8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
    *param_2 = uVar2 & 0xf;
    return 0;
  }
  if ((uVar2 & 0xf0) == 0x10) {
    if ((param_1[2] & 0xfU) != 0) {
      return 8;
    }
    iVar3 = 3;
    while (param_1[iVar3] == '\0') {
      iVar3 = iVar3 + 1;
      if (8 < iVar3) {
        *param_2 = (uint)((byte)param_1[2] >> 4) + (uVar2 & 0xf) * 10;
        return 0;
      }
    }
  }
  else if ((uVar2 & 0xf0) == 0x20) {
    if (2 < (bVar1 & 0xf)) {
      return 8;
    }
    iVar3 = 3;
    do {
      if (param_1[iVar3] != '\0') {
        return 8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
    uVar2 = ((byte)param_1[2] & 0xf) + ((uint)((byte)param_1[2] >> 4) + (uVar2 & 0xf) * 10) * 10;
    *param_2 = uVar2;
    if (uVar2 < 0x100) {
      return 0;
    }
    return 8;
  }
  return 8;
}

