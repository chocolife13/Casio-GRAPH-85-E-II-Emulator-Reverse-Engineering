// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043c020
// entry: 0043c020  size: 32


undefined4 FUN_0043c020(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x15c + iVar1) != ' ') {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2a);
  return 0;
}

