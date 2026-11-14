// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004229f0
// entry: 004229f0  size: 805


int FUN_004229f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  char local_48 [13];
  char local_3b [15];
  undefined1 local_2c [36];
  int local_8;
  
  local_70 = 0;
  iVar2 = FUN_00426620();
  iVar3 = FUN_00407130(iVar2 * 0x1c);
  if (iVar3 == 0) {
    return 4;
  }
  iVar4 = FUN_00426600(iVar2,iVar3,1);
  iVar10 = 0;
  iVar2 = 0x20;
  if (0 < iVar4) {
    puVar8 = (undefined4 *)(iVar3 + 0x10);
    do {
      FUN_0049c8f0(param_1,iVar10,iVar4 * 2);
      iVar2 = iVar2 + 0x14;
      local_68 = puVar8[-3];
      local_64 = puVar8[-2];
      local_60 = puVar8[-1];
      local_58 = *puVar8;
      local_54 = puVar8[1];
      local_50 = puVar8[2];
      local_5c = 0;
      local_4c = 0;
      iVar5 = FUN_004298f0(&local_68,&local_58,local_2c);
      do {
        local_70 = local_70 + 1;
        iVar2 = local_8 + 0x18 + iVar2;
        iVar5 = FUN_00429910(&local_68,&local_58,iVar5,local_2c);
      } while (iVar5 != -1);
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 7;
    } while (iVar10 < iVar4);
  }
  FUN_0049c8f0(param_1,iVar4,iVar4 * 2);
  local_68 = *(undefined4 *)(iVar3 + 4);
  local_64 = *(undefined4 *)(iVar3 + 8);
  local_60 = *(undefined4 *)(iVar3 + 0xc);
  local_58 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = 0xffffffff;
  local_54 = *(undefined4 *)(iVar3 + 0x14);
  local_5c = 0;
  local_50 = *(undefined4 *)(iVar3 + 0x18);
  pcVar9 = (char *)&local_68;
  do {
    pcVar11 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  local_4c = 0;
  pcVar9 = pcVar11 + -uVar6;
  pcVar11 = local_48;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar9 = (char *)&local_58;
  do {
    pcVar11 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar11 + -uVar6;
  pcVar11 = local_3b;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  iVar2 = FUN_004230e0(param_1,local_48,local_70,iVar2);
  if (iVar2 < 0) {
    FUN_00525bc0();
    FUN_00407170(iVar3);
    if (iVar2 != -0xd) {
      FUN_0042a080(param_1,0);
    }
    return iVar2;
  }
  local_70 = 1;
  if (1 < iVar4) {
    puVar8 = (undefined4 *)(iVar3 + 0x2c);
    do {
      FUN_0049c8f0(param_1,iVar4 + local_70,iVar4 * 2);
      local_68 = puVar8[-3];
      local_64 = puVar8[-2];
      local_60 = puVar8[-1];
      local_58 = *puVar8;
      local_54 = puVar8[1];
      uVar6 = 0xffffffff;
      local_5c = 0;
      pcVar9 = (char *)&local_68;
      do {
        pcVar11 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      local_50 = puVar8[2];
      pcVar9 = pcVar11 + -uVar6;
      pcVar11 = local_48;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      local_4c = 0;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar9 = (char *)&local_58;
      do {
        pcVar11 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar11 + -uVar6;
      pcVar11 = local_3b;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      iVar10 = FUN_00423360(iVar2,local_48);
      if (iVar10 < 0) {
        FUN_00525bc0();
        FUN_004234c0(iVar2);
        FUN_00407170(iVar3);
        if (iVar10 == -0xd) {
          return -0xd;
        }
        FUN_0042a080(param_1,0);
        return iVar10;
      }
      puVar8 = puVar8 + 7;
      local_70 = local_70 + 1;
    } while (local_70 < iVar4);
  }
  FUN_00525bc0();
  iVar2 = FUN_004234c0(iVar2);
  FUN_00407170(iVar3);
  return iVar2;
}

