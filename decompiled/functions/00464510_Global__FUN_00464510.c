// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00464510
// entry: 00464510  size: 193


void FUN_00464510(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_d14;
  undefined4 local_d10;
  undefined4 local_d0c;
  undefined4 local_d08;
  undefined4 local_d04;
  undefined4 local_d00;
  undefined1 local_ce4 [12];
  undefined1 local_cd8 [992];
  undefined1 local_8f8 [2268];
  undefined1 *local_1c;
  
  FUN_004e5780(local_ce4);
  local_d14 = *(undefined4 *)(param_2 + 0x28);
  local_d10 = *(undefined4 *)(param_2 + 0x2c);
  local_d08 = *(undefined4 *)(param_2 + 0x34);
  local_d0c = *(undefined4 *)(param_2 + 0x30);
  local_d04 = *(undefined4 *)(param_2 + 0x38);
  local_d00 = *(undefined4 *)(param_2 + 0x3c);
  FUN_004660f0(&local_d14);
  FUN_00463550(local_cd8,PTR_FUN_0058138c,0,0xd,&local_d14,0x1100);
  local_1c = local_cd8;
  FUN_00463330(local_8f8);
  iVar1 = FUN_00463470(local_8f8,param_3);
  if (iVar1 == 0) {
    FUN_004633e0(local_8f8,param_3,local_ce4);
  }
  return;
}

