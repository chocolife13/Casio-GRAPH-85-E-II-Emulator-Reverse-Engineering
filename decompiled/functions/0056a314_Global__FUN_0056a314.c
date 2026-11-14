// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a314
// entry: 0056a314  size: 53


UINT __thiscall FUN_0056a314(int param_1,UINT param_2)

{
  UINT UVar1;
  
  UVar1 = 0xffffffff;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    SetTextAlign(*(HDC *)(param_1 + 4),param_2);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    UVar1 = SetTextAlign(*(HDC *)(param_1 + 8),param_2);
  }
  return UVar1;
}

