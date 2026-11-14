// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00456e40
// entry: 00456e40  size: 470


int FUN_00456e40(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar5 = 1;
  if (param_1 == 1) {
    iVar2 = FUN_0047ca80(*(undefined4 *)(param_2 + 4));
    if (iVar2 < 1) {
      return 9;
    }
    FUN_0047cc00(0);
    FUN_0047cbb0(0,iVar2);
    if (iVar2 < 1) {
      return 0;
    }
    while (iVar3 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),iVar5,param_2 + 0x14), iVar3 == 0) {
      iVar3 = FUN_00456e40(0,param_2);
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
    FUN_004e5780(&local_48);
    FUN_004e57a0(local_c);
    iVar5 = FUN_004e72d0((undefined4 *)(param_2 + 8),&local_48);
    if (iVar5 != 0) {
      return 3;
    }
    puVar1 = (undefined4 *)(param_2 + 0x14);
    FUN_004e7680(puVar1,local_18);
    iVar5 = FUN_004e7210(puVar1,local_18);
    if (iVar5 != 0) {
      return 3;
    }
    iVar5 = FUN_004e7250(puVar1,&local_48);
    if (iVar5 != 0) {
      *(undefined4 *)(param_2 + 0x20) = local_48;
      *(undefined4 *)(param_2 + 0x24) = local_44;
      *(undefined4 *)(param_2 + 0x28) = local_40;
      return 0;
    }
    local_30 = *puVar1;
    local_2c = *(undefined4 *)(param_2 + 0x18);
    local_28 = *(undefined4 *)(param_2 + 0x1c);
    local_3c = *(undefined4 *)(param_2 + 8);
    local_38 = *(undefined4 *)(param_2 + 0xc);
    local_34 = *(undefined4 *)(param_2 + 0x10);
    uVar4 = FUN_004e6ab0(&local_30,local_c,local_18,&local_3c,&local_24);
    FUN_0045ff30(uVar4);
    puVar1 = (undefined4 *)(param_2 + 0x20);
    *puVar1 = local_24;
    *(undefined4 *)(param_2 + 0x24) = local_20;
    *(undefined4 *)(param_2 + 0x28) = local_1c;
    FUN_004e7910(puVar1,puVar1);
    iVar3 = FUN_004518b0(puVar1);
  }
  return iVar3;
}

