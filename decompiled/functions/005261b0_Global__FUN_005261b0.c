// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005261b0
// entry: 005261b0  size: 77


undefined4 FUN_005261b0(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return *(undefined4 *)(&DAT_00598340 + param_1 * 4);
  case 1:
    return *(undefined4 *)(&DAT_00598528 + param_1 * 4);
  case 2:
    return *(undefined4 *)(&DAT_0059861c + param_1 * 4);
  default:
    return 0;
  case 4:
  case 8:
  case 0x84:
  case 0x88:
    return *(undefined4 *)(&DAT_00598434 + param_1 * 4);
  }
}

