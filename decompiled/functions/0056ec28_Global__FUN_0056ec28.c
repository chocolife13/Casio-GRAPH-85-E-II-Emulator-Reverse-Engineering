// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ec28
// entry: 0056ec28  size: 50


void __thiscall FUN_0056ec28(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1[0x1c] != 0) &&
     (iVar1 = (**(code **)(*param_1 + 100))(param_3,param_4,0), iVar1 == -1)) {
    (**(code **)(*(int *)param_1[0x1d] + 8))();
    return;
  }
  FUN_0056339a();
  return;
}

