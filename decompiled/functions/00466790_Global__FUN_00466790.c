// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00466790
// entry: 00466790  size: 320


int FUN_00466790(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined1 local_6c [60];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_0040add0();
  FUN_0052f840();
  FUN_004e57a0(local_78);
  FUN_004e6b80(param_1,local_78,local_30);
  FUN_004e6b80(param_2,local_78,local_24);
  FUN_004e57c0(local_78);
  FUN_004e6dd0(param_3,local_78,local_18);
  iVar2 = FUN_004668d0(local_6c);
  if (iVar2 == 0) {
    FUN_004e57a0(local_78);
    FUN_004e6b80(local_78,local_18,local_18);
    local_84 = local_c;
    local_80 = local_8;
    local_7c = local_4;
    iVar2 = FUN_004668d0(local_6c);
    if (iVar2 == 0) {
      iVar2 = FUN_004e7310(&local_84,&local_c);
      puVar1 = (undefined4 *)(param_4 + (uint)(iVar2 != 0) * 0xc);
      *puVar1 = local_84;
      puVar1[1] = local_80;
      puVar1[2] = local_7c;
      puVar1 = (undefined4 *)(param_4 + (uint)(iVar2 == 0) * 0xc);
      *puVar1 = local_c;
      puVar1[1] = local_8;
      puVar1[2] = local_4;
      iVar2 = 0;
    }
  }
  return iVar2;
}

