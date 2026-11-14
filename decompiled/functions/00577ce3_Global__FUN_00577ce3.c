// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577ce3
// entry: 00577ce3  size: 47


void FUN_00577ce3(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = MulDiv(param_4,param_3,param_5);
  if (param_2 < iVar1) {
    param_3 = param_2;
    param_5 = param_4;
  }
  *param_1 = param_3;
  param_1[1] = param_5;
  return;
}

