// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00455440
// entry: 00455440  size: 682


int FUN_00455440(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [12];
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
  
  FUN_004e57a0(local_18);
  FUN_004e5840(local_24);
  FUN_004e5780(&local_54);
  FUN_004e7be0(local_18,local_48,10);
  iVar6 = param_2 + 0x28;
  iVar3 = FUN_00451710(iVar6);
  if (iVar3 == 0) {
    iVar1 = param_2 + 0x34;
    iVar3 = FUN_00451710(iVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_004e72d0(local_48,iVar6);
      if ((iVar3 == 0) && (iVar3 = FUN_004e72d0(local_48,iVar1), iVar3 == 0)) {
        iVar3 = param_2 + 4;
        iVar4 = FUN_004e72d0(iVar3,&local_54);
        if ((iVar4 == 0) && (iVar4 = FUN_004e72d0(local_48,iVar3), iVar4 == 0)) {
          FUN_004e6d00(iVar6,local_24,local_60);
          FUN_004e6d00(iVar1,local_24,local_3c);
          FUN_004e6ab0(local_60,local_3c,local_c);
          uVar5 = FUN_004e7410(iVar6,local_78,local_6c);
          FUN_004e6d00(local_60,uVar5);
          uVar5 = FUN_004e7410(iVar1,local_78,local_30);
          FUN_004e6d00(local_3c,uVar5);
          FUN_004e6ab0(local_6c,local_30,&local_84);
          uVar5 = FUN_004600d0(local_60,local_3c,local_78,&local_84);
          FUN_004e6c30(&local_84,uVar5);
          FUN_004e6c30(local_60,local_18,local_78);
          uVar5 = FUN_004e7410(iVar3,local_6c,local_30);
          FUN_004e6d00(local_78,uVar5);
          FUN_004e6ab0(&local_84,local_30,&local_84);
          uVar5 = FUN_004e6d00(iVar6,iVar3,local_78,local_6c);
          FUN_004e6ab0(iVar1,uVar5);
          uVar5 = FUN_004e7410(local_6c,local_78,local_6c);
          FUN_004e6d00(local_c,uVar5);
          uVar5 = FUN_004e6c30(&local_84,local_6c,local_78,&local_84);
          FUN_004e73d0(uVar5);
          iVar6 = FUN_004517d0(&local_84);
          if (iVar6 != 0) {
            return iVar6;
          }
          puVar2 = (undefined4 *)(param_2 + 0x40);
          *puVar2 = local_84;
          *(undefined4 *)(param_2 + 0x44) = local_80;
          *(undefined4 *)(param_2 + 0x48) = local_7c;
          FUN_004e7910(puVar2,puVar2);
          return 0;
        }
        *(undefined4 *)(param_2 + 0x40) = local_54;
        *(undefined4 *)(param_2 + 0x44) = local_50;
        *(undefined4 *)(param_2 + 0x48) = local_4c;
        return 0;
      }
      iVar3 = 3;
    }
  }
  return iVar3;
}

