// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578689
// entry: 00578689  size: 62


void __thiscall FUN_00578689(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  
  local_8 = param_1;
  iVar1 = FUN_005785bf(&param_3,&local_8);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xec) == 2) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xec) + 1;
    }
    FUN_005786c7(iVar1,local_8,param_3,param_4);
  }
  return;
}

