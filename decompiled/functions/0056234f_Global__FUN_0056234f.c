// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056234f
// entry: 0056234f  size: 69


void __thiscall FUN_0056234f(int param_1,int param_2,int param_3)

{
  void *_Dst;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00566960(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_3 != 0) {
    _Dst = (void *)FUN_00566937(param_2 << 2);
    *(void **)(param_1 + 4) = _Dst;
    _memset(_Dst,0,param_2 << 2);
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

