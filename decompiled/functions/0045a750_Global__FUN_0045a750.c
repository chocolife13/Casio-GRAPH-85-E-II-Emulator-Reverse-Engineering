// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045a750
// entry: 0045a750  size: 1453


int FUN_0045a750(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_108;
  int local_104;
  undefined1 local_100 [12];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [12];
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
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_b8);
  FUN_004e57a0(local_7c);
  FUN_004e7be0(local_7c,&local_88,0xb);
  FUN_004e5a40(local_c);
  FUN_004e7be0(local_7c,local_a0,0x32);
  local_6c = local_b8;
  local_68 = local_b4;
  local_64 = local_b0;
  local_70 = 1;
  FUN_0047cc30(*(undefined4 *)(param_2 + 4),&local_108,&local_104);
  if ((local_108 < 2) || (local_104 < 2)) {
    iVar2 = 9;
  }
  else {
    iVar2 = FUN_0047ccf0(0,local_108,local_104);
    if (iVar2 == 0) {
      FUN_004e5780(local_ac);
      iVar2 = 1;
      if (0 < local_108) {
        do {
          FUN_004e5780(local_100);
          iVar5 = 1;
          if (0 < local_104) {
            do {
              iVar3 = FUN_0047cc50(*(undefined4 *)(param_2 + 4),iVar2,iVar5,local_e8);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = FUN_00451770(local_e8);
              if (iVar3 != 0) {
                return iVar3;
              }
              FUN_004e6ab0(local_100,local_e8,local_100);
              iVar3 = FUN_004e4020(local_100);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = FUN_0052f820();
              if (iVar3 == 1) {
                return 1;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= local_104);
          }
          iVar5 = FUN_004e71d0(local_100,&local_b8);
          if (iVar5 != 0) {
            return 3;
          }
          iVar5 = FUN_0047ccc0(0,iVar2,local_104,local_100);
          if (iVar5 != 0) {
            return iVar5;
          }
          FUN_004e6ab0(local_ac,local_100,local_ac);
          iVar5 = FUN_004e4020(local_ac);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= local_108);
      }
      FUN_004e5780(&local_f4);
      iVar2 = 1;
      if (0 < local_104) {
        do {
          FUN_004e5780(local_d0);
          iVar5 = 1;
          if (0 < local_108) {
            do {
              iVar3 = FUN_0047cc50(*(undefined4 *)(param_2 + 4),iVar5,iVar2,local_e8);
              if (iVar3 != 0) {
                return iVar3;
              }
              FUN_004e6ab0(local_d0,local_e8,local_d0);
              iVar3 = FUN_0052f820();
              if (iVar3 == 1) {
                return 1;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= local_108);
          }
          iVar5 = FUN_004e71d0(local_d0,&local_b8);
          if (iVar5 != 0) {
            return 3;
          }
          iVar5 = 1;
          if (0 < local_108) {
            do {
              iVar3 = FUN_0047cc50(0,iVar5,local_104,local_100);
              if (iVar3 != 0) {
                return iVar3;
              }
              uVar4 = FUN_004e6dd0(local_c,local_100,local_dc);
              iVar3 = FUN_004e7250(local_d0,uVar4);
              if (iVar3 == 0) {
                FUN_004e6dd0(local_100,local_a0,local_18);
                FUN_004e6dd0(local_d0,local_a0,local_24);
                FUN_004e6d00(local_18,local_24,local_dc);
                FUN_004e6dd0(local_dc,local_ac,local_dc);
                FUN_004e6d00(local_dc,local_a0,local_dc);
                FUN_004e6d00(local_dc,local_a0,local_c4);
              }
              else {
                FUN_004e6d00(local_d0,local_100,local_dc);
                FUN_004e6dd0(local_dc,local_ac,local_c4);
              }
              iVar3 = FUN_0047ccc0(0,iVar5,iVar2,local_c4);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = FUN_0047cc50(*(undefined4 *)(param_2 + 4),iVar5,iVar2,local_e8);
              if (iVar3 != 0) {
                return iVar3;
              }
              FUN_004e7390(local_c4,local_c4);
              FUN_004e6dd0(local_e8,local_c4,local_e8);
              FUN_004e6c30(local_e8,local_c4,local_94);
              FUN_004e6d00(local_94,local_94,local_94);
              FUN_004e6ab0(&local_f4,local_94,&local_f4);
              iVar3 = FUN_004e4020(&local_f4);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = FUN_0052f820();
              if (iVar3 == 1) {
                return 1;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= local_108);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= local_104);
      }
      FUN_004e5070((local_108 + -1) * (local_104 + -1),&local_48);
      local_60 = local_f4;
      local_5c = local_f0;
      local_54 = local_88;
      local_58 = local_ec;
      local_50 = local_84;
      local_4c = local_80;
      iVar2 = FUN_00455200(0,&local_70);
      if (iVar2 == 0) {
        puVar1 = (undefined4 *)(param_2 + 0x14);
        *puVar1 = local_30;
        *(undefined4 *)(param_2 + 0x18) = local_2c;
        *(undefined4 *)(param_2 + 0x1c) = local_28;
        FUN_004e7910(puVar1,puVar1);
        iVar2 = FUN_004518b0(puVar1);
        if (iVar2 == 0) {
          puVar1 = (undefined4 *)(param_2 + 8);
          *puVar1 = local_f4;
          *(undefined4 *)(param_2 + 0xc) = local_f0;
          *(undefined4 *)(param_2 + 0x10) = local_ec;
          FUN_004e7910(puVar1,puVar1);
          puVar1 = (undefined4 *)(param_2 + 0x20);
          *puVar1 = local_48;
          *(undefined4 *)(param_2 + 0x24) = local_44;
          *(undefined4 *)(param_2 + 0x28) = local_40;
          FUN_004e7910(puVar1,puVar1);
          return 0;
        }
      }
    }
  }
  return iVar2;
}

