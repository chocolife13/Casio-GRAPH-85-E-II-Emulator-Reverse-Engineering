// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00419700
// entry: 00419700  size: 161


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419700(uint param_1)

{
  uint uVar1;
  
  if (0x1f < param_1) {
    DAT_005d8b48 = 0;
    return;
  }
  uVar1 = (_DAT_005d8b6c & 0xf) << 0x10 | _DAT_005d8b6c & 0xff00;
  if (uVar1 * 0x100 < 0x1200001) {
    if (uVar1 == 0x12000) {
      DAT_005d8b48 = (uint)(byte)(&DAT_0057dcf4)[param_1];
      return;
    }
    if (uVar1 == 0x10000) {
      DAT_005d8b48 = (uint)(byte)(&DAT_0057dd74)[param_1];
      return;
    }
    if (uVar1 == 0x11000) {
      DAT_005d8b48 = (uint)(byte)(&DAT_0057dcb4)[param_1];
      return;
    }
  }
  else {
    if (uVar1 == 0x13000) {
      DAT_005d8b48 = (uint)(byte)(&DAT_0057dd34)[param_1];
      return;
    }
    if (uVar1 == 0x20000) {
      DAT_005d8b48 = (uint)(byte)(&DAT_0057ddb4)[param_1];
      return;
    }
  }
  DAT_005d8b48 = param_1;
  return;
}

