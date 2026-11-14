// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aaf10
// entry: 004aaf10  size: 29


undefined4 FUN_004aaf10(void)

{
  if (((DAT_005d6d65 & 0x40) != 0) && ((DAT_005d6d65 & 1) != 0)) {
    DAT_005d6d65 = DAT_005d6d65 & 0xbf;
    return 1;
  }
  return 0;
}

