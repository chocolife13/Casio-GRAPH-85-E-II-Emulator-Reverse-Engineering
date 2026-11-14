// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e9e9
// entry: 0056e9e9  size: 54


void __fastcall FUN_0056e9e9(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00574748();
  if (*(int **)(iVar1 + 0x108) == param_1) {
    (**(code **)(*param_1 + 0xdc))(0xffffffff);
  }
  if (param_1[0x1b] != 0) {
    FUN_00572428(param_1);
    param_1[0x1b] = 0;
  }
  FUN_00563b21();
  return;
}

