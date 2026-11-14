// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004527e0
// entry: 004527e0  size: 1071


int FUN_004527e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_14c;
  undefined4 local_148;
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
  undefined1 local_11c [12];
  undefined1 local_110 [12];
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
  undefined1 local_b0 [12];
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_c [12];
  
  FUN_004e5780(&local_f8);
  FUN_004e57a0(&local_128);
  FUN_004e57c0(local_c);
  FUN_004e5840(local_c8);
  local_6c = local_128;
  local_68 = local_124;
  local_64 = local_120;
  local_a4 = 1;
  local_a0 = 0xffffffff;
  iVar7 = param_2 + 4;
  local_9c = local_f8;
  local_98 = local_f4;
  local_94 = local_f0;
  local_90 = local_f8;
  local_8c = local_f4;
  local_88 = local_f0;
  local_84 = local_f8;
  local_80 = local_f4;
  local_7c = local_f0;
  local_78 = local_f8;
  local_74 = local_f4;
  local_70 = local_f0;
  local_60 = local_f8;
  local_5c = local_f4;
  local_58 = local_f0;
  iVar5 = FUN_00451850(iVar7);
  if ((iVar5 == 0) && (iVar5 = FUN_00451770(param_2 + 0x10), iVar5 == 0)) {
    iVar1 = param_2 + 0x28;
    iVar5 = FUN_00451710(iVar1);
    if ((iVar5 == 0) && (iVar5 = FUN_00451770(param_2 + 0x1c), iVar5 == 0)) {
      iVar2 = param_2 + 0x34;
      iVar5 = FUN_00451710(iVar2);
      if (iVar5 == 0) {
        iVar5 = FUN_004e7290(param_2 + 0x10,iVar1);
        if ((iVar5 == 0) && (iVar5 = FUN_004e7290(param_2 + 0x1c,iVar2), iVar5 == 0)) {
          uVar6 = FUN_004e6d00(iVar7,local_c8,&local_14c,&local_78);
          FUN_004e6ab0(local_c8,uVar6);
          iVar7 = FUN_00454410(0,&local_a4,iVar7,1);
          if (iVar7 != 0) {
            return iVar7;
          }
          local_104 = local_3c;
          local_100 = local_38;
          local_fc = local_34;
          FUN_004e6dd0(param_2 + 0x10,iVar1,&local_140);
          FUN_004e6dd0(param_2 + 0x1c,iVar2,&local_134);
          puVar3 = (undefined4 *)(param_2 + 0x58);
          puVar4 = (undefined4 *)(param_2 + 100);
          *puVar3 = local_140;
          *(undefined4 *)(param_2 + 0x5c) = local_13c;
          *(undefined4 *)(param_2 + 0x60) = local_138;
          *puVar4 = local_134;
          *(undefined4 *)(param_2 + 0x68) = local_130;
          *(undefined4 *)(param_2 + 0x6c) = local_12c;
          FUN_004e7910(puVar3,puVar3);
          FUN_004e7910(puVar4,puVar4);
          uVar6 = FUN_004e6c30(&local_128,&local_140,local_11c,&local_14c);
          FUN_004e6d00(&local_140,uVar6);
          uVar6 = FUN_004e6c30(&local_128,&local_134,local_11c,local_d4);
          FUN_004e6d00(&local_134,uVar6);
          iVar7 = FUN_004e7310(iVar1,iVar2);
          if (iVar7 == 0) {
            uVar6 = FUN_004e6d00(iVar2,&local_14c,local_110,iVar1,local_11c);
            FUN_004e6dd0(uVar6);
            FUN_004e6ab0(local_d4,local_11c,local_110);
            uVar6 = FUN_004e7390(iVar2,local_bc,&local_14c);
          }
          else {
            uVar6 = FUN_004e6d00(iVar1,local_d4,local_110,iVar2,local_11c);
            FUN_004e6dd0(uVar6);
            FUN_004e6ab0(&local_14c,local_11c,local_110);
            uVar6 = FUN_004e7390(iVar1,local_bc,&local_14c);
          }
          uVar6 = FUN_004e7390(local_110,local_b0,uVar6);
          FUN_004e6dd0(uVar6);
          FUN_004e6d00(&local_104,&local_14c,local_e0);
          FUN_004e6c30(&local_140,&local_134,local_ec);
          FUN_004e6c30(local_ec,local_e0,&local_14c);
          puVar3 = (undefined4 *)(param_2 + 0x40);
          *puVar3 = local_14c;
          *(undefined4 *)(param_2 + 0x44) = local_148;
          *(undefined4 *)(param_2 + 0x48) = local_144;
          FUN_004e7910(puVar3,puVar3);
          FUN_004e6ab0(local_ec,local_e0,&local_14c);
          puVar3 = (undefined4 *)(param_2 + 0x4c);
          *puVar3 = local_14c;
          *(undefined4 *)(param_2 + 0x50) = local_148;
          *(undefined4 *)(param_2 + 0x54) = local_144;
          FUN_004e7910(puVar3,puVar3);
          return 0;
        }
        iVar5 = 3;
      }
    }
  }
  return iVar5;
}

