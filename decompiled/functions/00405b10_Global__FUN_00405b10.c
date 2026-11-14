// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00405b10
// entry: 00405b10  size: 96


void FUN_00405b10(void)

{
  DAT_005d9584 = DAT_005d8cb4._1_1_ & 0xf;
  switch(DAT_005d8cb4._1_1_ & 0xf) {
  case 0:
  case 1:
    DAT_005d9588 = 0;
    return;
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xb:
    DAT_005d9588 = (uint)(DAT_005d8cb4._1_1_ >> 4);
    return;
  case 4:
  case 5:
  case 6:
  case 7:
    DAT_005d9584 = 4;
    DAT_005d9588 = DAT_005d8cb4._1_1_ & 3;
    return;
  default:
    DAT_005d9584 = 0xc;
    DAT_005d9588 = DAT_005d8cb4._1_1_ & 3;
    return;
  }
}

