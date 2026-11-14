// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c7d70
// entry: 004c7d70  size: 1303


undefined4
FUN_004c7d70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_90 [6];
  undefined4 local_78 [6];
  undefined4 local_60 [6];
  undefined4 local_48 [6];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_0052f840();
  puVar3 = local_48;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_004e57a0(local_18);
  iVar5 = FUN_004e4000(param_1);
  if (iVar5 == 0) {
    uVar1 = *(ushort *)(param_1 + 2);
    uVar7 = (uint)uVar1;
    if ((uVar1 == 0) || (uVar7 != 999 && 0x3e6 < uVar1)) {
      uVar8 = 9;
    }
    else {
      FUN_004e5070(uVar7,param_2);
      puVar3 = local_78;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      puVar3 = local_90;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      piVar2 = *(int **)(param_1 + 8);
      iVar5 = 0;
      if (uVar7 != 0) {
        iVar6 = 0;
        do {
          puVar3 = (undefined4 *)(*piVar2 + iVar6);
          local_a8 = *puVar3;
          local_a4 = puVar3[1];
          local_a0 = puVar3[2];
          FUN_004e0880(local_78,&local_a8,local_78,0);
          FUN_004e2770(&local_a8,&local_a8,0);
          FUN_004e0880(local_90,&local_a8,local_90,0);
          iVar4 = FUN_0052f820();
          if (iVar4 != 0) {
            uVar8 = 1;
            goto LAB_004c8272;
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0xc;
        } while (iVar5 < (int)uVar7);
      }
      FUN_004e7910(local_78,local_78);
      FUN_004e7910(local_90,local_90);
      *param_4 = local_78[0];
      param_4[1] = local_78[1];
      param_4[2] = local_78[2];
      *param_5 = local_90[0];
      param_5[1] = local_90[1];
      param_5[2] = local_90[2];
      iVar5 = FUN_004e4020(local_78);
      if (iVar5 != 0) {
        FUN_004e5630(3,param_3);
        FUN_004e5630(3,param_4);
        FUN_004e5630(3,param_5);
        FUN_004e5630(3,param_6);
        FUN_004e5630(3,param_7);
        return 1;
      }
      FUN_004e0dd0(param_4,param_2,param_3,0);
      FUN_004e3e70(param_3,param_3);
      iVar5 = FUN_004e4020(local_90);
      if (iVar5 != 0) {
        FUN_004e5630(3,param_5);
        FUN_004e5630(3,param_6);
        FUN_004e5630(3,param_7);
        return 1;
      }
      iVar5 = FUN_0052f820();
      if (iVar5 == 0) {
        puVar3 = local_60;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        iVar5 = 0;
        local_b0 = 0;
        if (uVar7 != 0) {
          do {
            puVar3 = (undefined4 *)(*piVar2 + iVar5);
            local_a8 = *puVar3;
            local_a4 = puVar3[1];
            local_a0 = puVar3[2];
            FUN_004e0b00(&local_a8,param_3,&local_a8,0);
            FUN_004e2770(&local_a8,&local_a8,0);
            FUN_004e0880(local_60,&local_a8,local_60,0);
            iVar6 = FUN_0052f820();
            if (iVar6 != 0) {
              uVar8 = 1;
              goto LAB_004c8272;
            }
            iVar5 = iVar5 + 0xc;
            local_b0 = local_b0 + 1;
          } while (local_b0 < (int)uVar7);
        }
        FUN_004e0dd0(local_60,param_2,local_30,0);
        FUN_004e0b00(param_2,local_18,&local_a8,0);
        FUN_004e0dd0(local_60,&local_a8,local_60,0);
        iVar5 = FUN_004e72d0(param_2,local_48);
        if (iVar5 == 1) {
          FUN_004e5630(3,param_6);
          FUN_004e5630(3,param_7);
          return 1;
        }
        iVar5 = FUN_004e72d0(local_30,local_48);
        if (iVar5 == 1) {
          FUN_004e5780(local_30);
        }
        iVar5 = FUN_004e72d0(local_60,local_48);
        if (iVar5 == 1) {
          FUN_004e5780(local_60);
        }
        FUN_004e1790(local_30,param_6,0);
        FUN_004e3e70(param_6,param_6);
        iVar5 = FUN_004e72d0(param_2,local_18);
        if (iVar5 == 1) {
          FUN_004e5630(3,param_7);
          return 1;
        }
        FUN_004e1790(local_60,param_7,0);
        FUN_004e3e70(param_7,param_7);
        return 1;
      }
      uVar8 = 1;
    }
  }
  else {
    uVar8 = 0x19;
  }
LAB_004c8272:
  FUN_004c95b0(uVar8,param_2,param_3,param_4,param_5,param_6,param_7);
  return 0;
}

