// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042f7c0
// entry: 0042f7c0  size: 74


undefined4 FUN_0042f7c0(ushort param_1,undefined4 *param_2)

{
  if (10 < param_1) {
    return 0x10;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  if (param_1 == 10) {
    *(undefined1 *)param_2 = 1;
    *(undefined2 *)(param_2 + 3) = 0x1001;
    return 0;
  }
  if (param_1 != 0) {
    *(char *)param_2 = (char)param_1;
    *(undefined2 *)(param_2 + 3) = 0x1000;
  }
  return 0;
}

