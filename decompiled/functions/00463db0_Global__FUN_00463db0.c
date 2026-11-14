// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00463db0
// entry: 00463db0  size: 209


void FUN_00463db0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_d08;
  undefined4 local_d04;
  undefined4 local_d00;
  undefined4 local_cfc;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined4 local_cf0;
  undefined4 local_cec;
  undefined4 local_ce8;
  undefined1 local_cd8 [992];
  undefined1 local_8f8 [2268];
  undefined1 *local_1c;
  
  local_d08 = *(undefined4 *)(param_2 + 8);
  local_d04 = *(undefined4 *)(param_2 + 0xc);
  local_cfc = *(undefined4 *)(param_2 + 8);
  local_d00 = *(undefined4 *)(param_2 + 0x10);
  local_cf4 = *(undefined4 *)(param_2 + 0x10);
  local_cf8 = *(undefined4 *)(param_2 + 0xc);
  local_cf0 = *(undefined4 *)(param_2 + 0x20);
  local_cec = *(undefined4 *)(param_2 + 0x24);
  local_ce8 = *(undefined4 *)(param_2 + 0x28);
  FUN_00465f00(&local_cf0);
  FUN_00463550(local_cd8,PTR_FUN_00581388,&local_d08,7,&local_cf0,0x1150);
  local_1c = local_cd8;
  FUN_00463330(local_8f8);
  iVar1 = FUN_00463470(local_8f8,param_3);
  if (iVar1 == 0) {
    FUN_004633e0(local_8f8,param_3,param_2 + 0x14);
  }
  return;
}

