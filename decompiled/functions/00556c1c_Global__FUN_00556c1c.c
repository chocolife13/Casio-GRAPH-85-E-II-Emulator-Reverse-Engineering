// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00556c1c
// entry: 00556c1c  size: 119


LPVOID FUN_00556c1c(LPVOID param_1,uint param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (param_2 < 0xffffffe1) {
    FUN_00558590(9);
    iVar2 = FUN_00558644(param_1);
    if (iVar2 == 0) {
      FUN_005585f1(9);
      if (param_2 == 0) {
        param_2 = 1;
      }
      pvVar1 = HeapReAlloc(DAT_005d96bc,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
    else {
      pvVar1 = (LPVOID)0x0;
      if (param_2 <= DAT_005cc49c) {
        iVar2 = FUN_00558e4f(iVar2,param_1,param_2);
        if (iVar2 != 0) {
          pvVar1 = param_1;
        }
      }
      FUN_005585f1(9);
    }
  }
  else {
    pvVar1 = (LPVOID)0x0;
  }
  return pvVar1;
}

