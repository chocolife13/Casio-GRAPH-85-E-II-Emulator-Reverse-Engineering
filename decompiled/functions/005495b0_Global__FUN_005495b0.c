// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005495b0
// entry: 005495b0  size: 344


undefined4 FUN_005495b0(undefined4 *param_1,short *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  undefined2 *puVar8;
  bool bVar9;
  byte local_c [3];
  undefined2 local_9;
  byte local_6 [6];
  
  uVar3 = *param_1;
  param_3[0] = 0;
  param_3[1] = 0;
  param_2[1] = 0;
  if (*(char *)*param_1 == '\0') {
    return 0;
  }
  local_c[2] = 0;
  local_c[0] = 0x31;
  local_c[1] = 0;
  FUN_004fe330(local_c,param_1);
  bVar9 = local_c[0] == 0x24;
  if (bVar9) {
    param_3[0] = 1;
    param_3[1] = 0;
  }
  psVar7 = param_2;
  if (1 < bVar9 + 2) {
    puVar8 = &local_9;
    iVar6 = bVar9 + 1;
    do {
      psVar7 = (short *)*param_1;
      *puVar8 = 0;
      *(undefined1 *)(puVar8 + 1) = 0;
      *(undefined1 *)puVar8 = 0x31;
      FUN_004fe330(puVar8,param_1);
      puVar8 = (undefined2 *)((int)puVar8 + 3);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (uint)bVar9 * 3;
  bVar2 = local_c[iVar6];
  if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
    *param_2 = bVar2 - 0x40;
    bVar2 = *(byte *)((int)&local_9 + iVar6);
    if ((bVar2 < 0x30) || (0x39 < bVar2)) {
      pbVar1 = local_6 + iVar6;
      uVar4 = *param_1;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      local_6[iVar6 + 2] = 0;
      *pbVar1 = 0x31;
      FUN_004fe330(pbVar1,param_1);
      if (((0x23 < *(byte *)((int)&local_9 + iVar6)) && (0x2f < *pbVar1)) && (*pbVar1 < 0x3a)) {
        *param_1 = uVar4;
        *param_3 = *param_3 | 2;
        sVar5 = FUN_00549530(param_1);
        param_2[1] = sVar5;
      }
    }
    else {
      *param_1 = psVar7;
      sVar5 = FUN_00549530(param_1);
      param_2[1] = sVar5;
    }
  }
  if (param_2[1] != 0) {
    return 1;
  }
  *param_1 = uVar3;
  return 0;
}

