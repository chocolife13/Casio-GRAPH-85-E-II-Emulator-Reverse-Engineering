// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482100
// entry: 00482100  size: 370


undefined4
FUN_00482100(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  FUN_004b6ef0(local_10,"Start:");
  FUN_004b6ef0(local_8,"Width:");
  local_1c = *param_4;
  local_18[0] = param_4[1];
  local_18[1] = param_4[2];
  local_28 = *param_5;
  local_24 = param_5[1];
  local_20 = param_5[2];
  if (param_3 == 1) {
    local_34 = *param_4;
    local_30 = param_4[1];
    local_2c = param_4[2];
  }
  else {
    local_34 = *param_5;
    local_30 = param_5[1];
    local_2c = param_5[2];
  }
  while( true ) {
    iVar1 = FUN_005245e0(param_1,param_2,param_3 + 3,&local_34,local_18 + param_3 * 2);
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    if (param_3 == 1) {
      local_1c = local_34;
      local_18[0] = local_30;
      local_18[1] = local_2c;
    }
    else {
      local_28 = local_34;
      local_24 = local_30;
      local_20 = local_2c;
    }
    iVar1 = FUN_00530f80(&local_1c,&local_28);
    if (iVar1 == 0) break;
    FUN_0052b240(iVar1);
    if (iVar1 == 0x1c) {
      param_1 = 0;
      param_2 = 0x7545;
    }
  }
  if (param_3 != 1) {
    *param_5 = local_34;
    param_5[1] = local_30;
    param_5[2] = local_2c;
    return 0;
  }
  *param_4 = local_34;
  param_4[1] = local_30;
  param_4[2] = local_2c;
  return 0;
}

