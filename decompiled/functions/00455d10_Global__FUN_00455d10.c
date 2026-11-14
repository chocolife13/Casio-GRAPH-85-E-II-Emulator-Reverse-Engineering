// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00455d10
// entry: 00455d10  size: 2382


int FUN_00455d10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_d8 [12];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [12];
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
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar4 = 1;
  if (param_1 == 1) {
    iVar1 = FUN_0047ca80(*(undefined4 *)(param_2 + 4));
    if (iVar1 < 1) {
      return 9;
    }
    FUN_0047cc00(0);
    FUN_0047cbb0(0,iVar1);
    if (0 < iVar1) {
      while( true ) {
        iVar2 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),iVar4,param_2 + 0x20);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_00455d10(0,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_0047cb50(0,iVar4,param_2 + 0x2c);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_0052f820();
        if (iVar2 == 1) break;
        iVar4 = iVar4 + 1;
        if (iVar1 < iVar4) {
          return 0;
        }
      }
      return 1;
    }
  }
  else {
    FUN_004e57a0(&local_cc);
    FUN_004e5780(&local_9c);
    FUN_004e7be0(&local_cc,local_30,0xffffffff);
    FUN_004e5070(0xd,&local_54);
    FUN_004e7730(&local_cc,local_c);
    FUN_004e7be0(&local_cc,local_3c,0x61);
    FUN_004e7be0(&local_cc,local_18,0xffffffab);
    local_78 = *(undefined4 *)(param_2 + 8);
    local_74 = *(undefined4 *)(param_2 + 0xc);
    local_84 = *(undefined4 *)(param_2 + 0x20);
    local_70 = *(undefined4 *)(param_2 + 0x10);
    local_80 = *(undefined4 *)(param_2 + 0x24);
    local_7c = *(undefined4 *)(param_2 + 0x28);
    local_b4 = *(undefined4 *)(param_2 + 0x14);
    local_b0 = *(undefined4 *)(param_2 + 0x18);
    local_ac = *(undefined4 *)(param_2 + 0x1c);
    iVar4 = FUN_004518b0(&local_b4);
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_004e7680(&local_84,local_6c);
    iVar4 = FUN_004e7210(&local_84,local_6c);
    if (iVar4 != 0) {
      return 3;
    }
    iVar4 = FUN_00451710(&local_78);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_004e7290(&local_78,local_3c);
    if (iVar4 != 0) {
      return 3;
    }
    iVar4 = FUN_004e71d0(&local_b4,&local_9c);
    if (iVar4 != 0) {
      iVar4 = FUN_004e71d0(&local_84,&local_9c);
      if (iVar4 == 0) {
        *(undefined4 *)(param_2 + 0x2c) = local_9c;
        *(undefined4 *)(param_2 + 0x30) = local_98;
        *(undefined4 *)(param_2 + 0x34) = local_94;
        return 0;
      }
      *(undefined4 *)(param_2 + 0x2c) = local_cc;
      *(undefined4 *)(param_2 + 0x30) = local_c8;
      *(undefined4 *)(param_2 + 0x34) = local_c4;
      return 0;
    }
    iVar4 = FUN_004e71d0(&local_b4,&local_cc);
    if (iVar4 == 0) {
      iVar4 = FUN_004e7250(&local_84,&local_9c);
      if (((iVar4 == 0) && (iVar4 = FUN_004e7290(&local_84,&local_78), iVar4 == 0)) &&
         (iVar4 = FUN_004e71d0(&local_78,&local_9c), iVar4 == 0)) {
        local_90 = local_9c;
        local_8c = local_98;
        local_88 = local_94;
        uVar3 = FUN_004e6ab0(&local_78,&local_cc,local_24,local_60,&local_90);
        uVar3 = FUN_004e7410(uVar3);
        FUN_004e6c30(&local_90,uVar3);
        FUN_004e7410(&local_b4,local_6c);
        uVar3 = FUN_004e6d00(&local_84,local_6c,local_6c,&local_90);
        FUN_004e6ab0(&local_90,uVar3);
        FUN_004e6c30(&local_78,&local_84,local_60);
        iVar4 = FUN_004e72d0(&local_b4,local_18);
        if (iVar4 == 0) {
          iVar4 = FUN_004e72d0(&local_b4,local_30);
          if (iVar4 == 0) {
            FUN_004e6c30(&local_cc,&local_b4,local_a8);
            FUN_004e7410(local_a8,local_d8);
          }
          else {
            local_c0 = local_54;
            local_bc = local_50;
            local_b8 = local_4c;
            FUN_004e6dd0(&local_b4,&local_c0,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            uVar3 = FUN_004e6c30(&local_c0,&local_cc,&local_c0,local_a8);
            FUN_004e6dd0(&local_cc,uVar3);
            FUN_004e6ab0(local_a8,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            FUN_004e6ab0(&local_cc,local_d8,local_d8);
            FUN_004e6d00(&local_b4,local_d8,local_d8);
            FUN_004e7730(local_d8,local_d8);
          }
        }
        else {
          FUN_004e7730(&local_b4,local_d8);
        }
        FUN_004e6d00(local_60,local_d8,local_60);
        FUN_004e6ab0(&local_90,local_60,&local_90);
        FUN_004e6c30(local_24,&local_84,local_48);
        FUN_004e6ab0(&local_84,&local_cc,local_6c);
        uVar3 = FUN_004600d0(local_6c,local_48,local_48,&local_90);
        FUN_004e6c30(&local_90,uVar3);
        FUN_004e73d0(&local_90,&local_90);
        puVar5 = (undefined4 *)(param_2 + 0x2c);
        *puVar5 = local_90;
        *(undefined4 *)(param_2 + 0x30) = local_8c;
        *(undefined4 *)(param_2 + 0x34) = local_88;
        FUN_004e7910(puVar5,puVar5);
        iVar4 = FUN_004518b0(puVar5);
        return iVar4;
      }
    }
    else {
      iVar4 = FUN_004e71d0(&local_84,&local_78);
      if (iVar4 != 0) {
        *(undefined4 *)(param_2 + 0x2c) = local_cc;
        *(undefined4 *)(param_2 + 0x30) = local_c8;
        *(undefined4 *)(param_2 + 0x34) = local_c4;
        return 0;
      }
    }
    *(undefined4 *)(param_2 + 0x2c) = local_9c;
    *(undefined4 *)(param_2 + 0x30) = local_98;
    *(undefined4 *)(param_2 + 0x34) = local_94;
  }
  return 0;
}

