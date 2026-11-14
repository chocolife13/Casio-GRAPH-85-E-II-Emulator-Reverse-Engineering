// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004023e0
// entry: 004023e0  size: 38


undefined4 FUN_004023e0(undefined4 *param_1,uint param_2)

{
  if (param_1 == &DAT_005d8cbc) {
    DAT_005d8cbc = param_2 & 0xffff;
    FUN_00401ff0();
    return 1;
  }
  return 0;
}

