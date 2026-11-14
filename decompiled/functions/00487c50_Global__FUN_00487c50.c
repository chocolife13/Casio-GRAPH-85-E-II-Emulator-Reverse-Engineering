// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00487c50
// entry: 00487c50  size: 1867


char FUN_00487c50(undefined4 param_1,int param_2,int param_3,int *param_4,byte param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 local_3c;
  uint *local_38;
  uint *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint *local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  iVar3 = FUN_00486470(param_2,param_3);
  if (iVar3 == 0) {
    return '\x18';
  }
  FUN_004ad550(local_14,local_18,&local_28);
  local_34 = (uint *)FUN_004869c0(param_1);
  if (local_34 == (uint *)0x0) {
    return '@';
  }
  local_10 = *local_34;
  local_c = local_34[1];
  local_8 = local_34[2];
  local_4 = local_34[3];
  iVar3 = FUN_004b7550(param_4);
  local_38 = local_34;
  uVar11 = iVar3 + 4U & 0xfffffffc;
  local_20 = uVar11;
  iVar3 = FUN_004885f0(param_1,param_2,param_3,&local_30,&local_3c,&local_38);
  if (iVar3 != 0) {
    if (iVar3 == 2) {
      FUN_004ad550(local_14,local_18,&local_28);
      iVar3 = uVar11 + (param_3 - local_30) * 4;
      if ((int)local_28 < iVar3) {
        return '\x14';
      }
      uVar11 = 0;
      iVar13 = local_30;
      puVar9 = local_38;
      if (0 < local_30) {
        do {
          local_3c = puVar9[1];
          if ((short)local_3c != -1) {
            uVar11 = local_3c & 0xffff;
          }
          iVar13 = iVar13 + -1;
          puVar9 = puVar9 + 1;
        } while (iVar13 != 0);
      }
      uVar6 = 0;
      if ((local_3c & 0x4000000) != 0) {
        iVar13 = FUN_004b7550((int)local_38 + local_30 * 4 + (local_3c & 0xffff) + 4);
        uVar6 = iVar13 + 4U & 0xfffffffc;
        uVar11 = uVar11 + uVar6;
      }
      if ((local_3c & 0x2000000) != 0) {
        iVar13 = FUN_004b7550(uVar6 + (local_3c & 0xffff) + 4 + local_30 * 4 + (int)local_38);
        uVar11 = uVar11 + (iVar13 + 4U & 0xfffffffc);
      }
      cVar2 = FUN_004abeb0((local_30 * 0x3fff + param_3 & 0x3fffU) << 2,&DAT_005cd010,
                           ((local_30 * 4 + 4) - (int)local_34) + (int)local_38);
      if (cVar2 != '\0') {
        return cVar2;
      }
      local_38 = local_34;
      local_38 = (uint *)FUN_004871e0(param_1,param_2,&local_30,local_34);
      uVar6 = local_20;
      if (local_38 == (uint *)0x0) {
        return '2';
      }
      if (local_30 < param_3 + -1) {
        iVar14 = (param_3 + -1) - local_30;
        iVar13 = local_30 * 4;
        local_30 = local_30 + iVar14;
        do {
          iVar13 = iVar13 + 4;
          *(undefined4 *)(iVar13 + (int)local_38) = 0xffff;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      local_3c = (uint)param_5 << 0x18;
      local_3c = CONCAT22(local_3c._2_2_,(short)uVar11);
      local_38[local_30 + 1] = local_3c;
      FUN_00486870(1,param_2,iVar3 - local_20,local_34,&local_10);
      cVar2 = FUN_004abeb0(uVar6 & 0xffff,param_4,
                           ((param_3 * 4 + 4) - (int)local_34) + uVar11 + (int)local_38);
      if (cVar2 != '\0') {
        return cVar2;
      }
      FUN_00486870(1,param_2,uVar6,local_34,&local_10);
      local_38 = local_34;
      piVar4 = (int *)FUN_004871e0(param_1,param_2,&local_30,local_34);
      if (piVar4 == (int *)0x0) {
        return '2';
      }
      *piVar4 = param_3;
      return '\0';
    }
    iVar3 = (int)local_c._2_2_;
    if (iVar3 < param_2) {
      if (local_28 < uVar11 + 4 + (iVar3 * 0x3fffffff + param_2 + param_3) * 4) {
        return '2';
      }
      iVar3 = FUN_00487a40(1,param_2 - iVar3,&local_34,&local_10);
      if (iVar3 == 0) {
        return '2';
      }
    }
    else if (local_28 < uVar11 + 4 + param_3 * 4) {
      return '2';
    }
    local_38 = local_34;
    local_38 = (uint *)FUN_004871e0(param_1,param_2,&local_30,local_34);
    if (local_38 == (uint *)0x0) {
      return '2';
    }
    uVar11 = uVar11 + 4 + param_3 * 4;
    cVar2 = FUN_004abeb0(uVar11 & 0xffff,&DAT_005cd010,(int)local_38 - (int)local_34 & 0xffff);
    if (cVar2 != '\0') {
      return cVar2;
    }
    local_38 = local_34;
    local_38 = (uint *)FUN_004871e0(param_1,param_2,&local_30,local_34);
    if (local_38 == (uint *)0x0) {
      return '2';
    }
    FUN_00486870(1,param_2,uVar11,local_34,&local_10);
    local_38 = local_34;
    piVar4 = (int *)FUN_004871e0(param_1,param_2,&local_30,local_34);
    if (piVar4 == (int *)0x0) {
      return '2';
    }
    *piVar4 = param_3;
    iVar13 = param_3 + -1;
    iVar3 = 0;
    if (0 < iVar13) {
      iVar5 = 4;
      iVar14 = iVar13;
      do {
        *(undefined4 *)(iVar5 + (int)piVar4) = 0xffff;
        iVar5 = iVar5 + 4;
        iVar14 = iVar14 + -1;
        iVar3 = iVar13;
      } while (iVar14 != 0);
    }
    local_3c = (uint)param_5 << 0x18;
    piVar4[iVar3 + 1] = local_3c;
    piVar4 = piVar4 + param_3 + 1;
    for (uVar11 = local_20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *piVar4 = *param_4;
      param_4 = param_4 + 1;
      piVar4 = piVar4 + 1;
    }
    for (local_20 = local_20 & 3; local_20 != 0; local_20 = local_20 - 1) {
      *(char *)piVar4 = (char)*param_4;
      param_4 = (int *)((int)param_4 + 1);
      piVar4 = (int *)((int)piVar4 + 1);
    }
    return '\0';
  }
  iVar3 = param_3 + -1;
  bVar1 = false;
  uVar6 = local_38[1];
  puVar9 = local_38 + 1;
  local_2c = 0;
  if (0 < iVar3) {
    do {
      uVar6 = *puVar9;
      if ((short)uVar6 != -1) {
        local_2c = uVar6 & 0xffff;
        bVar1 = true;
        local_24 = uVar6;
      }
      puVar9 = puVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_1c = puVar9;
    if (bVar1) goto LAB_0048816b;
  }
  local_24 = uVar6;
LAB_0048816b:
  local_3c = local_38[param_3];
  uVar6 = local_2c + 4 + local_30 * 4;
  if (param_3 != 1) {
    if ((local_24 & 0x4000000) != 0) {
      iVar3 = FUN_004b7550((int)local_38 + uVar6);
      uVar7 = iVar3 + 4U & 0xfffffffc;
      local_2c = local_2c + uVar7;
      uVar6 = uVar6 + uVar7;
    }
    if ((local_24 & 0x2000000) != 0) {
      iVar3 = FUN_004b7550(uVar6 + (int)local_38);
      uVar7 = iVar3 + 4U & 0xfffffffc;
      local_2c = local_2c + uVar7;
      uVar6 = uVar6 + uVar7;
    }
  }
  uVar8 = 0;
  local_24 = 0;
  uVar7 = 0;
  uVar12 = local_24;
  if ((short)local_3c != -1) {
    if ((local_3c & 0x4000000) != 0) {
      iVar3 = FUN_004b7550(uVar6 + (int)local_38);
      uVar8 = iVar3 + 4U & 0xfffffffc;
    }
    uVar7 = uVar8;
    uVar12 = uVar8;
    if (((param_5 & 4) == 0) &&
       (uVar6 = uVar6 + uVar8, uVar7 = 0, uVar12 = local_24, (local_3c & 0x2000000) != 0)) {
      iVar3 = FUN_004b7550((int)local_38 + uVar6);
      uVar7 = iVar3 + 4U & 0xfffffffc;
      uVar12 = uVar7;
    }
  }
  local_24 = uVar12;
  if ((int)uVar7 < (int)uVar11) {
    uVar12 = uVar11 - uVar7;
    if ((int)local_28 < (int)uVar12) {
      return '\x14';
    }
    cVar2 = FUN_004abeb0(uVar12 & 0xffff,&DAT_005cd010,
                         ((uVar6 & 0xffff) - (int)local_34) + (int)local_38);
  }
  else {
    uVar12 = uVar11 - uVar7;
    cVar2 = FUN_004acb90(uVar7 - uVar11 & 0xffff,((uVar6 & 0xffff) - (int)local_34) + (int)local_38)
    ;
  }
  if (cVar2 == '\0') {
    local_38 = local_34;
    local_38 = (uint *)FUN_004871e0(param_1,param_2,&local_30,local_34);
    if (local_38 == (uint *)0x0) {
      return '2';
    }
    FUN_00486870(1,param_2,uVar12,local_34,&local_10);
    piVar4 = (int *)(uVar6 + (int)local_38);
    for (uVar11 = local_20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *piVar4 = *param_4;
      param_4 = param_4 + 1;
      piVar4 = piVar4 + 1;
    }
    for (uVar11 = local_20 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(char *)piVar4 = (char)*param_4;
      param_4 = (int *)((int)param_4 + 1);
      piVar4 = (int *)((int)piVar4 + 1);
    }
    local_3c = CONCAT22((short)(((uint)(param_5 | local_3c._3_1_) << 0x18) >> 0x10),
                        (undefined2)local_2c) & 0x7fffffff;
    local_38[param_3] = local_3c;
    if ((local_20 != local_24) && (param_3 < local_30)) {
      iVar3 = param_3 * 4;
      do {
        iVar3 = iVar3 + 4;
        local_3c = *(undefined4 *)(iVar3 + (int)local_38);
        sVar10 = (short)local_3c;
        if (sVar10 != -1) {
          local_3c._2_2_ = (undefined2)(local_3c >> 0x10);
          local_3c = CONCAT22(local_3c._2_2_,sVar10 + ((short)local_20 - (short)local_24));
        }
        param_3 = param_3 + 1;
        *(uint *)(iVar3 + (int)local_38) = local_3c;
      } while (param_3 < local_30);
    }
    cVar2 = '\0';
  }
  return cVar2;
}

