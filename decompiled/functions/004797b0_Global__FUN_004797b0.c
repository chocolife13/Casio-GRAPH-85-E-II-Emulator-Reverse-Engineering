// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004797b0
// entry: 004797b0  size: 800


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004797b0(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined1 local_100 [256];
  
  FUN_00538980(0,0,local_108);
  local_104 = FUN_00526410();
  FUN_00526420(0xf7);
  DAT_005cf110 = DAT_00582fd8;
  _DAT_005cf114 = DAT_00582fdc;
  puVar4 = &DAT_005cf110;
  puVar5 = &DAT_005cf118;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((param_1 == 2) || (param_1 == 3)) {
    DAT_005cf110 = DAT_00582fd0;
    _DAT_005cf114 = DAT_00582fd4;
    iVar3 = FUN_00477d70(param_4,param_5,local_100);
  }
  else {
    iVar3 = FUN_00477d00(param_4,local_100);
  }
  if (iVar3 == 0) {
    local_100[0] = 0;
  }
  FUN_00538860(0,&DAT_005cf110);
  FUN_005387f0(0);
  uVar2 = param_7;
  if ((((param_2 != 0) && ((param_3 < 0x30 || (0x39 < param_3)))) &&
      ((param_3 < 0x41 || (0x5a < param_3)))) && (param_3 != 0x3a)) {
switchD_004799ad_caseD_7532:
    FUN_00538810();
    FUN_005389c0(0,0,local_108);
    FUN_00523740();
    FUN_00526420(local_104);
    return param_3;
  }
  FUN_005232d0(1,param_7);
  FUN_005233e0(param_8);
  uVar1 = param_6;
  local_10c = 0;
  local_110 = 0;
  if (param_2 == 0) {
    if (param_3 == 0x7531) {
      local_100[0] = 0;
    }
    else if (param_3 == 0x7545) {
      param_3 = 0;
    }
  }
  else {
    local_100[0] = 0;
  }
  local_110 = FUN_005252a0(local_100,0,0,param_6,uVar2);
  do {
    FUN_00538b30();
    if (param_2 == 0) {
      switch(param_3) {
      case 0x7531:
        param_3 = 0x58;
        local_10c = FUN_00525300(local_100,9,local_10c,0x58);
        local_110 = FUN_005252a0(local_100,local_110,local_10c,uVar1,uVar2);
        break;
      case 0x7532:
      case 0x754d:
        goto switchD_004799ad_caseD_7532;
      case 0x7534:
        iVar3 = FUN_00479620(param_1,param_4,param_5,local_100);
        if (iVar3 != 0) goto switchD_004799ad_caseD_7532;
        FUN_0052b240(2);
        local_110 = FUN_005252a0(local_100,local_110,local_10c,uVar1,uVar2);
        break;
      case 0x753f:
      case 0x7544:
      case 0x7545:
      case 0x7549:
      case 0x755a:
      case 0x755b:
        iVar3 = FUN_005249f0(local_100,9,&local_110,&local_10c,&param_3,uVar1,uVar2);
        if (iVar3 == 0) {
          local_110 = FUN_005252a0(local_100,local_110,local_10c,uVar1,uVar2);
        }
      }
    }
    else if ((((0x2f < param_3) && (param_3 < 0x3a)) || ((0x40 < param_3 && (param_3 < 0x5b)))) ||
            (param_3 == 0x3a)) {
      local_10c = FUN_00525300(local_100,9,local_10c,param_3);
      local_110 = FUN_005252a0(local_100,local_110,local_10c,uVar1,uVar2);
    }
    param_2 = FUN_00526620(&param_3);
  } while( true );
}

