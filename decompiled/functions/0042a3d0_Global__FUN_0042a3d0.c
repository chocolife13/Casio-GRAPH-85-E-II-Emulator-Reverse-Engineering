// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a3d0
// entry: 0042a3d0  size: 53


undefined4 FUN_0042a3d0(char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      if (*param_1 != param_1[param_2]) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < param_3);
  }
  return 1;
}

