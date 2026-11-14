// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004299c0
// entry: 004299c0  size: 267


int FUN_004299c0(short *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  int local_c;
  byte local_8 [8];
  
  local_8[0] = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_c = 0;
  local_8[4] = 0;
  iVar2 = FUN_0042a410(param_1);
  if (iVar2 < 3) {
    return -1;
  }
  if ((*param_1 == 0x5c) && (param_1[1] == 0x5c)) {
    local_c = 2;
  }
  FUN_0042aa50(local_8,param_1 + local_c,4);
  pbVar4 = &DAT_005be7ec;
  pbVar3 = local_8;
  do {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00429a4f:
      iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00429a54;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00429a4f;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00429a54:
  if (iVar2 == 0) {
    return 1;
  }
  pbVar4 = &DAT_005be7e4;
  pbVar3 = local_8;
  do {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00429a94:
      iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00429a99;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00429a94;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00429a99:
  if (iVar2 == 0) {
    return 2;
  }
  iVar2 = _strncmp((char *)(local_8 + 1),&DAT_005be7e0,2);
  return (-(uint)(iVar2 != 0) & 0xfffffffc) + 3;
}

