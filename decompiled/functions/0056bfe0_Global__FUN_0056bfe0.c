// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056bfe0
// entry: 0056bfe0  size: 37


void FUN_0056bfe0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = 1;
    if ((*(short *)(*(int *)(*param_2 + 0x5c) + 0x1e) == -1) && (param_2[5] != 1)) {
      iVar1 = 0;
    }
    param_2[4] = iVar1;
  }
  return;
}

