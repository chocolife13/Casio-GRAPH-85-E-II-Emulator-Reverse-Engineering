// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e5130
// entry: 004e5130  size: 586


undefined4 * FUN_004e5130(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint local_24;
  byte local_20 [4];
  uint local_1c;
  undefined1 local_18;
  byte abStack_16 [22];
  
  puVar5 = param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  iVar4 = FUN_004e4020(param_1);
  if (iVar4 != 0) {
    return param_2;
  }
  iVar4 = FUN_004e96c0(param_1);
  if (iVar4 == 1) {
    puVar5 = (undefined4 *)FUN_004e5380(param_1,param_2);
    return puVar5;
  }
  uVar7 = *param_1;
  local_18 = (char)param_1[2];
  local_1c = param_1[1];
  local_20[1] = (byte)(uVar7 >> 8);
  param_1 = (uint *)0x1;
  uVar9 = uVar7 >> 4;
  bVar2 = (byte)uVar9 & 0xf;
  local_24 = (uint)(local_20[1] >> 4);
  if ((bVar2 == 5) || (bVar2 == 6)) {
    param_1 = (uint *)0xffffffff;
  }
  iVar4 = local_24 + (uint)((byte)uVar7 & 0xf) * 10;
  if (((uVar9 & 0xf) == 0) || (bVar2 == 5)) {
    iVar4 = iVar4 + -100;
  }
  if ((((uVar9 & 0xf) == 0) && ((uVar7 & 0xf) == 0)) && (local_20[1] >> 4 == 0)) {
    iVar4 = 0;
  }
  iVar6 = 1;
  do {
    bVar2 = local_20[iVar6];
    bVar3 = bVar2 >> 4;
    if (iVar6 == 1) {
      bVar3 = 0;
    }
    abStack_16[iVar6 * 2] = bVar3;
    abStack_16[iVar6 * 2 + 1] = bVar2 & 0xf;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 9);
  param_2 = (undefined4 *)0x1;
  iVar6 = 0xf;
  do {
    iVar1 = iVar6;
    if (abStack_16[iVar6 + 2] != 0) break;
    iVar6 = iVar6 + -1;
    iVar1 = (int)param_2;
  } while (0 < iVar6);
  param_2 = (undefined4 *)iVar1;
  if (param_1 == (uint *)0xffffffff) {
    *(undefined1 *)puVar5 = 0x87;
  }
  uVar7 = (uint)(param_1 == (uint *)0xffffffff);
  if (iVar4 < -2) {
    if (-1 < iVar4) goto LAB_004e52bb;
  }
  else {
    if (iVar4 < 0) {
      *(undefined1 *)(uVar7 + (int)puVar5) = 0x30;
      *(undefined1 *)(uVar7 + 1 + (int)puVar5) = 0x2e;
      uVar9 = uVar7 + 2;
      if (iVar4 < -1) {
        uVar8 = -iVar4 - 1;
        puVar10 = (undefined4 *)(uVar9 + (int)puVar5);
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = 0x30303030;
          puVar10 = puVar10 + 1;
        }
        uVar9 = uVar9 + uVar8;
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = 0x30;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      }
      iVar4 = 1;
      if (0 < (int)param_2) {
        do {
          *(byte *)(uVar9 + (int)puVar5) = abStack_16[iVar4 + 2] | 0x30;
          uVar9 = uVar9 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 <= (int)param_2);
      }
      goto LAB_004e5351;
    }
LAB_004e52bb:
    if (iVar4 < 10) {
      iVar6 = 1;
      do {
        *(byte *)(uVar7 + (int)puVar5) = abStack_16[iVar6 + 2] | 0x30;
        uVar9 = uVar7 + 1;
        if (((int)param_2 <= iVar6) && (iVar4 + 1 <= iVar6)) break;
        if (iVar6 == iVar4 + 1) {
          *(undefined1 *)(uVar9 + (int)puVar5) = 0x2e;
          uVar9 = uVar7 + 2;
        }
        iVar6 = iVar6 + 1;
        uVar7 = uVar9;
      } while (iVar6 < 0x10);
      goto LAB_004e5351;
    }
  }
  iVar6 = 1;
  uVar9 = uVar7;
  if (0 < (int)param_2) {
    do {
      *(byte *)(uVar9 + (int)puVar5) = abStack_16[iVar6 + 2] | 0x30;
      uVar7 = uVar9 + 1;
      if (iVar6 == 1) {
        *(undefined1 *)(uVar7 + (int)puVar5) = 0x2e;
        uVar7 = uVar9 + 2;
      }
      iVar6 = iVar6 + 1;
      uVar9 = uVar7;
    } while (iVar6 <= (int)param_2);
  }
  *(undefined1 *)(uVar7 + (int)puVar5) = 0xf;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
    *(undefined1 *)(uVar7 + 1 + (int)puVar5) = 0x87;
  }
  else {
    *(undefined1 *)(uVar7 + 1 + (int)puVar5) = 0x89;
  }
  bVar2 = (byte)(iVar4 / 10);
  *(byte *)(uVar7 + 2 + (int)puVar5) = bVar2 | 0x30;
  *(byte *)(uVar7 + 3 + (int)puVar5) = (char)iVar4 + bVar2 * -10 | 0x30;
  uVar9 = uVar7 + 4;
LAB_004e5351:
  if ((int)uVar9 < 0x16) {
    puVar10 = (undefined4 *)(uVar9 + (int)puVar5);
    for (uVar7 = 0x16 - uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = 0x16 - uVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  return puVar5;
}

