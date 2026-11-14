// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab770
// entry: 004ab770  size: 104


undefined1 FUN_004ab770(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0x40;
  if (param_1 < 0x17) {
    if (param_1 == 0x16) {
      return 0x16;
    }
    switch(param_1) {
    case 0:
      return 0;
    case 0x10:
      return 0x13;
    case 0x11:
      return 0x51;
    case 0x12:
      return 0x17;
    case 0x13:
      return 0x15;
    case 0x14:
      return 0x33;
    case 0x15:
      return 0x18;
    }
  }
  else {
    switch(param_1) {
    case 0x18:
      return 0x19;
    case 0x30:
      return 0x40;
    case 0x41:
      return 0x12;
    case 0x50:
      return 0x30;
    case 0x51:
      return 0x32;
    case 0x52:
      return 0x52;
    case 0xff:
      uVar1 = 0xff;
    }
  }
  return uVar1;
}

