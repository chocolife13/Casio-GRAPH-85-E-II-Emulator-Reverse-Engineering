// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b3a20
// entry: 004b3a20  size: 549


undefined4 FUN_004b3a20(undefined4 param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_48 [8];
  int local_40 [7];
  char local_24 [36];
  
  local_24[0] = '\x01';
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0x70;
  local_24[4] = 0;
  local_24[5] = 0;
  local_24[6] = 3;
  local_24[7] = 0;
  local_24[8] = 0;
  local_24[9] = 0xe6;
  local_24[10] = 0x4b;
  local_24[0xb] = 0;
  local_24[0xc] = 0x6d;
  local_24[0xd] = 0;
  local_24[0xe] = 0;
  local_24[0xf] = 0x20;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_24[0x12] = 0x6b;
  local_24[0x13] = 0;
  local_24[0x14] = 0;
  local_24[0x15] = 7;
  local_24[0x16] = 0;
  local_24[0x17] = 0;
  local_24[0x18] = 8;
  local_24[0x19] = 0;
  local_24[0x1a] = 0;
  local_24[0x1b] = 9;
  local_24[0x1c] = 0;
  local_24[0x1d] = 0;
  local_24[0x1e] = 10;
  local_24[0x1f] = 0;
  local_24[0x20] = 0;
  local_24[0x21] = 0xb;
  local_24[0x22] = 0;
  local_24[0x23] = 0;
  iVar3 = FUN_004b45a0(local_40,param_1);
  iVar5 = local_40[0];
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  bVar2 = FUN_0052f6b0(0x3d);
  if ((bVar2 & 0x70) == 0x20) {
    if (param_4 == 0) {
      local_40[0] = FUN_004b6a50();
    }
    else {
      local_40[0] = FUN_004b6a60();
    }
  }
  if ((local_40[0] < -0xf) || (0x14 < local_40[0])) {
    if (local_40[0] < 1) {
      iVar3 = local_40[0] % 3 + 3;
      if (iVar3 == 3) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = local_40[0] % 3;
    }
    iVar3 = local_40[0] - iVar3;
    if (iVar5 < local_40[0]) {
      iVar4 = (iVar5 - local_40[0]) + 10;
    }
    else {
      iVar4 = 10;
    }
    local_40[0] = iVar5 - local_40[0];
    FUN_004b4910(local_48,iVar3,1,0);
    iVar5 = FUN_004b4710(param_2,local_40,iVar4,1);
    uVar6 = 0xffffffff;
    *param_3 = iVar5;
    pcVar9 = local_48;
    do {
      pcVar8 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    do {
      pcVar9 = param_2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar9;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -uVar6;
    pcVar9 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    return 1;
  }
  iVar3 = local_40[0] + 0xf;
  if (iVar5 < local_40[0]) {
    iVar4 = (iVar5 - local_40[0]) + 10;
  }
  else {
    iVar4 = 10;
  }
  local_40[0] = iVar5 - local_40[0];
  iVar5 = FUN_004b4710(param_2,local_40,iVar4,1);
  *param_3 = iVar5;
  if (iVar5 == 0) {
    pcVar9 = local_24 + 0xf;
  }
  else {
    pcVar9 = local_24 + (iVar3 / 3) * 3;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar8 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  do {
    pcVar9 = param_2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar6;
  pcVar9 = pcVar9 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return 0;
}

