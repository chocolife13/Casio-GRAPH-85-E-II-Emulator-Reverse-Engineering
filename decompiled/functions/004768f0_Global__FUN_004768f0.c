// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004768f0
// entry: 004768f0  size: 66


int FUN_004768f0(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_3 != 0) {
    iVar1 = FUN_00527440(0,param_1);
    if (iVar1 < *param_3) {
      *param_3 = iVar1 + 1;
      if (4 < iVar1) {
        *param_2 = iVar1 + -3;
        return iVar1;
      }
      *param_2 = 1;
    }
  }
  return iVar1;
}

