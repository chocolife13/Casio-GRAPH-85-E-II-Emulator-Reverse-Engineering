// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00507950
// entry: 00507950  size: 465


int FUN_00507950(undefined4 param_1,char *param_2,char *param_3,uint *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00506370(param_1,param_2,param_3);
  if (iVar2 == 0) {
    if (*param_3 != '\x10') {
      return 8;
    }
    uVar3 = (uint)(byte)param_3[1];
    if ((param_3[1] & 0xf0U) == 0) {
      iVar2 = 2;
      do {
        if (param_3[iVar2] != '\0') {
          return 8;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 9);
      param_4[1] = uVar3 & 0xf;
    }
    else {
      if ((uVar3 & 0xf0) != 0x10) {
        return 8;
      }
      if ((param_3[2] & 0xfU) != 0) {
        return 8;
      }
      iVar2 = 3;
      do {
        if (param_3[iVar2] != '\0') {
          return 8;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 9);
      uVar3 = (uint)((byte)param_3[2] >> 4) + (uVar3 & 0xf) * 10;
      param_4[1] = uVar3;
      if ((uVar3 == 0) || (0x3f < uVar3)) {
        return 8;
      }
    }
    if (*param_2 != ',') {
      return 2;
    }
    FUN_004fe330(param_2,param_1);
    iVar2 = FUN_00506370(param_1,param_2,param_3);
    if (iVar2 == 0) {
      if (*param_3 != '\x10') {
        return 8;
      }
      bVar1 = param_3[1];
      if ((bVar1 & 0xf0) == 0) {
        iVar2 = 2;
        do {
          if (param_3[iVar2] != '\0') {
            return 8;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 9);
        *param_4 = bVar1 & 0xf;
      }
      else {
        if ((bVar1 & 0xf0) == 0x10) {
          if ((param_3[2] & 0xfU) != 0) {
            return 8;
          }
          iVar2 = 3;
          do {
            if (param_3[iVar2] != '\0') {
              return 8;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 9);
          *param_4 = (uint)((byte)param_3[2] >> 4) + (bVar1 & 0xf) * 10;
          return 0;
        }
        if ((bVar1 & 0xf0) != 0x20) {
          return 8;
        }
        if ((bVar1 & 0xf) != 1) {
          return 8;
        }
        iVar2 = 3;
        do {
          if (param_3[iVar2] != '\0') {
            return 8;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 9);
        uVar3 = ((byte)param_3[2] & 0xf) + (((byte)param_3[2] >> 4) + 10) * 10;
        *param_4 = uVar3;
        if ((uVar3 == 0) || (0x7f < uVar3)) {
          return 8;
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

