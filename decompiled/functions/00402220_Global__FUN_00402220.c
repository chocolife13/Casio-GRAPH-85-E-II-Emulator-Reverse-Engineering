// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402220
// entry: 00402220  size: 111


undefined4 __thiscall FUN_00402220(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  if (((undefined2 *)0x5a473f < param_2) && (param_2 < &DAT_005a8c5c)) {
    param_2 = (undefined2 *)CONCAT22((short)((uint)param_2 >> 0x10),*param_2);
    FUN_00401e20(&param_2);
    *param_3 = param_2._0_2_;
    return 1;
  }
  if (((undefined2 *)0x5d8c1f < param_2) && (param_2 < &DAT_005d8c92)) {
    param_2 = (undefined2 *)CONCAT22((short)((uint)param_1 >> 0x10),*param_2);
    FUN_00401e20(&param_2);
    *param_3 = param_2._0_2_;
    return 1;
  }
  return 0;
}

