// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402830
// entry: 00402830  size: 67


void FUN_00402830(undefined2 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00402180(param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_00402360(param_1,param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_004023e0(param_1,param_2,param_3);
      if (iVar1 == 0) {
        *param_1 = (short)param_2;
      }
    }
  }
  return;
}

