// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00452510
// entry: 00452510  size: 720


int FUN_00452510(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
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
  undefined4 local_f0;
  undefined1 local_ec [12];
  undefined1 local_e0 [12];
  undefined1 local_d4 [12];
  undefined1 local_c8 [12];
  undefined1 local_bc [12];
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
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_104);
  FUN_004e57a0(&local_110);
  FUN_004e57c0(local_18);
  FUN_004e5840(local_e0);
  local_78 = local_110;
  local_74 = local_10c;
  local_70 = local_108;
  local_b0 = 1;
  local_ac = 0xffffffff;
  iVar1 = param_2 + 4;
  local_a8 = local_104;
  local_a4 = local_100;
  local_a0 = local_fc;
  local_9c = local_104;
  local_98 = local_100;
  local_94 = local_fc;
  local_90 = local_104;
  local_8c = local_100;
  local_88 = local_fc;
  local_84 = local_104;
  local_80 = local_100;
  local_7c = local_fc;
  local_6c = local_104;
  local_68 = local_100;
  local_64 = local_fc;
  iVar5 = FUN_00451850(iVar1);
  if (iVar5 == 0) {
    iVar2 = param_2 + 0x10;
    iVar5 = FUN_00451770(iVar2);
    if (iVar5 == 0) {
      iVar3 = param_2 + 0x1c;
      iVar5 = FUN_00451710(iVar3);
      if (iVar5 == 0) {
        iVar5 = FUN_004e7290(iVar2,iVar3);
        if (iVar5 != 0) {
          return 3;
        }
        uVar6 = FUN_004e6d00(iVar1,local_e0,&local_128,&local_84);
        FUN_004e6ab0(local_e0,uVar6);
        iVar5 = FUN_00454410(0,&local_b0,iVar1,1);
        if (iVar5 == 0) {
          local_f8 = local_48;
          local_f4 = local_44;
          local_f0 = local_40;
          FUN_004e6dd0(iVar2,iVar3,&local_11c);
          puVar4 = (undefined4 *)(param_2 + 0x40);
          *puVar4 = local_11c;
          *(undefined4 *)(param_2 + 0x44) = local_118;
          *(undefined4 *)(param_2 + 0x48) = local_114;
          FUN_004e7910(puVar4,puVar4);
          FUN_004e7390(&local_11c,&local_128);
          uVar6 = FUN_004e6c30(&local_110,&local_11c,local_ec,local_bc);
          FUN_004e7390(uVar6);
          FUN_004e6d00(&local_128,local_bc,local_ec);
          uVar6 = FUN_004e7390(iVar3,local_c,local_c8);
          FUN_004e6dd0(local_ec,uVar6);
          FUN_004e6d00(&local_f8,local_c8,local_d4);
          FUN_004e6c30(&local_11c,local_d4,&local_128);
          puVar4 = (undefined4 *)(param_2 + 0x28);
          *puVar4 = local_128;
          *(undefined4 *)(param_2 + 0x2c) = local_124;
          *(undefined4 *)(param_2 + 0x30) = local_120;
          FUN_004e7910(puVar4,puVar4);
          FUN_004e6ab0(&local_11c,local_d4,&local_128);
          puVar4 = (undefined4 *)(param_2 + 0x34);
          *puVar4 = local_128;
          *(undefined4 *)(param_2 + 0x38) = local_124;
          *(undefined4 *)(param_2 + 0x3c) = local_120;
          FUN_004e7910(puVar4,puVar4);
          iVar5 = 0;
        }
      }
    }
  }
  return iVar5;
}

