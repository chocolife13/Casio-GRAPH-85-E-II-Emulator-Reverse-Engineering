// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054e750
// entry: 0054e750  size: 1368


undefined4 FUN_0054e750(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  short *psVar8;
  short local_344;
  short sStack_342;
  short local_340;
  short local_33e;
  short sStack_33c;
  undefined2 uStack_33a;
  short local_338;
  short local_336;
  short local_334;
  short local_332;
  undefined2 local_330;
  short local_32e;
  short local_32c;
  short local_32a;
  short local_328;
  undefined2 local_326;
  uint local_324;
  uint local_320;
  undefined1 local_31c [4];
  undefined1 local_318 [12];
  undefined1 local_30c [268];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  FUN_00538980(0,0,local_31c);
  puVar6 = &DAT_00599f98;
  puVar7 = &DAT_005d2fd0;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00538860(0,&DAT_005d2fd0);
  FUN_005387f0(0);
  puVar6 = param_1;
  psVar8 = &local_344;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)psVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    psVar8 = psVar8 + 2;
  }
  iVar5 = 0;
switchD_0054e858_default:
  while( true ) {
    do {
      FUN_0054d3b0(&local_344,0,2,0,0);
      FUN_0054da30(&local_344,0,0);
      FUN_00538b30();
      local_30c[0] = 0;
      FUN_004b6ef0(local_30c,param_2);
      if (iVar5 == 1) {
        local_324 = FUN_0054f010(&local_338,local_30c,param_4);
      }
      FUN_005252a0(local_30c,*param_3,*param_4,1,7);
      FUN_00523740();
      iVar1 = FUN_00526620(&local_320);
    } while (iVar1 != 0);
    if (0x20 < local_320) goto code_r0x0054e90e;
    if (local_320 == 0x20) break;
    switch(local_320) {
    case 0x17:
      iVar1 = FUN_00549090(&local_344,iVar5);
      if (iVar1 == -1) goto switchD_0054e916_caseD_754d;
      break;
    case 0x18:
      local_340 = 1;
      sStack_33c = 1;
      if (iVar5 == 1) {
        local_332 = 1;
      }
      break;
    case 0x19:
      _local_344 = CONCAT22(1,local_344);
      local_33e = 1;
      if (iVar5 == 1) {
        local_334 = 1;
      }
      break;
    case 0x1a:
      local_340 = 1000 - local_344;
      sStack_33c = 999;
      if (iVar5 == 1) {
        local_332 = 999;
      }
      break;
    case 0x1b:
      local_33e = 0x1a;
      _local_344 = CONCAT22(0x17,local_344);
      if (iVar5 == 1) {
        local_334 = 0x1a;
      }
    }
  }
  goto switchD_0054e916_caseD_7534;
code_r0x0054e90e:
  switch(local_320) {
  case 0x7532:
    if (iVar5 != 1) {
      FUN_0054d3b0(param_1,0,2,0,0);
      FUN_0054da30(param_1,0,0);
      FUN_005252a0(param_2,*param_3,*param_4,1,7);
      goto LAB_0054ec83;
    }
    iVar5 = 0;
    uStack_33a = 1;
    local_330 = 0;
    local_326 = 0;
    local_33e = local_334;
    sStack_33c = local_332;
    break;
  case 0x7534:
switchD_0054e916_caseD_7534:
    uVar2 = FUN_0054c8d0(CONCAT22(sStack_33c,local_33e),CONCAT22(uStack_33a,sStack_33c),local_318);
    FUN_004b6ef0(local_200,uVar2);
    FUN_0054d3b0(param_1,0,2,0,0);
    FUN_0054da30(param_1,0,0);
    if (iVar5 == 0) {
      uVar4 = *param_4;
      uVar3 = FUN_004b6ca0(param_2);
      if (uVar4 < uVar3) {
        FUN_004b71f0(local_30c,param_2,uVar4);
        uVar4 = *param_4;
        local_30c[uVar4] = 0;
        FUN_0054ed20(local_100,param_2,uVar4);
        FUN_004b6e70(local_30c,local_200);
        uVar4 = FUN_004b6ca0(local_30c);
        *param_4 = uVar4;
        FUN_004b6e70(local_30c,local_100);
      }
      else {
        FUN_004b6ef0(local_30c,param_2);
        FUN_004b6e70(local_30c,local_200);
        uVar4 = FUN_004b6ca0(local_30c);
        *param_4 = uVar4;
      }
      uVar4 = FUN_004b6ca0(local_30c);
      if (uVar4 < 0x100) {
        FUN_004b6ef0(param_2,local_30c);
      }
      else {
        if (0xff < *param_4) {
          *param_4 = 0xff;
        }
        FUN_004b71f0(param_2,local_30c,0xff);
      }
    }
    else {
      uVar4 = FUN_004b6ca0(local_30c);
      if (uVar4 < 0x100) {
        *param_4 = local_324;
        FUN_004b6ef0(param_2,local_30c);
      }
      else {
        if (0xff < local_324) {
          *param_4 = 0xff;
        }
        FUN_004b71f0(param_2,local_30c,0xff);
      }
    }
    FUN_005252a0(param_2,*param_3,*param_4,1,7);
LAB_0054ec83:
    uVar2 = 0;
LAB_0054ec85:
    FUN_00538810();
    FUN_005389c0(0,0,local_31c);
    return uVar2;
  case 0x7542:
    if (1 < sStack_33c) {
      sStack_33c = sStack_33c + -1;
      if ((0 < sStack_33c) && (sStack_33c < local_340)) {
        local_340 = local_340 + -1;
      }
      if ((iVar5 == 1) && (1 < local_332)) {
        local_332 = local_332 + -1;
      }
    }
    break;
  case 0x7544:
    if (1 < local_33e) {
      local_33e = local_33e + -1;
      if ((0 < local_33e) && (local_33e < sStack_342)) {
        _local_344 = CONCAT22(sStack_342 + -1,local_344);
      }
      if ((iVar5 == 1) && (1 < local_334)) {
        local_334 = local_334 + -1;
      }
    }
    break;
  case 0x7545:
    if (local_33e < 0x1a) {
      local_33e = local_33e + 1;
      if (sStack_342 + 3 < (int)local_33e) {
        _local_344 = CONCAT22(sStack_342 + 1,local_344);
      }
      if (iVar5 == 1) {
        local_334 = local_334 + 1;
      }
    }
    break;
  case 0x7547:
    if (sStack_33c < 999) {
      sStack_33c = sStack_33c + 1;
      if (local_344 + -1 + (int)local_340 < (int)sStack_33c) {
        local_340 = local_340 + 1;
      }
      if (iVar5 == 1) {
        local_332 = local_332 + 1;
      }
    }
    break;
  case 0x754d:
switchD_0054e916_caseD_754d:
    uVar2 = 0xffffffff;
    goto LAB_0054ec85;
  case 0x7562:
    local_338 = local_33e;
    local_336 = sStack_33c;
    uStack_33a = 0;
    local_326 = 1;
    local_330 = 1;
    iVar5 = 1;
    local_334 = local_338;
    local_332 = local_336;
    local_32e = local_338;
    local_32c = local_336;
    local_32a = local_338;
    local_328 = local_336;
  }
  goto switchD_0054e858_default;
}

