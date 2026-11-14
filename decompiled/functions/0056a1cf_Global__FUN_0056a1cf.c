// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a1cf
// entry: 0056a1cf  size: 64


void __thiscall FUN_0056a1cf(int param_1,int param_2)

{
  HRGN pHVar1;
  
  pHVar1 = (HRGN)0x0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    if (param_2 != 0) {
      pHVar1 = *(HRGN *)(param_2 + 4);
    }
    SelectClipRgn(*(HDC *)(param_1 + 4),pHVar1);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    if (param_2 == 0) {
      pHVar1 = (HRGN)0x0;
    }
    else {
      pHVar1 = *(HRGN *)(param_2 + 4);
    }
    SelectClipRgn(*(HDC *)(param_1 + 8),pHVar1);
  }
  return;
}

