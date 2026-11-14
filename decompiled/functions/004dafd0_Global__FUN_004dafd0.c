// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dafd0
// entry: 004dafd0  size: 1278


byte * FUN_004dafd0(int param_1,byte *param_2,byte *param_3,byte *param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  int *local_60;
  int *local_5c;
  int local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
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
  
  pbVar4 = param_3;
  pbVar8 = param_2;
  uVar3 = 0;
  local_58 = 1;
  iVar6 = FUN_004e4000(param_2);
  iVar7 = FUN_004e4000(param_3);
  if ((iVar6 != 0) || (iVar7 != 0)) {
    local_58 = 2;
  }
  bVar2 = *param_3;
  bVar13 = (*param_2 & 0x70) == 0x20;
  param_3 = (byte *)0x0;
  bVar14 = (bVar2 & 0x70) == 0x20;
  if ((param_2 == param_4) && (bVar13)) {
    param_3 = (byte *)0x1;
  }
  else if ((pbVar4 == param_4) && (bVar14)) {
    param_3 = (byte *)0x2;
  }
  FUN_004e5780(&local_48);
  FUN_004e5780(&local_3c);
  param_2 = (byte *)0x4d2;
  local_5c = (int *)0x4d2;
  local_60 = (int *)0x4d2;
  if (bVar13) {
    local_60 = *(int **)(pbVar8 + 8);
    cVar5 = FUN_004ada20(local_60);
    if (cVar5 == '\x02') {
      pbVar8 = (byte *)FUN_004e5630(4,param_4);
      return pbVar8;
    }
    if (cVar5 == '\x01') {
      param_3 = (byte *)0x0;
    }
  }
  else {
    local_48 = *(undefined4 *)pbVar8;
    local_44 = *(undefined4 *)(pbVar8 + 4);
    local_3c = *(undefined4 *)(pbVar8 + 0xc);
    local_40 = *(undefined4 *)(pbVar8 + 8);
    local_38 = *(undefined4 *)(pbVar8 + 0x10);
    local_34 = *(undefined4 *)(pbVar8 + 0x14);
  }
  if (bVar14) {
    local_5c = *(int **)(pbVar4 + 8);
    cVar5 = FUN_004ada20(local_5c);
    if (cVar5 == '\x02') {
      pbVar8 = (byte *)FUN_004e5630(4,param_4);
      return pbVar8;
    }
    if (cVar5 == '\x01') {
      param_3 = (byte *)0x0;
    }
  }
  else {
    local_48 = *(undefined4 *)pbVar4;
    local_44 = *(undefined4 *)(pbVar4 + 4);
    local_3c = *(undefined4 *)(pbVar4 + 0xc);
    local_40 = *(undefined4 *)(pbVar4 + 8);
    local_38 = *(undefined4 *)(pbVar4 + 0x10);
    local_34 = *(undefined4 *)(pbVar4 + 0x14);
  }
  if (bVar13) {
    uVar3 = *(ushort *)(pbVar8 + 2);
  }
  if (bVar14) {
    uVar11 = *(ushort *)(pbVar4 + 2);
  }
  else {
    uVar11 = 0;
  }
  if (!bVar13) {
    uVar3 = uVar11;
  }
  if ((bVar13 == bVar14) && (uVar3 != uVar11)) {
    if ((param_3 == (byte *)0x1) || (local_60 = local_5c, param_3 == (byte *)0x2)) {
      FUN_004ad6d0(local_60);
    }
    pbVar8 = (byte *)FUN_004e5630(9,param_4);
    return pbVar8;
  }
  if (param_3 == (byte *)0x0) {
    param_2 = (byte *)FUN_004ad630(uVar3 * 0xc);
    if (param_2 == (byte *)0x0) {
      pbVar8 = (byte *)FUN_004e5630(4,param_4);
      return pbVar8;
    }
  }
  else if (param_3 == (byte *)0x1) {
    param_2 = (byte *)local_60;
  }
  else if (param_3 == (byte *)0x2) {
    param_2 = (byte *)local_5c;
  }
  iVar6 = 1;
  uVar10 = (uint)uVar3;
  if (uVar10 != 0) {
    iVar12 = 0xc;
    iVar7 = (uVar10 * 3 + 3) * 4;
    do {
      if (bVar13) {
        iVar9 = iVar12 + -0xc + *local_60;
        local_18 = *(undefined4 *)(iVar12 + -0xc + *local_60);
        local_14 = *(undefined4 *)(iVar9 + 4);
        local_10 = *(undefined4 *)(iVar9 + 8);
      }
      else {
        local_18 = local_48;
        local_14 = local_44;
        local_10 = local_40;
      }
      if (bVar14) {
        iVar9 = iVar12 + -0xc + *local_5c;
        local_30 = *(undefined4 *)(iVar12 + -0xc + *local_5c);
        local_2c = *(undefined4 *)(iVar9 + 4);
        local_28 = *(undefined4 *)(iVar9 + 8);
      }
      else {
        local_30 = local_48;
        local_2c = local_44;
        local_28 = local_40;
      }
      if (local_58 == 2) {
        if (bVar13) {
          iVar9 = FUN_004e4000(&local_18);
          if (iVar9 == 1) {
            iVar9 = iVar7 + -0xc + *local_60;
            local_c = *(undefined4 *)(iVar7 + -0xc + *local_60);
            local_8 = *(undefined4 *)(iVar9 + 4);
            local_4 = *(undefined4 *)(iVar9 + 8);
          }
        }
        else {
          local_c = local_3c;
          local_8 = local_38;
          local_4 = local_34;
        }
        if (bVar14) {
          iVar9 = FUN_004e4000(&local_30);
          if (iVar9 == 1) {
            iVar9 = iVar7 + -0xc + *local_5c;
            local_24 = *(undefined4 *)(iVar7 + -0xc + *local_5c);
            local_20 = *(undefined4 *)(iVar9 + 4);
            local_1c = *(undefined4 *)(iVar9 + 8);
          }
        }
        else {
          local_24 = local_3c;
          local_20 = local_38;
          local_1c = local_34;
        }
      }
      if (param_1 == 5) {
        FUN_004e11f0(&local_18,&local_30,param_4);
      }
      else if (param_1 == 6) {
        FUN_004e12f0(&local_18,&local_30,param_4);
      }
      else {
        FUN_004e5630(3,param_4);
      }
      iVar9 = FUN_004e4020(param_4);
      if (iVar9 != 0) {
        FUN_004ad6d0(param_2);
        return param_4;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0xc;
      puVar1 = (undefined4 *)(iVar12 + -0xc + *(int *)param_2);
      iVar12 = iVar12 + 0xc;
      *puVar1 = *(undefined4 *)param_4;
      puVar1[1] = *(undefined4 *)(param_4 + 4);
      puVar1[2] = *(undefined4 *)(param_4 + 8);
    } while (iVar6 <= (int)uVar10);
  }
  if (((param_3 != (byte *)0x0) && (local_58 == 2)) &&
     (param_2 = (byte *)FUN_004ad670(param_2,uVar3 * 0xc), param_2 == (byte *)0x0)) {
    pbVar8 = (byte *)FUN_004e5630(4,param_4);
    return pbVar8;
  }
  *param_4 = 0x20;
  *(ushort *)(param_4 + 2) = uVar3;
  *(byte **)(param_4 + 8) = param_2;
  return param_4;
}

