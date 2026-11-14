// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fa240
// entry: 004fa240  size: 83


bool FUN_004fa240(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*param_1 != 0xbb) {
    iVar2 = FUN_004f9ac0(param_1);
    if (iVar2 == 1) {
      return true;
    }
    bVar1 = *param_1;
    if (bVar1 != 0) {
      if (bVar1 < 0xc) {
        return true;
      }
      if ((((bVar1 != 0xcb) && (bVar1 != 0xcc)) && (10 < (bVar1 & 0xf))) &&
         ((0x8a < bVar1 && ((bVar1 & 0xf) < 0xd)))) {
        return bVar1 < 0xbd;
      }
    }
  }
  return false;
}

