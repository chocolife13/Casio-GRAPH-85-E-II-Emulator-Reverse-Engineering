// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e5470
// entry: 004e5470  size: 390


undefined4 * FUN_004e5470(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined1 local_24 [12];
  char local_18 [24];
  
  iVar6 = 0;
  puVar1 = param_2;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 *)puVar1 = 0;
  iVar4 = FUN_004e4020();
  if (iVar4 != 0) {
    return param_2;
  }
  iVar4 = FUN_004e4000();
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)FUN_004e5130();
    return puVar1;
  }
  FUN_004e5780();
  local_48 = param_1[3];
  local_38 = param_1[1];
  local_44 = param_1[4];
  local_34 = param_1[2];
  local_40 = param_1[5];
  local_3c = *param_1 & 0xffffff7f;
  iVar4 = FUN_004e7210(&local_3c);
  if (iVar4 != 0) {
    FUN_004e5130();
    iVar3 = 0;
    do {
      if (local_18[iVar3] == '\0') break;
      iVar6 = iVar6 + 1;
      iVar2 = iVar3 + 1;
      *(char *)((int)param_2 + iVar3) = local_18[iVar3];
      iVar3 = iVar2;
    } while (iVar2 < 0x16);
  }
  iVar3 = FUN_004e7310();
  if (iVar3 == 0) {
    *(undefined1 *)(iVar6 + (int)param_2) = 0x99;
  }
  else {
    if (iVar4 == 0) goto LAB_004e556c;
    *(undefined1 *)(iVar6 + (int)param_2) = 0x89;
  }
  iVar6 = iVar6 + 1;
LAB_004e556c:
  FUN_004e57a0();
  FUN_004e7620(&local_48);
  iVar4 = FUN_004e7210(&local_48,local_24);
  if (iVar4 != 0) {
    FUN_004e5130();
    iVar4 = 0;
    do {
      if (local_18[iVar4] == '\0') break;
      *(char *)(iVar6 + (int)param_2) = local_18[iVar4];
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x16);
  }
  *(undefined1 *)(iVar6 + (int)param_2) = 0x7f;
  iVar4 = iVar6 + 2;
  *(undefined1 *)(iVar6 + 1 + (int)param_2) = 0x50;
  if (iVar4 < 0x2d) {
    puVar1 = (undefined4 *)(iVar4 + (int)param_2);
    for (uVar5 = 0x2dU - iVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar5 = 0x2dU - iVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  return param_2;
}

