// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004be430
// entry: 004be430  size: 849


undefined4
FUN_004be430(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_a8;
  uint local_a4;
  int *local_a0;
  undefined1 local_9c [12];
  undefined4 local_90 [6];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_60 [24];
  undefined4 local_48 [2];
  int *local_40;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_004e5780(local_9c);
  FUN_004e57a0(local_18);
  uVar1 = *(ushort *)(param_1 + 2);
  local_a0 = *(int **)(param_1 + 8);
  local_a4 = (uint)uVar1;
  iVar2 = FUN_004c57b0(param_2,&local_c0);
  if (iVar2 == 0) {
    puVar3 = &local_c0;
  }
  else {
    FUN_004e0b00(param_2,&local_c0,local_48,0);
    iVar2 = FUN_004e4020(local_48);
    if (iVar2 == 0) {
      iVar7 = 0;
      iVar2 = 0;
      iVar5 = 0;
      do {
        if ((int)(uint)uVar1 <= iVar7) break;
        puVar3 = (undefined4 *)(*local_40 + iVar5);
        local_c0 = *puVar3;
        local_bc = puVar3[1];
        local_b8 = puVar3[2];
        iVar4 = FUN_004e7290(&local_c0,local_9c);
        if (iVar4 == 1) {
          iVar2 = 1;
        }
        else {
          iVar4 = FUN_004e7250(&local_c0,local_9c);
          if (iVar4 == 1) {
            iVar2 = -1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar2 == 0);
      if (1 < uVar1) {
        iVar5 = 0xc;
        local_a8 = local_a4 - 1;
        do {
          iVar7 = 0;
          puVar3 = (undefined4 *)(*local_40 + iVar5);
          local_c0 = *puVar3;
          local_bc = puVar3[1];
          local_b8 = puVar3[2];
          iVar4 = FUN_004e7290(&local_c0,local_9c);
          if (iVar4 == 1) {
            iVar7 = 1;
          }
          else {
            iVar4 = FUN_004e7250(&local_c0,local_9c);
            if (iVar4 == 1) {
              iVar7 = -1;
            }
          }
          if ((iVar7 * iVar2 < 0) && (iVar7 != 0)) {
            FUN_004e0880(param_4,local_18,param_4,0);
            iVar2 = iVar7;
          }
          iVar5 = iVar5 + 0xc;
          local_a8 = local_a8 + -1;
        } while (local_a8 != 0);
      }
      puVar3 = (undefined4 *)(*local_a0 + -0xc + local_a4 * 0xc);
      local_c0 = *puVar3;
      local_bc = puVar3[1];
      local_b8 = puVar3[2];
      puVar3 = (undefined4 *)*local_a0;
      local_78 = *puVar3;
      local_74 = puVar3[1];
      local_70 = puVar3[2];
      FUN_004e0b00(&local_c0,&local_78,&local_c0,0);
      FUN_004e23b0(&local_c0,&local_c0,0);
      FUN_004e5980(local_30);
      FUN_004e0c40(param_4,local_30,&local_78,0);
      FUN_004e0dd0(&local_78,&local_c0,param_3,0);
      FUN_004e5070(0x19,local_60);
      FUN_004e7be0(local_60,local_60,0xfffffffe);
      FUN_004e0c40(local_60,local_30,&local_78,0);
      FUN_004e0dd0(&local_78,&local_c0,param_5,0);
      FUN_004ad6d0(local_40);
      iVar2 = FUN_0052f820();
      if (iVar2 != 0) {
        FUN_004e5630(1,local_90);
        *param_3 = local_90[0];
        param_3[1] = local_90[1];
        param_3[2] = local_90[2];
        *param_4 = local_90[0];
        param_4[1] = local_90[1];
        param_4[2] = local_90[2];
        *param_5 = local_90[0];
        param_5[1] = local_90[1];
        param_5[2] = local_90[2];
        return 0;
      }
      return 1;
    }
    puVar3 = local_48;
  }
  puVar6 = local_90;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  *param_3 = local_90[0];
  param_3[1] = local_90[1];
  param_3[2] = local_90[2];
  *param_4 = local_90[0];
  param_4[1] = local_90[1];
  param_4[2] = local_90[2];
  *param_5 = local_90[0];
  param_5[1] = local_90[1];
  param_5[2] = local_90[2];
  return 0;
}

