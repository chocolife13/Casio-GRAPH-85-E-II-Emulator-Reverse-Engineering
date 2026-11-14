// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00405bf0
// entry: 00405bf0  size: 98


void FUN_00405bf0(void)

{
  DAT_005d9580 = (uint)(byte)((byte)DAT_005d8cb4 >> 4);
  switch(DAT_005d9580) {
  case 0:
    FUN_00405b10();
    return;
  default:
    DAT_005d9588 = 0;
    DAT_005d9584 = 0;
    return;
  case 2:
  case 3:
  case 6:
    DAT_005d9584 = 0;
    DAT_005d9588 = (byte)((ushort)DAT_005d8cb4 >> 8) & 0xf;
    return;
  case 4:
    FUN_00405b90();
    return;
  case 8:
  case 0xc:
    DAT_005d9584 = 0;
    DAT_005d9588 = (byte)DAT_005d8cb4 & 0xf;
    return;
  }
}

