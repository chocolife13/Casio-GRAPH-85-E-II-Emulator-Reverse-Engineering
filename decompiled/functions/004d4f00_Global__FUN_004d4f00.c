// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d4f00
// entry: 004d4f00  size: 556


int FUN_004d4f00(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  
  bVar1 = *param_1;
  if ((bVar1 == 0) && (param_1[1] == 0)) {
    *param_2 = 0;
    return 0;
  }
  if (((bVar1 & 0xf0) == 0x50) || ((bVar1 & 0xf0) == 0x60)) {
    sVar3 = -1;
    *param_1 = bVar1 + 0xb0;
  }
  else {
    sVar3 = 1;
  }
  if (0x10 < *param_1) {
    return (int)sVar3;
  }
  if (0xf < *param_1) {
    uVar2 = (uint)param_1[1];
    if ((param_1[1] & 0xf0) == 0) {
      uVar2 = uVar2 & 0xf;
      *param_2 = uVar2;
      if (0 < sVar3) {
        if ((param_1[2] & 0xf0) < 0x41) {
          return 0;
        }
        *param_2 = uVar2 + 1;
        return 0;
      }
      uVar2 = ~uVar2 + 1;
      *param_2 = uVar2;
      bVar1 = param_1[2] & 0xf0;
      if (bVar1 < 0x51) {
        if (bVar1 != 0x50) {
          return 0;
        }
        if ((param_1[2] & 0xf) != 0) {
          return 0;
        }
        sVar3 = 3;
        while (param_1[sVar3] == 0) {
          sVar3 = sVar3 + 1;
          if (8 < sVar3) {
            return 0;
          }
        }
      }
    }
    else {
      if ((uVar2 & 0xf0) == 0x10) {
        uVar2 = (uint)(param_1[2] >> 4) + (uVar2 & 0xf) * 10;
        *param_2 = uVar2;
        if (sVar3 < 1) {
          *param_2 = ~uVar2 + 1;
          if ((param_1[2] & 0xf) < 0x51) {
            if ((param_1[2] & 0xf) != 0x50) {
              return 0;
            }
            sVar3 = 3;
            while (param_1[sVar3] == 0) {
              sVar3 = sVar3 + 1;
              if (8 < sVar3) {
                return 0;
              }
            }
          }
          *param_2 = ~uVar2;
          return 0;
        }
        if ((param_1[2] & 0xf) < 5) {
          return 0;
        }
        *param_2 = uVar2 + 1;
        return 0;
      }
      if ((uVar2 & 0xf0) != 0x20) {
        return (int)sVar3;
      }
      uVar2 = (param_1[2] & 0xf) + ((uint)(param_1[2] >> 4) + (uVar2 & 0xf) * 10) * 10;
      *param_2 = uVar2;
      if (0 < sVar3) {
        if ((param_1[3] & 0xf0) < 0x41) {
          return 0;
        }
        *param_2 = uVar2 + 1;
        return 0;
      }
      uVar2 = ~uVar2 + 1;
      *param_2 = uVar2;
      bVar1 = param_1[3] & 0xf0;
      if (bVar1 < 0x51) {
        if (bVar1 != 0x50) {
          return 0;
        }
        if ((param_1[3] & 0xf) != 0) {
          return 0;
        }
        sVar3 = 4;
        while (param_1[sVar3] == 0) {
          sVar3 = sVar3 + 1;
          if (8 < sVar3) {
            return 0;
          }
        }
      }
    }
    *param_2 = uVar2 - 1;
    return 0;
  }
  *param_2 = 0;
  if ((*param_1 & 0xf) != 9) {
    return 0;
  }
  bVar1 = param_1[1];
  if ((bVar1 & 0xf0) != 0x90) {
    return 0;
  }
  if (sVar3 < 1) {
    if ((bVar1 & 0xf) < 6) {
      if ((bVar1 & 0xf) != 5) {
        return 0;
      }
      sVar3 = 2;
      while (param_1[sVar3] == 0) {
        sVar3 = sVar3 + 1;
        if (8 < sVar3) {
          return 0;
        }
      }
    }
    *param_2 = 0xffffffff;
    return 0;
  }
  if ((bVar1 & 0xf) < 5) {
    return 0;
  }
  *param_2 = 1;
  return 0;
}

