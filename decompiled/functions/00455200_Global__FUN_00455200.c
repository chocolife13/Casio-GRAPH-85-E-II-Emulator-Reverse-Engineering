// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00455200
// entry: 00455200  size: 574


uint FUN_00455200(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5840(local_3c);
  FUN_004e5780(&local_90);
  FUN_004e57a0(local_c);
  local_54 = *(undefined4 *)(param_2 + 0x28);
  local_50 = *(undefined4 *)(param_2 + 0x2c);
  local_78 = *(undefined4 *)(param_2 + 0x10);
  local_4c = *(undefined4 *)(param_2 + 0x30);
  local_74 = *(undefined4 *)(param_2 + 0x14);
  local_70 = *(undefined4 *)(param_2 + 0x18);
  local_84 = *(undefined4 *)(param_2 + 0x1c);
  local_80 = *(undefined4 *)(param_2 + 0x20);
  local_7c = *(undefined4 *)(param_2 + 0x24);
  uVar1 = FUN_00451710(&local_54);
  if (uVar1 == 0) {
    iVar2 = FUN_004e7250(&local_78,&local_90);
    if (iVar2 != 0) {
      local_78 = local_90;
      local_74 = local_8c;
      local_70 = local_88;
    }
    iVar2 = FUN_004e7250(&local_84,&local_90);
    if (iVar2 != 0) {
      local_84 = local_90;
      local_80 = local_8c;
      local_7c = local_88;
    }
    iVar2 = FUN_004e71d0(&local_78,&local_84);
    if (iVar2 != 0) {
      *(undefined4 *)(param_2 + 0x40) = local_90;
      *(undefined4 *)(param_2 + 0x44) = local_8c;
      *(undefined4 *)(param_2 + 0x48) = local_88;
      return 0;
    }
    FUN_004e6d00(&local_54,local_3c,local_30);
    iVar2 = FUN_004e71d0(&local_84,&local_90);
    if (iVar2 == 0) {
      FUN_004e6d00(&local_84,local_3c,local_24);
      FUN_0045fd60(local_30,local_24,&local_6c);
    }
    else {
      local_6c = local_90;
      local_68 = local_8c;
      local_64 = local_88;
    }
    iVar2 = FUN_004e71d0(&local_78,&local_90);
    if (iVar2 == 0) {
      FUN_004e6d00(&local_78,local_3c,local_18);
      FUN_0045fd60(local_30,local_18,&local_60);
    }
    else {
      local_60 = local_90;
      local_5c = local_8c;
      local_58 = local_88;
    }
    FUN_004e6c30(&local_6c,&local_60,&local_48);
    puVar3 = (undefined4 *)(param_2 + 0x40);
    *puVar3 = local_48;
    *(undefined4 *)(param_2 + 0x44) = local_44;
    *(undefined4 *)(param_2 + 0x48) = local_40;
    FUN_004e7910(puVar3,puVar3);
    iVar2 = FUN_004e7290(puVar3,local_c);
    uVar1 = -(uint)(iVar2 != 0) & 3;
  }
  return uVar1;
}

