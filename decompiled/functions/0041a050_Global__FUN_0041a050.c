// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041a050
// entry: 0041a050  size: 106


undefined4 FUN_0041a050(short *param_1)

{
  if (*param_1 == 0x5c) {
    if (((param_1[1] == 0x5c) && (param_1[2] == 0x66)) &&
       ((param_1[3] == 0x6c &&
        (((param_1[4] == 0x73 && (param_1[5] == 0x30)) && (param_1[6] == 0x5c)))))) {
      return 1;
    }
  }
  else if ((((*param_1 == 0x66) && (param_1[1] == 0x6c)) && (param_1[2] == 0x73)) &&
          ((param_1[3] == 0x30 && (param_1[4] == 0)))) {
    return 2;
  }
  return 0;
}

