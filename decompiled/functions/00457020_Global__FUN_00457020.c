// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00457020
// entry: 00457020  size: 931


int FUN_00457020(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
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
        iVar2 = FUN_00457020(0,param_2);
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
    FUN_004e57a0(local_54);
    FUN_004e5780(&local_90);
    FUN_004e5070(0x17,local_6c);
    FUN_004e7730(local_6c,local_6c);
    FUN_004e7be0(local_6c,local_6c,1);
    FUN_004e5070(0x3f,local_30);
    FUN_004e7be0(local_30,local_30,0xfffffffe);
    local_78 = *(undefined4 *)(param_2 + 0x14);
    local_74 = *(undefined4 *)(param_2 + 0x18);
    local_84 = *(undefined4 *)(param_2 + 8);
    local_70 = *(undefined4 *)(param_2 + 0x1c);
    local_80 = *(undefined4 *)(param_2 + 0xc);
    local_7c = *(undefined4 *)(param_2 + 0x10);
    iVar3 = FUN_004518b0(&local_84);
    if (iVar3 != 0) {
      return iVar3;
    }
    FUN_004e7680(&local_78,local_60);
    iVar3 = FUN_004e7210(&local_78,local_60);
    if (iVar3 != 0) {
      return 3;
    }
    iVar3 = FUN_004e72d0(&local_78,&local_90);
    if ((iVar3 == 0) && (iVar3 = FUN_004e71d0(&local_84,&local_90), iVar3 == 0)) {
      iVar3 = FUN_004e71d0(&local_78,local_54);
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)(param_2 + 0x20);
        *puVar4 = local_84;
        *(undefined4 *)(param_2 + 0x24) = local_80;
        *(undefined4 *)(param_2 + 0x28) = local_7c;
        FUN_004e7910(puVar4,puVar4);
        return 0;
      }
      iVar3 = FUN_004e71d0(&local_84,local_54);
      if (iVar3 == 0) {
        FUN_004e6c30(&local_78,local_54,local_60);
        FUN_004e6c30(local_54,&local_84,local_18);
        FUN_004e7410(local_18,local_24);
        iVar3 = FUN_004e7290(&local_84,local_30);
        if (iVar3 != 0) {
          FUN_004e6dd0(local_6c,local_24,local_3c);
          iVar3 = FUN_004e7290(local_60,local_3c);
          if (iVar3 != 0) {
            *(undefined4 *)(param_2 + 0x20) = local_90;
            *(undefined4 *)(param_2 + 0x24) = local_8c;
            *(undefined4 *)(param_2 + 0x28) = local_88;
            return 0;
          }
        }
        FUN_004e6d00(local_60,local_24,local_3c);
        FUN_004e73d0(local_3c,local_c);
        FUN_004e6d00(&local_84,local_c,&local_48);
        puVar4 = (undefined4 *)(param_2 + 0x20);
        *puVar4 = local_48;
        *(undefined4 *)(param_2 + 0x24) = local_44;
        *(undefined4 *)(param_2 + 0x28) = local_40;
        FUN_004e7910(puVar4,puVar4);
        iVar3 = FUN_004518b0(puVar4);
        return iVar3;
      }
      *(undefined4 *)(param_2 + 0x20) = local_90;
      *(undefined4 *)(param_2 + 0x24) = local_8c;
      *(undefined4 *)(param_2 + 0x28) = local_88;
      return 0;
    }
    *(undefined4 *)(param_2 + 0x20) = local_90;
    *(undefined4 *)(param_2 + 0x24) = local_8c;
    *(undefined4 *)(param_2 + 0x28) = local_88;
  }
  return 0;
}

