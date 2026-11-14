// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00553b50
// entry: 00553b50  size: 72


void FUN_00553b50(LPVOID param_1)

{
  int iVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_00558590(9);
    iVar1 = FUN_00558644(param_1);
    if (iVar1 != 0) {
      FUN_0055866f(iVar1,param_1);
      FUN_005585f1(9);
      return;
    }
    FUN_005585f1(9);
    HeapFree(DAT_005d96bc,0,param_1);
  }
  return;
}

