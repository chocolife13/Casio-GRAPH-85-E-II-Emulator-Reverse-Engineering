// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00573cc0
// entry: 00573cc0  size: 76


void __thiscall
FUN_00573cc0(int param_1,int param_2,int param_3,int param_4,int param_5,COLORREF param_6)

{
  RECT local_14;
  
  SetBkColor(*(HDC *)(param_1 + 4),param_6);
  local_14.left = param_2;
  local_14.right = param_2 + param_4;
  local_14.top = param_3;
  local_14.bottom = param_3 + param_5;
  ExtTextOutA(*(HDC *)(param_1 + 4),0,0,2,&local_14,(LPCSTR)0x0,0,(INT *)0x0);
  return;
}

