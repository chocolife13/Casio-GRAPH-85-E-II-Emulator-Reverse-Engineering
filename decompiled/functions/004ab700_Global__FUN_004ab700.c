// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab700
// entry: 004ab700  size: 54


int FUN_004ab700(byte param_1)

{
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    return param_1 - 0x41;
  }
  if (param_1 == 0xce) {
    return 0x1a;
  }
  if (param_1 == 0xcd) {
    return 0x1b;
  }
  return (param_1 != 0xc0) + 0x1c;
}

