// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056da8c
// entry: 0056da8c  size: 66


void FUN_0056da8c(undefined4 param_1,int *param_2)

{
  tagRECT local_14;
  
  SetRectEmpty(&local_14);
  FUN_0056f161(&local_14,1);
  *param_2 = *param_2 + local_14.left;
  param_2[1] = param_2[1] + local_14.top + -2;
  param_2[2] = param_2[2] + local_14.right;
  param_2[3] = param_2[3] + local_14.bottom;
  return;
}

