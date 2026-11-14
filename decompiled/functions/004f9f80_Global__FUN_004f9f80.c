// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9f80
// entry: 004f9f80  size: 199


bool FUN_004f9f80(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = param_1[1];
  iVar3 = FUN_004b7370(*param_1);
  bVar2 = *param_1;
  if (iVar3 == 0) {
    if ((bVar2 != 0) && (bVar2 != 0xff)) {
      if ((0xfa < bVar2) && (bVar2 != 0xff)) {
        return true;
      }
      if (bVar2 == 0xde) {
        return true;
      }
      if (bVar2 == 0x28) {
        return true;
      }
      if (((0x80 < bVar2) && (bVar2 < 0xb8)) && ((bVar2 & 0xf) != 0)) {
        return (bVar2 & 0xf) < 8;
      }
    }
  }
  else if (bVar2 == 0x7f) {
    if ((bVar1 & 0xf0) == 0x40) {
      if (bVar1 == 0x41) {
        return true;
      }
      if (bVar1 == 0x46) {
        return true;
      }
      if (bVar1 == 0x48) {
        return true;
      }
      return 0x4b < bVar1;
    }
    if (0x20 < bVar1) {
      if (bVar1 < 0x26) {
        return true;
      }
      return bVar1 == 0xb3;
    }
  }
  return false;
}

