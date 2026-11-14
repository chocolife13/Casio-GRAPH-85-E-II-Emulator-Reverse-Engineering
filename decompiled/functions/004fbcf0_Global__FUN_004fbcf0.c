// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fbcf0
// entry: 004fbcf0  size: 133


undefined4 FUN_004fbcf0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 4);
  if (bVar1 != 0) {
    if ((bVar1 & 0xf) == 10) {
      return 5;
    }
    if ((bVar1 == 0x11) || (bVar1 == 0x61)) {
      if (3 < uVar2) {
        return 3;
      }
      uVar2 = uVar2 + 10;
    }
    else {
      if ((bVar1 & 0xf0) == 0) {
        return 0;
      }
      if ((bVar1 & 0xf0) == 0x50) {
        return 0;
      }
      if (1 < (bVar1 & 0xf)) {
        return 3;
      }
    }
    if ((param_1[(uVar2 >> 1) + 2] & (-((uVar2 & 1) != 0) & 0x10U) - 1) != 0) {
      return 0;
    }
    uVar2 = (uVar2 >> 1) + 3;
    if (uVar2 < 9) {
      do {
        if (param_1[uVar2] != 0) {
          return 0;
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 9);
    }
  }
  return 3;
}

