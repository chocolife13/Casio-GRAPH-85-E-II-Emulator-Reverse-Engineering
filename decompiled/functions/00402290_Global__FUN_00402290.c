// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402290
// entry: 00402290  size: 150


undefined4 FUN_00402290(uint *param_1,uint *param_2)

{
  if (((uint *)0x5a473f < param_1) && (param_1 < &DAT_005a8c5c)) {
    param_1 = (uint *)*param_1;
    FUN_00401e40(&param_1);
    if (0x80301fff < param_1) {
      if (param_1 < 0x80302004) {
        *param_2 = (int)param_1 + 0x802d6ca8;
        return 1;
      }
      if (param_1 < 0x80302072) {
        param_1 = (uint *)((int)param_1 + 0x802d6c20);
      }
    }
    *param_2 = (uint)param_1;
    return 1;
  }
  if (((uint *)0x5d8c1f < param_1) && (param_1 < &DAT_005d8c92)) {
    param_1 = (uint *)*param_1;
    FUN_00401e40(&param_1);
    *param_2 = (uint)param_1;
    return 1;
  }
  return 0;
}

