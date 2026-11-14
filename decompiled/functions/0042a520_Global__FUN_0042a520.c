// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a520
// entry: 0042a520  size: 69


int FUN_0042a520(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_2;
  do {
    if (*(int *)((param_1 - (int)param_2) + (int)piVar2) != *piVar2) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 3);
  if (iVar1 == 3) {
    return 0;
  }
  return (-(uint)((uint)param_2[iVar1] < *(uint *)(param_1 + iVar1 * 4)) & 2) - 1;
}

