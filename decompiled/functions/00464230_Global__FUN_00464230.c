// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00464230
// entry: 00464230  size: 185


int FUN_00464230(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_ce4 [12];
  undefined1 local_cd8 [992];
  undefined1 local_8f8 [2268];
  undefined1 *local_1c;
  
  FUN_004e5780(local_ce4);
  FUN_00463550(local_cd8,0,0,9,0,0x1100);
  local_1c = local_cd8;
  FUN_00463330(local_8f8);
  if (param_3 == 0x22) {
    thunk_FUN_0040add0();
    iVar1 = FUN_0045dd70(param_1,param_2);
    if (iVar1 != 0) {
      FUN_0052b240(iVar1);
      return -2;
    }
  }
  iVar1 = FUN_00463470(local_8f8,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_004633e0(local_8f8,param_3,local_ce4);
  }
  return iVar1;
}

