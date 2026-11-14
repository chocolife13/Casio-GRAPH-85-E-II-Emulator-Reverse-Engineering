// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579c51
// entry: 00579c51  size: 61


void __thiscall
FUN_00579c51(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  tagSIZE local_c;
  
  local_c.cx = param_1;
  local_c.cy = param_1;
  ScaleViewportExtEx(*(HDC *)(param_1 + 8),param_3,param_4,param_5,param_6,&local_c);
  FUN_0057a2d2(1);
  *param_2 = local_c.cx;
  param_2[1] = local_c.cy;
  return;
}

