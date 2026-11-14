// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005245e0
// entry: 005245e0  size: 121


void FUN_005245e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_100 [256];
  
  local_118 = *param_4;
  local_114 = param_4[1];
  local_110 = param_4[2];
  FUN_00523ec0(param_1,param_2,param_3,&local_118,local_100,0xff,param_5,3);
  *param_4 = local_118;
  param_4[1] = local_114;
  param_4[2] = local_110;
  return;
}

