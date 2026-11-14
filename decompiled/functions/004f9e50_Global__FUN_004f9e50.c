// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9e50
// entry: 004f9e50  size: 30


bool FUN_004f9e50(char *param_1)

{
  if (*param_1 != '\x7f') {
    return false;
  }
  if ((byte)param_1[1] < 0x42) {
    return false;
  }
  return (byte)param_1[1] < 0x46;
}

