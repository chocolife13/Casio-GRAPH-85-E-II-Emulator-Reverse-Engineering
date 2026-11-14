// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056710d
// entry: 0056710d  size: 51


int * __thiscall FUN_0056710d(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + -0xc) < 0) {
    *param_1 = (int)PTR_DAT_005cba44;
    FUN_005674d5(*param_2);
  }
  else {
    *param_1 = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + -0xc));
  }
  return param_1;
}

