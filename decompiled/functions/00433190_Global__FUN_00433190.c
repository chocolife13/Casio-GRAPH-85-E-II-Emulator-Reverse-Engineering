// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00433190
// entry: 00433190  size: 1720


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00433190(uint param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined **ppuVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined *puVar15;
  undefined2 *puVar16;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [8];
  uint local_124;
  int local_120;
  undefined1 local_11c [4];
  undefined1 local_118 [4];
  undefined4 local_114;
  char local_110 [256];
  undefined1 local_10 [16];
  
  local_114 = FUN_00526410();
  FUN_00526420(0x60);
  FUN_00538980(0,0,local_118);
  puVar15 = PTR_s__GRAPH_005be9a0;
  DAT_005cdf40 = DAT_0057eb48;
  _DAT_005cdf44 = DAT_0057eb4c;
  puVar11 = &DAT_005cdf40;
  puVar13 = &DAT_005cdf48;
  for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  uVar14 = 0;
  if (puVar15 == (undefined *)0x0) {
switchD_00433228_switchD:
    switch(uVar14) {
    default:
      _DAT_005cdf60 = DAT_0057eb40;
      _DAT_005cdf64 = DAT_0057eb44;
    case 1:
      _DAT_005cdf58 = DAT_0057eb38;
      _DAT_005cdf5c = DAT_0057eb3c;
      _DAT_005cdf50 = DAT_0057eb30;
      _DAT_005cdf54 = DAT_0057eb34;
      DAT_005cdf48 = DAT_0057eb28;
      _DAT_005cdf4c = DAT_0057eb2c;
    case 2:
    case 4:
      DAT_005cdf40 = DAT_0057eb20;
      _DAT_005cdf44 = DAT_0057eb24;
    }
  }
  else {
    ppuVar12 = &PTR_s__GRAPH_005be9a0;
    do {
      uVar3 = FUN_004ab670(local_10,*ppuVar12);
      iVar9 = FUN_0055b770(uVar3);
      if (iVar9 == 0) break;
      ppuVar1 = ppuVar12 + 1;
      ppuVar12 = ppuVar12 + 1;
      uVar14 = uVar14 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
    if (uVar14 < 5) goto switchD_00433228_switchD;
  }
  FUN_00538860(0,&DAT_005cdf40);
  FUN_005387f0(0);
  iVar9 = param_6;
  local_110[0] = '\0';
  if ((param_1 == 0xe) || (param_1 == 0xd)) {
    uVar3 = 0xfffffffa;
LAB_00433811:
    FUN_00538810();
    FUN_005389c0(0,0,local_118);
    FUN_00526440();
    FUN_00526420(local_114);
    FUN_00523740();
    return uVar3;
  }
  iVar4 = FUN_00529a70(param_6);
  if (iVar4 == 0x409) {
    FUN_00517360(iVar9,local_110);
    pcVar5 = (char *)FUN_00529b70(local_110);
    local_124 = (uint)(pcVar5 == local_110);
    if (param_7 == 0) {
      iVar4 = FUN_004330a0(local_110);
      local_124 = local_124 + iVar4;
    }
    else if (param_7 == 1) {
      iVar4 = FUN_004330e0(local_110);
      local_124 = local_124 + iVar4;
    }
  }
  else {
    local_124 = 0;
  }
  iVar4 = 2;
  if ((param_2 == 0) && (param_1 == 0x7545)) {
    iVar6 = FUN_00529a70(iVar9);
    if (iVar6 != 0x409) {
      FUN_00517360(iVar9,local_110);
    }
    local_120 = 2;
  }
  else {
    local_120 = 0;
    local_110[0] = '\0';
  }
  local_134 = 0;
  local_130 = 0;
  iVar9 = param_4;
  iVar6 = param_5;
  do {
    iVar7 = FUN_00529a70(iVar9);
    iVar10 = -(uint)(iVar7 != 0x409) + 5;
    if ((param_6 == iVar9) && (iVar6 == param_7)) break;
    iVar8 = FUN_00529a70(iVar9);
    if (iVar8 == 0x409) {
      if (iVar6 == 1) {
        iVar6 = 0;
        iVar9 = iVar9 + 1;
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar9 = iVar9 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  uVar14 = FUN_00529a70(param_6);
  if (uVar14 < 0x1b9) {
    if (uVar14 != 0x1b8) {
      switch(uVar14) {
      case 0x108:
      case 0x188:
      case 0x198:
      case 0x1a8:
        break;
      default:
        goto switchD_0043343a_caseD_109;
      }
    }
    puVar15 = &DAT_005bea04;
  }
  else if (uVar14 == 0x209) {
    puVar15 = &DAT_005be9f4;
  }
  else if (uVar14 == 0x409) {
    if (iVar6 == 1) {
      puVar15 = &DAT_005be9fc;
    }
    else {
      puVar15 = &DAT_005be9f8;
    }
  }
  else {
    if (uVar14 != 0x40a) goto switchD_0043343a_caseD_109;
    puVar15 = &DAT_005bea00;
  }
  FUN_004b6ef0(local_12c,puVar15);
switchD_0043343a_caseD_109:
  iVar9 = param_6;
  FUN_0055c2fe(param_6,local_11c,10);
  FUN_004b6e70(local_12c,local_11c);
  switch(uVar14) {
  case 0x188:
    puVar16 = (undefined2 *)&DAT_005be9f0;
    break;
  default:
    puVar16 = (undefined2 *)&DAT_005be9e0;
    break;
  case 0x198:
    puVar16 = &DAT_005be9ec;
    break;
  case 0x1a8:
    puVar16 = (undefined2 *)&DAT_005be9e4;
    break;
  case 0x1b8:
    puVar16 = (undefined2 *)&DAT_005be9e8;
  }
  FUN_004b6e70(local_12c,puVar16);
  FUN_005232d0(1,iVar4);
  FUN_005233e0(local_12c);
  if (9 < iVar9) {
    iVar10 = -(uint)(iVar7 != 0x409) + 6;
  }
  FUN_005232d0(iVar10,iVar4);
  FUN_00527030();
  FUN_00538b30();
  uVar14 = local_124;
  iVar9 = local_120;
LAB_0043354a:
  if (iVar9 != 2) {
    iVar9 = 0;
  }
  if (param_2 != 0) {
    if ((param_1 < 0xd) || (0xe < param_1)) {
      local_130 = FUN_00525300(local_110,0xff - uVar14,local_130,param_1);
      local_134 = FUN_005252a0(local_110,local_134,local_130,iVar10,iVar4);
    }
    goto switchD_004335ce_caseD_7533;
  }
  if (param_1 < 0x754e) {
    if (param_1 == 0x754d) {
      uVar3 = 0xffffffff;
      goto LAB_00433811;
    }
    switch(param_1) {
    case 0x7531:
      iVar6 = FUN_00529a70(param_6);
      if (iVar6 == 0x409) {
        param_1 = 0x54;
      }
      else if (iVar6 == 0x40a) {
        param_1 = 0xce;
      }
      else {
        param_1 = 0x58;
      }
      local_130 = FUN_00525300(local_110,0xff - uVar14,local_130,param_1);
      local_134 = FUN_005252a0(local_110,local_134,local_130,iVar10,iVar4);
      break;
    case 0x7532:
      goto switchD_004335ce_caseD_7532;
    case 0x7534:
      if (local_110[0] != '\0') {
        FUN_00523740();
        cVar2 = FUN_00433980(param_6,param_7,local_110);
        if (cVar2 == '\0') {
          uVar3 = 0;
          goto LAB_00433811;
        }
        FUN_0052b240(4);
        FUN_00527030();
      }
      break;
    case 0x753f:
    case 0x7544:
    case 0x7545:
    case 0x7549:
switchD_004335ce_caseD_753f:
      if (iVar9 == 2) {
        iVar9 = 0;
LAB_004337c3:
        local_134 = FUN_005252a0(local_110,local_134,local_130,iVar10,iVar4);
      }
      else {
        iVar6 = FUN_005249f0(local_110,0xff - uVar14,&local_134,&local_130,&param_1,iVar10,iVar4);
        if (iVar6 == -4) {
          param_2 = 0;
          iVar9 = 1;
        }
        else if (iVar6 == -3) {
          iVar9 = 1;
          param_2 = 1;
        }
        else if (iVar6 == 0) goto LAB_004337c3;
      }
    }
  }
  else if (param_1 < 0x791a) {
    if (param_1 < 31000) {
      if ((param_1 == 0x7554) || ((0x7559 < param_1 && (param_1 < 0x755c))))
      goto switchD_004335ce_caseD_753f;
    }
    else {
LAB_0043375e:
      if (param_1 < 0xfffffffd) {
        if (param_1 != 0xfffffffc) {
          if (param_1 == 0x7919) goto LAB_00433784;
          if (param_1 != 0x791f) goto LAB_0043377d;
        }
        uVar3 = 2;
      }
      else if (param_1 == 0xfffffffd) {
LAB_00433784:
        uVar3 = 1;
      }
      else {
LAB_0043377d:
        uVar3 = 3;
      }
      iVar6 = FUN_0052a950(uVar3,local_110,&local_130,0xff - uVar14);
      if ((iVar6 == -5) || ((-3 < iVar6 && (iVar6 < 1)))) goto LAB_004337c3;
    }
  }
  else if ((param_1 == 0x791f) || ((0xfffffffa < param_1 && (param_1 < 0xfffffffe))))
  goto LAB_0043375e;
switchD_004335ce_caseD_7533:
  FUN_00538b30();
  if (iVar9 == 1) {
    iVar9 = 0;
  }
  else {
    param_2 = FUN_00526620(&param_1);
  }
  goto LAB_0043354a;
switchD_004335ce_caseD_7532:
  uVar3 = 0xfffffffe;
  goto LAB_00433811;
}

