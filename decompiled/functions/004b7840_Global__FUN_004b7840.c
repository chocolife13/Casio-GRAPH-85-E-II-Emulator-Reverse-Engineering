// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7840
// entry: 004b7840  size: 39


undefined1 * FUN_004b7840(undefined1 *param_1)

{
  switch(*param_1) {
  case 0x7f:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xf7:
  case 0xf9:
    return param_1 + 2;
  default:
    return param_1 + 1;
  }
}

