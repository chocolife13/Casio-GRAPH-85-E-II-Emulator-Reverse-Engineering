// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042bb80
// entry: 0042bb80  size: 1780


short FUN_0042bb80(undefined4 *param_1,short param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  undefined4 local_a0 [2];
  undefined4 local_98;
  ushort uStack_96;
  undefined1 local_94 [12];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  undefined1 local_c [12];
  
  FUN_0042f560(0,&local_5c);
  bVar3 = FUN_0042c280(param_1);
  if (param_2 == 1) {
    if ((bVar3 & 3) == 2) {
      FUN_0042f540(0x11);
      return 0x11;
    }
LAB_0042bc29:
    sVar5 = FUN_0042d3c0(param_1);
    return sVar5;
  }
  if ((bVar3 & 3) == 1) {
    sVar5 = FUN_0042f750(param_1);
    if (sVar5 == 0xf0) {
      sVar5 = FUN_0042e840();
      return sVar5;
    }
    uVar4 = FUN_0042cf70(param_1);
    if (uVar4 == 0xf0) {
      sVar5 = FUN_0042e840(param_1);
      return sVar5;
    }
    if ((uVar4 & 5) == 0) {
      FUN_0042d7e0(param_1);
      sVar5 = FUN_0042d3c0(param_1);
      param_1[3] = *param_1;
      param_1[4] = param_1[1];
      param_1[5] = param_1[2];
      FUN_0042f560(0,param_1);
      return sVar5;
    }
    goto LAB_0042bc29;
  }
  sVar5 = FUN_0042f750(param_1);
  puVar1 = param_1 + 3;
  sVar6 = FUN_0042f750(puVar1);
  if (sVar5 == 0xf0) {
    sVar5 = FUN_0042e840(param_1);
    return sVar5;
  }
  if (sVar6 == 0xf0) {
    *param_1 = *puVar1;
    param_1[1] = param_1[4];
    param_1[2] = param_1[5];
    sVar5 = FUN_0042e840(param_1);
    return sVar5;
  }
  local_50 = FUN_0042cf70(param_1);
  if ((short)local_50 == 0xf0) {
    sVar5 = FUN_0042e840(param_1);
    return sVar5;
  }
  if ((local_50 & 1) == 0) {
    puVar10 = param_1;
    puVar11 = local_a0;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    FUN_0042c660(local_a0);
    sVar5 = FUN_0042f2f0(param_1);
    if (sVar5 == 5000) {
      sVar6 = FUN_0042f750(param_1);
      if (sVar6 == 0xf0) {
        sVar5 = FUN_0042e840(param_1);
        return sVar5;
      }
      if (sVar6 != 4) goto LAB_0042be65;
    }
    sVar6 = FUN_0042f2f0(puVar1);
    if (sVar6 == 5000) {
      sVar7 = FUN_0042f750(puVar1);
      if (sVar7 == 0xf0) {
        *param_1 = *puVar1;
        param_1[1] = param_1[4];
        param_1[2] = param_1[5];
        sVar5 = FUN_0042e840(param_1);
        return sVar5;
      }
      if (sVar7 != 4) {
        FUN_0042f540(8,param_1);
        *puVar1 = local_5c;
        param_1[4] = local_58;
        param_1[5] = local_54;
        return 8;
      }
    }
    sVar7 = FUN_0042f2f0(local_a0);
    if (sVar7 == 5000) {
      sVar8 = FUN_0042f750(local_a0);
      if (sVar8 == 0xf0) {
        *param_1 = local_a0[0];
        param_1[1] = local_a0[1];
        param_1[2] = local_98;
        sVar5 = FUN_0042e840(param_1);
        return sVar5;
      }
      if (sVar8 != 4) {
LAB_0042be65:
        FUN_0042f540(8,param_1);
        *puVar1 = local_5c;
        param_1[4] = local_58;
        param_1[5] = local_54;
        return 8;
      }
    }
    FUN_00401000(param_1,&local_88);
    FUN_00401000(puVar1,&local_78);
    FUN_00401000(local_a0,&local_4c);
    FUN_00401000(local_94,local_3c);
    if (sVar6 <= sVar5) {
      sVar6 = sVar5;
    }
    if (sVar6 < sVar7) {
      sVar6 = sVar7;
    }
    iVar9 = (int)sVar6 / 2;
    iVar12 = iVar9 * -2;
    FUN_0042c5f0(&local_88,iVar12);
    FUN_0042c5f0(&local_78,iVar12);
    bVar13 = (char)local_78 == '\0';
    if (bVar13) {
      FUN_00401000(puVar1,&local_78);
    }
    FUN_0042c5f0(&local_4c,iVar12);
    uVar2 = local_50 & 4;
    if ((local_50 & 4) == 0) {
      FUN_0042c3a0(&local_4c,&local_88);
      FUN_0042f7c0(2,local_2c);
      FUN_0042c480(&local_4c,local_2c);
      FUN_0042c560(&local_4c);
      local_68 = *puVar1;
      local_64 = param_1[4];
      local_60 = param_1[5];
      FUN_0042f0a0(&local_68);
      FUN_00401000(&local_68,local_1c);
      FUN_0042c4f0(&local_78,&local_4c);
      FUN_0042c4f0(&local_4c,local_2c);
      local_88 = local_78;
      local_80 = local_70;
      local_7c = local_6c;
      local_84 = local_74;
      local_74 = local_48;
      local_70 = local_44;
      local_78 = local_4c;
      local_6c = local_40;
      FUN_0042c480(&local_88,local_1c);
      FUN_0042c480(&local_78,local_1c);
    }
    else {
      FUN_0042c2c0(&local_88,&local_4c);
      FUN_0042f7c0(2,local_2c);
      FUN_0042c480(&local_88,local_2c);
      FUN_0042c560(&local_88);
      FUN_0042c4f0(&local_78,&local_88);
      FUN_0042c4f0(&local_88,local_2c);
    }
    FUN_004016b0(&local_88);
    FUN_004016b0(&local_78);
    FUN_00401040(&local_88,param_1);
    FUN_00401040(&local_78,puVar1);
    if (bVar13) {
      if (uVar2 != 0) {
        sVar5 = FUN_0042f330(param_1,iVar9);
        if (sVar5 != 0) {
          return sVar5;
        }
        sVar5 = FUN_0042f330(puVar1,-iVar9);
        if (sVar5 == 0) {
          return 0;
        }
        *param_1 = *puVar1;
        param_1[1] = param_1[4];
        param_1[2] = param_1[5];
        return sVar5;
      }
      sVar5 = FUN_0042f330(param_1,-iVar9);
      if (sVar5 != 0) {
        return sVar5;
      }
      sVar5 = FUN_0042f330(puVar1,iVar9);
    }
    else {
      sVar5 = FUN_0042f330(param_1,iVar9);
      if (sVar5 != 0) {
        return sVar5;
      }
      sVar5 = FUN_0042f330(puVar1,iVar9);
    }
    if (sVar5 == 0) {
      return 0;
    }
  }
  else {
    local_a0[0] = *puVar1;
    local_a0[1] = param_1[4];
    local_98 = param_1[5];
    FUN_0042f560(1,param_1);
    FUN_0042f560(0,local_94);
    sVar5 = FUN_0042f0a0(puVar1);
    if (sVar5 == 0) {
      sVar5 = FUN_0042d7e0(local_a0);
      if (sVar5 != 0) {
        *param_1 = local_a0[0];
        param_1[1] = local_a0[1];
        param_1[2] = local_98;
        return sVar5;
      }
      FUN_0042f560(2,&local_68);
      if (1 < uStack_96) {
        FUN_0042cd50(local_a0,&local_68);
        FUN_0042d3c0(local_a0);
        sVar5 = FUN_0042ac50(param_1,local_a0);
        return sVar5;
      }
      FUN_0042f560(2,local_c);
      FUN_0042d3c0(&local_68);
      FUN_0042cd50(&local_68,local_c);
      FUN_0042d3c0(local_a0);
      FUN_0042ccb0(local_a0,&local_68);
      sVar5 = FUN_0042ac50(param_1,local_a0);
      return sVar5;
    }
  }
  *param_1 = *puVar1;
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  return sVar5;
}

