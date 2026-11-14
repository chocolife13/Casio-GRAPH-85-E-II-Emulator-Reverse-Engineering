// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e320
// entry: 0056e320  size: 51


void __thiscall FUN_0056e320(int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int *local_c;
  int *piStack_8;
  
  local_c = param_1;
  piStack_8 = param_1;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xb8))(&local_c,param_4 & 1,param_4 & 2);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return;
}

