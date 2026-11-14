// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fe470
// entry: 004fe470  size: 39


undefined4 FUN_004fe470(char *param_1)

{
  byte bVar1;
  
  if (*param_1 == '\x7f') {
    bVar1 = param_1[1];
    if (bVar1 == 0x51) {
      return 1;
    }
    if ((0x69 < bVar1) && (bVar1 < 0x70)) {
      return 1;
    }
  }
  return 0;
}

