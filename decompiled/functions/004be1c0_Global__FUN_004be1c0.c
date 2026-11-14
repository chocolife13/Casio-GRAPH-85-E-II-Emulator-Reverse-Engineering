// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004be1c0
// entry: 004be1c0  size: 611


undefined4 FUN_004be1c0(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_004e5780(&local_6c);
  FUN_004e57e0(local_30);
  FUN_004e7be0(local_30,local_30,0xfffffff3);
  uVar7 = (uint)*(ushort *)(param_1 + 2);
  FUN_004e57a0(param_5);
  piVar1 = *(int **)(param_1 + 8);
  piVar2 = *(int **)(param_2 + 8);
  piVar3 = *(int **)(param_3 + 8);
  iVar4 = *piVar1;
  local_60 = *(undefined4 *)(iVar4 + 0xc);
  local_5c = *(undefined4 *)(iVar4 + 0x10);
  local_58 = *(undefined4 *)(iVar4 + 0x14);
  puVar5 = (undefined4 *)*piVar1;
  local_48 = *puVar5;
  local_44 = puVar5[1];
  local_40 = puVar5[2];
  FUN_004e0b00(&local_60,&local_48,param_4,0);
  FUN_004e0c40(param_4,local_30,local_18,0);
  local_78 = 2;
  iVar4 = FUN_004e71d0(param_5,&local_6c);
  if (iVar4 == 0) {
    iVar4 = 0x18;
    do {
      if ((int)uVar7 <= local_78) break;
      puVar5 = (undefined4 *)(iVar4 + *piVar1);
      local_60 = *puVar5;
      local_5c = puVar5[1];
      local_58 = puVar5[2];
      iVar6 = *piVar1 + -0xc + iVar4;
      local_48 = *(undefined4 *)(*piVar1 + -0xc + iVar4);
      local_44 = *(undefined4 *)(iVar6 + 4);
      local_40 = *(undefined4 *)(iVar6 + 8);
      FUN_004e0b00(&local_60,&local_48,&local_60,0);
      FUN_004e0b00(&local_60,param_4,&local_60,0);
      FUN_004e23b0(&local_60,&local_60,0);
      iVar6 = FUN_004e7290(&local_60,local_18);
      if (iVar6 == 1) {
        *param_5 = local_6c;
        param_5[1] = local_68;
        param_5[2] = local_64;
      }
      else {
        local_78 = local_78 + 1;
        iVar4 = iVar4 + 0xc;
      }
      iVar6 = FUN_004e71d0(param_5,&local_6c);
    } while (iVar6 == 0);
  }
  iVar4 = FUN_004e71d0(param_5,&local_6c);
  if (iVar4 == 1) {
    *param_4 = local_6c;
    param_4[1] = local_68;
    param_4[2] = local_64;
  }
  else if (uVar7 != 0) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(*piVar3 + iVar4);
      *puVar5 = local_6c;
      puVar5[1] = local_68;
      puVar5[2] = local_64;
      puVar5 = (undefined4 *)(*piVar2 + iVar4);
      iVar4 = iVar4 + 0xc;
      uVar7 = uVar7 - 1;
      *puVar5 = local_6c;
      puVar5[1] = local_68;
      puVar5[2] = local_64;
    } while (uVar7 != 0);
  }
  iVar4 = FUN_0052f820();
  if (iVar4 == 0) {
    return 1;
  }
  FUN_004e5630(1,param_2);
  return 0;
}

