// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042c660
// entry: 0042c660  size: 974


undefined4 FUN_0042c660(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar4 = FUN_0042c280(param_1);
  if ((bVar4 & 3) == 1) {
    uVar9 = FUN_0042d7e0(param_1);
    return uVar9;
  }
  FUN_0042f560(0,&local_24);
  sVar5 = FUN_0042f750(param_1);
  puVar1 = param_1 + 3;
  sVar6 = FUN_0042f750(puVar1);
  if (sVar5 == 0xf0) {
    uVar9 = FUN_0042e840(param_1);
    return uVar9;
  }
  if (sVar6 == 0xf0) {
    *param_1 = *puVar1;
    param_1[1] = param_1[4];
    param_1[2] = param_1[5];
    uVar9 = FUN_0042e840(param_1);
    return uVar9;
  }
  uVar10 = FUN_0042cff0(param_1);
  if ((uVar10 & 1) != 0) {
    *param_1 = *puVar1;
    param_1[1] = param_1[4];
    param_1[2] = param_1[5];
    *puVar1 = local_24;
    param_1[4] = local_20;
    param_1[5] = local_1c;
    uVar9 = FUN_0042d7e0(param_1);
    return uVar9;
  }
  local_3c = *param_1;
  local_38 = param_1[1];
  local_34 = param_1[2];
  FUN_0042d7e0(&local_3c);
  local_c = local_3c;
  local_8 = local_38;
  local_4 = local_34;
  local_30 = *puVar1;
  local_2c = param_1[4];
  local_28 = param_1[5];
  FUN_0042d7e0(&local_30);
  local_18 = local_30;
  local_14 = local_2c;
  local_10 = local_28;
  uVar7 = FUN_0042cf20(&local_3c,&local_30);
  if (uVar7 == 0xf0) {
    *param_1 = local_3c;
    param_1[1] = local_38;
    param_1[2] = local_34;
    uVar9 = FUN_0042e840(param_1);
    return uVar9;
  }
  if ((uVar7 & 2) == 0) {
    iVar11 = FUN_0042f2f0(&local_3c);
    if ((short)iVar11 == 5000) {
      sVar5 = FUN_0042f750(&local_3c);
      if (sVar5 == 0xf0) {
        *param_1 = local_3c;
        param_1[1] = local_38;
        param_1[2] = local_34;
        uVar9 = FUN_0042e840(param_1);
        return uVar9;
      }
      if (sVar5 != 4) {
        FUN_0042f540(8,param_1);
        *puVar1 = local_24;
        param_1[4] = local_20;
        param_1[5] = local_1c;
        return 8;
      }
    }
  }
  else {
    iVar11 = FUN_0042f2f0(&local_30);
    if ((short)iVar11 == 5000) {
      sVar5 = FUN_0042f750(&local_30);
      if (sVar5 == 0xf0) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = local_28;
        uVar9 = FUN_0042e840(param_1);
        return uVar9;
      }
      if (sVar5 != 4) {
        FUN_0042f540(8,param_1);
        *puVar1 = local_24;
        param_1[4] = local_20;
        param_1[5] = local_1c;
        return 8;
      }
    }
  }
  FUN_0042f330(&local_3c,-iVar11);
  FUN_0042f330(&local_30,-iVar11);
  FUN_0042e670(&local_3c);
  FUN_0042e670(&local_30);
  FUN_0042ca30(&local_3c,&local_30);
  *puVar1 = local_24;
  param_1[4] = local_20;
  param_1[5] = local_1c;
  uVar8 = FUN_0042cff0(&local_3c);
  uVar3 = local_10;
  uVar2 = local_14;
  uVar9 = local_18;
  *param_1 = local_3c;
  param_1[1] = local_38;
  param_1[2] = local_34;
  if (uVar8 == 0xf0) {
    uVar9 = FUN_0042e840(param_1);
    return uVar9;
  }
  if ((uVar8 & 6) != 0) {
    FUN_0042d3c0(param_1);
    uVar9 = FUN_0042f330(param_1,iVar11);
    return uVar9;
  }
  if ((uVar7 & 2) != 0) {
    local_18 = local_c;
    local_14 = local_8;
    local_30 = uVar9;
    local_2c = uVar2;
    local_28 = local_10;
    local_10 = local_4;
    local_c = uVar9;
    local_8 = uVar2;
    local_4 = uVar3;
  }
  FUN_0042cd50(&local_18,&local_c);
  FUN_0042e670(&local_18);
  FUN_0042f560(1,param_1);
  FUN_0042ca30(param_1,&local_18);
  FUN_0042d3c0(param_1);
  uVar9 = FUN_0042ccb0(param_1,&local_c);
  return uVar9;
}

