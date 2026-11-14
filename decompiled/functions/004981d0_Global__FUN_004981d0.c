// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004981d0
// entry: 004981d0  size: 2447


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004981d0(uint param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  undefined8 uVar14;
  uint local_338;
  byte local_331;
  uint local_330;
  undefined4 local_32c;
  byte local_326 [2];
  undefined4 local_324;
  uint local_320;
  undefined2 local_31c;
  undefined2 local_31a;
  uint local_318;
  undefined4 local_314;
  uint local_310;
  uint local_30c;
  uint local_308;
  uint local_304;
  byte local_300 [256];
  char local_200 [256];
  undefined1 local_100 [256];
  
  iVar7 = param_2;
  local_326[0] = 0xd8;
  local_326[1] = 0;
  if (param_2 == 0) {
    if (param_1 == 0x7554) {
      local_300[0] = 0;
    }
    else {
      uVar3 = FUN_00495770(DAT_005d6d88);
      FUN_004b7750(local_300,uVar3);
    }
  }
  else {
    local_300[0] = 0;
  }
  local_338 = FUN_004b7550(local_300);
  if (param_1 == 0x7544) {
    FUN_00526300(2);
    param_1 = 0;
  }
  else if (param_1 == 0x7545) {
    FUN_00526300(2);
    param_1 = 0;
    local_338 = 0;
  }
  else {
    iVar10 = *param_3;
    uVar14 = FUN_004b7490(local_300);
    uVar3 = (undefined4)((ulonglong)uVar14 >> 0x20);
    if ((iVar10 <= (int)uVar14) && (local_338 = 0, 0 < iVar10)) {
      do {
        uVar14 = FUN_004b7370(CONCAT31((int3)((uint)uVar3 >> 8),local_300[local_338 & 0xffff]));
        uVar3 = (undefined4)((ulonglong)uVar14 >> 0x20);
        if ((int)uVar14 == 0) {
          local_338 = local_338 + 1;
        }
        else {
          local_338 = local_338 + 2;
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
LAB_004982bb:
  uVar3 = FUN_00495770(DAT_005d6d88);
  FUN_004b7750(local_200,uVar3);
  FUN_00496700(DAT_005d6d88,&local_330);
  local_308 = local_330;
  local_304 = local_32c;
  local_314 = DAT_005d6d90;
  DAT_005d5748 = local_100;
  local_318 = local_318 & 0xffffff00;
  local_324 = CONCAT31(local_324._1_3_,local_32c._2_1_);
  local_331 = (byte)local_32c;
  FUN_00527030();
LAB_0049832c:
  if (iVar7 != 0) {
LAB_00498885:
    if ((DAT_005d6d8c != 0) && (iVar7 = FUN_004976f0(param_1), iVar7 != 0)) {
      iVar7 = FUN_00497f90();
      if (iVar7 != 0) {
        local_338 = FUN_00536da0(local_300,0xff,local_338,iVar7,0);
      }
      local_338 = FUN_00536da0(local_300,0xff,local_338,0xc0,0);
    }
    DAT_005d6d80 = 1;
    DAT_005d6d8c = 0;
    local_338 = FUN_00536da0(local_300,0xff,local_338,param_1,1);
    goto switchD_004986d3_default;
  }
  if (param_1 < 0x7532) {
    if (param_1 == 0x7531) {
      param_1 = FUN_00526040();
    }
    else {
      switch(param_1) {
      case 10:
        DAT_005d574f = 2;
        _DAT_005d5750 = CONCAT31(_DAT_005d5751,2);
        param_1 = 0x7f5d;
        break;
      case 0xb:
        DAT_005d574f = 3;
        _DAT_005d5750 = CONCAT31(_DAT_005d5751,3);
        param_1 = 0x7f5d;
        break;
      case 0xc:
        local_310 = (uint)DAT_005d574f;
        local_30c = _DAT_005d5750 & 0xff;
        iVar7 = FUN_004978b0(&local_310,&local_30c);
        if (iVar7 == 0) goto switchD_004986d3_default;
        _DAT_005d5750 = CONCAT31(_DAT_005d5751,(undefined1)local_30c);
        DAT_005d574f = (byte)local_310;
        param_1 = 0x7f5d;
        break;
      default:
        goto switchD_00498351_caseD_d;
      case 0x11:
      case 0x12:
        FUN_00497ff0(param_1);
        goto switchD_004986d3_default;
      case 0x13:
        param_1 = FUN_00522bb0(1);
        if (param_1 == 0) goto switchD_004986d3_default;
      }
    }
    goto LAB_00498885;
  }
  if (0x754d < param_1) {
    if (param_1 < 0x7563) {
      if (param_1 != 0x7562) {
        if (param_1 == 0x7554) goto switchD_00498502_caseD_753f;
        if (param_1 != 0x7555) {
          if (param_1 == 0x755e) goto switchD_00498502_caseD_754a;
          goto switchD_00498351_caseD_d;
        }
      }
    }
    else {
      if (param_1 < 0x7567) {
        if (param_1 == 0x7566) {
          param_1 = 0x7f5f;
          goto LAB_00498885;
        }
        if ((0x7563 < param_1) && (param_1 < 0x7566)) goto LAB_004987ac;
      }
      else if ((0x7949 < param_1) && (param_1 < 0x794d)) goto switchD_00498502_caseD_754a;
switchD_00498351_caseD_d:
      if ((param_1 == 0) || (29999 < param_1)) goto switchD_004986d3_default;
    }
    goto LAB_004987ac;
  }
  if (param_1 == 0x754d) {
switchD_00498502_caseD_7532:
    iVar7 = FUN_005262f0();
    if (iVar7 == 1) {
      FUN_00526300(2);
      goto switchD_004986d3_default;
    }
    if ((local_330 & 0x80000000) != 0) goto LAB_004987ac;
    FUN_00496410(DAT_005d6d88,&local_308,local_200);
    if (param_1 == 0x7532) {
      if (local_200[0] == '\0') {
        if (local_300[0] != 0) {
          local_338 = 0;
          local_300[0] = 0;
          goto switchD_004986d3_default;
        }
      }
      else {
        param_1 = 0;
      }
    }
    goto LAB_00498b42;
  }
  switch(param_1) {
  case 0x7532:
    goto switchD_00498502_caseD_7532;
  default:
    goto switchD_00498351_caseD_d;
  case 0x7534:
    if ((local_330 & 0x80000000) == 0) {
      if (local_300[0] != 0) goto LAB_00498604;
      FUN_00496700(DAT_005d6d88 + -1,&local_320);
      if (local_330 != 0x3000000) goto LAB_004983b0;
      if ((local_320 != 0x4000000) || (DAT_005d6d88 != DAT_005d6dbc + -1)) break;
      pcVar6 = (char *)FUN_00495770(DAT_005d6d88 + -2);
      uVar8 = 0xffffffff;
      goto code_r0x004985c1;
    }
    iVar10 = FUN_00497da0(local_300,local_338 & 0xffff);
    if (iVar10 != 0) {
      local_338 = FUN_004b7550(local_300);
    }
    iVar10 = FUN_00497de0(local_300,&local_338);
    if (iVar10 != 0) goto LAB_00498a8d;
    break;
  case 0x7542:
  case 0x7544:
  case 0x7545:
  case 0x7547:
    goto switchD_00498502_caseD_7542;
  case 0x7549:
    iVar10 = FUN_00497be0(local_300,&local_338);
    if (iVar10 != 0) goto LAB_00498a8d;
  case 0x753f:
switchD_00498502_caseD_753f:
    DAT_005d6d8c = 0;
    DAT_005d6d80 = 1;
switchD_00498502_caseD_7542:
    iVar7 = FUN_005378a0(local_300,0xff,&local_338,&param_1,local_318,local_314);
    switch(iVar7) {
    case 2:
      iVar10 = DAT_005d6d88 + 1;
      goto LAB_004987cd;
    case 3:
      iVar10 = DAT_005d6d88 + -1;
LAB_004987cd:
      FUN_00496700(iVar10,&local_320);
      if (((local_330 & 0x80000000) == 0) || ((local_320 & 0x80000000) == 0))
      goto switchD_004986d3_default;
      break;
    case 4:
      param_1 = 0x18;
      break;
    case 5:
      param_1 = 0x19;
      break;
    default:
      goto switchD_004986d3_default;
    }
    if (((DAT_005d6d88 != 0) || ((iVar7 != 4 && (iVar7 != 3)))) &&
       ((DAT_005d6d88 != DAT_005d6dbc + -1 || ((iVar7 != 5 && (iVar7 != 2)))))) {
LAB_004987ac:
      iVar7 = FUN_00496410(DAT_005d6d88,&local_330,local_300);
      if (iVar7 == 0) goto LAB_00498625;
      iVar7 = FUN_004980c0(local_300,local_338 & 0xffff);
      *param_3 = iVar7;
      if (local_330 == 0x3000000) {
        if (local_331 < 0x80) {
          local_338 = 0;
        }
        else {
          local_338 = local_338 + 1;
        }
        iVar7 = FUN_00495720(DAT_005d6d88);
        *(undefined2 *)(iVar7 + 4) = (undefined2)local_338;
      }
      goto LAB_00498b42;
    }
    break;
  case 0x754a:
switchD_00498502_caseD_754a:
    if (local_330 != 0x3000000) goto LAB_004983b0;
    if (local_300[0] == 0) {
      iVar7 = FUN_00496410(DAT_005d6d88,&local_330,local_300);
      if (iVar7 == 0) goto LAB_00498625;
      iVar7 = FUN_004980c0(local_300,local_338 & 0xffff);
      *param_3 = iVar7;
      FUN_00523740();
      return param_1;
    }
  }
switchD_004986d3_default:
  do {
    if ((local_330 == 0x3000000) && (local_300[0] == 0)) {
      uVar8 = 0xffffffff;
      pbVar11 = local_326;
      do {
        pbVar4 = pbVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pbVar4 = pbVar11 + 1;
        bVar1 = *pbVar11;
        pbVar11 = pbVar4;
      } while (bVar1 != 0);
      uVar8 = ~uVar8;
      pbVar11 = pbVar4 + -uVar8;
      pbVar4 = local_300;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar4 = pbVar4 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar4 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar4 = pbVar4 + 1;
      }
    }
LAB_004983b0:
    FUN_00533be0(local_300,&local_338,local_318,local_314,1,1,1,&local_324,&local_331);
    iVar7 = 0;
LAB_004983de:
    iVar10 = FUN_00498110(local_324);
    if (local_32c._2_2_ != (byte)local_324) {
      local_32c = (uint)CONCAT12((byte)local_324,(ushort)local_32c);
      iVar10 = 1;
    }
    if ((ushort)local_32c != local_331) {
      local_32c = CONCAT22(local_32c._2_2_,(ushort)local_331);
    }
    pbVar11 = local_326;
    pbVar4 = local_300;
    do {
      bVar1 = *pbVar4;
      bVar13 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_0049896f:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00498974;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar13 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_0049896f;
      pbVar4 = pbVar4 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00498974:
    pbVar11 = &DAT_005cd010;
    if (iVar5 != 0) {
      pbVar11 = local_300;
    }
    iVar5 = FUN_00496410(DAT_005d6d88,&local_330,pbVar11);
    if (iVar5 != 0) {
      if (iVar10 != 0) goto code_r0x004989a2;
      goto LAB_004989ff;
    }
LAB_00498625:
    FUN_0052b240(4);
    local_324 = CONCAT31(local_324._1_3_,local_32c._2_1_);
    FUN_00496700(DAT_005d6d88,&local_330);
    local_32c = (uint)CONCAT12((byte)local_324,(ushort)local_32c);
    uVar3 = FUN_00495770(DAT_005d6d88);
    FUN_004b7750(local_300,uVar3);
    local_338 = 0;
  } while( true );
LAB_00498a8d:
  param_1 = 0;
  goto LAB_004982bb;
code_r0x004989a2:
  FUN_00497260();
  uVar3 = DAT_005d6d90;
  local_314 = DAT_005d6d90;
  FUN_004971d0(0);
  FUN_00533be0(local_300,&local_338,local_318,uVar3,1,1,1,&local_324,&local_331);
  iVar10 = iVar7 + 1;
  if ((iVar7 != 0) || ((iVar7 = iVar10, -1 < (short)DAT_005d5730 && ((short)DAT_005d5730 < 0x31))))
  {
LAB_004989ff:
    pbVar11 = local_326;
    pbVar4 = local_300;
    goto LAB_00498a07;
  }
  goto LAB_004983de;
  while( true ) {
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < pbVar11[1];
    if (bVar1 != pbVar11[1]) goto LAB_00498a2b;
    pbVar4 = pbVar4 + 2;
    pbVar11 = pbVar11 + 2;
    if (bVar1 == 0) break;
LAB_00498a07:
    bVar1 = *pbVar4;
    bVar13 = bVar1 < *pbVar11;
    if (bVar1 != *pbVar11) {
LAB_00498a2b:
      iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_00498a30;
    }
    if (bVar1 == 0) break;
  }
  iVar7 = 0;
LAB_00498a30:
  if (iVar7 == 0) {
    local_300[0] = 0;
  }
  FUN_00538b30();
  DAT_005d6d7c = FUN_0040ad00();
  iVar7 = FUN_00526620(&param_1);
  if ((param_1 == 0x7534) && ((local_330 & 0x80000000) != 0)) {
    FUN_005262e0(DAT_005d6d7c);
  }
  goto LAB_0049832c;
  while( true ) {
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar12;
    if (cVar2 == '\0') break;
code_r0x004985c1:
    pcVar12 = pcVar6;
    if (uVar8 == 0) break;
  }
  uVar8 = ~uVar8;
  pbVar11 = (byte *)(pcVar12 + -uVar8);
  pbVar4 = local_300;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    pbVar4 = pbVar4 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar4 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar4 = pbVar4 + 1;
  }
  FUN_00496700(DAT_005d6d88 + -2,&local_320);
  local_32c = CONCAT22(local_31a,local_31c);
LAB_00498604:
  iVar7 = FUN_00496410(DAT_005d6d88,&local_330,local_300);
  if (iVar7 == 0) goto LAB_00498625;
  param_1 = 0xf;
LAB_00498b42:
  DAT_005d6d8c = 0;
  FUN_00523740();
  return param_1;
}

