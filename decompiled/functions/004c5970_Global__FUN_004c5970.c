// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c5970
// entry: 004c5970  size: 336


bool FUN_004c5970(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_60 [6];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_18 [24];
  
  FUN_0052f840();
  uVar6 = (uint)*(ushort *)(param_1 + 2);
  if (uVar6 != *(ushort *)(param_2 + 2)) {
    FUN_004e5630(9,param_3);
    return false;
  }
  piVar1 = *(int **)(param_2 + 8);
  piVar2 = *(int **)(param_1 + 8);
  puVar5 = local_60;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar4 = 0;
  if (uVar6 != 0) {
    iVar7 = 0;
    do {
      puVar5 = (undefined4 *)(*piVar2 + iVar7);
      local_30 = *puVar5;
      local_2c = puVar5[1];
      local_28 = puVar5[2];
      puVar5 = (undefined4 *)(*piVar1 + iVar7);
      local_48 = *puVar5;
      local_44 = puVar5[1];
      local_40 = puVar5[2];
      FUN_004e0c40(&local_30,&local_48,local_18,0);
      FUN_004e0880(local_60,local_18,local_60,0);
      iVar3 = FUN_004e4020(local_60);
      if (iVar3 != 0) {
        FUN_004e5630(3,param_3);
        return false;
      }
      iVar3 = FUN_0052f820();
      if (iVar3 != 0) {
        FUN_004e5630(1,param_3);
        return false;
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar4 < (int)uVar6);
  }
  *param_3 = local_60[0];
  param_3[1] = local_60[1];
  param_3[2] = local_60[2];
  FUN_004e3e70(param_3,param_3);
  iVar4 = FUN_004e4020(param_3);
  return iVar4 == 0;
}

