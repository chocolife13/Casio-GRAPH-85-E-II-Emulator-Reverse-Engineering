// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e4e00
// entry: 004e4e00  size: 621


undefined4 FUN_004e4e00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e5780(local_4c);
  FUN_004e4220(param_1,&local_28);
  local_70 = local_24;
  local_64 = local_18;
  local_6c = local_20;
  local_68 = local_1c;
  local_7c = local_c;
  local_60 = local_14;
  local_5c = local_10;
  local_78 = local_8;
  local_74 = local_4;
  iVar1 = FUN_004e9680(&local_70);
  iVar2 = FUN_004e9680(&local_64);
  iVar3 = FUN_004e9680(&local_7c);
  iVar4 = FUN_004e7210(&local_7c,local_4c);
  if ((((iVar1 == 1) && (iVar2 == 1)) && (iVar3 == 1)) && (iVar4 == 1)) {
    iVar1 = FUN_004e71d0(&local_70,local_4c);
    if (iVar1 == 0) {
      uVar5 = FUN_004e7660(&local_7c,local_34,local_58);
      uVar5 = FUN_004e7660(&local_64,local_40,uVar5);
      FUN_004e6cc0(uVar5);
      uVar5 = FUN_004e7660(&local_70,local_40,local_58);
      FUN_004e6cc0(local_58,uVar5);
      FUN_004e75d0(&local_70,&local_70);
    }
    else {
      uVar5 = FUN_004e7660(&local_7c,local_34,local_58);
      uVar5 = FUN_004e7660(&local_64,local_40,uVar5);
      FUN_004e6cc0(uVar5);
    }
    iVar2 = FUN_004e7250(local_58,local_4c);
    iVar1 = 1;
    if (iVar2 != 0) {
      iVar1 = -1;
    }
    FUN_004e75d0(&local_64,&local_64);
    FUN_004e75d0(&local_7c,&local_7c);
    local_28 = iVar1 * local_28;
    local_24 = local_70;
    local_20 = local_6c;
    local_18 = local_64;
    local_14 = local_60;
    local_1c = local_68;
    local_c = local_7c;
    local_8 = local_78;
    local_10 = local_5c;
    local_4 = local_74;
    FUN_004e4430(&local_28,&local_28);
    FUN_004e45e0(&local_28,param_2);
    return param_2;
  }
  uVar5 = FUN_004e5630(3,param_2);
  return uVar5;
}

