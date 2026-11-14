// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00419c90
// entry: 00419c90  size: 437


uint FUN_00419c90(uint *param_1,undefined1 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    return *param_1 >> 0x1f;
  case 1:
    return *param_1 >> 0x1e & 1;
  case 2:
    return *param_1 >> 0x1d & 1;
  case 3:
    return *param_1 >> 0x1c & 1;
  case 4:
    return *param_1 >> 0x1b & 1;
  case 5:
    return *param_1 >> 0x1a & 1;
  case 6:
    return *param_1 >> 0x19 & 1;
  case 7:
    return *param_1 >> 0x18 & 1;
  case 8:
    return *param_1 >> 0x17 & 1;
  case 9:
    return *param_1 >> 0x16 & 1;
  case 10:
    return *param_1 >> 0x15 & 1;
  case 0xb:
    return *param_1 >> 0x14 & 1;
  case 0xc:
    return *param_1 >> 0x13 & 1;
  case 0xd:
    return *param_1 >> 0x12 & 1;
  case 0xe:
    return *param_1 >> 0x11 & 1;
  case 0xf:
    return *param_1 >> 0x10 & 1;
  case 0x10:
    return *param_1 >> 0xf & 1;
  case 0x11:
    return *param_1 >> 0xe & 1;
  case 0x12:
    return *param_1 >> 0xd & 1;
  case 0x13:
    return *param_1 >> 0xc & 1;
  case 0x14:
    return *param_1 >> 0xb & 1;
  case 0x15:
    return *param_1 >> 10 & 1;
  case 0x16:
    return *param_1 >> 9 & 1;
  case 0x17:
    return *param_1 >> 8 & 1;
  case 0x18:
    return *param_1 >> 7 & 1;
  case 0x19:
    return *param_1 >> 6 & 1;
  case 0x1a:
    return *param_1 >> 5 & 1;
  case 0x1b:
    return *param_1 >> 4 & 1;
  case 0x1c:
    return *param_1 >> 3 & 1;
  case 0x1d:
    return *param_1 >> 2 & 1;
  case 0x1e:
    return *param_1 >> 1 & 1;
  case 0x1f:
    uVar1 = *param_1 & 1;
  }
  return uVar1;
}

