// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004db510
// entry: 004db510  size: 1042


byte * FUN_004db510(undefined4 param_1,byte *param_2,byte *param_3,byte *param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pbVar3 = param_4;
  pbVar2 = param_3;
  pbVar7 = param_2;
  local_34 = 0;
  iVar5 = FUN_004e4000(param_2);
  iVar6 = FUN_004e4000(param_3);
  if ((iVar5 != 0) || (iVar6 != 0)) {
    pbVar7 = (byte *)FUN_004e5630(3,param_4);
    return pbVar7;
  }
  bVar10 = (*param_2 & 0x70) == 0x20;
  bVar11 = (*param_3 & 0x70) == 0x20;
  iVar5 = 0;
  if ((param_2 == param_4) && (bVar10)) {
    iVar5 = 1;
  }
  else if ((param_3 == param_4) && (bVar11)) {
    iVar5 = 2;
  }
  FUN_004e5780(&local_c);
  param_4 = (byte *)0x4d2;
  param_3 = (byte *)0x4d2;
  param_2 = (byte *)0x4d2;
  if (bVar10) {
    param_2 = *(byte **)(pbVar7 + 8);
    cVar4 = FUN_004ada20(param_2);
    if (cVar4 == '\x02') {
      pbVar7 = (byte *)FUN_004e5630(4,pbVar3);
      return pbVar7;
    }
    if (cVar4 == '\x01') {
      iVar5 = 0;
    }
  }
  else {
    local_c = *(undefined4 *)pbVar7;
    local_8 = *(undefined4 *)(pbVar7 + 4);
    local_4 = *(undefined4 *)(pbVar7 + 8);
  }
  if (bVar11) {
    param_3 = *(byte **)(pbVar2 + 8);
    cVar4 = FUN_004ada20(param_3);
    if (cVar4 == '\x02') {
      pbVar7 = (byte *)FUN_004e5630(4,pbVar3);
      return pbVar7;
    }
    if (cVar4 == '\x01') {
      iVar5 = 0;
    }
  }
  else {
    local_c = *(undefined4 *)pbVar2;
    local_8 = *(undefined4 *)(pbVar2 + 4);
    local_4 = *(undefined4 *)(pbVar2 + 8);
  }
  if (bVar10) {
    local_34 = (uint)*(ushort *)(pbVar7 + 2);
  }
  if (bVar11) {
    uVar9 = (uint)*(ushort *)(pbVar2 + 2);
  }
  else {
    uVar9 = 0;
  }
  if (!bVar10) {
    local_34 = uVar9;
  }
  if ((bVar10 == bVar11) && ((short)local_34 != (short)uVar9)) {
    FUN_004e5630(9,pbVar3);
    if (iVar5 == 1) {
      FUN_004ad6d0(param_2);
      return pbVar3;
    }
    if (iVar5 == 2) {
      FUN_004ad6d0(param_3);
    }
    return pbVar3;
  }
  if (iVar5 == 0) {
    param_4 = (byte *)FUN_004ad630((local_34 * 3 & 0x3fff) << 2);
    if (param_4 == (byte *)0x0) {
      pbVar7 = (byte *)FUN_004e5630(4,pbVar3);
      return pbVar7;
    }
  }
  else if (iVar5 == 1) {
    param_4 = param_2;
  }
  else if (iVar5 == 2) {
    param_4 = param_3;
  }
  iVar5 = 1;
  if (local_34 != 0) {
    iVar6 = 0xc;
    do {
      if (bVar10) {
        iVar8 = *(int *)param_2 + -0xc + iVar6;
        local_18 = *(undefined4 *)(*(int *)param_2 + -0xc + iVar6);
        local_14 = *(undefined4 *)(iVar8 + 4);
        local_10 = *(undefined4 *)(iVar8 + 8);
      }
      else {
        local_18 = local_c;
        local_14 = local_8;
        local_10 = local_4;
      }
      if (bVar11) {
        iVar8 = *(int *)param_3 + -0xc + iVar6;
        local_24 = *(undefined4 *)(*(int *)param_3 + -0xc + iVar6);
        local_20 = *(undefined4 *)(iVar8 + 4);
        local_1c = *(undefined4 *)(iVar8 + 8);
      }
      else {
        local_24 = local_c;
        local_20 = local_8;
        local_1c = local_4;
      }
      switch(param_1) {
      case 7:
        FUN_004e7270(&local_18,&local_24,pbVar3);
        break;
      case 8:
        FUN_004e72b0(&local_18,&local_24,pbVar3);
        break;
      case 9:
        FUN_004e72f0(&local_18,&local_24,pbVar3);
        break;
      case 10:
        FUN_004e7330(&local_18,&local_24,pbVar3);
        break;
      default:
        FUN_004e5630(3,pbVar3);
        break;
      case 0x24:
        FUN_004e77b0(&local_18,&local_24,pbVar3);
        break;
      case 0x25:
        FUN_004e77d0(&local_18,&local_24,pbVar3);
        break;
      case 0x29:
        FUN_004e78b0(&local_18,&local_24,pbVar3);
        break;
      case 0x2a:
        FUN_004e78d0(&local_18,&local_24,pbVar3);
      }
      iVar8 = FUN_004e4020(pbVar3);
      if (iVar8 != 0) {
        FUN_004ad6d0(param_4);
        return pbVar3;
      }
      iVar5 = iVar5 + 1;
      puVar1 = (undefined4 *)(*(int *)param_4 + -0xc + iVar6);
      iVar6 = iVar6 + 0xc;
      *puVar1 = *(undefined4 *)pbVar3;
      puVar1[1] = *(undefined4 *)(pbVar3 + 4);
      puVar1[2] = *(undefined4 *)(pbVar3 + 8);
    } while (iVar5 <= (int)local_34);
  }
  *pbVar3 = 0x20;
  *(short *)(pbVar3 + 2) = (short)local_34;
  *(byte **)(pbVar3 + 8) = param_4;
  return pbVar3;
}

