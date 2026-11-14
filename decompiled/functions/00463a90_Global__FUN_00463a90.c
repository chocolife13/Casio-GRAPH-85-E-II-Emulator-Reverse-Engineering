// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00463a90
// entry: 00463a90  size: 421


void FUN_00463a90(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_d20;
  undefined4 local_d1c;
  undefined4 local_d18;
  undefined4 local_d14;
  undefined4 local_d10;
  undefined4 local_d0c;
  undefined4 local_d08;
  undefined4 local_d04;
  undefined4 local_d00;
  undefined1 local_cf0 [12];
  undefined1 local_ce4 [12];
  undefined1 local_cd8 [24];
  uint local_cc0;
  undefined1 local_cbc;
  undefined1 local_8f8 [2268];
  undefined1 *local_1c;
  
  FUN_004e5780(local_cf0);
  local_d20 = *(undefined4 *)(param_2 + 0x40);
  local_d1c = *(undefined4 *)(param_2 + 0x44);
  local_d14 = *(undefined4 *)(param_2 + 0x40);
  local_d18 = *(undefined4 *)(param_2 + 0x48);
  local_d0c = *(undefined4 *)(param_2 + 0x48);
  local_d10 = *(undefined4 *)(param_2 + 0x44);
  if (param_1 == 0) {
    local_d08 = *(undefined4 *)(param_2 + 0x2c);
    local_d04 = *(undefined4 *)(param_2 + 0x30);
    local_d00 = *(undefined4 *)(param_2 + 0x34);
  }
  else {
    local_d08 = *(undefined4 *)(param_2 + 0x70);
    local_d04 = *(undefined4 *)(param_2 + 0x74);
    local_d00 = *(undefined4 *)(param_2 + 0x78);
  }
  FUN_004e57a0(local_ce4);
  FUN_004e6b80(&local_d08,local_ce4,&local_d08);
  FUN_00465dc0(&local_d08);
  FUN_00463550(local_cd8,PTR_FUN_00581384,&local_d20,5,&local_d08,0x1140);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == -1) {
    local_cc0 = local_cc0 | 0x10;
  }
  else if (iVar1 == 0) {
    local_cc0 = local_cc0 | 0x30;
    iVar1 = FUN_004e71d0(&local_d20,local_cf0);
    if (iVar1 == 0) {
      iVar1 = FUN_004e7290(&local_d20,local_cf0);
      if (iVar1 == 0) {
        FUN_004e7730(&local_d14,&local_d14);
      }
      else {
        FUN_004e7730(&local_d20,&local_d20);
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
    FUN_004633e0(local_8f8,param_3,param_2 + 0x4c);
  }
  return;
}

