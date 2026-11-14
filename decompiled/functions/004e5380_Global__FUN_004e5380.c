// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e5380
// entry: 004e5380  size: 225


undefined1 * FUN_004e5380(uint *param_1,undefined1 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte local_20 [4];
  uint local_1c;
  undefined1 local_18;
  byte abStack_16 [22];
  
  local_1c = param_1[1];
  local_18 = (char)param_1[2];
  bVar1 = (byte)*param_1;
  bVar2 = bVar1 >> 4;
  param_1 = (uint *)(*param_1 >> 0xc & 0xf);
  if ((bVar1 & 0xf) != 10) {
    return param_2;
  }
  iVar6 = 1;
  if ((bVar2 == 5) || (bVar2 == 6)) {
    iVar6 = -1;
  }
  iVar3 = 1;
  do {
    bVar1 = local_20[iVar3];
    bVar2 = bVar1 >> 4;
    if (iVar3 == 1) {
      bVar2 = 0;
    }
    abStack_16[iVar3 * 2] = bVar2;
    abStack_16[iVar3 * 2 + 1] = bVar1 & 0xf;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  if (iVar6 == -1) {
    *param_2 = 0x87;
  }
  uVar5 = (uint)(iVar6 == -1);
  iVar6 = 1;
  if (param_1 != (uint *)0xffffffff) {
    do {
      if (abStack_16[iVar6 + 2] == 10) {
        param_2[uVar5] = 0xbb;
      }
      else {
        param_2[uVar5] = abStack_16[iVar6 + 2] | 0x30;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)((int)param_1 + 1U));
  }
  if ((int)uVar5 < 0x16) {
    puVar7 = (undefined4 *)(param_2 + uVar5);
    for (uVar4 = 0x16 - uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = 0x16 - uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  return param_2;
}

