// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00463950
// entry: 00463950  size: 315


void FUN_00463950(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_cfc;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined4 local_cf0;
  undefined4 local_cec;
  undefined4 local_ce8;
  undefined1 local_ce4 [12];
  undefined1 local_cd8 [24];
  uint local_cc0;
  undefined1 local_cbc;
  undefined1 local_8f8 [2268];
  undefined1 *local_1c;
  
  FUN_004e5780(local_ce4);
  local_cfc = *(undefined4 *)(param_2 + 0x38);
  local_cf8 = *(undefined4 *)(param_2 + 0x3c);
  local_cf0 = *(undefined4 *)(param_2 + 0x38);
  local_cf4 = *(undefined4 *)(param_2 + 0x40);
  local_ce8 = *(undefined4 *)(param_2 + 0x40);
  local_cec = *(undefined4 *)(param_2 + 0x3c);
  FUN_00463550(local_cd8,PTR_FUN_00581380,&local_cfc,4,0,0x1140);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == -1) {
    local_cc0 = local_cc0 | 0x10;
  }
  else if (iVar1 == 0) {
    local_cc0 = local_cc0 | 0x30;
    iVar1 = FUN_004e71d0(&local_cfc,local_ce4);
    if (iVar1 == 0) {
      iVar1 = FUN_004e7290(&local_cfc,local_ce4);
      if (iVar1 == 0) {
        FUN_004e7730(&local_cf0,&local_cf0);
      }
      else {
        FUN_004e7730(&local_cfc,&local_cfc);
      }
    }
  }
  else if (iVar1 != 1) {
    local_cbc = 0;
  }
  local_1c = local_cd8;
  FUN_00463330(local_8f8);
  iVar1 = FUN_00463470(local_8f8,param_3);
  if (iVar1 == 0) {
    FUN_004633e0(local_8f8,param_3,param_2 + 0x44);
  }
  return;
}

