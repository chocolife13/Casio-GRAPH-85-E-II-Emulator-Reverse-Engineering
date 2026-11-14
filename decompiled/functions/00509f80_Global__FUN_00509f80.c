// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00509f80
// entry: 00509f80  size: 148


int FUN_00509f80(int param_1,int param_2)

{
  switch(*(undefined1 *)(*(int *)(param_2 + 0x8dc) + 0x1d)) {
  case 1:
  case 9:
  case 10:
  case 0xb:
    break;
  default:
    return param_1;
  case 3:
    if ((*(byte *)(param_2 + 0x8e1) & 2) != 0) {
      return (param_1 + -1) / 5;
    }
    return param_1 + -1 >> 1;
  case 4:
    if ((*(byte *)(param_2 + 0x8e1) & 2) != 0) {
      return (param_1 + -1) / 3;
    }
    return param_1 + -1;
  }
  if ((*(byte *)(param_2 + 0x8e1) & 2) != 0) {
    return param_1 + -1 >> 1;
  }
  return param_1 + -1;
}

