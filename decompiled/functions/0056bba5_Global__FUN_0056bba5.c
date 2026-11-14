// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056bba5
// entry: 0056bba5  size: 63


undefined4 FUN_0056bba5(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_00565e0f(8);
    *(char **)(param_1 + 0x28) = "AfxFrameOrView42s";
  }
  if ((DAT_005d5104 != 0) && ((*(uint *)(param_1 + 0x20) & 0x800000) != 0)) {
    *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) | 2;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xff7fffff;
  }
  return 1;
}

