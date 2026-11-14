// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f6250
// entry: 004f6250  size: 590


uint FUN_004f6250(char *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puStack_2c8;
  int iStack_2c4;
  char *apcStack_2c0 [5];
  char local_29a [2];
  uint local_298;
  undefined4 local_294;
  char *local_290;
  undefined4 local_28c [2];
  undefined1 local_284 [4];
  undefined1 local_280;
  
  apcStack_2c0[4] = (char *)0x4f625f;
  FUN_00523740();
  apcStack_2c0[4] = param_3;
  apcStack_2c0[3] = (char *)0x4f626c;
  FUN_004e5780();
  local_29a[0] = **(char **)param_1;
  *(undefined4 *)(param_4 + 0x13c) = 0;
  *(undefined4 *)(param_4 + 0x138) = 1;
  *(undefined4 *)(param_4 + 0x140) = 0;
  if (param_2 == 0) {
    apcStack_2c0[4] = (char *)0x0;
    apcStack_2c0[3] = (char *)0x47;
    apcStack_2c0[2] = (char *)0x4f62b1;
    FUN_0052f6c0();
    apcStack_2c0[1] = local_29a;
    apcStack_2c0[2] = param_1;
    apcStack_2c0[0] = (char *)0x4f62bc;
    FUN_004fe330();
    apcStack_2c0[0] = (char *)&local_294;
    iStack_2c4 = param_4;
    puStack_2c8 = (undefined4 *)param_3;
    iVar3 = FUN_004f1d80(param_1,local_29a);
    if (iVar3 == 0) {
      apcStack_2c0[4] = (char *)&local_294;
      apcStack_2c0[3] = (char *)0x4f62e7;
      FUN_004f5740();
      return 0;
    }
    *(undefined4 *)(param_4 + 0x128) = 1;
  }
  else {
    apcStack_2c0[4] = (char *)0x1;
    apcStack_2c0[3] = (char *)0x47;
    apcStack_2c0[2] = (char *)0x4f62ff;
    FUN_0052f6c0();
    local_294 = *(undefined4 *)param_1;
    local_28c[0] = *(undefined4 *)(param_4 + 300);
    local_284[1] = 0;
    local_280 = 0;
    local_28c[1] = *(undefined4 *)(param_4 + 0x130);
    local_284[0] = *(undefined1 *)(param_4 + 0x134);
  }
  apcStack_2c0[4] = (char *)0x4f6331;
  FUN_0052f840();
  apcStack_2c0[4] = (char *)0x4f6336;
  thunk_FUN_0040add0();
  apcStack_2c0[4] = (char *)0x4f633b;
  iVar3 = FUN_004f61f0();
  if (iVar3 == 0) {
    apcStack_2c0[4] = param_3;
    apcStack_2c0[3] = (char *)0x4;
    apcStack_2c0[2] = (char *)0x4f6347;
    FUN_004f58f0();
    local_298 = local_298 & 0xffffff00;
    cVar1 = '\0';
  }
  else if (local_29a[0] == '\0') {
    cVar1 = (char)local_298;
  }
  else {
    do {
      apcStack_2c0[4] = (char *)&local_294;
      apcStack_2c0[1] = local_29a;
      apcStack_2c0[3] = (char *)param_4;
      apcStack_2c0[2] = param_3;
      apcStack_2c0[0] = param_1;
      iStack_2c4 = 0x4f636c;
      cVar1 = FUN_004f6700();
      local_298 = CONCAT31(local_298._1_3_,cVar1);
      if (cVar1 == '\0') break;
      apcStack_2c0[4] = (char *)0x4f637e;
      FUN_0052f840();
      if (local_29a[0] == '\0') break;
      apcStack_2c0[4] = (char *)0x4f638b;
      iVar3 = FUN_0052f820();
      if (iVar3 != 0) {
        apcStack_2c0[4] = param_3;
        apcStack_2c0[3] = (char *)0x1;
        apcStack_2c0[2] = (char *)0x4f63a1;
        FUN_004f58f0();
        local_298 = local_298 & 0xffffff00;
        cVar1 = '\0';
        break;
      }
    } while (local_29a[0] != '\0');
  }
  if (param_2 == 1) {
    if (cVar1 == '\0') {
      apcStack_2c0[4] = (char *)0x47;
      apcStack_2c0[3] = (char *)0x4f63cf;
      bVar2 = FUN_0052f6b0();
      if (1 < bVar2) {
        apcStack_2c0[3] = local_29a;
        *(char **)param_1 = local_290;
        apcStack_2c0[4] = param_1;
        local_29a[0] = *local_290;
        apcStack_2c0[2] = (char *)0x4f63f1;
        FUN_004fe330();
      }
    }
  }
  else {
    apcStack_2c0[4] = (char *)0x47;
    if (cVar1 == '\0') {
      apcStack_2c0[3] = (char *)0x4f6432;
      uVar4 = FUN_0052f6b0();
      uVar4 = uVar4 & 0xff;
      *(undefined4 **)(param_4 + 300) = (&puStack_2c8)[uVar4 * 0xf];
      *(int *)(param_4 + 0x130) = (&iStack_2c4)[uVar4 * 0xf];
      *(undefined1 *)(param_4 + 0x134) = *(undefined1 *)(apcStack_2c0 + uVar4 * 0xf);
    }
    else {
      apcStack_2c0[3] = (char *)0x4f6401;
      uVar4 = FUN_0052f6b0();
      iVar3 = (uVar4 & 0xff) * 0x3c;
      *(undefined4 *)(param_4 + 300) = local_28c[(uVar4 & 0xff) * 0xf];
      *(undefined4 *)(param_4 + 0x130) = *(undefined4 *)(local_284 + iVar3 + -4);
      *(undefined1 *)(param_4 + 0x134) = local_284[iVar3];
    }
  }
  apcStack_2c0[4] = (char *)&local_294;
  apcStack_2c0[3] = (char *)0x4f6466;
  FUN_004f5740();
  apcStack_2c0[3] = (char *)param_4;
  apcStack_2c0[2] = (char *)0x4f646c;
  FUN_004f7410();
  if (2 < *(int *)(param_4 + 0x138)) {
    *(undefined4 *)(param_4 + 0x138) = 1;
  }
  apcStack_2c0[4] = (char *)0x4f6485;
  FUN_004ad720();
  apcStack_2c0[4] = (char *)0x4f648a;
  FUN_004300c0();
  return local_298 & 0xff;
}

