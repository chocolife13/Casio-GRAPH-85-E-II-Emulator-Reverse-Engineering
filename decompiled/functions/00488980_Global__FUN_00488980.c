// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00488980
// entry: 00488980  size: 47


int FUN_00488980(int param_1,short param_2)

{
  if (param_2 == 0) {
    if (param_1 == 0) {
      DAT_005cf808 = 0;
      return 0;
    }
    if (DAT_005cf808 == 0) {
      DAT_005cf808 = param_1;
      return param_1;
    }
  }
  return DAT_005cf808;
}

