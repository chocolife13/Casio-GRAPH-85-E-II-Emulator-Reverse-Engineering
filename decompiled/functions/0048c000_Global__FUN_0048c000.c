// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048c000
// entry: 0048c000  size: 239


undefined4 FUN_0048c000(int param_1,undefined4 param_2)

{
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e5780(&local_48);
  local_c = local_48;
  local_18 = local_48;
  local_24 = local_48;
  local_30 = local_48;
  local_3c = local_48;
  local_8 = local_44;
  local_4 = local_40;
  local_14 = local_44;
  local_10 = local_40;
  local_20 = local_44;
  local_1c = local_40;
  local_2c = local_44;
  local_28 = local_40;
  local_38 = local_44;
  local_34 = local_40;
  if (*(int *)(param_1 + 0x90) == 0) {
    FUN_004e6d00(param_1 + 0x30,param_1 + 0xc,param_2);
    FUN_004e6a00(param_1 + 0x3c,param_2,param_2);
    FUN_004e7730(param_2,param_2);
    return param_2;
  }
  FUN_0048c300(&local_48,param_1);
  FUN_0048c370(&local_48,param_1);
  FUN_0048c3b0(&local_48,local_54);
  FUN_0048c410(param_1,local_60);
  FUN_004e6dd0(local_54,local_60,param_2);
  FUN_004e7730(param_2,param_2);
  return param_2;
}

