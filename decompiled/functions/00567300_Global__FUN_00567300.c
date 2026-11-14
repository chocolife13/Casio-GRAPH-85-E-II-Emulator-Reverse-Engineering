// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567300
// entry: 00567300  size: 35


void FUN_00567300(LONG *param_1)

{
  LONG LVar1;
  
  if (param_1 != (LONG *)PTR_DAT_005cba48) {
    LVar1 = InterlockedDecrement(param_1);
    if (LVar1 < 1) {
      FUN_00567287();
    }
  }
  return;
}

