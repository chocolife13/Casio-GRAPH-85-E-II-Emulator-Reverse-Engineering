// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00463c40
// entry: 00463c40  size: 364


void FUN_00463c40(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_d14;
  undefined4 local_d10;
  undefined4 local_d0c;
  undefined4 local_d08;
  undefined4 local_d04;
  undefined4 local_d00;
  undefined1 local_cfc [12];
  undefined4 local_cf0;
  undefined4 local_cec;
  undefined4 local_ce8;
  undefined1 local_cd8 [24];
  uint local_cc0;
  undefined1 local_cbc;
  undefined1 local_8f8 [2268];
  undefined1 *local_1c;
  
  FUN_004e5780(local_cfc);
  local_d14 = *(undefined4 *)(param_2 + 100);
  local_d10 = *(undefined4 *)(param_2 + 0x68);
  local_d08 = *(undefined4 *)(param_2 + 100);
  local_d0c = *(undefined4 *)(param_2 + 0x6c);
  local_d00 = *(undefined4 *)(param_2 + 0x6c);
  local_d04 = *(undefined4 *)(param_2 + 0x68);
  local_cf0 = *(undefined4 *)(param_2 + 0x7c);
  local_cec = *(undefined4 *)(param_2 + 0x80);
  local_ce8 = *(undefined4 *)(param_2 + 0x84);
  FUN_00465dc0(&local_cf0);
  FUN_00463550(local_cd8,PTR_FUN_00581384,&local_d14,6,&local_cf0,0x1140);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == -1) {
    local_cc0 = local_cc0 | 0x10;
  }
  else if (iVar1 == 0) {
    local_cc0 = local_cc0 | 0x30;
    iVar1 = FUN_004e71d0(&local_d14,local_cfc);
    if (iVar1 == 0) {
      iVar1 = FUN_004e7290(&local_d14,local_cfc);
      if (iVar1 == 0) {
        FUN_004e7730(&local_d08,&local_d08);
      }
      else {
        FUN_004e7730(&local_d14,&local_d14);
      }
    }
  }
  else if (iVar1 != 1) {
    local_cbc = 0;
  }
  local_1c = local_cd8;
  FUN_00503490(local_8f8);
  FUN_00463330(local_8f8);
  iVar1 = FUN_00463470(local_8f8,param_3);
  if (iVar1 == 0) {
    FUN_004633e0(local_8f8,param_3,param_2 + 0x70);
  }
  return;
}

