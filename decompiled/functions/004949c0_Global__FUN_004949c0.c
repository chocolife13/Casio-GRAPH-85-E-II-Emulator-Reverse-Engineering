// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004949c0
// entry: 004949c0  size: 183


void FUN_004949c0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  local_24 = param_1[3];
  local_10 = param_1[2];
  local_20 = param_1[4];
  local_1c = param_1[5];
  FUN_004e7be0(&local_24,&local_24,0xfffffffe);
  local_c = param_1[6];
  local_8 = param_1[7];
  local_4 = param_1[8];
  FUN_00494ad0(param_2);
  cVar1 = FUN_00526090(0x28);
  if (cVar1 == '\x01') {
    FUN_00494af0(param_2);
  }
  FUN_004e6dd0(&local_18,param_2,param_2);
  FUN_004e7730(param_2,param_2);
  FUN_004e6d00(param_2,&local_24,param_2);
  FUN_004e6d00(param_2,&local_c,param_2);
  FUN_004e4020(param_2);
  return;
}

