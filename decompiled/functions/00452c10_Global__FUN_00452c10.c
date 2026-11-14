// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00452c10
// entry: 00452c10  size: 956


int FUN_00452c10(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
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
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined4 local_70 [10];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [48];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e5780(local_7c);
  FUN_004e57a0(local_94);
  FUN_004e5840(local_d0);
  FUN_004e5a60(&local_f4);
  FUN_004e5a40(&local_100);
  local_70[0] = 1;
  iVar3 = FUN_00451850(param_2 + 4);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (param_1 == 0) {
    local_10c = *(undefined4 *)(param_2 + 0x10);
    local_108 = *(undefined4 *)(param_2 + 0x14);
    local_118 = *(undefined4 *)(param_2 + 0x1c);
    local_104 = *(undefined4 *)(param_2 + 0x18);
    local_114 = *(undefined4 *)(param_2 + 0x20);
    local_110 = *(undefined4 *)(param_2 + 0x24);
    iVar3 = FUN_004517d0(&local_118);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FUN_00451710(param_2 + 0x28);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else {
    iVar3 = FUN_0045e040((undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x34),
                         *(undefined4 *)(param_2 + 0x38),&local_10c,&local_118);
    if (iVar3 != 0) {
      return iVar3;
    }
    puVar1 = (undefined4 *)(param_2 + 0x54);
    puVar2 = (undefined4 *)(param_2 + 0x60);
    *puVar1 = local_118;
    *(undefined4 *)(param_2 + 0x58) = local_114;
    *(undefined4 *)(param_2 + 0x5c) = local_110;
    *puVar2 = local_10c;
    *(undefined4 *)(param_2 + 100) = local_108;
    *(undefined4 *)(param_2 + 0x68) = local_104;
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x30);
    FUN_004e7910(puVar1,puVar1);
    FUN_004e7910(puVar2,puVar2);
  }
  FUN_004e6c30(param_2 + 0x28,local_94,local_3c);
  local_48 = *(undefined4 *)(param_2 + 4);
  local_44 = *(undefined4 *)(param_2 + 8);
  local_40 = *(undefined4 *)(param_2 + 0xc);
  iVar3 = FUN_00454f00(0,local_70);
  if (iVar3 == 0) {
    local_a0 = local_c;
    local_9c = local_8;
    local_98 = local_4;
    uVar4 = FUN_004e7390(param_2 + 0x28,local_ac,local_e8);
    FUN_004e6dd0(&local_a0,uVar4);
    iVar3 = FUN_004e7310(&local_118,local_94);
    if (iVar3 != 0) {
      FUN_004e6dd0(&local_100,&local_118,local_dc);
      iVar3 = FUN_004e7310(local_e8,local_dc);
      if (iVar3 != 0) {
        *(undefined4 *)(param_2 + 0x3c) = local_f4;
        *(undefined4 *)(param_2 + 0x40) = local_f0;
        *(undefined4 *)(param_2 + 0x48) = local_100;
        *(undefined4 *)(param_2 + 0x44) = local_ec;
        *(undefined4 *)(param_2 + 0x4c) = local_fc;
        *(undefined4 *)(param_2 + 0x50) = local_f8;
        return 0;
      }
    }
    FUN_004e6d00(local_e8,&local_118,local_c4);
    FUN_004e6d00(&local_10c,local_d0,local_e8);
    FUN_004e6d00(local_c4,local_d0,local_ac);
    FUN_004e6d00(&local_100,local_d0,local_dc);
    FUN_004e6ab0(local_e8,local_ac,local_b8);
    uVar4 = FUN_004e7620(local_b8,local_88,local_dc);
    iVar3 = FUN_004e7310(uVar4);
    if (iVar3 == 0) {
      iVar3 = param_2 + 0x48;
      FUN_004e6ab0(&local_10c,local_c4,iVar3);
      FUN_004e7910(iVar3,iVar3);
    }
    else {
      *(undefined4 *)(param_2 + 0x48) = local_100;
      *(undefined4 *)(param_2 + 0x4c) = local_fc;
      *(undefined4 *)(param_2 + 0x50) = local_f8;
    }
    FUN_004e6c30(local_e8,local_ac,local_b8);
    uVar4 = FUN_004e7620(local_b8,local_88,local_dc);
    iVar3 = FUN_004e7310(uVar4);
    if (iVar3 != 0) {
      *(undefined4 *)(param_2 + 0x3c) = local_f4;
      *(undefined4 *)(param_2 + 0x40) = local_f0;
      *(undefined4 *)(param_2 + 0x44) = local_ec;
      return 0;
    }
    param_2 = param_2 + 0x3c;
    FUN_004e6c30(&local_10c,local_c4,param_2);
    FUN_004e7910(param_2,param_2);
    iVar3 = 0;
  }
  return iVar3;
}

