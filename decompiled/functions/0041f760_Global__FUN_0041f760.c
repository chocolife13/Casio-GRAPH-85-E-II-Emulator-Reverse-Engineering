// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f760
// entry: 0041f760  size: 154


int FUN_0041f760(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_20 [32];
  
  if (param_1 < 0) {
    return -2;
  }
  iVar1 = FUN_00429d30(param_1,local_20,0x20,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00429cd0(param_1,0);
    if (-1 < iVar1) {
      FUN_0041f800(local_20,0x20);
      iVar1 = FUN_0041f690(local_20);
      if (iVar1 != 0) {
        iVar1 = FUN_0041f710(local_20,param_2);
        if (iVar1 == 0) {
          return -0x2b;
        }
        iVar1 = FUN_0041f6c0(local_20);
        if (iVar1 != 0) {
          return -0x2a;
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

