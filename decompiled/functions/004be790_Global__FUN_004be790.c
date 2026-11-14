// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004be790
// entry: 004be790  size: 1188


undefined4
FUN_004be790(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int local_ac;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_84 [6];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_3c [2];
  int *local_34;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  piVar2 = *(int **)(param_1 + 8);
  piVar3 = (int *)param_3[2];
  piVar4 = (int *)param_2[2];
  FUN_004e5780(local_24);
  uVar1 = *(ushort *)(param_1 + 2);
  piVar10 = (int *)0x0;
  local_a4 = 0;
  piVar5 = (int *)FUN_004ad630(0x30);
  if (piVar5 == (int *)0x0) {
    FUN_004e5630(4,local_84);
  }
  else {
    FUN_004f96c0(local_18,piVar5,2,2,1);
    piVar10 = (int *)FUN_004ad630(0x18);
    if (piVar10 == (int *)0x0) {
      FUN_004e5630(4,local_84);
    }
    else {
      FUN_004f96c0(local_3c,piVar10,2,1,1);
      FUN_004e0c40(param_4,param_1,local_54,0);
      iVar6 = FUN_004e4020(local_54);
      if (iVar6 == 0) {
        local_a4 = local_4c;
        iVar6 = FUN_004e71d0(param_5,local_24);
        if (iVar6 == 1) {
          FUN_004ad6d0(piVar4);
          FUN_004ad6d0(piVar3);
          FUN_004e1c60(local_54,param_2,1,0);
          FUN_004e1be0(local_54,param_3,1,0);
        }
        else {
          FUN_004e0c40(param_4,param_5,&local_6c,0);
          FUN_004e1c60(&local_6c,&local_9c,1,0);
          puVar9 = (undefined4 *)*piVar5;
          *puVar9 = local_9c;
          puVar9[1] = local_98;
          puVar9[2] = local_94;
          FUN_004e1be0(&local_6c,&local_9c,1,0);
          iVar6 = *piVar5;
          *(undefined4 *)(iVar6 + 0x18) = local_9c;
          *(undefined4 *)(iVar6 + 0x1c) = local_98;
          *(undefined4 *)(iVar6 + 0x20) = local_94;
          puVar9 = (undefined4 *)*piVar5;
          puVar9[9] = *puVar9;
          puVar9[10] = puVar9[1];
          puVar9[0xb] = puVar9[2];
          FUN_004e26b0(&local_9c,&local_9c,0);
          iVar6 = *piVar5;
          *(undefined4 *)(iVar6 + 0xc) = local_9c;
          *(undefined4 *)(iVar6 + 0x10) = local_98;
          *(undefined4 *)(iVar6 + 0x14) = local_94;
          puVar9 = (undefined4 *)*piVar2;
          local_6c = *puVar9;
          local_68 = puVar9[1];
          local_64 = puVar9[2];
          FUN_004e0c40(param_4,&local_6c,&local_6c,0);
          FUN_004e1c60(&local_6c,&local_9c,1,0);
          puVar9 = (undefined4 *)*piVar10;
          *puVar9 = local_9c;
          puVar9[1] = local_98;
          puVar9[2] = local_94;
          FUN_004e1be0(&local_6c,&local_9c,1,0);
          iVar6 = *piVar10;
          local_ac = 1;
          *(undefined4 *)(iVar6 + 0xc) = local_9c;
          *(undefined4 *)(iVar6 + 0x10) = local_98;
          *(undefined4 *)(iVar6 + 0x14) = local_94;
          puVar9 = (undefined4 *)*piVar10;
          puVar8 = (undefined4 *)*piVar4;
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          puVar8[2] = puVar9[2];
          iVar6 = *piVar10;
          puVar9 = (undefined4 *)*piVar3;
          *puVar9 = *(undefined4 *)(iVar6 + 0xc);
          puVar9[1] = *(undefined4 *)(iVar6 + 0x10);
          puVar9[2] = *(undefined4 *)(iVar6 + 0x14);
          if (1 < uVar1) {
            iVar6 = 0xc;
            do {
              FUN_004e0c40(local_18,local_3c,local_3c,0);
              iVar7 = FUN_004e4020(local_3c);
              if (iVar7 != 0) {
                puVar9 = local_3c;
                goto LAB_004bebb0;
              }
              puVar8 = (undefined4 *)(iVar6 + *piVar4);
              puVar9 = (undefined4 *)*local_34;
              *puVar8 = *puVar9;
              puVar8[1] = puVar9[1];
              puVar8[2] = puVar9[2];
              iVar7 = *local_34;
              puVar9 = (undefined4 *)(iVar6 + *piVar3);
              *puVar9 = *(undefined4 *)(iVar7 + 0xc);
              puVar9[1] = *(undefined4 *)(iVar7 + 0x10);
              puVar9[2] = *(undefined4 *)(iVar7 + 0x14);
              local_ac = local_ac + 1;
              piVar10 = local_34;
              iVar6 = iVar6 + 0xc;
            } while (local_ac < (int)(uint)uVar1);
          }
        }
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(piVar10);
        FUN_004ad6d0(local_4c);
        iVar6 = FUN_0052f820();
        if (iVar6 == 0) {
          return 1;
        }
        FUN_004e5630(1,local_84);
        *param_4 = local_84[0];
        param_4[1] = local_84[1];
        param_4[2] = local_84[2];
        *param_5 = local_84[0];
        param_5[1] = local_84[1];
        param_5[2] = local_84[2];
        *param_2 = local_84[0];
        param_2[1] = local_84[1];
        param_2[2] = local_84[2];
        *param_3 = local_84[0];
        param_3[1] = local_84[1];
        param_3[2] = local_84[2];
        return 0;
      }
      puVar9 = local_54;
LAB_004bebb0:
      puVar8 = local_84;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
    }
  }
  *param_4 = local_84[0];
  param_4[1] = local_84[1];
  param_4[2] = local_84[2];
  *param_5 = local_84[0];
  param_5[1] = local_84[1];
  param_5[2] = local_84[2];
  *param_2 = local_84[0];
  param_2[1] = local_84[1];
  param_2[2] = local_84[2];
  *param_3 = local_84[0];
  param_3[1] = local_84[1];
  param_3[2] = local_84[2];
  FUN_004ad6d0(piVar5);
  FUN_004ad6d0(piVar10);
  FUN_004ad6d0(local_a4);
  return 0;
}

