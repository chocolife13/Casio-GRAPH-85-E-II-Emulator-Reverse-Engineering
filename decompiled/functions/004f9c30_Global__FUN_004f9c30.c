// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9c30
// entry: 004f9c30  size: 264


bool FUN_004f9c30(char *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[1];
  if (*param_1 == '\x7f') {
    if (bVar1 < 0x20) {
      if ((((bVar1 != 3) && (bVar1 != 7)) && (bVar1 != 0x13)) &&
         ((bVar1 != 0x17 && (bVar1 != 0x1b)))) {
        return bVar1 != 0x1c;
      }
    }
    else {
      if (bVar1 < 0x40) {
        if (bVar1 != 0x20) {
          return 0x2b < bVar1;
        }
        return true;
      }
      if (bVar1 < 0x50) {
        if (bVar1 == 0x40) {
          return true;
        }
        if (0x49 < bVar1) {
          return bVar1 < 0x4c;
        }
      }
      else {
        if (bVar1 < 0x60) {
          return bVar1 < 0x54;
        }
        if (bVar1 < 0x70) {
          if ((0x5f < bVar1) && (bVar1 < 0x69)) {
            return true;
          }
          if ((0x69 < bVar1) && (bVar1 < 0x70)) {
            return true;
          }
        }
        else {
          if (0x7f < bVar1) {
            if (bVar1 < 0x90) {
              return bVar1 == 0x8f;
            }
            if (bVar1 < 0xa0) {
              return bVar1 < 0x99;
            }
            if (bVar1 < 0xc0) {
              return bVar1 < 0xaf;
            }
            if (0xcf < bVar1) {
              if (0xdf < bVar1) {
                return bVar1 < 0xf5;
              }
              return bVar1 < 0xde;
            }
            return bVar1 < 0xce;
          }
          if (0x75 < bVar1) {
            return bVar1 < 0x7e;
          }
        }
      }
    }
  }
  return false;
}

