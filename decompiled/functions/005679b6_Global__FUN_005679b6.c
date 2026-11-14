// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005679b6
// entry: 005679b6  size: 45


bool __thiscall FUN_005679b6(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    FUN_00567911(1);
    *(int *)(param_1 + 4) = param_2;
    piVar1 = (int *)FUN_00562208(param_2);
    *piVar1 = param_1;
  }
  return param_2 != 0;
}

