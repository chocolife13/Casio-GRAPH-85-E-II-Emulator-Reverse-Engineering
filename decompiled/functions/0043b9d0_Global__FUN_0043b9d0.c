// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043b9d0
// entry: 0043b9d0  size: 1437


int FUN_0043b9d0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 local_2b0;
  byte bStack_2af;
  undefined2 uStack_2ae;
  uint local_2a8;
  undefined4 local_2a4;
  undefined1 local_2a0;
  undefined1 local_29f;
  undefined1 local_29e;
  undefined1 local_29d;
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296;
  undefined1 local_295;
  undefined1 local_294;
  undefined1 local_293;
  undefined1 local_292;
  undefined1 local_291;
  undefined1 local_290;
  undefined1 local_28f;
  int local_28c;
  int local_288;
  undefined4 local_284 [6];
  undefined1 local_26c [36];
  undefined4 local_248 [74];
  uint local_120;
  int local_110;
  undefined1 local_10c [12];
  undefined4 local_100 [64];
  
  local_2a4._0_1_ = 0x20;
  local_2a4._1_1_ = 0x20;
  local_2a4._2_1_ = 0x20;
  local_2a4._3_1_ = 0x20;
  local_2a0 = 0x20;
  local_29f = 0x20;
  local_29e = 0x20;
  local_29d = 0x20;
  local_29c = 0x20;
  local_29b = 0x20;
  local_29a = 0x20;
  local_299 = 0x20;
  local_298 = 0x20;
  local_297 = 0x20;
  local_296 = 0x20;
  local_295 = 0x20;
  local_294 = 0x20;
  iVar5 = param_2[0xd];
  local_293 = 0x44;
  local_292 = 0x6f;
  local_291 = 0x6e;
  local_290 = 0x65;
  local_28f = 0;
  if ((iVar5 == 0) && (param_2[5] == 1)) {
    return iVar5;
  }
  if ((iVar5 == 1) && (param_2[5] == 1)) {
    uVar4 = FUN_004b8320();
    iVar5 = FUN_004b8440(uVar4);
    uVar10 = iVar5 + 1;
    iVar5 = FUN_004071b0(param_2[0xb7],iVar5 + 0x100U & 0xffffff00);
    param_2[0xb7] = iVar5;
    if (iVar5 == 0) {
LAB_0043ba95:
      FUN_0052b240(4);
      return -1;
    }
    FUN_004b8550(uVar4,iVar5);
  }
  else {
    uVar10 = param_2[5] - 1;
    if (0xff < uVar10) {
      uVar10 = 0xff;
    }
  }
  uVar6 = 0;
  puVar9 = local_100;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  if (uVar10 != 0) {
    iVar5 = param_2[0xb7];
    do {
      *(undefined1 *)((int)local_100 + uVar6) = *(undefined1 *)(iVar5 + uVar6);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar10);
  }
  local_288 = FUN_004b8670(local_100);
  if (local_288 == 0) {
    puVar9 = param_2 + 0x18;
    puVar11 = local_248;
    for (iVar5 = 0x49; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    uVar10 = param_2[4];
    uVar6 = param_2[5];
    *(undefined2 *)puVar11 = *(undefined2 *)puVar9;
    if (uVar10 < uVar6) {
      do {
        FUN_00439d70(param_2[0xb6],0x7545,1,param_2);
      } while (param_2[4] != param_2[5]);
    }
    local_120 = param_2[7];
    local_28c = param_2[0xb7];
    if (param_2[5] != 1) {
      local_120 = local_120 + 1;
    }
    if ((param_2[0x11] == 1) && (local_120 == 7)) {
      local_120 = 8;
    }
    iVar5 = FUN_004f6250(&local_28c,1,local_284,local_248);
    if (local_120 == 8) {
      param_2[0x11] = 1;
      local_120 = 7;
    }
    if (iVar5 != 0) {
      if (iVar5 != 1) {
        return local_288;
      }
      param_2[0xe] = 0;
      puVar9 = local_284;
      puVar11 = param_2 + 0xbc;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar9 = local_248;
      puVar11 = param_2 + 0x18;
      for (iVar5 = 0x49; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = *(undefined2 *)puVar9;
      param_2[7] = local_120;
      if (local_110 == 0) {
        if (7 < local_120) {
          param_2[7] = 7;
        }
        FUN_004b5060(local_284,param_2 + 0xab,local_10c);
        FUN_0043b620(param_2,0);
      }
      else if (local_110 == 1) {
        puVar9 = &local_2a4;
        puVar11 = param_2 + 0xab;
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined2 *)puVar11 = *(undefined2 *)puVar9;
        if (7 < local_120) {
          param_2[7] = 7;
        }
        FUN_0043b620(param_2,0);
      }
      else if (local_110 == 2) {
        if (7 < local_120) {
          param_2[7] = 7;
        }
        param_2[0xd] = 1;
      }
      uVar4 = param_2[0x11];
      FUN_00438a60(param_2);
      param_2[0x11] = uVar4;
      if (local_110 != 0) {
        param_2[0x12] = local_110;
      }
      param_2[9] = 0;
      param_2[10] = 0;
      return local_288;
    }
    iVar5 = FUN_004e4020(local_284);
    if (iVar5 != 0) {
      FUN_0052b240(iVar5);
    }
    FUN_00523740();
    FUN_0052f840();
    param_2[0xe] = 1;
  }
  else {
    FUN_0052b240(4);
    local_28c = param_2[0xb7];
    FUN_00523740();
    FUN_0052f840();
  }
  pcVar3 = (char *)param_2[0xb7];
  iVar5 = 0;
  iVar12 = 0;
  local_2a8 = 1;
  cVar2 = *pcVar3;
  while (cVar2 != '\0') {
    iVar7 = FUN_004b7370(pcVar3[iVar12]);
    if (iVar7 == 0) {
      bStack_2af = 0;
      local_2b0 = *(undefined1 *)(iVar12 + param_2[0xb7]);
    }
    else {
      bStack_2af = *(byte *)(iVar12 + param_2[0xb7]);
      iVar7 = iVar12 + param_2[0xb7];
      iVar12 = iVar12 + 1;
      local_2b0 = *(undefined1 *)(iVar7 + 1);
    }
    FUN_004b79f0((uint)bStack_2af << 8 | CONCAT11(bStack_2af,local_2b0) & 0xff,local_26c);
    iVar7 = FUN_004b6ca0(local_26c);
    local_2a8 = local_2a8 + iVar7;
    iVar8 = FUN_004071b0(param_2[0xb6],local_2a8 + 0xff & 0xffffff00);
    param_2[0xb6] = iVar8;
    if (iVar8 == 0) goto LAB_0043ba95;
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        *(undefined1 *)(param_2[0xb6] + iVar5) = local_26c[iVar8];
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    iVar12 = iVar12 + 1;
    *(undefined1 *)(param_2[0xb6] + iVar5) = 0;
    pcVar3 = (char *)param_2[0xb7];
    cVar2 = pcVar3[iVar12];
  }
  puVar9 = param_2 + 0x18;
  uVar10 = 0x20202020;
  puVar11 = puVar9;
  for (iVar5 = 0x49; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = 0x20202020;
    puVar11 = puVar11 + 1;
  }
  iVar5 = 0;
  *(undefined2 *)puVar11 = 0x2020;
  local_2b0 = 0;
  bStack_2af = 0;
  uStack_2ae = 0;
  do {
    if (*(char *)(param_2[0xb6] + iVar5) == '\0') break;
    iVar12 = 0;
    local_2a8 = 0;
    do {
      if (*(char *)(param_2[0xb6] + iVar5) == '\0') break;
      iVar7 = FUN_004b6ab0(CONCAT31((int3)(uVar10 >> 8),*(char *)(param_2[0xb6] + iVar5)));
      *(undefined1 *)((int)puVar9 + iVar12) = *(undefined1 *)(param_2[0xb6] + iVar5);
      if (iVar7 == 0) {
        iVar5 = iVar5 + 1;
        cVar2 = *(char *)(param_2[0xb6] + -1 + iVar5);
        if ((cVar2 == '\r') || (cVar2 == '\f')) {
          local_2a8 = 0x15;
        }
      }
      else {
        iVar12 = iVar12 + 1;
        puVar1 = (undefined1 *)(param_2[0xb6] + 1 + iVar5);
        iVar5 = iVar5 + 2;
        *(undefined1 *)((int)puVar9 + iVar12) = *puVar1;
      }
      uVar10 = local_2a8 + 1;
      iVar12 = iVar12 + 1;
      local_2a8 = uVar10;
    } while (uVar10 < 0x15);
    puVar9 = (undefined4 *)((int)puVar9 + 0x2a);
    uVar10 = CONCAT22(uStack_2ae,CONCAT11(bStack_2af,local_2b0)) + 1;
    local_2b0 = (undefined1)uVar10;
    bStack_2af = (byte)(uVar10 >> 8);
    uStack_2ae = (undefined2)(uVar10 >> 0x10);
  } while (uVar10 < 7);
  iVar5 = FUN_004b7550(param_2[0xb7]);
  param_2[5] = iVar5 + 1;
  iVar5 = FUN_004b6ca0(param_2[0xb6]);
  param_2[1] = iVar5 + 1;
  param_2[6] = 1;
  param_2[0x16] = 1;
  param_2[7] = 1;
  param_2[4] = 1;
  *param_2 = 1;
  param_2[2] = 1;
  param_2[3] = 1;
  param_2[0x12] = 0;
  param_2[0x11] = 0;
  param_2[9] = 0;
  param_2[0xd] = 0;
  param_2[8] = 0;
  iVar7 = FUN_0043c1d0(1,param_2);
  iVar5 = param_2[0xb6];
  iVar8 = local_28c - param_2[0xb7];
  iVar12 = param_2[4];
  while (iVar8 + 1 != iVar12) {
    FUN_00439d70(iVar7 + iVar5,0x7545,1,param_2);
    iVar12 = param_2[4];
  }
  uVar10 = 0;
  puVar9 = param_2 + 0x18;
  do {
    uVar10 = uVar10 + 1;
    FUN_005232d0(1,uVar10);
    FUN_00523470(puVar9,0x15);
    puVar9 = (undefined4 *)((int)puVar9 + 0x2a);
  } while (uVar10 < 7);
  if (param_2[4] != 1) {
    FUN_00439bb0(iVar7 + iVar5,0x7544,0,param_2);
  }
  FUN_0052f880();
  FUN_005232d0(param_2[6],param_2[7]);
  FUN_00527030();
  return local_288;
}

