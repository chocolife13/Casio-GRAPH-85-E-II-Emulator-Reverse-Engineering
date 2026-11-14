// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b6a30
// entry: 004b6a30  size: 22


int FUN_004b6a30(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < param_1) {
    do {
      iVar1 = iVar1 * 10;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return iVar1;
}

