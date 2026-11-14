// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579be5
// entry: 00579be5  size: 53


void __thiscall FUN_00579be5(int param_1,int *param_2,int param_3,int param_4)

{
  tagPOINT local_c;
  
  local_c.x = param_1;
  local_c.y = param_1;
  OffsetViewportOrgEx(*(HDC *)(param_1 + 8),param_3,param_4,&local_c);
  FUN_0057a3d7();
  *param_2 = local_c.x;
  param_2[1] = local_c.y;
  return;
}

