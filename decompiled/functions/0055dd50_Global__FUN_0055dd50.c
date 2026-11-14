// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055dd50
// entry: 0055dd50  size: 393


undefined4 FUN_0055dd50(int param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  char *pcVar6;
  DWORD *pDVar7;
  DWORD *pDVar8;
  bool bVar9;
  int local_30;
  int local_2c [3];
  DWORD local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  if (DAT_005da960 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar5 = (short)uVar3 + 1;
    DVar1 = GetSysColor((uint)(ushort)(&DAT_0059d9f8)[uVar3]);
    local_20[uVar3] = DVar1;
    uVar3 = (uint)uVar5;
  } while (uVar5 < 8);
  if (DAT_005da980 == 0x300) {
    local_20[0] = 0xffffff;
  }
  if (((local_8 == 0) || (local_20[1] == local_8)) && (local_8 = 0xc0c0c0, local_20[1] != 0x808080))
  {
    local_8 = 0x808080;
  }
  bVar9 = param_1 == 0;
  if (bVar9) {
    iVar4 = 0x20;
    pcVar6 = (char *)&DAT_005da984;
    pDVar7 = local_20;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar9 = *pcVar6 == (char)*pDVar7;
      pcVar6 = pcVar6 + 1;
      pDVar7 = (DWORD *)((int)pDVar7 + 1);
    } while (bVar9);
    if (bVar9) {
      return 1;
    }
  }
  local_30 = FUN_0055ff80(DAT_005da978,0x67c7,local_c,local_20[1],local_20[2],local_20[0],local_10,
                          local_4);
  uVar3 = 0;
  do {
    uVar5 = (short)uVar3 + 1;
    pHVar2 = CreateSolidBrush(local_20[uVar3]);
    local_2c[uVar3] = (int)pHVar2;
    uVar3 = (uint)uVar5;
  } while (uVar5 < 3);
  uVar5 = 0;
  do {
    if (local_2c[uVar5] == 0) goto LAB_0055dea8;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  if (local_30 != 0) {
    FUN_0055ccb0();
    DAT_005da9a4 = local_2c[0];
    DAT_005da9a8 = local_2c[1];
    DAT_005da9ac = local_2c[2];
    pDVar7 = local_20;
    pDVar8 = &DAT_005da984;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pDVar8 = *pDVar7;
      pDVar7 = pDVar7 + 1;
      pDVar8 = pDVar8 + 1;
    }
    DAT_005da9b0 = local_30;
    return 1;
  }
LAB_0055dea8:
  uVar5 = 0;
  do {
    uVar3 = (uint)uVar5;
    uVar5 = uVar5 + 1;
    FUN_0055cc90(local_2c + uVar3);
  } while (uVar5 < 3);
  FUN_0055cc90(&local_30);
  return 0;
}

