// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043cde0
// entry: 0043cde0  size: 838


undefined4
FUN_0043cde0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined1 local_2c;
  byte bStack_2b;
  undefined1 local_24 [36];
  
  puVar13 = param_1;
  param_1[2] = *param_2;
  param_1[3] = *param_2;
  param_1[6] = 1;
  param_1[0x16] = 1;
  uVar9 = 0;
  param_1[7] = *param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 1;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[4] = 1;
  iVar4 = FUN_004b7550(param_3);
  param_1[5] = iVar4 + 1;
  iVar4 = FUN_00407130(iVar4 + 0x100U & 0xffffff00);
  param_1[0xb7] = iVar4;
  if (iVar4 == 0) {
    FUN_0052b240(0xd);
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[5] + -1 + iVar4) = 0;
  iVar4 = FUN_00407130(0x100);
  param_1[0xb6] = iVar4;
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  uVar8 = param_1[5];
  param_2 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)param_1[0xb7];
  for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = *param_3;
    param_3 = param_3 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  param_1[1] = 1;
  *param_1 = 1;
  if (param_1[5] != 1) {
    do {
      iVar4 = FUN_004b7370(CONCAT31((int3)(uVar8 >> 8),*(undefined1 *)(param_1[0xb7] + uVar9)));
      if (iVar4 == 0) {
        bStack_2b = 0;
        local_2c = *(undefined1 *)(param_1[0xb7] + uVar9);
        uVar9 = uVar9 + 1;
      }
      else {
        bStack_2b = *(byte *)(param_1[0xb7] + uVar9);
        iVar4 = param_1[0xb7] + uVar9;
        uVar9 = uVar9 + 2;
        local_2c = *(undefined1 *)(iVar4 + 1);
      }
      FUN_004b79f0((uint)bStack_2b << 8 | CONCAT11(bStack_2b,local_2c) & 0xff,local_24);
      uVar7 = FUN_004b6ca0(local_24);
      iVar4 = param_1[1];
      param_1[1] = iVar4 + uVar7;
      uVar2 = param_1[0xb6];
      uVar14 = FUN_004071b0(uVar2,iVar4 + uVar7 + 0xff & 0xffffff00);
      uVar8 = (uint)((ulonglong)uVar14 >> 0x20);
      param_1[0xb6] = (int)uVar14;
      if ((int)uVar14 == 0) {
        param_1[0xb6] = uVar2;
        return 0xffffffff;
      }
      uVar5 = 0;
      if (uVar7 != 0) {
        do {
          uVar8 = CONCAT31((int3)(uVar8 >> 8),local_24[uVar5]);
          *(undefined1 *)(param_1[0xb6] + (int)param_2) = local_24[uVar5];
          param_2 = (undefined4 *)((int)param_2 + 1);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
    } while (uVar9 < param_1[5] - 1);
  }
  *(undefined1 *)(param_1[1] + -1 + param_1[0xb6]) = 0;
  cVar3 = FUN_00526090(0x17);
  param_1[0xc] = (uint)(cVar3 != '\0');
  if (param_1[0x12] == 1) {
    puVar10 = param_1 + 0x18;
    puVar11 = puVar10;
    for (iVar4 = 0x49; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    iVar4 = 0;
    *(undefined2 *)puVar11 = 0x2020;
    param_2 = (undefined4 *)0x0;
    do {
      uVar9 = puVar13[0xb6];
      if (*(char *)(uVar9 + iVar4) == '\0') break;
      iVar12 = 0;
      param_1 = (undefined4 *)0x0;
      do {
        if (*(char *)(puVar13[0xb6] + iVar4) == '\0') break;
        iVar6 = FUN_004b6ab0(CONCAT31((int3)(uVar9 >> 8),*(char *)(puVar13[0xb6] + iVar4)));
        *(undefined1 *)((int)puVar10 + iVar12) = *(undefined1 *)(puVar13[0xb6] + iVar4);
        if (iVar6 == 0) {
          iVar4 = iVar4 + 1;
          cVar3 = *(char *)(puVar13[0xb6] + -1 + iVar4);
          if ((cVar3 == '\r') || (cVar3 == '\f')) {
            param_1 = (undefined4 *)0x15;
          }
        }
        else {
          iVar12 = iVar12 + 1;
          puVar1 = (undefined1 *)(puVar13[0xb6] + 1 + iVar4);
          iVar4 = iVar4 + 2;
          *(undefined1 *)((int)puVar10 + iVar12) = *puVar1;
        }
        uVar9 = (int)param_1 + 1;
        iVar12 = iVar12 + 1;
        param_1 = (undefined4 *)uVar9;
      } while (uVar9 < 0x15);
      puVar10 = (undefined4 *)((int)puVar10 + 0x2a);
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (param_2 < 7);
    uVar9 = puVar13[4];
    while (uVar9 < param_4) {
      FUN_00439d70(puVar13[0xb6],0x7545,1,puVar13);
      uVar9 = puVar13[4];
    }
    FUN_00439bb0(puVar13[0xb6],0x7544,0,puVar13);
  }
  else {
    uVar9 = param_1[4];
    while (uVar9 < param_4) {
      FUN_00439d70(param_1[0xb6],0x7545,1,param_1);
      uVar9 = param_1[4];
    }
  }
  FUN_005232d0(puVar13[6],puVar13[7]);
  if (param_5 != 0) {
    FUN_00527030();
  }
  puVar13 = puVar13 + 0xab;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = 0;
  return 0;
}

