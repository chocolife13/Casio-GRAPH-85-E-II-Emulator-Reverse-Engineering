// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056776c
// entry: 0056776c  size: 45


int __thiscall FUN_0056776c(int *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 < *(int *)(*param_1 + -8)) &&
     (iVar1 = FUN_00555bcc(*param_1 + param_3,param_2), iVar1 != 0)) {
    return iVar1 - *param_1;
  }
  return -1;
}

