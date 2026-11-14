// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c4f0
// entry: 0041c4f0  size: 42


uint FUN_0041c4f0(uint param_1)

{
  if ((param_1 < DAT_0057ddf4) && (DAT_0057de54 + 0x10000U <= param_1)) {
    return 0xfffffffe;
  }
  return param_1 - DAT_0057ddf4 >> 0x10;
}

