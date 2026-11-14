// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fa050
// entry: 004fa050  size: 139


bool FUN_004fa050(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_004b7370(*param_1);
  if (iVar2 == 0) {
    if (*param_1 == 0xbb) {
      return true;
    }
    iVar2 = FUN_004f9a90(param_1);
    if (iVar2 == 1) {
      return true;
    }
    bVar1 = *param_1;
    if ((((bVar1 & 8) != 0) && ((bVar1 & 0x80) != 0)) && (bVar1 < 0xfb)) {
      if (0xf7 < bVar1) {
        return true;
      }
      if ((bVar1 & 0xf0) < 0xb1) {
        return (bVar1 & 0xf) < 0xb;
      }
    }
  }
  else if (*param_1 == 0x7f) {
    bVar1 = param_1[1];
    if (bVar1 == 0xb0) {
      return true;
    }
    if (bVar1 == 0xb1) {
      return true;
    }
    return bVar1 == 0x54;
  }
  return false;
}

