// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d867
// entry: 0056d867  size: 40


int __thiscall FUN_0056d867(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (0 < iVar1) {
    piVar3 = *(int **)(param_1 + 0x5c);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        if (*piVar3 == param_2) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 5;
      } while (iVar2 < iVar1);
    }
  }
  return -1;
}

