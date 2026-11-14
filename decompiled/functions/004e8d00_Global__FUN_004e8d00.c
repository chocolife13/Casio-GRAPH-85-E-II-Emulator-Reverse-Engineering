// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e8d00
// entry: 004e8d00  size: 140


bool FUN_004e8d00(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_35;
  int local_34;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_00531170(&local_34);
  if (local_34 != 0x14) {
    FUN_004e5630(4,param_1);
    return false;
  }
  local_35 = 0xc2;
  FUN_004fabd0(local_18,&local_35);
  local_35 = 0xc4;
  FUN_004fabd0(local_30,&local_35);
  uVar1 = FUN_004e6b80(param_1,local_18,param_1,local_30,param_1);
  FUN_004e6dd0(uVar1);
  iVar2 = FUN_004e4020(param_1);
  return iVar2 == 0;
}

