// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004569d0
// entry: 004569d0  size: 1131


int FUN_004569d0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
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
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (param_1 == 1) {
    iVar2 = FUN_0047ca80(*(undefined4 *)(param_2 + 4));
    if (iVar2 < 1) {
      return 9;
    }
    FUN_0047cc00(0);
    FUN_0047cbb0(0,iVar2);
    iVar5 = 1;
    if (iVar2 < 1) {
      return 0;
    }
    while (iVar3 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),iVar5,param_2 + 0x14), iVar3 == 0) {
      iVar3 = FUN_004569d0(0,param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_0047cb50(0,iVar5,param_2 + 0x20);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_0052f820();
      if (iVar3 == 1) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      if (iVar2 < iVar5) {
        return 0;
      }
    }
  }
  else {
    FUN_004e5780(&local_84);
    FUN_004e57a0(&local_60);
    iVar3 = FUN_004e72d0((undefined4 *)(param_2 + 8),&local_84);
    if (iVar3 != 0) {
      return 3;
    }
    puVar1 = (undefined4 *)(param_2 + 0x14);
    FUN_004e7680(puVar1,local_48);
    iVar3 = FUN_004e7210(puVar1,local_48);
    if (iVar3 != 0) {
      return 3;
    }
    local_6c = *puVar1;
    local_68 = *(undefined4 *)(param_2 + 0x18);
    local_64 = *(undefined4 *)(param_2 + 0x1c);
    local_54 = *(undefined4 *)(param_2 + 8);
    local_50 = *(undefined4 *)(param_2 + 0xc);
    local_4c = *(undefined4 *)(param_2 + 0x10);
    iVar3 = FUN_004e7250(&local_6c,&local_84);
    if (iVar3 != 0) {
      *(undefined4 *)(param_2 + 0x20) = local_84;
      *(undefined4 *)(param_2 + 0x24) = local_80;
      *(undefined4 *)(param_2 + 0x28) = local_7c;
      return 0;
    }
    iVar3 = FUN_004e71d0(&local_54,&local_84);
    if (iVar3 != 0) {
      iVar3 = FUN_004e71d0(&local_6c,&local_84);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x20) = local_84;
        *(undefined4 *)(param_2 + 0x24) = local_80;
        *(undefined4 *)(param_2 + 0x28) = local_7c;
        return 0;
      }
      *(undefined4 *)(param_2 + 0x20) = local_60;
      *(undefined4 *)(param_2 + 0x24) = local_5c;
      *(undefined4 *)(param_2 + 0x28) = local_58;
      return 0;
    }
    iVar3 = FUN_004e71d0(&local_6c,&local_84);
    if (iVar3 != 0) {
      FUN_004e7730(&local_54,local_48);
      FUN_004e73d0(local_48,&local_3c);
      puVar1 = (undefined4 *)(param_2 + 0x20);
      *puVar1 = local_3c;
      *(undefined4 *)(param_2 + 0x24) = local_38;
      *(undefined4 *)(param_2 + 0x28) = local_34;
      FUN_004e7910(puVar1,puVar1);
      iVar3 = FUN_004518b0(puVar1);
      return iVar3;
    }
    FUN_004e5070(9,local_18);
    FUN_004e7be0(local_18,local_18,1);
    FUN_004e5070(4,local_30);
    FUN_004e7be0(local_30,local_30,0x61);
    FUN_004e7410(&local_54,local_c);
    iVar3 = FUN_004e72d0(local_c,&local_60);
    if ((iVar3 != 0) && (iVar3 = FUN_004e7310(&local_6c,local_18), iVar3 != 0)) {
      *(undefined4 *)(param_2 + 0x20) = local_84;
      *(undefined4 *)(param_2 + 0x24) = local_80;
      *(undefined4 *)(param_2 + 0x28) = local_7c;
      return 0;
    }
    iVar3 = FUN_004e7290(&local_6c,local_30);
    if (iVar3 != 0) {
      return 3;
    }
    FUN_004e57a0(&local_60);
    FUN_004e5070(0xe2,local_24);
    FUN_004e7730(local_24,local_24);
    uVar4 = FUN_004e6ab0(&local_6c,&local_60,local_48,&local_3c,&local_78);
    uVar4 = FUN_0045f630(uVar4);
    FUN_004e7730(uVar4);
    FUN_004e6c30(&local_78,&local_54,&local_78);
    uVar4 = FUN_004e6d00(&local_6c,local_c,local_48,&local_78);
    FUN_004e6ab0(&local_78,uVar4);
    iVar3 = FUN_004e7250(&local_78,local_24);
    if (iVar3 != 0) {
      *(undefined4 *)(param_2 + 0x20) = local_84;
      *(undefined4 *)(param_2 + 0x24) = local_80;
      *(undefined4 *)(param_2 + 0x28) = local_7c;
      return 0;
    }
    FUN_004e73d0(&local_78,&local_78);
    puVar1 = (undefined4 *)(param_2 + 0x20);
    *puVar1 = local_78;
    *(undefined4 *)(param_2 + 0x24) = local_74;
    *(undefined4 *)(param_2 + 0x28) = local_70;
    FUN_004e7910(puVar1,puVar1);
    iVar3 = FUN_004518b0(puVar1);
  }
  return iVar3;
}

