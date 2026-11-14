// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004583a0
// entry: 004583a0  size: 1324


int FUN_004583a0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [12];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4 [12];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
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
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_e0);
  FUN_004e57a0(&local_11c);
  FUN_004e57c0(local_c);
  FUN_004e5a60(&local_c8);
  FUN_004e5a40(&local_134);
  local_78 = local_11c;
  local_a0 = local_d8;
  local_94 = local_d8;
  local_88 = local_d8;
  local_7c = local_d8;
  local_64 = local_d8;
  local_74 = local_118;
  puVar1 = (undefined4 *)(param_2 + 8);
  local_b0 = 1;
  local_ac = 0;
  local_a8 = local_e0;
  local_a4 = local_dc;
  local_9c = local_e0;
  local_98 = local_dc;
  local_90 = local_e0;
  local_8c = local_dc;
  local_84 = local_e0;
  local_80 = local_dc;
  local_70 = local_114;
  local_6c = local_e0;
  local_68 = local_dc;
  iVar3 = FUN_004e72d0(puVar1,&local_e0);
  if ((iVar3 == 0) && (iVar3 = FUN_004e7310(puVar1,&local_11c), iVar3 == 0)) {
    iVar3 = param_2 + 0x14;
    iVar4 = FUN_00451770(iVar3);
    if (iVar4 != 0) {
      return iVar4;
    }
    puVar2 = (undefined4 *)(param_2 + 0x20);
    iVar4 = FUN_00451710(puVar2);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_004e7290(iVar3,puVar2);
    if (iVar4 == 0) {
      local_ec = *puVar2;
      local_e8 = *(undefined4 *)(param_2 + 0x24);
      local_e4 = *(undefined4 *)(param_2 + 0x28);
      FUN_004e6dd0(iVar3,&local_ec,&local_f8);
      iVar3 = FUN_004518b0(&local_f8);
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar2 = (undefined4 *)(param_2 + 0x44);
      *puVar2 = local_f8;
      *(undefined4 *)(param_2 + 0x48) = local_f4;
      *(undefined4 *)(param_2 + 0x4c) = local_f0;
      FUN_004e7910(puVar2,puVar2);
      local_104 = *puVar1;
      local_100 = *(undefined4 *)(param_2 + 0xc);
      local_fc = *(undefined4 *)(param_2 + 0x10);
      uVar5 = FUN_004e6c30(&local_f8,&local_104,local_110,local_128);
      uVar5 = FUN_004e7390(&local_ec,local_d4,uVar5);
      FUN_004e6d00(uVar5);
      FUN_004e7390(&local_104,local_110);
      uVar5 = FUN_004e6d00(local_110,&local_134,local_d4);
      uVar5 = FUN_004e7620(local_128,local_18,uVar5);
      iVar3 = FUN_004e7310(uVar5);
      if (iVar3 == 0) {
        FUN_004e6dd0(local_128,local_110,local_d4);
        uVar5 = FUN_004e6c30(&local_11c,&local_104,local_110,local_128);
        FUN_004e7390(uVar5);
        uVar5 = FUN_004e6d00(local_128,&local_134,local_110);
        uVar5 = FUN_004e7620(local_d4,local_18,uVar5);
        iVar3 = FUN_004e7310(uVar5);
        if (iVar3 == 0) {
          FUN_004e6dd0(local_d4,local_128,&local_14c);
          puVar1 = (undefined4 *)(param_2 + 0x2c);
          *puVar1 = local_14c;
          *(undefined4 *)(param_2 + 0x30) = local_148;
          *(undefined4 *)(param_2 + 0x34) = local_144;
          FUN_004e7910(puVar1,puVar1);
          if (*(int *)(param_2 + 4) == 0) {
            FUN_004e7620(&local_14c,&local_14c);
            local_9c = local_14c;
            local_98 = local_148;
            local_90 = local_134;
            local_94 = local_144;
            local_8c = local_130;
            local_88 = local_12c;
            iVar3 = FUN_00453c70(0,&local_b0);
            if (iVar3 != 0) {
              return iVar3;
            }
            local_bc = local_54;
            local_b8 = local_50;
            local_b4 = local_4c;
            FUN_004e6d00(local_c,&local_bc,&local_140);
          }
          else if (*(int *)(param_2 + 4) == 1) {
            local_9c = local_c8;
            local_98 = local_c4;
            local_90 = local_14c;
            local_94 = local_c0;
            local_8c = local_148;
            local_88 = local_144;
            iVar3 = FUN_00453c70(0,&local_b0);
            if (iVar3 != 0) {
              return iVar3;
            }
            local_140 = local_54;
            local_13c = local_50;
            local_138 = local_4c;
          }
          else {
            local_9c = local_14c;
            local_98 = local_148;
            local_90 = local_134;
            local_94 = local_144;
            local_8c = local_130;
            local_88 = local_12c;
            iVar3 = FUN_00453c70(0,&local_b0);
            if (iVar3 != 0) {
              return iVar3;
            }
            local_140 = local_54;
            local_13c = local_50;
            local_138 = local_4c;
          }
          puVar1 = (undefined4 *)(param_2 + 0x38);
          *puVar1 = local_140;
          *(undefined4 *)(param_2 + 0x3c) = local_13c;
          *(undefined4 *)(param_2 + 0x40) = local_138;
          FUN_004e7910(puVar1,puVar1);
          iVar3 = FUN_004518b0(puVar1);
          return iVar3;
        }
      }
    }
  }
  return 3;
}

