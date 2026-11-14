// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569c75
// entry: 00569c75  size: 55


bool __thiscall FUN_00569c75(int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    FUN_00569bee(1);
    param_1[1] = param_2;
    puVar1 = (undefined4 *)FUN_00562208(param_2);
    *puVar1 = param_1;
    (**(code **)(*param_1 + 0xc))(param_1[1]);
  }
  return param_2 != 0;
}

