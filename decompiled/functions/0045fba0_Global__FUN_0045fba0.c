// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045fba0
// entry: 0045fba0  size: 440


void FUN_0045fba0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
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
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57a0(&local_54);
  FUN_004e57e0(&local_78);
  local_48 = local_78;
  local_44 = local_74;
  local_40 = local_70;
  FUN_004e7be0(&local_78,&local_78,2);
  FUN_004e7be0(&local_48,&local_48,0xfffffff0);
  local_84 = local_54;
  local_60 = local_54;
  local_6c = local_54;
  local_80 = local_50;
  local_5c = local_50;
  local_68 = local_50;
  local_7c = local_4c;
  local_58 = local_4c;
  local_64 = local_4c;
  iVar1 = FUN_004e7250(&local_6c,&local_78);
  while (iVar1 != 0) {
    local_3c = local_84;
    local_38 = local_80;
    local_34 = local_7c;
    FUN_004e6ab0(param_1,&local_6c,local_18);
    FUN_004e6dd0(param_2,local_18,local_30);
    FUN_004e6d00(&local_84,local_30,&local_84);
    FUN_004e6ab0(&local_60,&local_84,&local_60);
    FUN_004e6c30(&local_54,local_30,local_24);
    FUN_004e6d00(&local_48,local_24,local_c);
    iVar1 = FUN_004e7250(&local_3c,local_c);
    if (iVar1 != 0) break;
    FUN_004e6ab0(&local_6c,&local_54,&local_6c);
    iVar1 = FUN_004e7250(&local_6c,&local_78);
  }
  *param_3 = local_60;
  param_3[1] = local_5c;
  param_3[2] = local_58;
  return;
}

