// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9980
// entry: 004f9980  size: 34


bool FUN_004f9980(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((bVar1 & 0xf) != 0xf) {
    return false;
  }
  if (bVar1 < 0x8f) {
    return false;
  }
  return bVar1 < 0xe1;
}

