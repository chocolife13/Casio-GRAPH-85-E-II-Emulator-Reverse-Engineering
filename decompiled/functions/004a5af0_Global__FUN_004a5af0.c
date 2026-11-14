// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a5af0
// entry: 004a5af0  size: 841


void FUN_004a5af0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_ac;
  uint local_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined4 local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  undefined4 local_80;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined4 local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined1 local_c [12];
  
  bVar1 = false;
  local_9c = 0x3e4;
  local_9a = 2;
  local_98 = 1;
  local_94 = 0x317;
  local_92 = 2;
  local_90 = 2;
  local_8c = 0x3e5;
  local_8a = 2;
  local_88 = 3;
  local_84 = 1000;
  local_82 = 2;
  local_80 = 4;
  local_7c = 0x3e6;
  local_7a = 2;
  local_78 = 5;
  local_74 = 6;
  local_72 = 2;
  local_70 = 9;
  local_6c = 999;
  local_6a = 2;
  local_68 = 6;
  local_64 = 0x3b5;
  local_62 = 2;
  local_60 = 7;
  local_5c = 0x2a9;
  local_5a = 2;
  local_58 = 8;
  local_54 = 0;
  local_52 = 0;
  local_50 = 0;
  local_4c = 0;
  local_4a = 0;
  local_48 = 0;
  local_44 = 6;
  local_42 = 2;
  local_40 = 10;
  local_3c = 999;
  local_3a = 2;
  local_38 = 6;
  local_34 = 0x3b5;
  local_32 = 2;
  local_30 = 7;
  local_2c = 0;
  local_2a = 0;
  local_28 = 0;
  local_24 = 0;
  local_22 = 0;
  local_20 = 0;
  local_1c = 0;
  local_1a = 0;
  local_18 = 0;
  local_14 = 6;
  local_12 = 2;
  local_10 = 10;
  local_a0 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,2,local_c);
  local_ac = 0;
  iVar3 = 0;
  do {
    puVar4 = (undefined4 *)((int)&local_9c + iVar3);
    puVar5 = (undefined4 *)((int)&DAT_005d0098 + iVar3);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_00538860(local_ac,(undefined4 *)((int)&DAT_005d0098 + iVar3));
    iVar3 = iVar3 + 0x30;
    local_ac = local_ac + 1;
  } while (iVar3 < 0x90);
  FUN_005387f0(0);
  iVar3 = FUN_004ab180();
LAB_004a5cea:
  if (bVar1) {
    if (iVar3 == 1) {
      FUN_004a5f50();
      FUN_00538810();
      uVar6 = 1;
    }
    else {
      FUN_004a6020();
      FUN_00538810();
      uVar6 = 2;
    }
  }
  else {
    FUN_004a5e70();
    FUN_00538810();
    uVar6 = 0;
  }
  FUN_005387f0(uVar6);
  do {
    while( true ) {
      do {
        FUN_00538b30();
        iVar2 = FUN_00526620(&local_a4);
      } while (iVar2 != 0);
      if (local_a4 < 0x7533) break;
      if (local_a4 == 0x754d) {
LAB_004a5e07:
        FUN_00538810();
        FUN_005389c0(0,2,local_c);
        FUN_00526440();
        FUN_00526420(local_a0);
        return;
      }
    }
    if (local_a4 == 0x7532) goto LAB_004a5e07;
    switch(local_a4) {
    case 1:
      FUN_004a60f0();
      break;
    case 2:
      FUN_004a6280();
      break;
    case 3:
      iVar2 = FUN_004300c0(1);
      if (iVar2 != 1) {
        FUN_004a6420();
      }
      break;
    case 4:
      iVar2 = FUN_004300c0(1);
      if (iVar2 != 1) {
        FUN_004a65c0();
      }
      break;
    case 5:
      iVar2 = FUN_004300c0(1);
      if (iVar2 != 1) {
        FUN_004a6760();
      }
      break;
    case 6:
      iVar2 = FUN_004300c0(1);
      if (iVar2 != 1) {
        FUN_004a6940();
      }
      break;
    case 7:
      FUN_004a6b20();
      break;
    case 8:
      FUN_0052b240(0x28);
      break;
    case 9:
      goto switchD_004a5d54_caseD_9;
    case 10:
      bVar1 = false;
      goto LAB_004a5cea;
    }
  } while( true );
switchD_004a5d54_caseD_9:
  bVar1 = true;
  goto LAB_004a5cea;
}

