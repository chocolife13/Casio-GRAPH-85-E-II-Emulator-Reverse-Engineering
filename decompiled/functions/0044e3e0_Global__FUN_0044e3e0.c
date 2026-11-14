// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044e3e0
// entry: 0044e3e0  size: 52


undefined4 FUN_0044e3e0(int param_1,int param_2)

{
  if (2 < param_2) {
    FUN_0052b240(0xd);
    *(undefined4 *)(param_1 + 0x234) = 1;
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x234) = 0;
  return 0;
}

