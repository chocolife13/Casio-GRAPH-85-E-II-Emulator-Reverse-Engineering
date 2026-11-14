// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00566212
// entry: 00566212  size: 49


void __thiscall FUN_00566212(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    FUN_005630cb(*(undefined4 *)(param_1 + 0x1c),param_2,param_3,param_4);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x78))(param_2,param_3,param_4);
  }
  return;
}

