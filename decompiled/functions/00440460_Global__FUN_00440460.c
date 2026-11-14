// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00440460
// entry: 00440460  size: 1115


uint FUN_00440460(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_104;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  undefined1 local_100;
  undefined1 local_ff;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8;
  uint local_d4;
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
  local_104 = 0x52;
  local_101 = 0x52;
  local_103 = 0x45;
  local_102 = 0x43;
  local_100 = 0x57;
  local_ff = 0;
  FUN_004426c0(1,local_d0);
  FUN_004426c0(0x11d,local_c4);
  iVar3 = FUN_004e7310(local_c4,local_d0);
  uVar1 = (uint)(iVar3 != 0);
  if ((param_4 == 3) || (param_4 == 4)) {
    FUN_004e57c0(local_d0);
  }
  else if ((param_4 == 1) || (param_4 == 2)) {
    FUN_004e57a0(local_d0);
  }
  else {
    FUN_004e5780(local_d0);
  }
  FUN_004e6b80(local_c4,local_d0,local_c);
  FUN_004427c0(0x119,local_c);
  cVar2 = FUN_004ad2a0(0xffffffff,&local_104,local_10);
  if (cVar2 == '\0') {
    FUN_004ad3f0(0,0xa8,&local_b8);
  }
  FUN_004e5780(&local_e4);
  FUN_004e5780(&local_fc);
  FUN_004e5780(&local_f0);
  local_d8 = param_2 & 1;
  if (local_d8 == 1) {
    iVar3 = FUN_004409f0(1,&local_e4);
    if (iVar3 != 0) goto LAB_00440682;
    if (param_3 == 1) {
      FUN_00481c70(local_40,&local_e4,local_40);
    }
    if (uVar1 == 1) {
      FUN_00442340(param_1,&local_e4,local_40,param_3,param_2,param_5);
    }
  }
  local_d4 = param_2 & 2;
  if (local_d4 == 2) {
    iVar3 = FUN_004409f0(2,&local_fc);
    if (iVar3 != 0) goto LAB_00440682;
    if (param_3 == 1) {
      FUN_00481c70(local_34,&local_fc,local_34);
    }
    if (uVar1 == 1) {
      FUN_00442430(param_1,&local_fc,local_34,param_3,param_2,param_5);
    }
  }
  uVar5 = param_2 & 4;
  if (uVar5 == 4) {
    iVar3 = FUN_004409f0(3,&local_f0);
    if (iVar3 != 0) {
LAB_00440682:
      return -iVar3;
    }
    if (param_3 == 1) {
      FUN_00481c70(local_28,&local_f0,local_28);
    }
    if (uVar1 != 1) goto LAB_00440704;
    FUN_00442550(param_1,&local_f0,local_28,param_3,param_2,param_5);
  }
  else if (uVar1 != 1) goto LAB_00440704;
  FUN_004426a0(param_1,local_1c,param_5);
LAB_00440704:
  uVar4 = FUN_004e57a0(local_c4,local_1c);
  FUN_004e6a00(local_1c,uVar4);
  switch(param_4) {
  case 1:
  case 2:
    if (local_d8 == 1) {
      local_b8 = local_e4;
      local_b4 = local_e0;
      local_b0 = local_dc;
    }
    if (local_d4 == 2) {
      local_94 = local_fc;
      local_90 = local_f8;
      local_8c = local_f4;
    }
    if (uVar5 == 4) {
      local_70 = local_f0;
      local_6c = local_ec;
      local_68 = local_e8;
    }
    break;
  case 3:
  case 4:
    if (local_d8 == 1) {
      local_b8 = local_ac;
      local_b4 = local_a8;
      local_b0 = local_a4;
      local_ac = local_e4;
      local_a8 = local_e0;
      local_a4 = local_dc;
    }
    if (local_d4 == 2) {
      local_94 = local_88;
      local_90 = local_84;
      local_8c = local_80;
      local_88 = local_fc;
      local_84 = local_f8;
      local_80 = local_f4;
    }
    if (uVar5 == 4) {
      local_70 = local_64;
      local_6c = local_60;
      local_68 = local_5c;
      local_64 = local_f0;
      local_60 = local_ec;
      local_5c = local_e8;
    }
  }
  FUN_004abff0(0xffffffff,&local_104,0xa8,&local_b8,0);
  return uVar1;
}

