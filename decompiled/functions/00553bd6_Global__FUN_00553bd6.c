// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00553bd6
// entry: 00553bd6  size: 78


LPVOID FUN_00553bd6(uint param_1)

{
  LPVOID pvVar1;
  
  if (param_1 <= DAT_005cc49c) {
    FUN_00558590(9);
    pvVar1 = (LPVOID)FUN_0055899a(param_1);
    FUN_005585f1(9);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = HeapAlloc(DAT_005d96bc,0,param_1 + 0xf & 0xfffffff0);
  return pvVar1;
}

