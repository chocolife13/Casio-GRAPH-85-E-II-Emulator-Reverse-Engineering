// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b45a0
// entry: 004b45a0  size: 364


undefined4 FUN_004b45a0(uint *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  bVar1 = *param_2;
  if ((bVar1 & 0xf) == 10) {
    bVar4 = param_2[1];
    uVar2 = (bVar1 & 0x70) >> 4;
    *param_1 = 100;
    if (uVar2 == 1) {
      param_1[1] = 1;
    }
    else {
      if (uVar2 != 6) {
        return 0xffffffff;
      }
      param_1[1] = 0xffffffff;
    }
    pbVar5 = param_2 + 2;
    param_1[2] = (bVar4 >> 4) + 1;
    *(byte *)(param_1 + 3) = param_2[1] & 0xf;
    uVar2 = 1;
    do {
      uVar6 = uVar2 & 0x80000001;
      bVar7 = uVar6 == 0;
      if ((int)uVar6 < 0) {
        bVar7 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
      }
      bVar1 = *pbVar5;
      if (bVar7) {
        pbVar5 = pbVar5 + 1;
        *(byte *)((int)param_1 + uVar2 + 0xc) = bVar1 & 0xf;
      }
      else {
        *(byte *)((int)param_1 + uVar2 + 0xc) = bVar1 >> 4;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xf);
    iVar3 = 0;
    do {
      if (10 < *(byte *)((int)param_1 + iVar3 + 0xc)) {
        return 0xffffffff;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xf);
    return 0;
  }
  uVar2 = (bVar1 & 0xf) * 10;
  *param_1 = uVar2;
  bVar4 = bVar1 >> 4 & 7;
  uVar2 = uVar2 + (param_2[1] >> 4);
  *param_1 = uVar2;
  if (6 < bVar4) {
    return 0xffffffff;
  }
  if ((int)uVar2 < -99) {
    return 0xffffffff;
  }
  if (99 < uVar2) {
    return 0xffffffff;
  }
  if (((bVar1 >> 4 & 7) == 0) || (bVar4 == 5)) {
    if (uVar2 != 0) {
      *param_1 = uVar2 - 100;
    }
    if (bVar4 != 5) goto LAB_004b4617;
  }
  else {
LAB_004b4617:
    if (bVar4 != 6) {
      param_1[1] = 1;
      goto LAB_004b462c;
    }
  }
  param_1[1] = 0xffffffff;
LAB_004b462c:
  param_1[2] = 0;
  pbVar5 = param_2 + 2;
  *(byte *)(param_1 + 3) = param_2[1] & 0xf;
  uVar2 = 1;
  do {
    uVar6 = uVar2 & 0x80000001;
    bVar7 = uVar6 == 0;
    if ((int)uVar6 < 0) {
      bVar7 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
    }
    bVar1 = *pbVar5;
    if (bVar7) {
      pbVar5 = pbVar5 + 1;
      *(byte *)((int)param_1 + uVar2 + 0xc) = bVar1 & 0xf;
    }
    else {
      *(byte *)((int)param_1 + uVar2 + 0xc) = bVar1 >> 4;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xf);
  iVar3 = 0;
  do {
    if (9 < *(byte *)((int)param_1 + iVar3 + 0xc)) {
      return 0xffffffff;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xf);
  return 0;
}

