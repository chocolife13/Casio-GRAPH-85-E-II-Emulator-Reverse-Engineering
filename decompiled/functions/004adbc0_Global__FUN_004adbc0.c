// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004adbc0
// entry: 004adbc0  size: 89


int FUN_004adbc0(byte param_1)

{
  if (param_1 == 1) {
    return 0xa000;
  }
  if (param_1 == 2) {
    return 0x9000;
  }
  if (param_1 < 0x11) {
    return 1;
  }
  if (param_1 < 0x66) {
    return 2;
  }
  if (param_1 < 0x67) {
    return 0x81;
  }
  if (param_1 == 0x93) {
    return 0x8100;
  }
  if (param_1 == 0x92) {
    return 0x8200;
  }
  return (-(uint)(param_1 < 0x8f) & 0x400) + 0x8400;
}

