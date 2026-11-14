// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004da9f0
// entry: 004da9f0  size: 1503


byte * FUN_004da9f0(byte *param_1,byte *param_2,byte *param_3,int param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint local_6c;
  int *local_68;
  int local_60;
  int local_5c;
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
  
  pbVar2 = param_2;
  pbVar6 = param_1;
  iVar8 = 0;
  local_6c = 0;
  local_60 = 1;
  iVar4 = FUN_004e4000(param_1);
  iVar5 = FUN_004e4000(param_2);
  if ((iVar4 != 0) || (iVar5 != 0)) {
    local_60 = 2;
  }
  bVar10 = (*param_1 & 0x70) == 0x20;
  bVar11 = (*param_2 & 0x70) == 0x20;
  if ((param_1 == param_3) && (bVar10)) {
    iVar8 = 1;
  }
  else if ((param_2 == param_3) && (bVar11)) {
    iVar8 = 2;
  }
  FUN_004e5780(&local_48);
  FUN_004e5780(&local_3c);
  param_1 = (byte *)0x4d2;
  local_68 = (int *)0x4d2;
  param_2 = (byte *)0x4d2;
  if (bVar10) {
    param_2 = *(byte **)(pbVar6 + 8);
    cVar3 = FUN_004ada20(param_2);
    if (cVar3 == '\x02') {
      pbVar6 = (byte *)FUN_004e5630(4,param_3);
      return pbVar6;
    }
    if (cVar3 == '\x01') {
      iVar8 = 0;
    }
  }
  else {
    local_48 = *(undefined4 *)pbVar6;
    local_44 = *(undefined4 *)(pbVar6 + 4);
    local_3c = *(undefined4 *)(pbVar6 + 0xc);
    local_40 = *(undefined4 *)(pbVar6 + 8);
    local_38 = *(undefined4 *)(pbVar6 + 0x10);
    local_34 = *(undefined4 *)(pbVar6 + 0x14);
  }
  if (bVar11) {
    local_68 = *(int **)(pbVar2 + 8);
    cVar3 = FUN_004ada20(local_68);
    if (cVar3 == '\x02') {
      pbVar6 = (byte *)FUN_004e5630(4,param_3);
      return pbVar6;
    }
    if (cVar3 == '\x01') {
      iVar8 = 0;
    }
  }
  else {
    local_48 = *(undefined4 *)pbVar2;
    local_44 = *(undefined4 *)(pbVar2 + 4);
    local_3c = *(undefined4 *)(pbVar2 + 0xc);
    local_40 = *(undefined4 *)(pbVar2 + 8);
    local_38 = *(undefined4 *)(pbVar2 + 0x10);
    local_34 = *(undefined4 *)(pbVar2 + 0x14);
  }
  if (bVar10) {
    local_6c = (uint)*(ushort *)(pbVar6 + 2);
  }
  if (bVar11) {
    uVar7 = (uint)*(ushort *)(pbVar2 + 2);
  }
  else {
    uVar7 = 0;
  }
  if (!bVar10) {
    local_6c = uVar7;
  }
  if ((bVar10 == bVar11) && ((short)local_6c != (short)uVar7)) {
    if ((iVar8 == 1) || (param_2 = (byte *)local_68, iVar8 == 2)) {
      FUN_004ad6d0(param_2);
    }
    pbVar6 = (byte *)FUN_004e5630(9,param_3);
    return pbVar6;
  }
  iVar9 = 2;
  local_5c = 2;
  if ((param_4 == 0) && (local_60 == 1)) {
    local_5c = 1;
    iVar9 = 1;
  }
  uVar7 = iVar9 * local_6c * 0xc;
  if (iVar8 == 0) {
    param_1 = (byte *)FUN_004ad630(uVar7 & 0xffff);
    if (param_1 == (byte *)0x0) {
      pbVar6 = (byte *)FUN_004e5630(4,param_3);
      return pbVar6;
    }
  }
  else if (iVar8 == 1) {
    param_1 = param_2;
    if (((iVar4 == 0) && (iVar9 == 2)) &&
       (param_1 = (byte *)FUN_004ad670(param_2,uVar7 & 0xffff), param_2 = param_1,
       param_1 == (byte *)0x0)) {
      pbVar6 = (byte *)FUN_004e5630(4,param_3);
      return pbVar6;
    }
  }
  else if ((((iVar8 == 2) && (param_1 = (byte *)local_68, iVar5 == 0)) && (iVar9 == 2)) &&
          (param_1 = (byte *)FUN_004ad670(local_68,uVar7 & 0xffff), local_68 = (int *)param_1,
          param_1 == (byte *)0x0)) {
    pbVar6 = (byte *)FUN_004e5630(4,param_3);
    return pbVar6;
  }
  iVar8 = 1;
  local_58 = 1;
  if (local_6c != 0) {
    iVar5 = 0xc;
    iVar4 = (local_6c * 3 + 3) * 4;
    do {
      if (bVar10) {
        iVar9 = iVar5 + -0xc + *(int *)param_2;
        local_18 = *(undefined4 *)(iVar5 + -0xc + *(int *)param_2);
        local_14 = *(undefined4 *)(iVar9 + 4);
        local_10 = *(undefined4 *)(iVar9 + 8);
      }
      else {
        local_18 = local_48;
        local_14 = local_44;
        local_10 = local_40;
      }
      if (bVar11) {
        iVar9 = iVar5 + -0xc + *local_68;
        local_30 = *(undefined4 *)(iVar5 + -0xc + *local_68);
        local_2c = *(undefined4 *)(iVar9 + 4);
        local_28 = *(undefined4 *)(iVar9 + 8);
      }
      else {
        local_30 = local_48;
        local_2c = local_44;
        local_28 = local_40;
      }
      if (local_60 == 2) {
        if (bVar10) {
          iVar9 = FUN_004e4000(&local_18);
          if (iVar9 == 1) {
            iVar9 = iVar4 + -0xc + *(int *)param_2;
            local_c = *(undefined4 *)(iVar4 + -0xc + *(int *)param_2);
            local_8 = *(undefined4 *)(iVar9 + 4);
            local_4 = *(undefined4 *)(iVar9 + 8);
          }
        }
        else {
          local_c = local_3c;
          local_8 = local_38;
          local_4 = local_34;
        }
        if (bVar11) {
          iVar9 = FUN_004e4000(&local_30);
          if (iVar9 == 1) {
            iVar9 = iVar4 + -0xc + *local_68;
            local_24 = *(undefined4 *)(iVar4 + -0xc + *local_68);
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
      FUN_004e1050(&local_18,&local_30,param_3,param_4);
      iVar9 = FUN_004e4020(param_3);
      if (iVar9 != 0) {
        FUN_004ad6d0(param_1);
        return param_3;
      }
      iVar9 = FUN_004e4000(param_3);
      if (iVar9 != 0) {
        iVar8 = 2;
      }
      puVar1 = (undefined4 *)(iVar5 + -0xc + *(int *)param_1);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = *(undefined4 *)(param_3 + 4);
      puVar1[2] = *(undefined4 *)(param_3 + 8);
      if (iVar8 == 2) {
        puVar1 = (undefined4 *)(iVar4 + -0xc + *(int *)param_1);
        *puVar1 = *(undefined4 *)(param_3 + 0xc);
        puVar1[1] = *(undefined4 *)(param_3 + 0x10);
        puVar1[2] = *(undefined4 *)(param_3 + 0x14);
      }
      iVar5 = iVar5 + 0xc;
      local_58 = local_58 + 1;
      iVar4 = iVar4 + 0xc;
      iVar9 = local_5c;
    } while (local_58 <= (int)local_6c);
  }
  if ((iVar8 != iVar9) &&
     (param_1 = (byte *)FUN_004ad670(param_1,(iVar8 * local_6c * 3 & 0x3fff) << 2),
     param_1 == (byte *)0x0)) {
    pbVar6 = (byte *)FUN_004e5630(4,param_3);
    return pbVar6;
  }
  *param_3 = (-(iVar8 != 1) & 0x80U) + 0x20;
  *(short *)(param_3 + 2) = (short)local_6c;
  *(byte **)(param_3 + 8) = param_1;
  return param_3;
}

