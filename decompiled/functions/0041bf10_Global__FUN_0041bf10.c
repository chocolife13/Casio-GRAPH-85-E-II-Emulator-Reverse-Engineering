// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041bf10
// entry: 0041bf10  size: 45


int FUN_0041bf10(int param_1)

{
  if (((-1 < param_1) && (param_1 < 0xd)) && ((&DAT_005d8ba4)[param_1 * 8] != -1)) {
    return -(uint)(0xffe < *(ushort *)(&DAT_005d8740 + param_1 * 0x28));
  }
  return -1;
}

