// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048fd60
// entry: 0048fd60  size: 77


void FUN_0048fd60(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  param_1 = param_1 + -0x76d;
  *param_4 = 0;
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_4 = *param_4 + 0x168;
    } while (param_1 != 0);
  }
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      iVar1 = *param_4;
      param_2 = param_2 + -1;
      *param_4 = iVar1 + 0x1e;
    } while (param_2 != 0);
    *param_4 = iVar1 + 0x1e + param_3;
    return;
  }
  *param_4 = *param_4 + param_3;
  return;
}

