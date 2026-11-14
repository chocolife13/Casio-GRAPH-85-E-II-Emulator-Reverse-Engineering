// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e8d90
// entry: 004e8d90  size: 319


bool FUN_004e8d90(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_41;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_00531170(&local_40);
  local_41 = 200;
  FUN_004fabd0(local_18,&local_41);
  local_41 = 0xc9;
  FUN_004fabd0(local_30,&local_41);
  switch(local_40) {
  case 9:
    uVar1 = FUN_004e6b80(param_1,local_30,param_1,local_18,param_1);
    FUN_004e6dd0(uVar1);
    break;
  default:
    FUN_004e5630(4,param_1);
    return false;
  case 0xe:
    uVar1 = FUN_004e6b80(param_1,local_18,param_1,local_30,param_1,param_1);
    uVar1 = FUN_004e6dd0(uVar1);
    FUN_004e73d0(uVar1);
    break;
  case 0xf:
    uVar1 = FUN_004e6dd0(param_1,local_18,param_1,param_1,local_30,param_1);
    uVar1 = FUN_004e7410(uVar1);
    FUN_004e6dd0(uVar1);
    break;
  case 0x10:
    FUN_004e57a0(local_3c);
    uVar1 = FUN_004e6dd0(local_3c,local_30,local_3c,param_1);
    uVar1 = FUN_004e6dd0(param_1,local_18,param_1,uVar1);
    FUN_004e6fb0(uVar1);
  }
  FUN_004e5640(param_1,param_1);
  iVar2 = FUN_004e4020(param_1);
  return iVar2 == 0;
}

