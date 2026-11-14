// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005354d0
// entry: 005354d0  size: 387


undefined4 FUN_005354d0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != -7) {
    if (cVar1 == '\x7f') {
      cVar1 = param_1[1];
      if (cVar1 == ' ') {
        return 8;
      }
      if (cVar1 == '&') {
        return 9;
      }
      if (cVar1 == '\'') {
        return 10;
      }
      if (cVar1 == '(') {
        return 0xb;
      }
      if (cVar1 == ')') {
        return 0xc;
      }
      if (cVar1 == '*') {
        return 0xd;
      }
      if (cVar1 == '+') {
        return 0xe;
      }
      if (cVar1 == ',') {
        return 0xf;
      }
      if (cVar1 == '-') {
        return 0x10;
      }
      if (cVar1 == '.') {
        return 0x11;
      }
      if (cVar1 == '/') {
        return 0x12;
      }
      if (cVar1 == 'G') {
        return 0x13;
      }
      if (cVar1 == 'I') {
        return 0x14;
      }
      if (cVar1 == 'J') {
        return 0x15;
      }
      if (cVar1 == 'K') {
        return 0x16;
      }
      if (cVar1 == -0x7b) {
        return 0x17;
      }
      if (cVar1 == -0x7a) {
        return 0x18;
      }
      if (cVar1 == -0x17) {
        return 0x19;
      }
      if (cVar1 == -0x16) {
        return 0x1a;
      }
      if (cVar1 == -0x15) {
        return 0x1b;
      }
      if (cVar1 == -0x14) {
        return 0x1c;
      }
      if (cVar1 == -0x13) {
        return 0x1d;
      }
      if (cVar1 == -0x12) {
        return 0x1e;
      }
      if (cVar1 == -0x11) {
        return 0x1f;
      }
      return 100;
    }
    if (cVar1 == -9) {
      cVar1 = param_1[1];
      if (cVar1 == '\x11') {
        return 0x20;
      }
      if (cVar1 == '\x12') {
        return 0x21;
      }
      if (cVar1 == -0x51) {
        return 0x22;
      }
      if (cVar1 == -0x50) {
        return 0x23;
      }
      if (cVar1 == -0x4f) {
        return 0x24;
      }
      return 100;
    }
    if (cVar1 == -0x80) {
      return 0;
    }
    if (cVar1 == -0x73) {
      return 1;
    }
    if (cVar1 == -0x60) {
      return 2;
    }
    if (cVar1 == -0xb) {
      return 3;
    }
    if (cVar1 == -5) {
      return 4;
    }
    if (cVar1 == -4) {
      return 5;
    }
    if (cVar1 == -3) {
      return 6;
    }
    if (cVar1 == -2) {
      return 7;
    }
  }
  return 100;
}

