// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00573f79
// entry: 00573f79  size: 57


int * __thiscall FUN_00573f79(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00567a5e();
  if (piVar1 == (int *)0x0) {
    FUN_005611ec();
  }
  iVar2 = (**(code **)(*piVar1 + 0xf4))(param_1,param_2);
  if (iVar2 == 0) {
    FUN_0056a79c();
  }
  return piVar1;
}

