// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004023a0
// entry: 004023a0  size: 59


undefined4 FUN_004023a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (((undefined4 *)0x5d8c1f < param_1) && (param_1 < &DAT_005d8c92)) {
    param_1 = (undefined4 *)param_2;
    FUN_00401e40(&param_1);
    *puVar1 = param_1;
    return 1;
  }
  return 0;
}

