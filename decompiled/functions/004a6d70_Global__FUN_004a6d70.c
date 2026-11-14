// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a6d70
// entry: 004a6d70  size: 184


int FUN_004a6d70(undefined4 param_1)

{
  int iVar1;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_10 = 0x5c;
  local_e = 0x5c;
  local_c = 0x66;
  local_a = 0x6c;
  local_8 = 0x73;
  local_6 = 0x30;
  local_4 = 0;
  local_1c = 0x66;
  local_1a = 0x6c;
  local_18 = 0x73;
  local_16 = 0x30;
  local_14 = 0;
  FUN_0052f840();
  thunk_FUN_0040add0();
  FUN_005237c0(5);
  FUN_004a6cd0(0x1fb,0x1fc,0x1fd);
  iVar1 = FUN_004a6e30(&local_10,param_1);
  FUN_00525bc0();
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = FUN_0042a230(&local_1c);
  return iVar1;
}

