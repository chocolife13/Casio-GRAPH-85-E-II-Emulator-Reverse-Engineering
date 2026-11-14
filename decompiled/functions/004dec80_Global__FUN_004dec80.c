// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dec80
// entry: 004dec80  size: 1467


byte * FUN_004dec80(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  int *local_6c;
  int *local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  int local_54;
  int local_50;
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
  
  pbVar5 = param_1;
  local_64 = 1;
  iVar3 = FUN_004e4000(param_1);
  iVar4 = FUN_004e4000(param_2);
  if ((iVar3 != 0) || (iVar4 != 0)) {
    local_64 = 2;
  }
  bVar9 = (*param_1 & 0x70) == 0x30;
  bVar10 = (*param_2 & 0x70) == 0x30;
  iVar4 = 0;
  if ((param_1 == param_3) && (bVar9)) {
    iVar4 = 1;
  }
  else if ((param_2 == param_3) && (bVar10)) {
    iVar4 = 2;
  }
  FUN_004e5780(&local_48);
  FUN_004e5780(&local_3c);
  param_1 = (byte *)0x4d2;
  local_68 = (int *)0x4d2;
  local_6c = (int *)0x4d2;
  if (bVar9) {
    local_6c = *(int **)(pbVar5 + 8);
    cVar2 = FUN_004ada20(local_6c);
    if (cVar2 == '\x02') {
      pbVar5 = (byte *)FUN_004e5630(4,param_3);
      return pbVar5;
    }
    if (cVar2 == '\x01') {
      iVar4 = 0;
    }
  }
  else {
    local_48 = *(undefined4 *)pbVar5;
    local_44 = *(undefined4 *)(pbVar5 + 4);
    local_3c = *(undefined4 *)(pbVar5 + 0xc);
    local_40 = *(undefined4 *)(pbVar5 + 8);
    local_38 = *(undefined4 *)(pbVar5 + 0x10);
    local_34 = *(undefined4 *)(pbVar5 + 0x14);
  }
  if (bVar10) {
    local_68 = *(int **)(param_2 + 8);
    cVar2 = FUN_004ada20(local_68);
    if (cVar2 == '\x02') {
      pbVar5 = (byte *)FUN_004e5630(4,param_3);
      return pbVar5;
    }
    if (cVar2 == '\x01') {
      iVar4 = 0;
    }
  }
  else {
    local_48 = *(undefined4 *)param_2;
    local_44 = *(undefined4 *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 0xc);
    local_40 = *(undefined4 *)(param_2 + 8);
    local_38 = *(undefined4 *)(param_2 + 0x10);
    local_34 = *(undefined4 *)(param_2 + 0x14);
  }
  uVar7 = 0;
  uVar6 = 0;
  local_5c = 0;
  local_60 = 0;
  if (bVar9) {
    local_60 = (uint)*(ushort *)(pbVar5 + 2);
    local_5c = (uint)*(ushort *)(pbVar5 + 4);
  }
  if (bVar10) {
    uVar6 = (uint)*(ushort *)(param_2 + 2);
    uVar7 = (uint)*(ushort *)(param_2 + 4);
  }
  if (!bVar9) {
    local_60 = uVar6;
    local_5c = uVar7;
  }
  uVar7 = local_5c * local_60;
  uVar6 = local_64 * uVar7 * 0xc;
  if (iVar4 == 0) {
    param_1 = (byte *)FUN_004ad630(uVar6 & 0xffff);
    if (param_1 == (byte *)0x0) {
      pbVar5 = (byte *)FUN_004e5630(4,param_3);
      return pbVar5;
    }
  }
  else if (iVar4 == 1) {
    param_1 = (byte *)local_6c;
    if (((iVar3 == 0) && (local_64 == 2)) &&
       (param_1 = (byte *)FUN_004ad670(local_6c,uVar6 & 0xffff), local_6c = (int *)param_1,
       param_1 == (byte *)0x0)) {
      pbVar5 = (byte *)FUN_004e5630(4,param_3);
      return pbVar5;
    }
  }
  else if ((((iVar4 == 2) && (param_1 = (byte *)local_68, iVar3 == 0)) && (local_64 == 2)) &&
          (param_1 = (byte *)FUN_004ad670(local_68,uVar6 & 0xffff), local_68 = (int *)param_1,
          param_1 == (byte *)0x0)) {
    pbVar5 = (byte *)FUN_004e5630(4,param_3);
    return pbVar5;
  }
  uVar6 = uVar7 & 0xffff;
  local_50 = 1;
  local_54 = 1;
  iVar3 = 1;
  if (uVar6 != 0) {
    iVar8 = 0xc;
    iVar4 = (uVar6 * 3 + 3) * 4;
    do {
      if (bVar9) {
        iVar3 = *local_6c + -0xc + iVar8;
        local_18 = *(undefined4 *)(*local_6c + -0xc + iVar8);
        local_14 = *(undefined4 *)(iVar3 + 4);
        local_10 = *(undefined4 *)(iVar3 + 8);
      }
      else {
        local_18 = local_48;
        local_14 = local_44;
        local_10 = local_40;
      }
      if (bVar10) {
        iVar3 = iVar8 + -0xc + *local_68;
        local_30 = *(undefined4 *)(iVar8 + -0xc + *local_68);
        local_2c = *(undefined4 *)(iVar3 + 4);
        local_28 = *(undefined4 *)(iVar3 + 8);
      }
      else {
        local_30 = local_48;
        local_2c = local_44;
        local_28 = local_40;
      }
      if (local_64 == 2) {
        if (bVar9) {
          iVar3 = FUN_004e4000(&local_18);
          if (iVar3 == 1) {
            iVar3 = *local_6c + -0xc + iVar4;
            local_c = *(undefined4 *)(*local_6c + -0xc + iVar4);
            local_8 = *(undefined4 *)(iVar3 + 4);
            local_4 = *(undefined4 *)(iVar3 + 8);
          }
        }
        else {
          local_c = local_3c;
          local_8 = local_38;
          local_4 = local_34;
        }
        if (bVar10) {
          iVar3 = FUN_004e4000(&local_30);
          if (iVar3 == 1) {
            iVar3 = iVar4 + -0xc + *local_68;
            local_24 = *(undefined4 *)(iVar4 + -0xc + *local_68);
            local_20 = *(undefined4 *)(iVar3 + 4);
            local_1c = *(undefined4 *)(iVar3 + 8);
          }
        }
        else {
          local_24 = local_3c;
          local_20 = local_38;
          local_1c = local_34;
        }
      }
      FUN_004e0c40(&local_18,&local_30,param_3,param_4);
      iVar3 = FUN_0052f820();
      if (iVar3 != 0) {
        FUN_004e5630(1,param_3);
      }
      iVar3 = FUN_004e4020(param_3);
      if (iVar3 != 0) {
        FUN_004ad6d0(param_1);
        return param_3;
      }
      iVar3 = FUN_004e4000(param_3);
      if (iVar3 != 0) {
        local_50 = 2;
      }
      puVar1 = (undefined4 *)(iVar8 + -0xc + *(int *)param_1);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = *(undefined4 *)(param_3 + 4);
      puVar1[2] = *(undefined4 *)(param_3 + 8);
      if (local_64 == 2) {
        iVar3 = iVar4 + -0xc + *(int *)param_1;
        *(undefined4 *)(iVar4 + -0xc + *(int *)param_1) = *(undefined4 *)(param_3 + 0xc);
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_3 + 0x10);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_3 + 0x14);
      }
      iVar8 = iVar8 + 0xc;
      local_54 = local_54 + 1;
      iVar4 = iVar4 + 0xc;
      iVar3 = local_50;
    } while (local_54 <= (int)uVar6);
  }
  if (local_64 == 2) {
    if (iVar3 != 1) {
LAB_004df20d:
      *param_3 = 0xb0;
      goto LAB_004df217;
    }
    param_1 = (byte *)FUN_004ad670(param_1,(uVar7 * 3 & 0x3fff) << 2);
    if (param_1 == (byte *)0x0) {
      pbVar5 = (byte *)FUN_004e5630(4,param_3);
      return pbVar5;
    }
  }
  else if (iVar3 != 1) goto LAB_004df20d;
  *param_3 = 0x30;
LAB_004df217:
  *(undefined2 *)(param_3 + 2) = (undefined2)local_60;
  *(undefined2 *)(param_3 + 4) = (undefined2)local_5c;
  *(byte **)(param_3 + 8) = param_1;
  return param_3;
}

