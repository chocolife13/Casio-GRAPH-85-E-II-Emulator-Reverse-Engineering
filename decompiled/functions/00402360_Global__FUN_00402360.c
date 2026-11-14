// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402360
// entry: 00402360  size: 61


undefined4 FUN_00402360(undefined2 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = param_1;
  if (((undefined2 *)0x5d8c1f < param_1) && (param_1 < &DAT_005d8c92)) {
    param_1 = (undefined2 *)param_2;
    FUN_00401e20(&param_1);
    *puVar1 = param_1._0_2_;
    return 1;
  }
  return 0;
}

