// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579b5c
// entry: 00579b5c  size: 49


void __thiscall FUN_00579b5c(int param_1,COLORREF param_2)

{
  COLORREF color;
  
  if (*(int *)(param_1 + 4) != 0) {
    color = GetNearestColor(*(HDC *)(param_1 + 8),param_2);
    SetTextColor(*(HDC *)(param_1 + 4),color);
  }
  SetTextColor(*(HDC *)(param_1 + 8),param_2);
  return;
}

