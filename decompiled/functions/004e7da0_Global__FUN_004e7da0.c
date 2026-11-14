// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e7da0
// entry: 004e7da0  size: 433


undefined4 FUN_004e7da0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_30 = *param_1;
  local_2c = param_1[1];
  local_28 = param_1[2];
  FUN_004e5780(local_18);
  FUN_004e57c0(local_c);
  iVar3 = 0x20;
  if (param_3 == 1) {
    iVar3 = 0x10;
    FUN_004e5860(local_3c);
  }
  else {
    FUN_004e58f0(local_3c);
  }
  iVar1 = FUN_004e7290(param_1,local_3c);
  if (iVar1 != 0) {
    return 0;
  }
  if (iVar3 == 0x20) {
    FUN_004e5920(local_3c);
  }
  else {
    FUN_004e5890(local_3c);
  }
  iVar1 = FUN_004e7250(param_1,local_3c);
  if (iVar1 == 0) {
    iVar1 = FUN_004e7250(&local_30,local_18);
    if (iVar1 != 0) {
      if (iVar3 == 0x20) {
        FUN_004e5950(local_3c);
      }
      else {
        FUN_004e58c0(local_3c);
      }
      FUN_004e6a00(&local_30,local_3c,&local_30);
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar1 = FUN_004e7290(&local_30,local_18);
      if (iVar1 == 0) {
        *param_2 = 0;
      }
      else {
        uVar2 = FUN_004e6dd0(&local_30,local_c,local_3c,&local_24);
        FUN_004e76a0(uVar2);
        uVar2 = FUN_004e6d00(&local_24,local_c,local_3c,local_3c);
        FUN_004e6b80(&local_30,uVar2);
        uVar2 = FUN_004e50a0(local_3c);
        *param_2 = uVar2;
        local_30 = local_24;
        local_2c = local_20;
        local_28 = local_1c;
      }
      param_2 = param_2 + 1;
    }
    return 1;
  }
  return 0;
}

