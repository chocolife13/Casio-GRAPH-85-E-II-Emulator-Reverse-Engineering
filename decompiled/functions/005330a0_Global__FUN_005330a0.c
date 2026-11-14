// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005330a0
// entry: 005330a0  size: 135


undefined4 FUN_005330a0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 != -9) && (cVar1 != -7)) {
    if (cVar1 == '\x7f') {
      cVar1 = param_1[1];
      if (cVar1 == '&') {
        return 8;
      }
      if (cVar1 == '\'') {
        return 9;
      }
      if (cVar1 == ')') {
        return 10;
      }
      if (cVar1 == '\\') {
        return 0xb;
      }
      if (cVar1 == ']') {
        return 0xc;
      }
      if (cVar1 == '_') {
        return 0xd;
      }
      if (cVar1 == -0x7b) {
        return 0xe;
      }
      return 100;
    }
    if (cVar1 == -0x7a) {
      return 0;
    }
    if (cVar1 == -0x73) {
      return 1;
    }
    if (cVar1 == -0x69) {
      return 2;
    }
    if (cVar1 == -0x5b) {
      return 3;
    }
    if (cVar1 == -0x58) {
      return 4;
    }
    if (cVar1 == -0x4b) {
      return 5;
    }
    if (cVar1 == -0x48) {
      return 6;
    }
    if (cVar1 == -0x45) {
      return 7;
    }
  }
  return 100;
}

