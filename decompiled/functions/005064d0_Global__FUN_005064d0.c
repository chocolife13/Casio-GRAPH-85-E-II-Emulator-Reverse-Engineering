// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005064d0
// entry: 005064d0  size: 189


undefined4 FUN_005064d0(int *param_1,char *param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int local_ec4;
  int iStack_ec0;
  int iStack_ebc;
  undefined4 uStack_eb8;
  int iStack_eb4;
  undefined4 uStack_eb0;
  int iStack_eac;
  undefined4 local_ea8;
  undefined4 uStack_ea4;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  undefined4 uStack_e98;
  undefined4 uStack_e94;
  undefined4 uStack_e90;
  undefined4 uStack_e8c;
  undefined4 uStack_e88;
  undefined4 uStack_e84;
  undefined1 auStack_e80 [12];
  undefined4 uStack_e74;
  undefined1 auStack_e70 [36];
  undefined4 uStack_e4c;
  undefined4 *puStack_e48;
  undefined4 *puStack_e44;
  undefined4 *puStack_e40;
  undefined1 *puStack_e3c;
  int iStack_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  char acStack_e20 [12];
  byte abStack_e14 [24];
  undefined1 auStack_dfc [36];
  byte local_dd8 [2048];
  undefined1 auStack_5d8 [168];
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 *local_4fc;
  byte local_4f8;
  byte bStack_4f7;
  char local_4f5;
  undefined1 auStack_4e0 [256];
  undefined4 local_3e0 [2];
  int iStack_3d8;
  uint uStack_3c8;
  undefined1 uStack_3c4;
  undefined1 uStack_3c3;
  undefined1 uStack_3a4;
  
  local_4fc = local_3e0;
  local_ea8 = CONCAT31(local_ea8._1_3_,0xb);
  DAT_005d6800 = 0;
  FUN_00503490(local_dd8);
  if (param_3 != '\0') {
    local_4f5 = param_3;
  }
  cVar3 = local_4f5;
  local_4f8 = local_4f8 & 0xcf;
  local_ec4 = FUN_00514940(local_dd8,1);
  if ((local_ec4 != 0) || (local_ec4 = FUN_00516800(local_dd8), local_ec4 != 0)) goto LAB_005077f9;
  iVar5 = FUN_00517c00();
  if (iVar5 == 0) {
    iVar5 = FUN_00517ac0(0);
    if (iVar5 != 0) {
      uVar6 = FUN_00501ef0(param_4);
      return uVar6;
    }
    local_ec4 = FUN_00516b30();
    if (local_ec4 != 0) goto LAB_005077f9;
    local_ec4 = FUN_00514820(local_dd8);
    if (local_ec4 != 0) {
      FUN_00515dd0();
      uVar6 = FUN_005064b0(local_ec4,param_4);
      return uVar6;
    }
  }
  else {
    FUN_00516760(local_dd8);
  }
  FUN_0050acb0(local_dd8);
  thunk_FUN_0040add0();
  cVar1 = *param_2;
  if (cVar1 == -0x20) {
    FUN_004fe330(param_2,param_1);
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      local_ec4 = FUN_005063f0(param_1,param_2,&uStack_ea4);
      if (local_ec4 != 0) {
        uVar6 = FUN_005064b0(local_ec4,param_4);
        return uVar6;
      }
      iVar5 = FUN_004f9b40(param_2);
      if (iVar5 == 0) {
        uVar6 = FUN_00501f30(param_4);
        return uVar6;
      }
      iVar5 = FUN_004d5130(&uStack_ea4,&iStack_ebc,auStack_5d8,0);
      if ((iVar5 != 0) || (iVar5 = FUN_004d5210(&uStack_e98,&uStack_eb8,auStack_5d8), iVar5 != 0)) {
        iVar5 = FUN_00517df0(&iStack_e38);
        if ((iVar5 != 0) && (iStack_e38 != -1)) {
          FUN_0050f990(iStack_e38,uStack_e34,local_dd8,0x20,0);
          iStack_ebc = -1;
          uStack_eb8 = 0xffffffff;
          FUN_00517c90(&iStack_ebc);
        }
        goto switchD_005065f8_caseD_95;
      }
    }
    else {
      iStack_ebc = 0x40;
      uStack_eb8 = 0x20;
      FUN_004d4da0(&uStack_ea4,0x40,auStack_5d8,0);
      FUN_004d4e70(&uStack_e98,uStack_eb8,auStack_5d8);
    }
    local_ea8 = CONCAT31(local_ea8._1_3_,0xc);
    iVar5 = FUN_00517df0(&iStack_e38);
    if (iVar5 == 0) {
      iStack_eb4 = -1;
      uStack_eb0 = 0xffffffff;
      iVar5 = FUN_00517c90(&iStack_ebc);
      if (iVar5 != 0) {
        uVar6 = FUN_00501ef0(param_4);
        return uVar6;
      }
    }
    else if (iStack_e38 == -1) {
      FUN_00517d50();
      FUN_00517c90(&iStack_ebc);
    }
    else {
      FUN_0050f990(iStack_e38,uStack_e34,local_dd8,0x20,0);
      FUN_00517c90(&iStack_ebc);
    }
    FUN_0052f780(0x58,&uStack_ea4);
    FUN_0052f780(0x59,&uStack_e98);
    uVar6 = local_ea8;
    goto LAB_005077d1;
  }
  if (cVar1 == -0x1f) {
    FUN_004fe330(param_2,param_1);
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    iStack_ec0 = FUN_00517df0(&iStack_ebc);
    if ((iStack_ec0 != 2) || (iStack_ebc == -1)) goto switchD_005065f8_caseD_95;
    DAT_005d6800 = 0;
    iVar5 = iStack_eb4;
    uVar6 = uStack_eb0;
    iVar8 = iStack_ebc;
    uVar7 = uStack_eb8;
    goto LAB_00506d1c;
  }
  if (cVar1 != -9) goto switchD_005065f8_caseD_95;
  switch(param_2[1]) {
  case -0x6d:
    iStack_ec0 = 0x7634;
    goto LAB_00507448;
  case -0x6c:
    iStack_ec0 = 0x7635;
LAB_00507448:
    iVar5 = FUN_004f57b0(param_1,param_2,param_4,&iStack_eac,0x14);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    if (iStack_ec0 == 0x7634) {
      local_ec4 = FUN_00516620(local_dd8,iStack_eac);
      if (local_ec4 != 0) {
LAB_005074bb:
        uVar6 = FUN_005064b0(local_ec4,param_4);
        return uVar6;
      }
    }
    else {
      pbVar11 = (byte *)FUN_00516710(iStack_eac);
      iStack_eac = 0;
      if (pbVar11 == (byte *)0x0) {
        local_ec4 = 4;
        goto LAB_005074bb;
      }
      local_ec4 = 0;
      pbVar12 = local_dd8;
      do {
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        *pbVar12 = *pbVar12 | bVar2;
        pbVar12 = pbVar12 + 1;
        iStack_eac = iStack_eac + 1;
      } while (iStack_eac < 0x800);
    }
    FUN_0050acb0(local_dd8);
  default:
    goto switchD_005065f8_caseD_95;
  case -0x60:
    iStack_ec0 = 0x760d;
    local_ea8 = CONCAT31(local_ea8._1_3_,0x13);
    goto LAB_005066a2;
  case -0x5f:
    iStack_ec0 = 0x760e;
    local_ea8 = CONCAT31(local_ea8._1_3_,0x14);
    goto LAB_005066a2;
  case -0x5e:
    iStack_ec0 = 0x760f;
LAB_005066a2:
    FUN_004fe330(param_2,param_1);
    cVar3 = *param_2;
    if (cVar3 == '\x7f') {
      if (param_2[1] == -0x10) {
        uStack_3c3 = 1;
        uStack_e4c._0_3_ = CONCAT12(1,(undefined2)uStack_e4c);
        uVar13 = 0x100;
      }
      else {
        if (param_2[1] != -0xf) goto LAB_0050671f;
        if (iStack_ec0 == 0x760f) {
          uVar6 = FUN_00501da0(param_4);
          return uVar6;
        }
        uStack_3c3 = 4;
        uStack_e4c._0_3_ = CONCAT12(2,(undefined2)uStack_e4c);
        uVar13 = 0x402;
      }
    }
    else {
LAB_0050671f:
      if ((cVar3 != -7) || (param_2[1] != '\x1b')) {
        if (cVar3 != '\x7f') {
LAB_00506c55:
          uVar6 = FUN_00501f30(param_4);
          return uVar6;
        }
        if ((param_2[1] != -0xe) && (param_2[1] != -0xd)) {
          if (param_2[1] == -0xc) {
            uVar6 = FUN_00501da0(param_4);
            return uVar6;
          }
          goto LAB_00506c55;
        }
      }
      if (iStack_ec0 == 0x760f) {
        uVar6 = FUN_00501da0(param_4);
        return uVar6;
      }
      uStack_3c3 = 3;
      uStack_e4c._0_3_ = CONCAT12(3,(undefined2)uStack_e4c);
      uVar13 = 0x401;
    }
    FUN_004fe330(param_2,param_1);
    iVar5 = FUN_00506440(param_1,param_2,&iStack_eac);
    if (iVar5 != 0) {
      uVar6 = FUN_00501da0(param_4);
      return uVar6;
    }
    uVar4 = FUN_005172b0(iStack_eac);
    uStack_e4c = CONCAT22(uStack_e4c._2_2_,uVar4);
    uStack_3c8 = (uint)uVar4;
    if ((uStack_3c8 & uVar13) != uVar13) {
      uVar6 = FUN_00501da0(param_4);
      return uVar6;
    }
    if (iStack_ec0 == 0x760f) {
      if (uStack_3c8 != 0x108) {
        uVar6 = FUN_00501da0(param_4);
        return uVar6;
      }
    }
    else {
      if (*param_2 != ',') {
        uVar6 = FUN_00501f30(param_4);
        return uVar6;
      }
      FUN_004fe330(param_2,param_1);
      local_ec4 = FUN_00506370(param_1,param_2,&uStack_ea4);
      if (local_ec4 != 0) {
LAB_005077f9:
        uVar6 = FUN_005064b0(local_ec4,param_4);
        return uVar6;
      }
    }
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    uStack_3c4 = FUN_005173e0(iStack_eac);
    local_3e0[0] = FUN_00517250(iStack_eac);
    iStack_3d8 = iStack_eac;
    uStack_3a4 = 0;
    FUN_00513550(local_dd8,&local_ec4);
    if ((uStack_3c8 & 0xe000) != 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    bVar2 = FUN_00517c40();
    local_4f8 = local_4f8 ^ (bVar2 ^ local_4f8) & 3;
    local_ec4 = FUN_00510270(local_dd8);
    if (local_ec4 != 0) {
      FUN_00515dd0();
      uVar6 = FUN_005064b0(local_ec4,param_4);
      return uVar6;
    }
    FUN_00517b40(local_4f8 & 3);
    FUN_0050acb0(local_dd8);
    if (iStack_ec0 == 0x760f) {
      uStack_e28 = 0;
      uStack_e24 = 1;
      local_ec4 = FUN_0051b470(local_dd8,&uStack_e28);
      if (local_ec4 != 0) {
        FUN_00515dd0();
        uVar6 = FUN_005064b0(local_ec4,param_4);
        return uVar6;
      }
    }
    else {
      uStack_e4c = CONCAT13(bStack_4f7 >> 1,(undefined3)uStack_e4c) & 0x1ffffff;
      if ((uVar13 & 0x100) == 0) {
        puStack_e48 = &uStack_e98;
        puStack_e44 = &uStack_e8c;
        puStack_e40 = &uStack_ea4;
        puStack_e3c = auStack_e80;
        local_ec4 = FUN_0050e230(&uStack_ea4,&uStack_e98,&uStack_e8c,auStack_e80,local_dd8,0,1);
        if (local_ec4 != 0) {
          FUN_00515dd0();
          uVar6 = FUN_005064b0(local_ec4,param_4);
          return uVar6;
        }
      }
      else {
        puStack_e48 = &uStack_ea4;
        puStack_e44 = &uStack_e98;
        local_ec4 = FUN_0050f060(&uStack_ea4,&uStack_e98,local_dd8,0,1);
        if (local_ec4 != 0) {
          FUN_00515dd0();
          uVar6 = FUN_005064b0(local_ec4,param_4);
          return uVar6;
        }
      }
      local_ec4 = FUN_0051c420(auStack_e70,local_dd8,0,1);
      if ((local_ec4 != 0) ||
         (local_ec4 = FUN_0051b1c0(&iStack_ec0,puStack_e48,puStack_e44,auStack_e70,local_dd8),
         local_ec4 != 0)) {
LAB_005072ba:
        FUN_00515dd0();
        uVar6 = FUN_005064b0(local_ec4,param_4);
        return uVar6;
      }
      iVar5 = FUN_005185a0(puStack_e48,0);
      if (iVar5 != 0) {
        uVar6 = FUN_005064b0(4,param_4);
        return uVar6;
      }
      FUN_005185a0(puStack_e44,1);
      if ((uVar13 & 0x100) == 0) {
        FUN_005185a0(puStack_e40,2);
        FUN_005185a0(puStack_e3c,3);
      }
      FUN_005185a0(&uStack_530,4);
      FUN_005185a0(&uStack_524,5);
      iVar5 = FUN_005186b0(auStack_e70);
      if (iVar5 != 0) {
        uVar6 = FUN_005064b0(4,param_4);
        return uVar6;
      }
      FUN_0052f780(0x58,puStack_e48);
      FUN_0052f780(0x59,puStack_e44);
    }
    uVar6 = local_ea8;
    if ((char)local_ea8 == '\v') goto switchD_005065f8_caseD_95;
    goto LAB_005077d1;
  case -0x5d:
    iStack_ec0 = 0x7613;
    goto LAB_00506c7e;
  case -0x5c:
    iStack_ec0 = 0x7614;
LAB_00506c7e:
    FUN_004fe330(param_2,param_1);
    local_ec4 = FUN_00506370(param_1,param_2,&uStack_ea4);
    if (local_ec4 != 0) goto LAB_005077f9;
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    DAT_005d6800 = 0;
    if (iStack_ec0 == 0x7613) {
      iVar5 = FUN_004d5130(&uStack_ea4,&iStack_ebc,auStack_5d8,0);
      if (iVar5 == 0) {
        uVar6 = 1;
        iVar5 = iStack_ebc;
        iVar8 = iStack_ebc;
        uVar7 = 0x3f;
LAB_00506d1c:
        FUN_0050f940(iVar5,uVar6,iVar8,uVar7,local_dd8,cVar3,0);
      }
    }
    else {
      iVar5 = FUN_004d5210(&uStack_ea4,&uStack_eb8,auStack_5d8);
      if (iVar5 == 0) {
        iVar8 = 0x7f;
        iVar5 = 1;
        uVar6 = uStack_eb8;
        uVar7 = uStack_eb8;
        goto LAB_00506d1c;
      }
    }
    goto switchD_005065f8_caseD_95;
  case -0x5b:
    iStack_ec0 = 0x7616;
    break;
  case -0x5a:
    iStack_ec0 = 0x7612;
    goto LAB_005070cd;
  case -0x59:
    iStack_ec0 = 0x761a;
LAB_005070cd:
    FUN_004fe330(param_2,param_1);
    local_ec4 = FUN_005063f0(param_1,param_2,&uStack_ea4);
    if (local_ec4 != 0) {
      uVar6 = FUN_005064b0(local_ec4,param_4);
      return uVar6;
    }
    if (*param_2 != ',') {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    FUN_004fe330(param_2,param_1);
    if (iStack_ec0 == 0x761a) {
      local_ec4 = FUN_005063f0(param_1,param_2,&uStack_e8c);
    }
    else {
      local_ec4 = FUN_00506370(param_1,param_2,&uStack_e8c);
    }
    if (local_ec4 != 0) goto LAB_005077f9;
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    if ((iStack_ec0 != 0x761a) ||
       ((((iVar5 = FUN_004d5130(&uStack_ea4,&iStack_eb4,auStack_5d8,0), iVar5 == 0 &&
          (iVar5 = FUN_004d5210(&uStack_e98,&uStack_eb0,auStack_5d8), iVar5 == 0)) &&
         (iVar5 = FUN_004d5130(&uStack_e8c,&iStack_ebc,auStack_5d8,0), iVar5 == 0)) &&
        (iVar5 = FUN_004d5210(auStack_e80,&uStack_eb8,auStack_5d8), iVar5 == 0)))) {
      if (iStack_ec0 == 0x7612) {
        uStack_530 = uStack_ea4;
        uStack_52c = uStack_ea0;
        uStack_518 = uStack_e98;
        uStack_528 = uStack_e9c;
        uStack_524 = uStack_e8c;
        uStack_514 = uStack_e94;
        uStack_510 = uStack_e90;
        uStack_520 = uStack_e88;
        uStack_51c = uStack_e84;
        local_ec4 = FUN_0051d450(local_dd8,1);
        if (local_ec4 != 0) goto LAB_005072ba;
        goto switchD_005065f8_caseD_95;
      }
      DAT_005d6800 = 0;
      iVar5 = iStack_ebc;
      uVar6 = uStack_eb8;
      iVar8 = iStack_eb4;
      uVar7 = uStack_eb0;
      goto LAB_00506d1c;
    }
    goto switchD_005065f8_caseD_95;
  case -0x58:
    iStack_ec0 = 0x7617;
    goto LAB_0050732c;
  case -0x57:
    iStack_ec0 = 0x7618;
    goto LAB_0050732c;
  case -0x56:
    iStack_ec0 = 0x7619;
LAB_0050732c:
    FUN_004fe330(param_2,param_1);
    local_ec4 = FUN_005063f0(param_1,param_2,&uStack_ea4);
    if (local_ec4 != 0) goto LAB_005077f9;
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    iVar5 = FUN_004d5130(&uStack_ea4,&iStack_ebc,auStack_5d8,0);
    if ((iVar5 == 0) && (iVar5 = FUN_004d5210(&uStack_e98,&uStack_eb8,auStack_5d8), iVar5 == 0))
    goto LAB_005073c3;
    goto switchD_005065f8_caseD_95;
  case -0x55:
    iStack_ec0 = 0x7617;
    break;
  case -0x54:
    iStack_ec0 = 0x7618;
    break;
  case -0x53:
    iStack_ec0 = 0x7619;
  }
  FUN_004fe330(param_2,param_1);
  local_ec4 = FUN_00507950(param_1,param_2,param_4,&iStack_ebc);
  if (local_ec4 != 0) {
    uVar6 = FUN_005064b0(local_ec4,param_4);
    return uVar6;
  }
  if (iStack_ec0 == 0x7616) {
    if (*param_2 != ',') {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    if (*(char *)*param_1 == '\"') {
      FUN_004fe330(param_2,param_1);
      pcVar9 = (char *)*param_1;
      do {
        FUN_004fe330(param_2,param_1);
        cVar3 = *param_2;
        if ((cVar3 == '\0') || (cVar3 == '\r')) break;
      } while (cVar3 != '\"');
      if (*param_2 == '\"') {
        FUN_004fe330(param_2,param_1);
        iVar5 = FUN_004f9b40(param_2);
        if (iVar5 == 0) {
          uVar6 = FUN_00501f30(param_4);
          return uVar6;
        }
      }
LAB_00506f16:
      auStack_4e0[0] = 0;
      cVar3 = *pcVar9;
      iVar5 = 0x20;
      if (cVar3 != '\0') {
LAB_00506f2d:
        if ((cVar3 != '\r') && (cVar3 != '\"')) {
          uVar6 = FUN_004b78f0(pcVar9);
          uVar7 = FUN_004b79f0(uVar6,auStack_dfc);
          iVar8 = FUN_004b6bd0(uVar7);
          if (iVar8 <= iVar5) goto code_r0x00506f62;
          iVar8 = FUN_004b6ca0(auStack_4e0);
          puVar10 = auStack_4e0 + iVar8;
          if (0 < iVar5) {
            iVar8 = -(int)puVar10;
            do {
              *puVar10 = puVar10[(int)(auStack_dfc + iVar8)];
              puVar10 = puVar10 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          *puVar10 = 0;
        }
      }
    }
    else {
      iVar5 = FUN_004fe470((char *)*param_1);
      if ((iVar5 != 0) && (iVar5 = FUN_004f6620(param_1,param_2,&uStack_e74), iVar5 != 0)) {
        iVar5 = FUN_005286a0(0,uStack_e74,acStack_e20);
        if ((iVar5 == 0) || (acStack_e20[0] == '\0')) {
          uVar6 = FUN_00501ef0(param_4);
          return uVar6;
        }
        pcVar9 = acStack_e20;
        goto LAB_00506f16;
      }
      iVar5 = FUN_00501720(param_1,param_2,abStack_e14,1);
      if (iVar5 == 0) {
        uVar6 = FUN_004e4020(abStack_e14,param_4);
        uVar6 = FUN_005064b0(uVar6);
        return uVar6;
      }
      if ((abStack_e14[0] & 0x60) == 0x20) {
        FUN_004fd9e0(abStack_e14);
        uVar6 = FUN_00501f30(param_4);
        return uVar6;
      }
      iVar5 = FUN_004f9b40(param_2);
      if (iVar5 == 0) {
        uVar6 = FUN_00501f30(param_4);
        return uVar6;
      }
      FUN_004b5030(abStack_e14,auStack_4e0);
    }
LAB_00507085:
    iStack_ebc = FUN_0051c4a0(auStack_4e0,0,iStack_ebc,uStack_eb8,local_dd8,0x20,0);
    FUN_0040ae30();
  }
  else {
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    FUN_004d4da0(&uStack_ea4,iStack_ebc,auStack_5d8,0);
    FUN_004d4e70(&uStack_e98,uStack_eb8,auStack_5d8);
LAB_005073c3:
    FUN_0052f780(0x58,&uStack_ea4);
    FUN_0052f780(0x59,&uStack_e98);
    if ((iStack_ec0 == 0x7618) ||
       ((iStack_ec0 == 0x7619 && (iVar5 = FUN_00507900(local_dd8,iStack_ebc,uStack_eb8), iVar5 != 0)
        ))) {
      uVar6 = 0xe0;
    }
    else {
      uVar6 = 0x20;
    }
    FUN_0050f990(iStack_ebc,uStack_eb8,local_dd8,uVar6,0);
  }
switchD_005065f8_caseD_95:
  uVar6 = FUN_00517c00();
  switch(uVar6) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x13:
  case 0x14:
    uVar6 = 0xb;
    break;
  default:
    goto switchD_00506d3a_caseD_1;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    uVar6 = 1;
  }
LAB_005077d1:
  FUN_00517ac0(uVar6);
switchD_00506d3a_caseD_1:
  FUN_005167a0(local_dd8);
  return 1;
code_r0x00506f62:
  uVar6 = FUN_004b79f0(uVar6,auStack_dfc);
  FUN_004b6e70(auStack_4e0,uVar6);
  iVar5 = iVar5 - iVar8;
  pcVar9 = (char *)FUN_004b7840(pcVar9);
  cVar3 = *pcVar9;
  if (cVar3 == '\0') goto LAB_00507085;
  goto LAB_00506f2d;
}

