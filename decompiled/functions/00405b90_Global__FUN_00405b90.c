// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00405b90
// entry: 00405b90  size: 58


void FUN_00405b90(void)

{
  DAT_005d9584 = DAT_005d8cb4._1_1_ & 0xf;
  switch(DAT_005d8cb4._1_1_ & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
    DAT_005d9588 = (uint)(DAT_005d8cb4._1_1_ >> 4);
    return;
  default:
    DAT_005d9588 = 0;
    return;
  }
}

