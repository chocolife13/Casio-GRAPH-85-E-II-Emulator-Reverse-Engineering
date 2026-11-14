// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055b93e
// entry: 0055b93e  size: 111


int FUN_0055b93e(int param_1)

{
  bool bVar1;
  
  if (DAT_005d562c == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_005d9594);
    bVar1 = DAT_005d9590 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_005d9594);
      FUN_00558590(0x13);
    }
    param_1 = FUN_0055b9ad(param_1);
    if (bVar1) {
      FUN_005585f1(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_005d9594);
    }
  }
  return param_1;
}

