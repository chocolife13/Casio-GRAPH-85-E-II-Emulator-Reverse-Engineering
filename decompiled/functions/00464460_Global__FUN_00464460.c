// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00464460
// entry: 00464460  size: 170


void FUN_00464460(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_cfc;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined1 local_ce4 [12];
  undefined1 local_cd8 [992];
  undefined1 local_8f8 [2268];
  undefined1 *local_1c;
  
  FUN_004e5780(local_ce4);
  local_cfc = *(undefined4 *)(param_2 + 0x28);
  local_cf8 = *(undefined4 *)(param_2 + 0x2c);
  local_cf4 = *(undefined4 *)(param_2 + 0x30);
  FUN_00465f00(&local_cfc);
  FUN_00463550(local_cd8,PTR_FUN_00581388,0,0xc,&local_cfc,0x1100);
  local_1c = local_cd8;
  FUN_00463330(local_8f8);
  iVar1 = FUN_00463470(local_8f8,param_3);
  if (iVar1 == 0) {
    FUN_004633e0(local_8f8,param_3,local_ce4);
  }
  return;
}

