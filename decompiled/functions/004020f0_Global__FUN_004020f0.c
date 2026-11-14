// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004020f0
// entry: 004020f0  size: 38


undefined4 FUN_004020f0(uint param_1,undefined2 *param_2,int param_3)

{
  if (param_3 != 0xf) {
    return 0;
  }
  *param_2 = *(undefined2 *)(&DAT_005d8d60 + (param_1 & 0xfffffffc));
  return 1;
}

