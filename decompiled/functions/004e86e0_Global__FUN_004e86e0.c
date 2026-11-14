// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e86e0
// entry: 004e86e0  size: 1148


undefined4 FUN_004e86e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined3 uStack_57;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_44 = 0;
  FUN_004e5780(&local_40);
  FUN_004e57a0(local_c);
  FUN_004e5840(&local_30);
  local_bc = *param_1;
  local_b8 = param_1[1];
  local_b4 = param_1[2];
  iVar1 = FUN_004e71d0(param_1,&local_40);
  if (iVar1 == -1) {
    FUN_004e5630(3,param_1);
    return 0;
  }
  if (iVar1 == 0) {
    local_34 = FUN_004e7250(param_1,&local_40);
    if (local_34 != 0) {
      FUN_004e7620(param_1,&local_bc);
    }
    FUN_004e7be0(local_c,&local_8c,3);
    iVar1 = FUN_004e7310(&local_bc,&local_8c);
    if (iVar1 == 0) {
      local_8b = 0x93;
      local_54 = local_38;
      local_90 = local_38;
      local_a8 = local_38;
      local_8c = 9;
      local_8a = 0x98;
      local_89 = 0x94;
      local_88 = 0x22;
      local_87 = 0x80;
      local_86 = 0x40;
      local_85 = 0x14;
      local_84 = 0x32;
      local_5c = 0x64319209;
      _local_58 = CONCAT31((int3)((uint)local_3c >> 8),0x19);
      local_74 = 0x38199309;
      local_70._2_2_ = (undefined2)((uint)local_3c >> 0x10);
      local_70 = CONCAT22(local_70._2_2_,0x315);
      local_68 = 0x56569359;
      local_64 = CONCAT22(local_70._2_2_,0x8237);
      local_98 = 0x14780110;
      local_94 = CONCAT22(local_70._2_2_,0x3779);
      local_b0 = 0x12820160;
      local_ac._3_1_ = (undefined1)((uint)local_3c >> 0x18);
      local_ac = CONCAT13(local_ac._3_1_,0x809755);
      local_80 = 0x2330110;
      local_7c = CONCAT13(local_ac._3_1_,0x904274);
      uVar2 = FUN_004e6d00(&local_5c,&local_bc,local_18,local_18,local_18);
      uVar2 = FUN_004e6a00(local_c,uVar2);
      FUN_004e6dd0(local_c,uVar2);
      uVar2 = local_70;
      local_50 = local_80;
      local_4c = local_7c;
      local_48 = local_38;
      iVar1 = 4;
      do {
        iVar1 = iVar1 + -1;
        switch(iVar1) {
        case 0:
          local_a0 = uVar2;
          local_a4 = local_74;
          local_9c = local_38;
          break;
        case 1:
          local_a4 = local_68;
          local_a0 = local_64;
          local_9c = local_38;
          break;
        case 2:
          local_a4 = local_98;
          local_a0 = local_94;
          local_9c = local_90;
          break;
        case 3:
          local_a4 = local_b0;
          local_a0 = local_ac;
          local_9c = local_a8;
        }
        uVar3 = FUN_004e6d00(local_18,&local_50,&local_50,&local_50);
        FUN_004e6a00(&local_a4,uVar3);
      } while (0 < iVar1);
      uVar2 = FUN_004e6d00(&local_bc,&local_bc,local_24,local_24,local_24,local_24);
      uVar2 = FUN_004e6d00(&local_30,uVar2);
      uVar2 = FUN_004e7730(uVar2);
      FUN_004e73d0(uVar2);
      uVar2 = FUN_004e6d00(local_18,&local_50,&local_50,&local_50,&local_bc);
      uVar2 = FUN_004e6d00(local_24,uVar2);
      FUN_004e6d00(&local_8c,uVar2);
      iVar1 = FUN_004e4020(&local_bc);
      if (iVar1 == 0) {
        local_44 = 1;
      }
    }
    else {
      local_bc = local_40;
      local_b8 = local_3c;
      local_b4 = local_38;
    }
    if (local_34 != 0) {
      FUN_004e6b80(local_c,&local_bc,&local_bc);
    }
    *param_1 = local_bc;
    param_1[1] = local_b8;
    param_1[2] = local_b4;
    return local_44;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return 1;
}

