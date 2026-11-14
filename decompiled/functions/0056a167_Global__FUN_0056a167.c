// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a167
// entry: 0056a167  size: 88


void __thiscall
FUN_0056a167(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  tagSIZE local_c;
  
  local_c.cx = param_1;
  local_c.cy = param_1;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    ScaleWindowExtEx(*(HDC *)(param_1 + 4),param_3,param_4,param_5,param_6,&local_c);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    ScaleWindowExtEx(*(HDC *)(param_1 + 8),param_3,param_4,param_5,param_6,&local_c);
  }
  *param_2 = local_c.cx;
  param_2[1] = local_c.cy;
  return;
}

