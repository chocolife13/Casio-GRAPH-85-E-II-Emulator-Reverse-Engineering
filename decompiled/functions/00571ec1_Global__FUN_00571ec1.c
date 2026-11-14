// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00571ec1
// entry: 00571ec1  size: 68


undefined4 FUN_00571ec1(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_00565e0f(8);
    *(char **)(param_1 + 0x28) = "AfxFrameOrView42s";
  }
  if ((*(uint *)(param_1 + 0x20) & 0x8000) != 0) {
    if (DAT_005d5104 == 0) {
      return 1;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x4000;
  }
  if (DAT_005d5104 != 0) {
    *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) | 2;
  }
  return 1;
}

