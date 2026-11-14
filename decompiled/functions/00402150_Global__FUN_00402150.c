// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402150
// entry: 00402150  size: 34


undefined4 FUN_00402150(uint param_1,undefined1 param_2,int param_3)

{
  if (param_3 != 0xf) {
    return 0;
  }
  (&DAT_005d8d6c)[param_1 & 0xfffffffc] = param_2;
  return 1;
}

