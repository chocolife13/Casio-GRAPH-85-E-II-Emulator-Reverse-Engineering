// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9f10
// entry: 004f9f10  size: 36


bool FUN_004f9f10(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 == 0x28) {
    return true;
  }
  if (bVar1 == 0) {
    return false;
  }
  if (bVar1 == 0xff) {
    return false;
  }
  return 0xfa < bVar1;
}

