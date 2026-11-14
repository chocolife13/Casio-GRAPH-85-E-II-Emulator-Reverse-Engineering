// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004da2a0
// entry: 004da2a0  size: 1631


byte * FUN_004da2a0(undefined4 param_1,byte *param_2,byte *param_3,byte *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int *local_64;
  uint local_60;
  int local_5c;
  int local_50;
  int local_4c;
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
  
  pbVar2 = param_3;
  pbVar6 = param_2;
  iVar9 = 0;
  local_60 = 0;
  local_5c = 1;
  iVar4 = FUN_004e4000(param_2);
  iVar5 = FUN_004e4000(param_3);
  if ((iVar4 != 0) || (iVar5 != 0)) {
    local_5c = 2;
  }
  bVar10 = (*param_2 & 0x70) == 0x20;
  bVar11 = (*param_3 & 0x70) == 0x20;
  if ((param_2 == param_4) && (bVar10)) {
    iVar9 = 1;
  }
  else if ((param_3 == param_4) && (bVar11)) {
    iVar9 = 2;
  }
  FUN_004e5780(&local_48);
  FUN_004e5780(&local_3c);
  param_2 = (byte *)0x4d2;
  local_64 = (int *)0x4d2;
  param_3 = (byte *)0x4d2;
  if (bVar10) {
    param_3 = *(byte **)(pbVar6 + 8);
    cVar3 = FUN_004ada20(param_3);
    if (cVar3 == '\x02') {
      pbVar6 = (byte *)FUN_004e5630(4,param_4);
      return pbVar6;
    }
    if (cVar3 == '\x01') {
      iVar9 = 0;
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
    local_64 = *(int **)(pbVar2 + 8);
    cVar3 = FUN_004ada20(local_64);
    if (cVar3 == '\x02') {
      pbVar6 = (byte *)FUN_004e5630(4,param_4);
      return pbVar6;
    }
    if (cVar3 == '\x01') {
      iVar9 = 0;
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
    local_60 = (uint)*(ushort *)(pbVar6 + 2);
  }
  if (bVar11) {
    uVar7 = (uint)*(ushort *)(pbVar2 + 2);
  }
  else {
    uVar7 = 0;
  }
  if (!bVar10) {
    local_60 = uVar7;
  }
  sVar8 = (short)local_60;
  if ((bVar10 == bVar11) && (sVar8 != (short)uVar7)) {
    if ((iVar9 == 1) || (param_3 = (byte *)local_64, iVar9 == 2)) {
      FUN_004ad6d0(param_3);
    }
    pbVar6 = (byte *)FUN_004e5630(9,param_4);
    return pbVar6;
  }
  uVar7 = local_5c * local_60 * 0xc;
  if (iVar9 == 0) {
    param_2 = (byte *)FUN_004ad630(uVar7 & 0xffff);
    if (param_2 == (byte *)0x0) {
      pbVar6 = (byte *)FUN_004e5630(4,param_4);
      return pbVar6;
    }
  }
  else if (iVar9 == 1) {
    param_2 = param_3;
    if (((iVar4 == 0) && (local_5c == 2)) &&
       (param_2 = (byte *)FUN_004ad670(param_3,uVar7 & 0xffff), param_3 = param_2,
       param_2 == (byte *)0x0)) {
      pbVar6 = (byte *)FUN_004e5630(4,param_4);
      return pbVar6;
    }
  }
  else if ((((iVar9 == 2) && (param_2 = (byte *)local_64, iVar4 == 0)) && (local_5c == 2)) &&
          (param_2 = (byte *)FUN_004ad670(local_64,uVar7 & 0xffff), local_64 = (int *)param_2,
          param_2 == (byte *)0x0)) {
    pbVar6 = (byte *)FUN_004e5630(4,param_4);
    return pbVar6;
  }
  local_4c = 1;
  local_50 = 1;
  iVar9 = 1;
  if (local_60 != 0) {
    iVar5 = 0xc;
    iVar4 = (local_60 * 3 + 3) * 4;
    do {
      if (bVar10) {
        iVar9 = iVar5 + -0xc + *(int *)param_3;
        local_18 = *(undefined4 *)(iVar5 + -0xc + *(int *)param_3);
        local_14 = *(undefined4 *)(iVar9 + 4);
        local_10 = *(undefined4 *)(iVar9 + 8);
      }
      else {
        local_18 = local_48;
        local_14 = local_44;
        local_10 = local_40;
      }
      if (bVar11) {
        iVar9 = iVar5 + -0xc + *local_64;
        local_30 = *(undefined4 *)(iVar5 + -0xc + *local_64);
        local_2c = *(undefined4 *)(iVar9 + 4);
        local_28 = *(undefined4 *)(iVar9 + 8);
      }
      else {
        local_30 = local_48;
        local_2c = local_44;
        local_28 = local_40;
      }
      if (local_5c == 2) {
        if (bVar10) {
          iVar9 = FUN_004e4000(&local_18);
          if (iVar9 == 1) {
            iVar9 = iVar4 + -0xc + *(int *)param_3;
            local_c = *(undefined4 *)(iVar4 + -0xc + *(int *)param_3);
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
            iVar9 = iVar4 + -0xc + *local_64;
            local_24 = *(undefined4 *)(iVar4 + -0xc + *local_64);
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
      switch(param_1) {
      case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_004e0c40(&local_18,&local_30,param_4,param_5);
        break;
      case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_004e0dd0(&local_18,&local_30,param_4,param_5);
        break;
      default:
        FUN_004e5630(3,param_4);
        break;
      case 0x1e:
        FUN_004e0ef0(&local_18,&local_30,param_4,param_5);
        break;
      case 0x2e:
        FUN_004e0880(&local_18,&local_30,param_4,param_5);
        break;
      case 0x2f:
        FUN_004e0b00(&local_18,&local_30,param_4,param_5);
      }
      iVar9 = FUN_004e4020(param_4);
      if (iVar9 != 0) {
        FUN_004ad6d0(param_2);
        return param_4;
      }
      iVar9 = FUN_004e4000(param_4);
      if (iVar9 != 0) {
        local_4c = 2;
      }
      puVar1 = (undefined4 *)(iVar5 + -0xc + *(int *)param_2);
      *puVar1 = *(undefined4 *)param_4;
      puVar1[1] = *(undefined4 *)(param_4 + 4);
      puVar1[2] = *(undefined4 *)(param_4 + 8);
      if (local_5c == 2) {
        puVar1 = (undefined4 *)(iVar4 + -0xc + *(int *)param_2);
        *puVar1 = *(undefined4 *)(param_4 + 0xc);
        puVar1[1] = *(undefined4 *)(param_4 + 0x10);
        puVar1[2] = *(undefined4 *)(param_4 + 0x14);
      }
      iVar5 = iVar5 + 0xc;
      local_50 = local_50 + 1;
      iVar4 = iVar4 + 0xc;
      iVar9 = local_4c;
    } while (local_50 <= (int)local_60);
  }
  if (local_5c == 2) {
    if (iVar9 != 1) {
LAB_004da8e0:
      *param_4 = 0xa0;
      *(short *)(param_4 + 2) = sVar8;
      *(byte **)(param_4 + 8) = param_2;
      return param_4;
    }
    param_2 = (byte *)FUN_004ad670(param_2,(local_60 * 3 & 0x3fff) << 2);
    if (param_2 == (byte *)0x0) {
      pbVar6 = (byte *)FUN_004e5630(4,param_4);
      return pbVar6;
    }
  }
  else if (iVar9 != 1) goto LAB_004da8e0;
  *param_4 = 0x20;
  *(short *)(param_4 + 2) = sVar8;
  *(byte **)(param_4 + 8) = param_2;
  return param_4;
}

