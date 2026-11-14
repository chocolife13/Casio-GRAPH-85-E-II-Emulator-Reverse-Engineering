// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00553d5c
// entry: 00553d5c  size: 141


void * FUN_00553d5c(int param_1,int param_2)

{
  void *_Dst;
  int iVar1;
  uint _Size;
  uint uVar2;
  LPVOID pvVar3;
  
  _Size = param_1 * param_2;
  uVar2 = _Size;
  if (_Size < 0xffffffe1) {
    if (_Size == 0) {
      uVar2 = 1;
    }
    uVar2 = uVar2 + 0xf & 0xfffffff0;
  }
  do {
    pvVar3 = (LPVOID)0x0;
    if (uVar2 < 0xffffffe1) {
      if (_Size < DAT_005cc49c || _Size - DAT_005cc49c == 0) {
        FUN_00558590(9);
        _Dst = (void *)FUN_0055899a(_Size);
        FUN_005585f1(9);
        if (_Dst != (void *)0x0) {
          _memset(_Dst,0,_Size);
          return _Dst;
        }
      }
      pvVar3 = HeapAlloc(DAT_005d96bc,8,uVar2);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
    }
    if (DAT_005d5448 == 0) {
      return pvVar3;
    }
    iVar1 = FUN_00559145(uVar2);
  } while (iVar1 != 0);
  return (void *)0x0;
}

