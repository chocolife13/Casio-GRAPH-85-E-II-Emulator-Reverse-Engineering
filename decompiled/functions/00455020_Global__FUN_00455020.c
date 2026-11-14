// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00455020
// entry: 00455020  size: 478


int FUN_00455020(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57a0(local_3c);
  FUN_004e5840(local_54);
  FUN_004e5780(&local_90);
  FUN_004e5a10(local_18);
  local_a8 = *(undefined4 *)(param_2 + 4);
  local_a4 = *(undefined4 *)(param_2 + 8);
  local_9c = *(undefined4 *)(param_2 + 0x28);
  local_a0 = *(undefined4 *)(param_2 + 0xc);
  local_98 = *(undefined4 *)(param_2 + 0x2c);
  local_94 = *(undefined4 *)(param_2 + 0x30);
  iVar1 = FUN_00451710(&local_9c);
  if (iVar1 == 0) {
    iVar1 = FUN_004e72d0(&local_a8,&local_90);
    if (iVar1 != 0) {
      *(undefined4 *)(param_2 + 0x34) = local_90;
      *(undefined4 *)(param_2 + 0x38) = local_8c;
      *(undefined4 *)(param_2 + 0x3c) = local_88;
      return 0;
    }
    FUN_004e6d00(&local_9c,local_54,local_84);
    uVar2 = FUN_004e7730(local_84,local_60,local_18,local_48);
    FUN_004e6d00(uVar2);
    FUN_004e6c30(local_84,local_3c,local_30);
    uVar2 = FUN_004e7410(&local_a8,local_60,local_24);
    FUN_004e6d00(local_30,uVar2);
    FUN_004e6ab0(local_48,local_24,local_c);
    uVar2 = FUN_004e6d00(&local_a8,local_54,local_60,local_78);
    FUN_004e6c30(local_c,uVar2);
    uVar2 = FUN_0045f630(local_84,local_48,local_78);
    FUN_004e6c30(local_78,uVar2);
    FUN_004e73d0(local_78,&local_6c);
    puVar3 = (undefined4 *)(param_2 + 0x34);
    *puVar3 = local_6c;
    *(undefined4 *)(param_2 + 0x38) = local_68;
    *(undefined4 *)(param_2 + 0x3c) = local_64;
    FUN_004e7910(puVar3,puVar3);
    iVar1 = FUN_004517d0(puVar3);
  }
  return iVar1;
}

