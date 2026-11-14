// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b0c50
// entry: 004b0c50  size: 448


undefined4 FUN_004b0c50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_84;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [16];
  
  local_78 = 0;
  local_76 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6e = 0;
  local_6c = 0;
  local_68 = 0;
  local_66 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5e = 0;
  local_5c = 0;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4e = 0;
  local_4c = 0;
  local_48 = 0x4a;
  local_46 = 2;
  local_44 = 1;
  local_40 = 0x2e;
  local_3e = 2;
  local_3c = 2;
  local_38 = 0xac;
  local_36 = 2;
  local_34 = 3;
  local_30 = 0xb6;
  local_2e = 2;
  local_2c = 4;
  local_28 = 0xd0;
  local_26 = 2;
  local_24 = 5;
  local_20 = 0xe4;
  local_1e = 2;
  local_1c = 6;
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_005234d0(local_10);
  FUN_00523740();
  uVar2 = FUN_0040ad00();
  FUN_00538980(0,1,local_18);
  local_84 = 0;
  iVar5 = 0;
  do {
    puVar6 = (undefined4 *)((int)&local_78 + iVar5);
    puVar7 = (undefined4 *)((int)&DAT_005d0208 + iVar5);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_00538860(local_84,(undefined4 *)((int)&DAT_005d0208 + iVar5));
    iVar5 = iVar5 + 0x30;
    local_84 = local_84 + 1;
  } while (iVar5 < 0x31);
  FUN_005387f0(1);
  uVar3 = FUN_004aa010();
  if (uVar3 < 0x3c01) {
    FUN_0052b240(4);
  }
  else {
    FUN_004b0ac0(0);
  }
  FUN_005262e0(uVar2);
  FUN_00526440();
  FUN_00526420(uVar1);
  FUN_00523630(local_10);
  FUN_005389c0(0,1,local_18);
  return 0;
}

