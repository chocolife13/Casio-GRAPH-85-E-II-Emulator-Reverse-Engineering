// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569f65
// entry: 00569f65  size: 46


int __thiscall FUN_00569f65(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    iVar1 = SetMapMode(*(HDC *)(param_1 + 4),param_2);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    iVar1 = SetMapMode(*(HDC *)(param_1 + 8),param_2);
  }
  return iVar1;
}

