// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c5ac0
// entry: 004c5ac0  size: 578


bool FUN_004c5ac0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_84 [6];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_0052f840();
  uVar7 = (uint)*(ushort *)(param_1 + 2);
  if (uVar7 != *(ushort *)(param_2 + 2)) {
    FUN_004e5630(9,param_4);
    return false;
  }
  if (uVar7 != *(ushort *)(param_3 + 2)) {
    FUN_004e5630(9,param_4);
    return false;
  }
  iVar4 = FUN_004c7060(param_3,&local_6c);
  if (iVar4 == 0) {
LAB_004c5b4e:
    FUN_004e5630(3,param_4);
    return false;
  }
  FUN_004e5780(local_24);
  iVar4 = FUN_004e71d0(local_24,&local_6c);
  if (iVar4 == 1) {
    FUN_004e5630(3,param_4);
    return false;
  }
  piVar1 = *(int **)(param_2 + 8);
  piVar2 = *(int **)(param_3 + 8);
  piVar3 = *(int **)(param_1 + 8);
  puVar5 = local_84;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar4 = 0;
  if (uVar7 != 0) {
    iVar8 = 0;
    do {
      puVar5 = (undefined4 *)(iVar8 + *piVar3);
      local_6c = *puVar5;
      local_68 = puVar5[1];
      local_64 = puVar5[2];
      puVar5 = (undefined4 *)(iVar8 + *piVar1);
      local_54 = *puVar5;
      local_50 = puVar5[1];
      local_4c = puVar5[2];
      puVar5 = (undefined4 *)(iVar8 + *piVar2);
      local_3c = *puVar5;
      local_38 = puVar5[1];
      local_34 = puVar5[2];
      FUN_004e0c40(&local_6c,&local_54,local_18,0);
      FUN_004e0c40(local_18,&local_3c,local_18,0);
      FUN_004e0880(local_84,local_18,local_84,0);
      iVar6 = FUN_004e4020(local_84);
      if (iVar6 != 0) goto LAB_004c5b4e;
      iVar6 = FUN_0052f820();
      if (iVar6 != 0) {
        FUN_004e5630(1,param_4);
        return false;
      }
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 0xc;
    } while (iVar4 < (int)uVar7);
  }
  *param_4 = local_84[0];
  param_4[1] = local_84[1];
  param_4[2] = local_84[2];
  FUN_004e3e70(param_4,param_4);
  iVar4 = FUN_004e4020(param_4);
  return iVar4 == 0;
}

