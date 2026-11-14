// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569e4f
// entry: 00569e4f  size: 47


COLORREF __thiscall FUN_00569e4f(int param_1,COLORREF param_2)

{
  COLORREF CVar1;
  
  CVar1 = 0xffffffff;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    CVar1 = SetBkColor(*(HDC *)(param_1 + 4),param_2);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    CVar1 = SetBkColor(*(HDC *)(param_1 + 8),param_2);
  }
  return CVar1;
}

