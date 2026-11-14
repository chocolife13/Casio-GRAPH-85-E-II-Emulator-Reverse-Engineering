// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f99b0
// entry: 004f99b0  size: 34


bool FUN_004f99b0(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((bVar1 & 0xf) != 4) {
    return false;
  }
  if (bVar1 < 0x84) {
    return false;
  }
  return bVar1 < 0xb5;
}

