// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00454410
// entry: 00454410  size: 1573


int FUN_00454410(undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
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
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5ae0(local_24);
  FUN_004e5780(local_c);
  FUN_004e57a0(local_48);
  FUN_004e57c0(local_18);
  FUN_004e5840(local_30);
  FUN_004e5a60(&local_9c);
  FUN_004e5a40(&local_a8);
  puVar5 = (undefined4 *)(param_2 + 0x2c);
  iVar2 = FUN_004518b0(puVar5);
  if (iVar2 == 0) {
    iVar1 = param_2 + 0x38;
    iVar2 = FUN_00451810(iVar1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == 0) {
        local_90 = *puVar5;
        local_8c = *(undefined4 *)(param_2 + 0x30);
        local_88 = *(undefined4 *)(param_2 + 0x34);
      }
      else {
        uVar3 = FUN_004e6d00(local_18,puVar5,&local_78,local_48,&local_90);
        FUN_004e6c30(uVar3);
        if (param_4 == 1) {
          iVar2 = 0;
          local_90 = *param_3;
          local_8c = param_3[1];
          local_88 = param_3[2];
        }
      }
      iVar4 = FUN_004e71d0(&local_90,local_48);
      if (iVar4 != 0) {
        if (*(int *)(param_2 + 4) == -1) {
          *(undefined4 *)(param_2 + 0x68) = local_a8;
          *(undefined4 *)(param_2 + 0x6c) = local_a4;
          *(undefined4 *)(param_2 + 0x70) = local_a0;
          return 0;
        }
        if (*(int *)(param_2 + 4) == 0) {
          puVar5 = (undefined4 *)(param_2 + 0x74);
          *(undefined4 *)(param_2 + 0x68) = local_a8;
          *(undefined4 *)(param_2 + 0x6c) = local_a4;
          *(undefined4 *)(param_2 + 0x70) = local_a0;
        }
        else {
          puVar5 = (undefined4 *)(param_2 + 0x68);
        }
        *puVar5 = local_9c;
        puVar5[1] = local_98;
        puVar5[2] = local_94;
        return 0;
      }
      uVar3 = FUN_004e7730(&local_90,&local_78,local_48);
      iVar4 = FUN_004e71d0(uVar3);
      if (iVar4 != 0) {
        if (*(int *)(param_2 + 4) == -1) {
          *(undefined4 *)(param_2 + 0x68) = local_9c;
          *(undefined4 *)(param_2 + 0x6c) = local_98;
          *(undefined4 *)(param_2 + 0x70) = local_94;
          return 0;
        }
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x44);
          *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_2 + 0x48);
          *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x4c);
          *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x44);
          *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_2 + 0x48);
          *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_2 + 0x4c);
          return 0;
        }
        *(undefined4 *)(param_2 + 0x68) = local_a8;
        *(undefined4 *)(param_2 + 0x6c) = local_a4;
        *(undefined4 *)(param_2 + 0x70) = local_a0;
        return 0;
      }
      FUN_0045ef60(&local_90,puVar5,iVar2,&local_60);
      iVar2 = FUN_004e4020(&local_60);
      if (iVar2 == 0) {
        FUN_004e6dd0(&local_a8,local_24,&local_78);
        iVar2 = FUN_004e7310(iVar1,local_48);
        if (iVar2 == 0) {
          local_6c = local_78;
          local_68 = local_74;
          local_64 = local_70;
          FUN_004e6d00(&local_60,iVar1,&local_84);
        }
        else {
          FUN_004e6dd0(&local_78,iVar1,&local_6c);
          local_84 = local_60;
          local_80 = local_5c;
          local_7c = local_58;
        }
        uVar3 = FUN_004e7620(&local_84,local_54,&local_6c);
        iVar2 = FUN_004e7310(uVar3);
        if (iVar2 != 0) {
          if (*(int *)(param_2 + 4) == -1) {
            *(undefined4 *)(param_2 + 0x68) = local_9c;
            *(undefined4 *)(param_2 + 0x6c) = local_98;
            *(undefined4 *)(param_2 + 0x70) = local_94;
            return 0;
          }
          if (*(int *)(param_2 + 4) == 0) {
            *(undefined4 *)(param_2 + 0x68) = local_a8;
            *(undefined4 *)(param_2 + 0x6c) = local_a4;
            *(undefined4 *)(param_2 + 0x74) = local_9c;
            *(undefined4 *)(param_2 + 0x70) = local_a0;
            *(undefined4 *)(param_2 + 0x78) = local_98;
            *(undefined4 *)(param_2 + 0x7c) = local_94;
            return 0;
          }
          *(undefined4 *)(param_2 + 0x68) = local_a8;
          *(undefined4 *)(param_2 + 0x6c) = local_a4;
          *(undefined4 *)(param_2 + 0x70) = local_a0;
          return 0;
        }
        uVar3 = FUN_004e6d00(iVar1,&local_60,&local_78,&local_90);
        FUN_004e6d00(local_24,uVar3);
        iVar1 = param_2 + 0x44;
        FUN_004e6d00(iVar1,local_30,&local_78);
        FUN_004e6d00(&local_90,local_30,&local_6c);
        FUN_004e6d00(local_30,&local_a8,local_54);
        if (*(int *)(param_2 + 4) == -1) {
          FUN_004e6ab0(&local_78,&local_6c,&local_84);
          uVar3 = FUN_004e7620(&local_84,local_3c,local_54);
          iVar2 = FUN_004e7310(uVar3);
          if (iVar2 != 0) {
            *(undefined4 *)(param_2 + 0x68) = local_a8;
            *(undefined4 *)(param_2 + 0x6c) = local_a4;
            *(undefined4 *)(param_2 + 0x70) = local_a0;
            iVar2 = FUN_004e4020((undefined4 *)(param_2 + 0x68));
            return iVar2;
          }
          param_2 = param_2 + 0x68;
          FUN_004e6ab0(iVar1,&local_90,param_2);
LAB_00454994:
          FUN_004e7910(param_2,param_2);
          iVar2 = FUN_004e4020(param_2);
          return iVar2;
        }
        if (*(int *)(param_2 + 4) == 0) {
          FUN_004e6ab0();
          uVar3 = FUN_004e7620(&local_84,local_3c,local_54);
          iVar2 = FUN_004e7310(uVar3);
          puVar5 = (undefined4 *)(param_2 + 0x68);
          if (iVar2 == 0) {
            FUN_004e6ab0(iVar1,&local_90,puVar5);
            FUN_004e7910(puVar5,puVar5);
          }
          else {
            *puVar5 = local_a8;
            *(undefined4 *)(param_2 + 0x6c) = local_a4;
            *(undefined4 *)(param_2 + 0x70) = local_a0;
          }
          iVar2 = FUN_004e4020(puVar5);
          if (iVar2 == 0) {
            FUN_004e6c30(&local_78,&local_6c,&local_84);
            uVar3 = FUN_004e7620(&local_84,local_3c,local_54);
            iVar2 = FUN_004e7310(uVar3);
            if (iVar2 != 0) {
              *(undefined4 *)(param_2 + 0x74) = local_9c;
              *(undefined4 *)(param_2 + 0x78) = local_98;
              *(undefined4 *)(param_2 + 0x7c) = local_94;
              iVar2 = FUN_004e4020((undefined4 *)(param_2 + 0x74));
              return iVar2;
            }
            param_2 = param_2 + 0x74;
            FUN_004e6c30(iVar1,&local_90,param_2);
            goto LAB_00454994;
          }
        }
        else {
          FUN_004e6c30(&local_78,&local_6c,&local_84);
          uVar3 = FUN_004e7620(&local_84,local_3c,local_54);
          iVar2 = FUN_004e7310(uVar3);
          if (iVar2 != 0) {
            *(undefined4 *)(param_2 + 0x74) = local_9c;
            *(undefined4 *)(param_2 + 0x78) = local_98;
            *(undefined4 *)(param_2 + 0x7c) = local_94;
            iVar2 = FUN_004e4020((undefined4 *)(param_2 + 0x74));
            return iVar2;
          }
          param_2 = param_2 + 0x68;
          FUN_004e6c30(iVar1,&local_90,param_2);
          FUN_004e7910(param_2,param_2);
          iVar2 = FUN_004e4020(param_2);
        }
      }
    }
  }
  return iVar2;
}

