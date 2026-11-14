// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414270
// entry: 00414270  size: 23


undefined4 FUN_00414270(uint param_1)

{
  param_1 = param_1 & 0x80000007;
  if ((int)param_1 < 0) {
    param_1 = (param_1 - 1 | 0xfffffff8) + 1;
  }
  return CONCAT31((int3)(param_1 >> 8),(&DAT_0057d654)[param_1]);
}

