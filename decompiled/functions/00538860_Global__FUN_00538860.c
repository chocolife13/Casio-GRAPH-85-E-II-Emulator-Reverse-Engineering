// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538860
// entry: 00538860  size: 280


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538860(int param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_005d03e2 = 10;
  }
  if ((99 < param_1) && (param_1 < 0x8d)) {
    if (param_2 == 0) {
      *(undefined **)(&DAT_005d58f0 + param_1 * 4) = &DAT_005d03e0;
      return;
    }
    *(int *)(&DAT_005d58f0 + param_1 * 4) = param_2;
    return;
  }
  if ((0x8c < param_1) && (param_1 < 0xc0)) {
    if (param_2 == 0) {
      *(undefined **)(&DAT_005d5d4c + param_1 * 4) = &DAT_005d03e0;
      return;
    }
    *(int *)(&DAT_005d5d4c + param_1 * 4) = param_2;
    return;
  }
  if ((0xbf < param_1) && (param_1 < 0xd5)) {
    if (param_2 == 0) {
      *(undefined **)(&DAT_005d5820 + param_1 * 4) = &DAT_005d03e0;
      return;
    }
    *(int *)(&DAT_005d5820 + param_1 * 4) = param_2;
    return;
  }
  if ((0xd4 < param_1) && (param_1 < 0xea)) {
    if (param_2 == 0) {
      *(undefined **)(&DAT_005d542c + param_1 * 4) = &DAT_005d03e0;
      return;
    }
    *(int *)(&DAT_005d542c + param_1 * 4) = param_2;
    return;
  }
  if ((0xe9 < param_1) && (param_1 < 0xed)) {
    if (param_2 == 0) {
      *(undefined **)(&DAT_005d53c8 + param_1 * 4) = &DAT_005d03e0;
      return;
    }
    *(int *)(&DAT_005d53c8 + param_1 * 4) = param_2;
    return;
  }
  if ((0xec < param_1) && (param_1 < 0xf0)) {
    if (param_2 == 0) {
      *(undefined **)(&DAT_005d54b4 + param_1 * 4) = &DAT_005d03e0;
      return;
    }
    *(int *)(&DAT_005d54b4 + param_1 * 4) = param_2;
    return;
  }
  if ((-1 < param_1) && (param_1 < 100)) {
    if (param_2 == 0) {
      (&DAT_005d6060)[param_1] = &DAT_005d03e0;
      return;
    }
    (&DAT_005d6060)[param_1] = param_2;
  }
  return;
}

