// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00559145
// entry: 00559145  size: 27


undefined4 FUN_00559145(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_005d544c != (code *)0x0) {
    iVar1 = (*DAT_005d544c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

