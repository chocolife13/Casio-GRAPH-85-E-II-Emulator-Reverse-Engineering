// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054f860
// entry: 0054f860  size: 1462


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0054f860(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int *param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  undefined1 local_10c [12];
  uint local_100 [64];
  
  iVar3 = param_9;
  if (((param_9 == 0) || (param_9 == 1)) || (param_9 == 2)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  local_114 = iVar6;
  local_110 = FUN_00526410();
  if (iVar6 == 0) {
    uVar8 = 0xf7;
  }
  else {
    uVar8 = 100;
  }
  FUN_00526420(uVar8);
  FUN_00538980(0,2,local_10c);
  if (iVar3 == 4) {
    iVar3 = 0;
    iVar6 = 0;
    do {
      puVar5 = (undefined4 *)((int)&DAT_0059a098 + iVar6);
      puVar7 = (undefined4 *)((int)&DAT_005d3210 + iVar6);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_00538860(iVar3,(undefined4 *)((int)&DAT_005d3210 + iVar6));
      iVar6 = iVar6 + 0x30;
      iVar3 = iVar3 + 1;
    } while (iVar6 < 0x90);
  }
  else {
    DAT_005d3210 = DAT_0059a0c0;
    _DAT_005d3214 = DAT_0059a0c4;
    puVar5 = &DAT_005d3210;
    puVar7 = &DAT_005d3218;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_00538860(0,&DAT_005d3210);
  }
  FUN_005387f0(0);
  iVar3 = param_9;
  uVar8 = param_4;
  if (param_9 == 0) {
    uVar4 = 2;
    if ((param_1 != 0) && ((param_2 < 0x30 || (0x39 < param_2)))) {
switchD_0054fc18_caseD_7532:
      FUN_00538810();
      FUN_005389c0(0,2,local_10c);
      FUN_00523740();
      FUN_00526420(local_110);
      return param_2;
    }
  }
  else if (param_9 == 1) {
    uVar4 = 1;
    if ((param_1 != 0) && ((param_2 < 0x41 || (0x5a < param_2)))) goto switchD_0054fc18_caseD_7532;
  }
  else if (param_9 == 2) {
    uVar4 = 1;
    if ((((param_1 != 0) && ((param_2 < 0x41 || (0x5a < param_2)))) && (param_2 != 0xcd)) &&
       (param_2 != 0xce)) goto switchD_0054fc18_caseD_7532;
  }
  else if ((param_9 == 3) || (param_9 == 4)) {
    uVar4 = 0xff;
  }
  else {
    uVar4 = 0;
  }
  FUN_005232d0(1,param_4);
  FUN_005233e0(param_7);
  local_118 = 0;
  local_11c = 0;
  local_100[0] = local_100[0] & 0xffff0000;
  if ((param_1 == 0) && ((param_2 != 0x7531 && (param_2 == 0x7545)))) {
    if (iVar3 == 0) {
      FUN_0055c2fe(*param_6,local_100,10);
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      FUN_004b7750(local_100,param_8);
    }
    else if ((iVar3 == 2) && (0x1a < *param_6)) {
      local_100[0] = CONCAT31(local_100[0]._1_3_,(char)*param_6 + -0x4e);
    }
    else {
      local_100[0] = CONCAT31(local_100[0]._1_3_,(char)*param_6 + '@');
    }
    param_2 = 0;
  }
  uVar1 = param_3;
  local_11c = FUN_005252a0(local_100,local_11c,local_118,param_3,uVar8);
  FUN_00538b30();
  do {
    if (param_1 == 0) {
      switch(param_2) {
      case 0x7531:
        if ((param_9 == 3) || (param_9 == 4)) {
          local_118 = FUN_00525300(local_100,uVar4,local_118,0x58);
          local_11c = FUN_005252a0(local_100,local_11c,local_118,uVar1,uVar8);
        }
        break;
      case 0x7532:
      case 0x754d:
        goto switchD_0054fc18_caseD_7532;
      case 0x7534:
        if ((byte)local_100[0] != 0) {
          if (param_9 == 0) {
            iVar6 = 0;
            iVar3 = FUN_004b7550(local_100);
            if (0 < iVar3) {
              do {
                if ((*(byte *)((int)local_100 + iVar6) < 0x30) ||
                   (0x39 < *(byte *)((int)local_100 + iVar6))) break;
                iVar6 = iVar6 + 1;
                iVar3 = FUN_004b7550(local_100);
              } while (iVar6 < iVar3);
            }
            iVar3 = FUN_004b7550(local_100);
            if (iVar6 < iVar3) {
              FUN_0052b240(2);
              break;
            }
            iVar3 = FUN_0055401d(local_100);
            *param_6 = iVar3;
            if ((0 < iVar3) && (iVar3 <= param_5)) goto switchD_0054fc18_caseD_7532;
            uVar9 = 8;
          }
          else {
            if ((param_9 == 3) || (param_9 == 4)) {
              FUN_004b7750(param_8,local_100);
              goto switchD_0054fc18_caseD_7532;
            }
            if ((param_9 == 2) && (((byte)local_100[0] == 0xcd || ((byte)local_100[0] == 0xce)))) {
              *param_6 = (local_100[0] & 0xff) - 0xb2;
              goto switchD_0054fc18_caseD_7532;
            }
            if ((0x40 < (byte)local_100[0]) && ((byte)local_100[0] < 0x5b)) {
              *param_6 = (local_100[0] & 0xff) - 0x40;
              goto switchD_0054fc18_caseD_7532;
            }
            uVar9 = 2;
          }
          FUN_0052b240(uVar9);
LAB_0054fd60:
          local_11c = FUN_005252a0(local_100,local_11c,local_118,uVar1,uVar8);
        }
        break;
      case 0x753f:
      case 0x7544:
      case 0x7545:
      case 0x7549:
      case 0x755a:
      case 0x755b:
switchD_0054fc18_caseD_753f:
        iVar3 = FUN_005249f0(local_100,uVar4,&local_11c,&local_118,&param_2,uVar1,uVar8);
        if (iVar3 == 0) goto LAB_0054fd60;
        break;
      case 0x7554:
        if (local_114 != 0) goto switchD_0054fc18_caseD_753f;
      }
    }
    else if (param_9 == 0) {
      if ((0x2f < param_2) && (param_2 < 0x3a)) {
        local_118 = FUN_00525300(local_100,uVar4,local_118,param_2);
        local_11c = FUN_005252a0(local_100,local_11c,local_118,uVar1,uVar8);
      }
    }
    else if ((param_9 == 3) || (param_9 == 4)) {
      local_118 = FUN_00525300(local_100,uVar4,local_118,param_2);
      local_11c = FUN_005252a0(local_100,local_11c,local_118,uVar1,uVar8);
    }
    else {
      if ((0x40 < param_2) && (param_2 < 0x5b)) {
        local_118 = FUN_00525300(local_100,uVar4,local_118,param_2);
        local_11c = FUN_005252a0(local_100,local_11c,local_118,uVar1,uVar8);
      }
      if ((param_9 == 2) && ((param_2 == 0xcd || (param_2 == 0xce)))) {
        local_118 = FUN_00525300(local_100,uVar4,local_118,param_2);
        local_11c = FUN_005252a0(local_100,local_11c,local_118,uVar1,uVar8);
      }
    }
    FUN_00538b30();
    param_1 = FUN_00526620(&param_2);
  } while( true );
}

