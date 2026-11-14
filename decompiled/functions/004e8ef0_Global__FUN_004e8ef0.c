// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e8ef0
// entry: 004e8ef0  size: 275


bool FUN_004e8ef0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_35;
  undefined4 local_34;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_00531170(&local_34);
  local_35 = 200;
  FUN_004fabd0(local_30,&local_35);
  local_35 = 0xc9;
  FUN_004fabd0(local_18,&local_35);
  switch(local_34) {
  case 9:
    uVar1 = FUN_004e6d00(param_1,local_30,param_1,local_18,param_1);
    FUN_004e6a00(uVar1);
    goto LAB_004e8fd0;
  default:
    FUN_004e5630(4,param_1);
    return false;
  case 0xe:
    uVar1 = FUN_004e7410(param_1,param_1,local_18,param_1,local_30,param_1);
    uVar1 = FUN_004e6d00(uVar1);
    FUN_004e6a00(uVar1);
    goto LAB_004e8fd0;
  case 0xf:
    uVar1 = FUN_004e6d00(param_1,local_18,param_1,param_1,local_30,param_1);
    uVar1 = FUN_004e73d0(uVar1);
    break;
  case 0x10:
    uVar1 = FUN_004e6fb0(param_1,local_18,param_1,local_30,param_1);
  }
  FUN_004e6d00(uVar1);
LAB_004e8fd0:
  FUN_004e5640(param_1,param_1);
  iVar2 = FUN_004e4020(param_1);
  return iVar2 == 0;
}

