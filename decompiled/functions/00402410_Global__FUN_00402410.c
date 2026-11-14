// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402410
// entry: 00402410  size: 58


undefined4 FUN_00402410(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == &DAT_005d8cbc) {
    DAT_005d8cbc = param_2;
    FUN_00401ff0();
    return 1;
  }
  if ((param_1 == &DAT_005d958c) || (param_1 == &DAT_005d9578)) {
    DAT_005d8cbc = 0;
  }
  return 0;
}

