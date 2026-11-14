// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c6990
// entry: 004c6990  size: 487


bool FUN_004c6990(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18 [6];
  
  iVar3 = FUN_004c5600(param_1,&local_60);
  if (iVar3 == 0) {
    *param_3 = local_60;
    param_3[1] = local_5c;
    param_3[2] = local_58;
    return false;
  }
  iVar3 = FUN_004c5600(param_2,&local_78);
  if (iVar3 == 0) {
    *param_3 = local_78;
    param_3[1] = local_74;
    param_3[2] = local_70;
    return false;
  }
  iVar3 = FUN_004e71d0(&local_60,&local_78);
  if (iVar3 == 0) {
    FUN_004e5630(9,param_3);
    return false;
  }
  if (iVar3 == -1) {
    FUN_004e5630(3,param_3);
    return false;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 2);
  iVar3 = FUN_004c7060(param_2,&local_48);
  if (iVar3 == 0) {
    *param_3 = local_48;
    param_3[1] = local_44;
    param_3[2] = local_40;
    return false;
  }
  piVar1 = *(int **)(param_2 + 8);
  piVar2 = *(int **)(param_1 + 8);
  puVar4 = local_18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (uVar5 != 0) {
    iVar3 = 0;
    do {
      puVar4 = (undefined4 *)(*piVar2 + iVar3);
      local_78 = *puVar4;
      local_74 = puVar4[1];
      local_70 = puVar4[2];
      puVar4 = (undefined4 *)(*piVar1 + iVar3);
      local_30 = *puVar4;
      local_2c = puVar4[1];
      local_28 = puVar4[2];
      FUN_004e0c40(&local_78,&local_30,&local_78,1);
      FUN_004e0880(local_18,&local_78,local_18,1);
      iVar3 = iVar3 + 0xc;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_004e0dd0(local_18,&local_48,param_3,1);
  iVar3 = FUN_004e4020(param_3);
  if (iVar3 != 0) {
    return false;
  }
  FUN_004e3e70(param_3,param_3);
  iVar3 = FUN_004e4020(param_3);
  return iVar3 == 0;
}

