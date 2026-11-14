// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9ba0
// entry: 004f9ba0  size: 130


undefined4 FUN_004f9ba0(char *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *param_1;
  if (cVar1 == -0x73) {
    return 1;
  }
  if (cVar1 == -0x80) {
    return 1;
  }
  if (cVar1 == -0x60) {
    return 1;
  }
  if ((cVar1 == -9) && (param_1[1] == -0x51)) {
    return 1;
  }
  if (cVar1 == '\x7f') {
    bVar2 = param_1[1];
    if (bVar2 == 0x49) {
      return 1;
    }
    if (bVar2 == 0x4b) {
      return 1;
    }
    if (bVar2 == 0x85) {
      return 1;
    }
    if (bVar2 == 0x86) {
      return 1;
    }
    if ((0x25 < bVar2) && (bVar2 < 0x2d)) {
      return 1;
    }
    if ((0xe8 < bVar2) && (bVar2 < 0xf0)) {
      return 1;
    }
  }
  return 0;
}

