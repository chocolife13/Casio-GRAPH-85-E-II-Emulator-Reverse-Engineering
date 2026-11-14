// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9a90
// entry: 004f9a90  size: 37


bool FUN_004f9a90(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 0x10) {
    return false;
  }
  if (bVar1 < 0x13) {
    return true;
  }
  if (bVar1 < 0x3c) {
    return false;
  }
  return bVar1 < 0x3f;
}

