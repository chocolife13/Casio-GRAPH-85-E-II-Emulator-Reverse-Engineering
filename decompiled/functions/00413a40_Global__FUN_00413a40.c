// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00413a40
// entry: 00413a40  size: 39


undefined4 FUN_00413a40(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 8:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x18:
  case 0x40:
    DAT_005d6e54 = (short)param_1;
    return 1;
  default:
    return 0;
  }
}

