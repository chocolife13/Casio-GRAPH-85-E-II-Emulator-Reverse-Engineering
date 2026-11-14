// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055852b
// entry: 0055852b  size: 60


undefined4 FUN_0055852b(int param_1)

{
  int iVar1;
  
  DAT_005d96bc = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_005d96bc != (HANDLE)0x0) {
    iVar1 = FUN_00558606();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_005d96bc);
  }
  return 0;
}

