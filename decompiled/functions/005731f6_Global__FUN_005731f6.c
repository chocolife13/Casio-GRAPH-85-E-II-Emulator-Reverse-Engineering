// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005731f6
// entry: 005731f6  size: 47


void __thiscall FUN_005731f6(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00552b70();
  if (iVar1 == param_1) {
    (**(code **)(*param_2 + 4))(*(int *)(param_1 + 0x50) != 0);
  }
  else {
    param_2[7] = 1;
  }
  return;
}

