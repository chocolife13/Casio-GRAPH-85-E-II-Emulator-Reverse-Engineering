// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a5920
// entry: 004a5920  size: 157


void FUN_004a5920(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  
  if (5 < param_5) {
    if (*param_2 == 0) {
      *param_6 = 1;
      *param_3 = *param_3 + -1;
    }
    if (*param_2 != 0) {
      *param_2 = *param_2 + -1;
    }
    if (*param_3 < 0) {
      *param_6 = 1;
      *param_3 = *param_3 + param_5;
      *param_2 = 0;
    }
    FUN_004a56f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  iVar1 = param_5;
  if (0 < *param_2) {
    iVar1 = *param_2;
  }
  *param_2 = iVar1 + -1;
  FUN_004a56f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

