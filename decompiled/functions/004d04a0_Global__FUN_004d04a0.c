// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d04a0
// entry: 004d04a0  size: 558


bool FUN_004d04a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e7620(param_1 + 0x24,&local_24);
  FUN_004e5780(&local_18);
  FUN_004e5780(&local_c);
  local_c._0_2_ = CONCAT11(0x71,(undefined1)local_c);
  iVar3 = FUN_004e71d0(&local_24,&local_18);
  if (iVar3 == 1) {
    FUN_004e5780(&local_24);
    local_24 = CONCAT22(local_24._2_2_,0x3109);
  }
  else {
    iVar3 = FUN_004e7250(&local_24,&local_c);
    if (iVar3 == 1) {
      local_24 = local_c;
      local_20 = local_8;
      local_1c = local_4;
    }
    else {
      FUN_004e5780(&local_18);
      local_18 = 9;
      local_17 = 0x31;
      FUN_004e6d00(&local_24,&local_18,&local_24);
    }
  }
  puVar2 = param_1 + 0x21;
  *puVar2 = local_24;
  param_1[0x22] = local_20;
  param_1[0x23] = local_1c;
  FUN_004e6a00(puVar2,param_1 + 0x24,&local_24);
  *param_1 = local_24;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  iVar3 = FUN_004d06d0(0,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar3 == 0) {
    return false;
  }
  iVar3 = FUN_004d06d0(1,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar3 == 0) {
    return false;
  }
  puVar1 = param_1 + 9;
  FUN_004e6b80(param_1 + 0xf,param_1 + 0x12,puVar1);
  FUN_004e6b80(param_1 + 0x24,puVar2,&local_24);
  *param_1 = local_24;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  iVar3 = FUN_004d06d0(0,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar3 == 0) {
    return false;
  }
  iVar3 = FUN_004d06d0(1,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar3 == 0) {
    return false;
  }
  FUN_004e6b80(param_1 + 0xf,param_1 + 0x12,&local_24);
  FUN_004e6b80(puVar1,&local_24,puVar1);
  FUN_004e6a00(puVar2,puVar2,&local_18);
  FUN_004e6dd0(puVar1,&local_18,param_1 + 0x27);
  iVar3 = FUN_004e4020(param_1 + 0x27);
  return iVar3 == 0;
}

