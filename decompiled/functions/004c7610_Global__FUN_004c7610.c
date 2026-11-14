// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c7610
// entry: 004c7610  size: 574


undefined4 FUN_004c7610(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_18 [24];
  
  FUN_004e5780(local_54);
  FUN_004e57a0(local_18);
  FUN_004e7be0(local_18,local_18,2);
  iVar2 = FUN_004c5600(param_1,&local_30);
  if (iVar2 == 0) {
    *param_3 = local_30;
    param_3[1] = local_2c;
    param_3[2] = local_28;
    *param_2 = local_30;
    param_2[1] = local_2c;
    param_2[2] = local_28;
    return 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  uVar7 = (uint)*(ushort *)(param_1 + 2);
  iVar2 = 0;
  if (uVar7 != 0) {
    iVar6 = 0;
    do {
      puVar3 = (undefined4 *)(iVar6 + *piVar1);
      local_60 = *puVar3;
      local_5c = puVar3[1];
      local_58 = puVar3[2];
      iVar4 = FUN_004e7250(&local_60,local_54);
      if (iVar4 != 0) {
        FUN_004e5630(3,param_3);
        FUN_004e5630(3,param_2);
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar2 < (int)uVar7);
  }
  piVar5 = (int *)FUN_004ad630((uVar7 * 3 & 0x3fff) << 2);
  if (piVar5 == (int *)0x0) {
    FUN_004e5630(4,param_3);
    FUN_004e5630(4,param_2);
    return 0;
  }
  FUN_004f9690(param_2,piVar5,uVar7,1);
  iVar2 = FUN_004c7060(param_1,param_3);
  if (iVar2 == 0) {
    FUN_004e5630(3,param_2);
    FUN_004ad6d0(piVar5);
    return 0;
  }
  iVar2 = 0;
  if (uVar7 != 0) {
    iVar6 = 0;
    do {
      puVar3 = (undefined4 *)(iVar6 + *piVar1);
      local_48 = *puVar3;
      local_44 = puVar3[1];
      local_40 = puVar3[2];
      FUN_004e0dd0(&local_48,param_3,&local_48,1);
      FUN_004e3e70(&local_48,&local_48);
      FUN_004e0c40(&local_48,local_18,&local_48,1);
      puVar3 = (undefined4 *)(*piVar5 + iVar6);
      *puVar3 = local_48;
      puVar3[1] = local_44;
      puVar3[2] = local_40;
      iVar4 = FUN_004e4020(&local_48);
      if (iVar4 != 0) {
        *param_2 = local_48;
        param_2[1] = local_44;
        param_2[2] = local_40;
        FUN_004ad6d0(piVar5);
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar2 < (int)uVar7);
  }
  return 1;
}

