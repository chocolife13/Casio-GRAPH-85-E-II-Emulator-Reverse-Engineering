// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047c170
// entry: 0047c170  size: 147


undefined4 FUN_0047c170(uint param_1)

{
  if ((0x2f < param_1) && (param_1 < 0x3a)) {
    return 1;
  }
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    return 1;
  }
  if (param_1 < 0x9a) {
    if (param_1 == 0x99) {
      return 1;
    }
    switch(param_1) {
    case 0xf:
    case 0x28:
    case 0x29:
    case 0x2e:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x89:
    case 0x8b:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x95:
    case 0x96:
switchD_0047c1aa_caseD_f:
      return 1;
    }
  }
  else if (param_1 < 0xba) {
    if (0xb7 < param_1) {
      return 1;
    }
    switch(param_1) {
    case 0x9b:
    case 0xa5:
    case 0xa8:
    case 0xa9:
    case 0xb5:
      goto switchD_0047c1aa_caseD_f;
    }
  }
  else if (param_1 < 0xd1) {
    if (param_1 == 0xd0) {
      return 1;
    }
    if (0xcc < param_1) {
      if (0xce < param_1) {
        return 0;
      }
      return 1;
    }
  }
  else if (param_1 == 0x7f50) {
    return 1;
  }
  return 0;
}

