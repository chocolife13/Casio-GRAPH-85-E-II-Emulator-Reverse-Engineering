// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004cd860
// entry: 004cd860  size: 1558


bool FUN_004cd860(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint local_84;
  int local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_24 [24];
  undefined1 local_c [12];
  
  piVar1 = (int *)param_1[2];
  local_5c = (int *)param_3[2];
  iVar5 = FUN_004e4020(param_1);
  if (iVar5 != 0) {
    return false;
  }
  iVar5 = FUN_004e4020(param_3);
  if (iVar5 != 0) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return false;
  }
  iVar5 = FUN_004e4000(param_1);
  local_84 = (uint)*(ushort *)((int)param_1 + 2);
  FUN_004e57a0(local_24);
  FUN_004e7be0(local_24,local_24,0xffffff9d);
  FUN_004e5780(local_c);
  if (iVar5 == 0) {
    iVar6 = (local_84 + 1) * param_2;
    iVar5 = *piVar1 + iVar6 * 0xc;
    local_74 = *(undefined4 *)(*piVar1 + iVar6 * 0xc);
    local_70 = *(undefined4 *)(iVar5 + 4);
    local_6c = *(undefined4 *)(iVar5 + 8);
    FUN_004e23b0(&local_74,&local_74,1);
    iVar5 = param_2 + 1;
    local_80 = param_2;
    if (iVar5 < (int)local_84) {
      iVar6 = (iVar5 * local_84 + param_2) * 0xc;
      do {
        puVar9 = (undefined4 *)(*piVar1 + iVar6);
        local_58 = *puVar9;
        local_54 = puVar9[1];
        local_50 = puVar9[2];
        FUN_004e23b0(&local_58,&local_58,1);
        iVar7 = FUN_004e7250(&local_74,&local_58);
        if (iVar7 == 1) {
          local_74 = local_58;
          local_70 = local_54;
          local_6c = local_50;
          local_80 = iVar5;
        }
        else if (iVar7 == -1) goto LAB_004cdce2;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + local_84 * 0xc;
      } while (iVar5 < (int)local_84);
    }
    iVar5 = FUN_004e7250(&local_74,local_24);
    if (iVar5 == 1) {
      FUN_004e5630(3,param_1);
      return (bool)2;
    }
    if (iVar5 == -1) {
      FUN_004e5630(3,param_1);
      return false;
    }
    if (local_80 != param_2) {
      *param_4 = *param_4 + 1;
      if (local_84 != 0) {
        iVar5 = local_80 * local_84 * 0xc;
        iVar6 = local_84 * param_2 * 0xc;
        do {
          iVar7 = *piVar1;
          puVar9 = (undefined4 *)(iVar6 + iVar7);
          iVar6 = iVar6 + 0xc;
          local_40 = *puVar9;
          uVar2 = puVar9[1];
          local_38 = puVar9[2];
          *puVar9 = *(undefined4 *)(iVar5 + iVar7);
          puVar9[1] = *(undefined4 *)(iVar5 + iVar7 + 4);
          puVar9[2] = *(undefined4 *)(iVar5 + iVar7 + 8);
          puVar9 = (undefined4 *)(*piVar1 + iVar5);
          iVar5 = iVar5 + 0xc;
          *puVar9 = local_40;
          puVar9[1] = uVar2;
          puVar9[2] = local_38;
          local_84 = local_84 - 1;
        } while (local_84 != 0);
      }
      puVar9 = (undefined4 *)(*local_5c + param_2 * 0xc);
      puVar11 = (undefined4 *)(*local_5c + local_80 * 0xc);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      *puVar9 = *puVar11;
      puVar9[1] = puVar11[1];
      puVar9[2] = puVar11[2];
      puVar9 = (undefined4 *)(*local_5c + local_80 * 0xc);
      *puVar9 = uVar2;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
    }
  }
  else {
    iVar6 = (local_84 + 1) * param_2;
    iVar7 = local_84 * local_84;
    puVar9 = (undefined4 *)(*piVar1 + iVar6 * 0xc);
    iVar6 = iVar6 + iVar7;
    local_74 = *puVar9;
    local_70 = puVar9[1];
    local_6c = puVar9[2];
    iVar5 = *piVar1 + iVar6 * 0xc;
    local_68 = *(undefined4 *)(*piVar1 + iVar6 * 0xc);
    local_64 = *(undefined4 *)(iVar5 + 4);
    local_60 = *(undefined4 *)(iVar5 + 8);
    FUN_004e23b0(&local_74,&local_74,1);
    iVar5 = param_2 + 1;
    local_80 = param_2;
    if (iVar5 < (int)local_84) {
      local_28 = local_84 * 0xc;
      iVar10 = (iVar5 * local_84 + param_2) * 0xc;
      iVar6 = (iVar5 * local_84 + iVar7 + param_2) * 0xc;
      do {
        puVar9 = (undefined4 *)(*piVar1 + iVar10);
        local_58 = *puVar9;
        local_54 = puVar9[1];
        local_50 = puVar9[2];
        puVar9 = (undefined4 *)(*piVar1 + iVar6);
        local_4c = *puVar9;
        local_48 = puVar9[1];
        local_44 = puVar9[2];
        FUN_004e23b0(&local_58,&local_58,1);
        iVar8 = FUN_004e7250(&local_74,&local_58);
        if (iVar8 == 1) {
          local_74 = local_58;
          local_70 = local_54;
          local_6c = local_50;
          local_68 = local_4c;
          local_64 = local_48;
          local_60 = local_44;
          local_80 = iVar5;
        }
        else if (iVar8 == -1) {
          FUN_004e5630(3,param_1);
          return false;
        }
        iVar5 = iVar5 + 1;
        iVar10 = iVar10 + local_28;
        iVar6 = iVar6 + local_28;
      } while (iVar5 < (int)local_84);
    }
    iVar5 = FUN_004e7250(&local_74,local_24);
    if (iVar5 == 1) {
      FUN_004e5630(3,param_1);
      return (bool)2;
    }
    if (iVar5 == -1) {
LAB_004cdce2:
      FUN_004e5630(3,param_1);
      return false;
    }
    if (local_80 != param_2) {
      *param_4 = *param_4 + 1;
      if (local_84 != 0) {
        iVar8 = (local_80 * local_84 + iVar7) * 0xc;
        iVar10 = local_80 * local_84 * 0xc;
        iVar6 = (iVar7 + local_84 * param_2) * 0xc;
        iVar5 = local_84 * param_2 * 0xc;
        local_78 = local_84;
        do {
          puVar9 = (undefined4 *)(iVar5 + *piVar1);
          local_40 = *puVar9;
          local_3c = puVar9[1];
          uVar2 = puVar9[2];
          puVar11 = (undefined4 *)(*piVar1 + iVar6);
          local_34 = *puVar11;
          local_30 = puVar11[1];
          local_2c = puVar11[2];
          puVar11 = (undefined4 *)(*piVar1 + iVar10);
          *puVar9 = *puVar11;
          puVar9[1] = puVar11[1];
          puVar9[2] = puVar11[2];
          puVar9 = (undefined4 *)(iVar8 + *piVar1);
          puVar11 = (undefined4 *)(*piVar1 + iVar6);
          iVar6 = iVar6 + 0xc;
          *puVar11 = *puVar9;
          puVar11[1] = puVar9[1];
          puVar11[2] = puVar9[2];
          puVar9 = (undefined4 *)(*piVar1 + iVar10);
          iVar10 = iVar10 + 0xc;
          *puVar9 = local_40;
          puVar9[1] = local_3c;
          puVar9[2] = uVar2;
          puVar9 = (undefined4 *)(*piVar1 + iVar8);
          iVar8 = iVar8 + 0xc;
          *puVar9 = local_34;
          puVar9[1] = local_30;
          puVar9[2] = local_2c;
          iVar5 = iVar5 + 0xc;
          local_78 = local_78 - 1;
        } while (local_78 != 0);
      }
      iVar5 = *local_5c;
      puVar9 = (undefined4 *)(iVar5 + param_2 * 0xc);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      local_38 = puVar9[2];
      local_80 = local_80 * 0xc;
      *puVar9 = *(undefined4 *)(local_80 + iVar5);
      puVar9[1] = *(undefined4 *)(local_80 + iVar5 + 4);
      puVar9[2] = *(undefined4 *)(local_80 + iVar5 + 8);
      puVar9 = (undefined4 *)(*local_5c + local_80);
      *puVar9 = uVar2;
      puVar9[1] = uVar3;
      puVar9[2] = local_38;
    }
  }
  iVar5 = FUN_004e4020(param_1);
  return iVar5 == 0;
}

