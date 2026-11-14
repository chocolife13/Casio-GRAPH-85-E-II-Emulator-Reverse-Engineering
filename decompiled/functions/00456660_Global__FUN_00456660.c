// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00456660
// entry: 00456660  size: 872


int FUN_00456660(int param_1,int param_2)

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
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57a0(&local_90);
  FUN_004e5780(&local_78);
  iVar3 = 1;
  if (param_1 == 1) {
    iVar1 = FUN_0047ca80(*(undefined4 *)(param_2 + 4));
    if (iVar1 < 1) {
      return 9;
    }
    FUN_0047cc00(0);
    FUN_0047cbb0(0,iVar1);
    if (iVar1 < 1) {
      return 0;
    }
    while (iVar2 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),iVar3,param_2 + 0x20), iVar2 == 0) {
      iVar2 = FUN_00456660(0,param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_0047cb50(0,iVar3,param_2 + 0x2c);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_0052f820();
      if (iVar2 == 1) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      if (iVar1 < iVar3) {
        return 0;
      }
    }
  }
  else {
    local_84 = *(undefined4 *)(param_2 + 0x20);
    local_80 = *(undefined4 *)(param_2 + 0x24);
    local_6c = *(undefined4 *)(param_2 + 0x14);
    local_7c = *(undefined4 *)(param_2 + 0x28);
    local_68 = *(undefined4 *)(param_2 + 0x18);
    local_64 = *(undefined4 *)(param_2 + 0x1c);
    local_60 = *(undefined4 *)(param_2 + 8);
    local_5c = *(undefined4 *)(param_2 + 0xc);
    local_58 = *(undefined4 *)(param_2 + 0x10);
    iVar2 = FUN_004518b0(&local_6c);
    if (iVar2 == 0) {
      FUN_004e7680(&local_84,local_18);
      iVar3 = FUN_004e7210(&local_84,local_18);
      if (iVar3 != 0) {
        return 3;
      }
      iVar2 = FUN_00451710(&local_60);
      if (iVar2 == 0) {
        iVar3 = FUN_004e7250(&local_84,&local_78);
        if (iVar3 != 0) {
          *(undefined4 *)(param_2 + 0x2c) = local_78;
          *(undefined4 *)(param_2 + 0x30) = local_74;
          *(undefined4 *)(param_2 + 0x34) = local_70;
          return 0;
        }
        iVar3 = FUN_004e7310(&local_84,&local_60);
        if (iVar3 != 0) {
          *(undefined4 *)(param_2 + 0x2c) = local_90;
          *(undefined4 *)(param_2 + 0x30) = local_8c;
          *(undefined4 *)(param_2 + 0x34) = local_88;
          return 0;
        }
        iVar3 = FUN_004e71d0(&local_84,&local_78);
        if (iVar3 != 0) {
          iVar3 = FUN_004e71d0(&local_6c,&local_78);
          if (iVar3 != 0) {
            *(undefined4 *)(param_2 + 0x2c) = local_90;
            *(undefined4 *)(param_2 + 0x30) = local_8c;
            *(undefined4 *)(param_2 + 0x34) = local_88;
            return 0;
          }
          iVar3 = FUN_004e71d0(&local_6c,&local_90);
          if (iVar3 != 0) {
            *(undefined4 *)(param_2 + 0x2c) = local_78;
            *(undefined4 *)(param_2 + 0x30) = local_74;
            *(undefined4 *)(param_2 + 0x34) = local_70;
            return 0;
          }
        }
        FUN_004e6c30(&local_90,&local_6c,local_48);
        FUN_004e6c30(&local_60,&local_84,local_24);
        FUN_004e6ab0(&local_84,&local_90,local_30);
        FUN_004e6c30(&local_90,local_48,local_3c);
        FUN_004601a0(local_24,local_30,local_48,local_3c,&local_54,local_c);
        iVar2 = FUN_004e4020(&local_54);
        if (iVar2 == 0) {
          puVar4 = (undefined4 *)(param_2 + 0x2c);
          *puVar4 = local_54;
          *(undefined4 *)(param_2 + 0x30) = local_50;
          *(undefined4 *)(param_2 + 0x34) = local_4c;
          FUN_004e7910(puVar4,puVar4);
          iVar2 = FUN_004518b0(puVar4);
        }
      }
    }
  }
  return iVar2;
}

