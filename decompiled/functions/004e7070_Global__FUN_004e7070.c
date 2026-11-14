// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e7070
// entry: 004e7070  size: 351


undefined4 FUN_004e7070(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_64 [12];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  int local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e9030(param_2,local_40,local_64);
  iVar1 = FUN_004e96c0(local_40);
  if (iVar1 == 0) {
    uVar2 = FUN_004e5630(0x11,param_3);
    return uVar2;
  }
  FUN_004e57c0(local_34);
  FUN_004e48e0(local_40,&local_28);
  uVar2 = FUN_004e6d00(local_24,&local_c,local_64,local_18,local_4c);
  FUN_004e6a00(uVar2);
  if (local_28 == -1) {
    FUN_004e7730(local_4c,local_4c);
  }
  local_58 = local_c;
  local_54 = local_8;
  local_50 = local_4;
  uVar2 = FUN_004e6dd0(&local_58,local_34,local_64);
  iVar1 = FUN_004e9680(uVar2);
  if (iVar1 == -1) {
    uVar2 = FUN_004e5630(3,param_3);
    return uVar2;
  }
  if (iVar1 != 0) {
    uVar2 = FUN_004e5630(0x11,param_3);
    return uVar2;
  }
  uVar2 = FUN_004e7620(param_1,local_64,param_2,param_3);
  FUN_004e6fb0(uVar2);
  uVar2 = FUN_004e6dd0(local_4c,local_34,local_64);
  iVar1 = FUN_004e9680(uVar2);
  if (iVar1 != 0) {
    return param_3;
  }
  uVar2 = FUN_004e7730(param_3,param_3);
  return uVar2;
}

