// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00405f80
// entry: 00405f80  size: 94


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405f80(int param_1)

{
  _DAT_005d8cfc = 0x7fc;
  DAT_005d8c98 = param_1;
  DAT_005d8c08 = 0;
  DAT_005d8c0c = 0;
  do {
    DAT_005d8cb4._0_1_ = *(undefined1 *)(DAT_005d8c98 + 0x60594740);
    DAT_005d8cb4._1_1_ = *(undefined1 *)(DAT_005d8c98 + 0x60594741);
    FUN_00405bf0();
    FUN_00405e70();
    if (DAT_005d8c98 == 4) {
      return;
    }
  } while (DAT_005d8c08 == 0);
  return;
}

