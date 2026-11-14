// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045ef60
// entry: 0045ef60  size: 1736


undefined4 FUN_0045ef60(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_1f8 [12];
  undefined1 local_1ec [12];
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 local_1de;
  undefined1 local_1dd;
  undefined1 local_1dc;
  undefined1 local_1db;
  undefined1 local_1da;
  undefined1 local_1d9;
  undefined1 local_1d8;
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c [12];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined1 local_120 [12];
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
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
  
  FUN_004e5780(local_120);
  FUN_004e57a0(local_1b0);
  FUN_004e57c0(local_174);
  FUN_004e5070(7,local_180);
  FUN_004e7be0(local_180,local_180,0xffffffff);
  FUN_004e5780(&local_1e0);
  local_1e0 = 0x10;
  local_1df = 1;
  local_1de = 0x12;
  local_1dd = 0x83;
  local_1dc = 0x79;
  local_1db = 0x16;
  local_1da = 0x70;
  local_1d9 = 0x95;
  local_1d8 = 0x51;
  uVar1 = FUN_004e7620(param_1,local_1ec,local_180);
  iVar2 = FUN_004e7250(uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_004e7250(local_120,param_1);
    if (iVar2 != 0) {
      uVar1 = FUN_004e6c30(local_1b0,param_1,local_1ec,local_174,local_1c8);
      FUN_004e6dd0(uVar1);
      uVar1 = FUN_004e7410(local_1c8,local_1ec,local_1bc);
      FUN_004e7730(uVar1);
      FUN_004e7390(local_1bc,local_1f8);
      FUN_004e6d00(&DAT_0058117c,local_1f8,local_90);
      FUN_004e6ab0(local_90,&DAT_00581170,local_108);
      FUN_004e6d00(local_108,local_1f8,local_168);
      FUN_004e6ab0(local_168,&DAT_00581164,local_f0);
      FUN_004e6d00(local_f0,local_1f8,local_78);
      FUN_004e6ab0(local_78,&DAT_00581158,local_15c);
      FUN_004e6d00(&DAT_00581194,local_1f8,local_d8);
      FUN_004e6ab0(local_d8,&DAT_00581188,local_18);
      FUN_004e6d00(local_18,local_1f8,local_c0);
      FUN_004e6ab0(local_c0,local_1b0,local_60);
      FUN_004e6dd0(local_15c,local_60,local_1d4);
      goto LAB_0045f4eb;
    }
    FUN_004e6ab0(local_1b0,param_1,local_144);
    FUN_004e6dd0(local_144,local_174,&local_198);
    if ((param_3 == -1) || (param_3 == 1)) {
      local_198 = *param_2;
      local_194 = param_2[1];
      local_190 = param_2[2];
    }
    FUN_004e7410(&local_198,local_12c);
    FUN_004e7730(local_12c,local_114);
    FUN_004e7390(local_114,local_1f8);
    FUN_004e6d00(&DAT_0058117c,local_1f8,local_fc);
    FUN_004e6ab0(local_fc,&DAT_00581170,local_e4);
    FUN_004e6d00(local_e4,local_1f8,local_cc);
    FUN_004e6ab0(local_cc,&DAT_00581164,local_b4);
    FUN_004e6d00(local_b4,local_1f8,local_9c);
    FUN_004e6ab0(local_9c,&DAT_00581158,local_84);
    FUN_004e7730(local_84,local_c);
    FUN_004e6d00(&DAT_00581194,local_1f8,local_6c);
    FUN_004e6ab0(local_6c,&DAT_00581188,local_54);
    FUN_004e6d00(local_54,local_1f8,local_3c);
    FUN_004e6ab0(local_3c,local_1b0,local_24);
    puVar4 = local_24;
    puVar3 = local_c;
  }
  else {
    FUN_004e6d00(param_1,param_1,local_1f8);
    uVar1 = FUN_004e6d00(&DAT_0058111c,local_1f8,local_1ec,&DAT_00581110,local_1c8);
    FUN_004e6ab0(uVar1);
    uVar1 = FUN_004e6d00(local_1c8,local_1f8,local_1ec,&DAT_00581104,local_1bc);
    FUN_004e6ab0(uVar1);
    uVar1 = FUN_004e6d00(local_1bc,local_1f8,local_1ec,&DAT_005810f8,local_1a4);
    FUN_004e6ab0(uVar1);
    FUN_004e6d00(param_1,local_1a4,local_30);
    uVar1 = FUN_004e6d00(&DAT_0058114c,local_1f8,local_1ec,&DAT_00581140,local_48);
    FUN_004e6ab0(uVar1);
    uVar1 = FUN_004e6d00(local_48,local_1f8,local_1ec,&DAT_00581134,local_150);
    FUN_004e6ab0(uVar1);
    uVar1 = FUN_004e6d00(local_150,local_1f8,local_1ec,&DAT_00581128,local_a8);
    FUN_004e6ab0(uVar1);
    uVar1 = FUN_004e6d00(local_a8,local_1f8,local_1ec,local_1b0,local_138);
    FUN_004e6ab0(uVar1);
    puVar4 = local_138;
    puVar3 = local_30;
  }
  FUN_004e6dd0(puVar3,puVar4,local_1d4);
LAB_0045f4eb:
  FUN_0045e860(local_1d4,0,local_18c);
  FUN_004e6c30(local_18c,param_1,local_1c8);
  uVar1 = FUN_004e7730(local_1d4,local_1ec,local_1d4,local_1bc);
  FUN_004e6d00(uVar1);
  uVar1 = FUN_004e73d0(local_1bc,local_1ec,local_1a4);
  FUN_004e6d00(&local_1e0,uVar1);
  uVar1 = FUN_004e6dd0(local_1c8,local_1a4,local_1ec,local_1d4);
  FUN_004e6c30(local_1d4,uVar1);
  FUN_0045e860(local_1d4,0,local_18c);
  FUN_004e6c30(local_18c,param_1,local_1c8);
  uVar1 = FUN_004e7730(local_1d4,local_1ec,local_1d4,local_1bc);
  FUN_004e6d00(uVar1);
  uVar1 = FUN_004e73d0(local_1bc,local_1ec,local_1a4);
  FUN_004e6d00(&local_1e0,uVar1);
  uVar1 = FUN_004e6dd0(local_1c8,local_1a4,local_1ec,param_4);
  FUN_004e6c30(local_1d4,uVar1);
  return param_4;
}

