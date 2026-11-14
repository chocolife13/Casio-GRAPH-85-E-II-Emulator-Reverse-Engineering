// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004573d0
// entry: 004573d0  size: 905


int FUN_004573d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [12];
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
  
  iVar3 = 1;
  if (param_1 == 1) {
    iVar1 = FUN_0047ca80(*(undefined4 *)(param_2 + 4));
    if (iVar1 < 1) {
      return 9;
    }
    FUN_0047cc00(0);
    FUN_0047cbb0(0,iVar1);
    if (0 < iVar1) {
      while( true ) {
        iVar2 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),iVar3,param_2 + 0x14);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_004573d0(0,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_0047cb50(0,iVar3,param_2 + 0x20);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_0052f820();
        if (iVar2 == 1) break;
        iVar3 = iVar3 + 1;
        if (iVar1 < iVar3) {
          return 0;
        }
      }
      return 1;
    }
  }
  else {
    FUN_004e57a0(&local_78);
    FUN_004e5780(&local_54);
    FUN_004e5070(0x17,local_60);
    FUN_004e7730(local_60,local_60);
    FUN_004e7be0(local_60,local_60,1);
    FUN_004e5070(0x3f,local_30);
    FUN_004e7be0(local_30,local_30,0xfffffffe);
    local_6c = *(undefined4 *)(param_2 + 0x14);
    local_68 = *(undefined4 *)(param_2 + 0x18);
    local_84 = *(undefined4 *)(param_2 + 8);
    local_64 = *(undefined4 *)(param_2 + 0x1c);
    local_80 = *(undefined4 *)(param_2 + 0xc);
    local_7c = *(undefined4 *)(param_2 + 0x10);
    iVar3 = FUN_004518b0(&local_84);
    if (iVar3 != 0) {
      return iVar3;
    }
    FUN_004e7680(&local_6c,local_48);
    iVar3 = FUN_004e7210(&local_6c,local_48);
    if (iVar3 != 0) {
      return 3;
    }
    iVar3 = FUN_004e72d0(&local_6c,&local_54);
    if ((iVar3 == 0) && (iVar3 = FUN_004e71d0(&local_84,&local_54), iVar3 == 0)) {
      iVar3 = FUN_004e71d0(&local_84,&local_78);
      if (iVar3 != 0) {
        *(undefined4 *)(param_2 + 0x20) = local_78;
        *(undefined4 *)(param_2 + 0x24) = local_74;
        *(undefined4 *)(param_2 + 0x28) = local_70;
        return 0;
      }
      iVar3 = FUN_004e71d0(&local_6c,&local_78);
      if (iVar3 == 0) {
        FUN_004e6c30(&local_78,&local_84,local_48);
        FUN_004e7410(local_48,local_18);
        iVar3 = FUN_004e7290(&local_84,local_30);
        if (iVar3 != 0) {
          FUN_004e6dd0(local_60,local_18,local_24);
          iVar3 = FUN_004e7290(&local_6c,local_24);
          if (iVar3 != 0) {
            *(undefined4 *)(param_2 + 0x20) = local_78;
            *(undefined4 *)(param_2 + 0x24) = local_74;
            *(undefined4 *)(param_2 + 0x28) = local_70;
            return 0;
          }
        }
        FUN_004e6d00(&local_6c,local_18,local_c);
        FUN_004e73d0(local_c,local_24);
        FUN_004e6c30(&local_78,local_24,&local_3c);
        puVar4 = (undefined4 *)(param_2 + 0x20);
        *puVar4 = local_3c;
        *(undefined4 *)(param_2 + 0x24) = local_38;
        *(undefined4 *)(param_2 + 0x28) = local_34;
        FUN_004e7910(puVar4,puVar4);
        iVar3 = FUN_004518b0(puVar4);
        return iVar3;
      }
      puVar4 = (undefined4 *)(param_2 + 0x20);
      *puVar4 = local_84;
      *(undefined4 *)(param_2 + 0x24) = local_80;
      *(undefined4 *)(param_2 + 0x28) = local_7c;
      FUN_004e7910(puVar4,puVar4);
      return 0;
    }
    *(undefined4 *)(param_2 + 0x20) = local_54;
    *(undefined4 *)(param_2 + 0x24) = local_50;
    *(undefined4 *)(param_2 + 0x28) = local_4c;
  }
  return 0;
}

