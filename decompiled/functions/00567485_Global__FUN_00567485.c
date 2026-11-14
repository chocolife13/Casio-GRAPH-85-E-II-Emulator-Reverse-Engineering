// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567485
// entry: 00567485  size: 80


int * __thiscall FUN_00567485(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 != iVar2) {
    if (((*(int *)(iVar1 + -0xc) < 0) && ((undefined *)(iVar1 + -0xc) != PTR_DAT_005cba48)) ||
       (*(int *)(iVar2 + -0xc) < 0)) {
      FUN_00567458(*(undefined4 *)(iVar2 + -8),iVar2);
    }
    else {
      FUN_005672cf();
      iVar1 = *param_2;
      *param_1 = iVar1;
      InterlockedIncrement((LONG *)(iVar1 + -0xc));
    }
  }
  return param_1;
}

