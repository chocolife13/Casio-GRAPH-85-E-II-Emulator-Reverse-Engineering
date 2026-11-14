// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045f810
// entry: 0045f810  size: 908


undefined4 FUN_0045f810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_12c);
  FUN_004e57a0(&local_144);
  FUN_004e57c0(local_9c);
  FUN_004e5070(4,local_60);
  FUN_004e5070(8,local_a8);
  FUN_004e57e0(local_d8);
  FUN_004e7be0(local_d8,local_d8,0xfffffff0);
  local_108 = local_12c;
  local_104 = local_128;
  local_100 = local_124;
  FUN_004e6c30(param_2,&local_144,local_30);
  FUN_004e6c30(local_30,param_1,local_48);
  FUN_004e6ab0(param_2,&local_144,local_b4);
  FUN_004e6c30(local_b4,param_1,local_90);
  FUN_004e6d00(local_48,local_90,local_e4);
  FUN_004e6ab0(param_2,&local_144,local_78);
  FUN_004e6c30(local_78,param_1,local_18);
  FUN_004e6d00(local_60,local_18,local_cc);
  FUN_004e6c30(&local_144,param_1,local_f0);
  local_120 = local_12c;
  local_11c = local_128;
  local_118 = local_124;
  local_138 = local_144;
  local_134 = local_140;
  local_130 = local_13c;
  local_114 = local_144;
  local_110 = local_140;
  local_10c = local_13c;
  iVar2 = 1;
  do {
    local_fc = local_138;
    local_f8 = local_134;
    local_f4 = local_130;
    FUN_004e6ab0(&local_108,local_f0,&local_108);
    FUN_004e6ab0(local_e4,local_cc,local_e4);
    FUN_004e6ab0(local_cc,local_a8,local_cc);
    FUN_004e6ab0(local_f0,local_9c,local_f0);
    FUN_004e6ab0(&local_144,&local_120,local_84);
    FUN_004e6d00(&local_108,local_84,local_c0);
    FUN_004e6c30(local_e4,local_c0,local_6c);
    FUN_004e6dd0(local_c0,local_6c,&local_120);
    FUN_004e6d00(&local_120,&local_138,&local_138);
    FUN_004e6ab0(&local_114,&local_138,&local_114);
    FUN_004e6c30(&local_144,&local_120,local_54);
    FUN_004e6d00(local_d8,local_54,local_3c);
    iVar1 = FUN_004e7250(&local_12c,&local_fc);
    if (iVar1 != 0) {
      iVar1 = FUN_004e7250(&local_12c,&local_120);
      if (iVar1 != 0) {
        iVar1 = FUN_004e7250(&local_fc,local_3c);
        if (iVar1 != 0) break;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x65);
  FUN_004e6ab0(param_2,&local_144,local_24);
  FUN_004e6c30(local_24,param_1,local_c);
  FUN_004e6dd0(&local_114,local_c,param_3);
  return param_3;
}

