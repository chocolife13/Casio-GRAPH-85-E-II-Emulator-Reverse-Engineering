// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523750
// entry: 00523750  size: 62


char FUN_00523750(int param_1)

{
  if (param_1 == 1) {
    return '\x03';
  }
  if (param_1 == 3) {
    return '\b';
  }
  if (param_1 == 4) {
    return '\a';
  }
  if (param_1 == 5) {
    return '\x01';
  }
  return (-(param_1 != 6) & 5U) + 2;
}

