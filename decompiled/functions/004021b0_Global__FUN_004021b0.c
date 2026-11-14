// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004021b0
// entry: 004021b0  size: 34


undefined4 FUN_004021b0(uint param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0xf) {
    return 0;
  }
  *(undefined4 *)(&DAT_005d8d60 + (param_1 & 0xfffffffc)) = param_2;
  return 1;
}

