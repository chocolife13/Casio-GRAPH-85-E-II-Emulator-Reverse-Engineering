// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402120
// entry: 00402120  size: 36


undefined4 FUN_00402120(uint param_1,undefined4 *param_2,int param_3)

{
  if (param_3 != 0xf) {
    return 0;
  }
  *param_2 = *(undefined4 *)(&DAT_005d8d60 + (param_1 & 0xfffffffc));
  return 1;
}

