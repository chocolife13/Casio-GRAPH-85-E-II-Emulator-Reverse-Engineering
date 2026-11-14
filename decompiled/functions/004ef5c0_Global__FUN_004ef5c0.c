// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ef5c0
// entry: 004ef5c0  size: 3983


undefined4 FUN_004ef5c0(undefined4 *param_1,byte *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined3 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined4 local_84 [3];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [36];
  undefined1 local_3c [48];
  undefined1 local_c [12];
  
  iVar6 = FUN_00517c00();
  cVar3 = '\0';
  local_ac = local_ac & 0xffffff00;
  local_b0 = local_b0 & 0xffffff00;
  FUN_004fe330(param_2,param_1);
  switch(*param_2) {
  case 0x7f:
    switch(param_2[1]) {
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      FUN_004f3c10(param_1,param_2);
      return 1;
    default:
      goto switchD_004efaea_caseD_20;
    case 0xb8:
    case 0xbc:
    case 0xbd:
      goto switchD_004efaad_caseD_b8;
    }
  default:
    goto switchD_004efaea_caseD_20;
  case 0xd4:
    cVar3 = FUN_00526090(0x17);
    if (cVar3 != '\0') {
      uVar8 = 0x17;
      uVar10 = 9;
      goto LAB_004efaf5;
    }
switchD_004efaad_caseD_b8:
    goto LAB_004ef628;
  case 0xd5:
    cVar3 = FUN_00526090(0x17);
    if (cVar3 == '\0') {
      uVar8 = FUN_004f58f0(2,param_3);
      return uVar8;
    }
    uVar8 = 0x17;
    uVar10 = 0xf;
    goto LAB_004efaf5;
  case 0xd6:
    cVar3 = FUN_00526090(0x17);
    if (cVar3 == '\0') {
      uVar8 = FUN_004f58f0(2,param_3);
      return uVar8;
    }
    uVar8 = 0x17;
    uVar10 = 1;
    goto LAB_004efaf5;
  case 0xd7:
    cVar3 = FUN_00526090(0x17);
    if (cVar3 == '\0') {
      uVar8 = FUN_004f58f0(2,param_3);
      return uVar8;
    }
    uVar8 = 0x17;
    uVar10 = 7;
    goto LAB_004efaf5;
  case 0xd9:
    bVar2 = FUN_00526090(0x2b);
    uVar10 = bVar2 & 0x80;
    FUN_004fe330(param_2,param_1);
    iVar6 = FUN_004f9b40(param_2);
    if (iVar6 != 0) {
      bVar2 = FUN_00526090(0x2b);
      if (((bVar2 & 0xf0) == 0) || ((bVar2 & 0xf0) == 0x80)) {
        uVar10 = (uint)(byte)((char)uVar10 + 0x10);
      }
      FUN_00526070(0x2b,uVar10);
      return 1;
    }
    if (*param_2 == 0x31) {
      uVar8 = 0x2b;
    }
    else {
      if (*param_2 != 0x32) {
        uVar8 = FUN_004f58f0(8,param_3);
        return uVar8;
      }
      uVar8 = 0x2b;
      uVar10 = (uint)(byte)((char)uVar10 + 0x10);
    }
    goto LAB_004efaf5;
  case 0xda:
    FUN_00526070(0x13,0);
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xdb:
    FUN_00526070(0x13,1);
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xdc:
    FUN_00526070(0x13,2);
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xdd:
    bVar2 = FUN_00526090(0x2b);
    if (bVar2 < 0x80) {
      cVar3 = FUN_00526090(0x2b);
      local_b0 = CONCAT31(local_b0._1_3_,cVar3 + -0x80);
      FUN_00526070(0x2b,local_b0);
    }
    else {
      cVar3 = FUN_00526090(0x2b);
      local_b0 = CONCAT31(local_b0._1_3_,cVar3 + -0x80);
      FUN_00526070(0x2b,local_b0);
    }
    goto switchD_004efaea_caseD_20;
  case 0xe3:
    goto switchD_004ef60b_caseD_e3;
  case 0xe4:
    cVar3 = '\x10';
switchD_004ef60b_caseD_e3:
    bVar2 = FUN_00526090(0x2b);
    local_ac = (-(uint)(bVar2 < 0x80) & 0xffffff80) + 0x80;
    FUN_004fe330(param_2,param_1);
    bVar2 = *param_2;
    if ((bVar2 < 0x30) || (0x39 < bVar2)) {
      uVar8 = FUN_004f58f0(8,param_3);
      return uVar8;
    }
    uVar8 = 0x2b;
    uVar10 = (uint)(byte)((bVar2 + (char)local_ac + cVar3) - 0x10);
    goto LAB_004efaf5;
  case 0xea:
    uVar8 = FUN_004f1180(param_1,param_2,param_3);
    return uVar8;
  case 0xeb:
    iVar6 = FUN_004f15f0(param_3,local_84);
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = 0;
    do {
      if (iVar6 == 3) {
        iVar6 = 4;
      }
      iVar7 = FUN_004f9b40(param_2);
      if (iVar7 != 0) {
        if (iVar6 == 0) {
LAB_004ef932:
          uVar8 = FUN_004f58f0(2,param_3);
          return uVar8;
        }
        break;
      }
      cVar3 = *(char *)*param_1;
      iVar7 = iVar6;
      while (cVar3 == ',') {
        FUN_004fe330(param_2,param_1);
        iVar7 = iVar7 + 1;
        if (iVar7 == 3) {
          iVar7 = 4;
        }
        else if (9 < iVar7) goto LAB_004ef932;
        cVar3 = *(char *)*param_1;
      }
      iVar6 = FUN_004f5850(param_1,param_2,param_3,3);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = iVar7 + 1;
      local_84[iVar7 * 3] = *param_3;
      uVar8 = param_3[2];
      local_84[iVar7 * 3 + 1] = param_3[1];
      *(undefined4 *)(local_78 + iVar7 * 0xc + -4) = uVar8;
    } while (iVar6 < 10);
    iVar6 = FUN_0051c300(local_84);
    if (iVar6 != 0) {
      uVar8 = FUN_004f58f0(0x1c,param_3);
      return uVar8;
    }
    FUN_004e6b40(local_78,local_84,local_a8);
    FUN_004e7910(local_a8,local_a8);
    uVar8 = FUN_004e5070(0x7e,local_90,local_60);
    FUN_004e6d90(local_a8,uVar8);
    FUN_004e7910(local_60,local_60);
    uVar8 = FUN_004e5070(0x3e,local_90,local_c);
    FUN_004e6d90(local_a8,uVar8);
    FUN_004e7910(local_c,local_c);
    FUN_004e5780(local_9c);
    iVar6 = FUN_004e7250(local_6c,local_9c);
    if (iVar6 != 0) {
      FUN_004e7730(local_6c,local_6c);
    }
    iVar6 = FUN_004e7250(local_3c,local_9c);
    if (iVar6 != 0) {
      FUN_004e7730(local_3c,local_3c);
    }
    iVar6 = FUN_00515e50(local_84);
    if (iVar6 != 0) {
      uVar8 = FUN_004f58f0(iVar6,param_3);
      return uVar8;
    }
    FUN_004f3c40(0);
    return 1;
  case 0xf7:
    goto switchD_004ef60b_caseD_f7;
  case 0xf9:
    switch(param_2[1]) {
    case 8:
      FUN_00526070(0x2a,0);
      FUN_004f3c40(1);
      break;
    case 9:
      FUN_00526070(0x2a,1);
      FUN_004f3c40(1);
      break;
    case 10:
      FUN_00526070(0x2a,2);
      FUN_004f3c40(1);
      break;
    case 0xb:
      bVar2 = FUN_00526090(0x2b);
      if (0x7f < bVar2) break;
      uVar10 = (uint)(byte)(bVar2 + 0x80);
      uVar8 = 0x2b;
      goto LAB_004efaf5;
    case 0xc:
      bVar2 = FUN_00526090(0x2b);
      if (bVar2 < 0x80) break;
      uVar10 = (uint)(byte)(bVar2 + 0x80);
      uVar8 = 0x2b;
      goto LAB_004efaf5;
    case 0x10:
      cVar3 = '\x01';
    case 0x11:
      cVar4 = FUN_00526090(0x30);
      local_b0 = CONCAT31(local_b0._1_3_,cVar4);
      if (cVar3 == '\0') {
        if (cVar4 == '\x03') {
          local_b0 = CONCAT31(local_b0._1_3_,4);
          uVar8 = 0x30;
          uVar10 = local_b0;
        }
        else {
          if (cVar4 == '\x01') {
            local_b0 = CONCAT31(local_b0._1_3_,2);
          }
LAB_004f0481:
          uVar8 = 0x30;
          uVar10 = local_b0;
        }
      }
      else if (cVar4 == '\x04') {
        local_b0 = CONCAT31(local_b0._1_3_,3);
        uVar8 = 0x30;
        uVar10 = local_b0;
      }
      else {
        if (cVar4 != '\x02') goto LAB_004f0481;
        local_b0 = CONCAT31(local_b0._1_3_,1);
        uVar8 = 0x30;
        uVar10 = local_b0;
      }
      goto LAB_004efaf5;
    case 0x1c:
      iVar6 = FUN_004f57b0(param_1,param_2,param_3,&local_b4,6);
      if (iVar6 == 0) {
        return 0;
      }
      FUN_00526070(0x2e,local_b4);
      FUN_004f3c40(1);
      return 1;
    case 0x1d:
      iVar7 = FUN_004f56b0(param_1,param_2,param_3,&local_b4,0x1a);
      if (iVar7 == 0) {
        return 0;
      }
      FUN_00526070(0x2f,local_b4);
      FUN_00529950(0x23);
      FUN_00518190();
      iVar7 = FUN_00517c00();
      if (iVar7 != 0) {
        return 1;
      }
      if (iVar6 == 0) {
        return 1;
      }
      FUN_00517ac0(0xb);
      return 1;
    case 0x23:
      goto switchD_004efaea_caseD_30;
    }
    goto switchD_004efaea_caseD_20;
  }
switchD_004efaea_caseD_91:
  cVar3 = cVar3 + '\x01';
switchD_004efaea_caseD_90:
  iVar6 = FUN_00442c70(cVar3 + '\x01');
  if (iVar6 != 0) {
    uVar8 = FUN_004f58f0(iVar6,param_3);
    return uVar8;
  }
  iVar6 = 1;
  do {
    iVar7 = FUN_005182c0(iVar6,0);
    if (iVar7 != 0) goto LAB_004eff57;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  goto switchD_004efaea_caseD_20;
switchD_004ef60b_caseD_f7:
  bVar2 = param_2[1];
  uVar9 = (undefined3)(bVar2 - 0x1c >> 8);
  switch(bVar2) {
  case 0x1c:
    uVar10 = 0;
    uVar8 = 0x56;
    break;
  case 0x1d:
    uVar10 = 1;
    uVar8 = 0x56;
    break;
  case 0x1e:
    uVar10 = 2;
    uVar8 = 0x56;
    break;
  case 0x1f:
    uVar10 = 3;
    uVar8 = 0x56;
    break;
  default:
    goto switchD_004efaea_caseD_20;
  case 0x2b:
    local_ac = CONCAT31(local_ac._1_3_,2);
    goto LAB_004efca8;
  case 0x2c:
    local_ac = CONCAT31(local_ac._1_3_,3);
    goto LAB_004efca8;
  case 0x2d:
    local_ac = CONCAT31(local_ac._1_3_,5);
    goto LAB_004efca8;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x35:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x72:
  case 0xcc:
  case 0xdc:
    goto switchD_004efaea_caseD_30;
  case 0x34:
  case 0x36:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
    iVar6 = FUN_004f0920(param_1,param_2,param_3,param_4);
    if (iVar6 == 0) {
      return 0;
    }
    goto switchD_004efaea_caseD_20;
  case 0x3f:
    local_ac = CONCAT31(local_ac._1_3_,8);
LAB_004efca8:
    FUN_004fe330(param_2,param_1);
    if (*param_2 == 0x7f) {
      switch(param_2[1]) {
      case 0xa0:
      case 0xa1:
      case 0xa2:
        local_b4 = 1;
        break;
      default:
        goto switchD_004efcd0_caseD_a3;
      case 0xa7:
      case 0xa8:
      case 0xa9:
        local_b4 = 2;
      }
LAB_004efd03:
      FUN_004fe330(param_2,param_1);
      iVar6 = FUN_004f9b40(param_2);
      if (iVar6 == 0) {
switchD_004efaea_caseD_30:
LAB_004ef628:
        uVar8 = FUN_004f58f0(2,param_3);
        return uVar8;
      }
      iVar6 = FUN_005184f0(local_b4);
      if (iVar6 != 0) {
        FUN_00518320(local_b4,local_ac);
      }
      FUN_004fe3e0(param_2,param_1);
      goto switchD_004efaea_caseD_20;
    }
switchD_004efcd0_caseD_a3:
    if (((*param_2 == 0xf9) && (0x11 < param_2[1])) && (param_2[1] < 0x15)) {
      local_b4 = 3;
      goto LAB_004efd03;
    }
    iVar7 = FUN_00506440(param_1,param_2,&local_b4);
    if (iVar7 != 0) {
      uVar8 = FUN_004f58f0(8,param_3);
      return uVar8;
    }
    iVar7 = FUN_004f9b40(param_2);
    if (iVar7 == 0) goto LAB_004ef628;
    sVar5 = FUN_005172b0(local_b4);
    if (sVar5 != 0) {
      FUN_00517660(local_b4,local_ac);
    }
    FUN_004fe3e0(param_2,param_1);
    goto LAB_004efb6c;
  case 0x40:
  case 0x41:
    iVar6 = FUN_004f0920(param_1,param_2,param_3,param_4);
    if (iVar6 == 0) {
      return 0;
    }
    goto switchD_004efaea_caseD_20;
  case 0x4a:
  case 0x4b:
  case 0x4c:
    iVar6 = FUN_004f0c60(param_1,param_2,param_3);
    if (iVar6 == 0) {
      return 0;
    }
    goto switchD_004efaea_caseD_20;
  case 0x60:
    uVar10 = 0;
    uVar8 = 0x20;
    break;
  case 0x61:
    uVar10 = 1;
    uVar8 = 0x20;
    break;
  case 99:
    uVar10 = 0;
    goto LAB_004efaf3;
  case 100:
    uVar10 = 1;
    goto LAB_004efaf3;
  case 0x65:
    uVar10 = 2;
    goto LAB_004efaf3;
  case 0x67:
    uVar10 = 3;
    goto LAB_004efaf3;
  case 0x6a:
    uVar10 = 4;
    goto LAB_004efaf3;
  case 0x6b:
    uVar10 = 5;
    goto LAB_004efaf3;
  case 0x6c:
    uVar10 = 6;
    goto LAB_004efaf3;
  case 0x6d:
    uVar10 = 7;
LAB_004efaf3:
    uVar8 = 0x18;
    break;
  case 0x70:
    uVar10 = 0;
    uVar8 = 0x19;
    break;
  case 0x71:
    uVar10 = 1;
    uVar8 = 0x19;
    break;
  case 0x76:
    uVar10 = 0;
    uVar8 = 0x2d;
    break;
  case 0x77:
    iVar6 = FUN_004f56b0(param_1,param_2,param_3,&local_b4,0x1a);
    if (iVar6 == 0) {
      return 0;
    }
    FUN_00526070(0x2d,local_b4);
    return 1;
  case 0x78:
    uVar10 = 0;
    uVar8 = 0x2c;
    break;
  case 0x79:
    iVar6 = FUN_004f5630(param_1,param_2,param_3,&local_b4);
    if (iVar6 == 0) {
      return 0;
    }
    FUN_00526070(0x2c,local_b4);
    return 1;
  case 0x7a:
    FUN_00526070(0x1c,1);
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0x7d:
    FUN_00526070(0x1c,0);
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0x80:
    iVar6 = FUN_004f0bc0(param_1,param_2,param_3);
    if (iVar6 == 0) {
      return 0;
    }
    goto switchD_004efaea_caseD_20;
  case 0x88:
    uVar8 = 0;
    uVar11 = 0x2f;
    goto LAB_004efb4f;
  case 0x90:
    goto switchD_004efaea_caseD_90;
  case 0x91:
    goto switchD_004efaea_caseD_91;
  case 0x92:
    cVar3 = '\x01';
    goto switchD_004efaea_caseD_91;
  case 0x95:
    cVar3 = '\x01';
  case 0x96:
    iVar6 = FUN_004f5630(param_1,param_2,param_3,&local_b4);
    if (iVar6 == 0) {
      return 0;
    }
    FUN_004fe3e0(param_2,param_1);
    if (cVar3 == '\0') {
      iVar6 = FUN_005309a0(local_b4);
    }
    else {
      iVar6 = FUN_005305c0(local_b4);
    }
    if (iVar6 != 0) {
      uVar8 = FUN_004f58f0(iVar6,param_3);
      return uVar8;
    }
    goto switchD_004efaea_caseD_20;
  case 0x97:
    goto switchD_004efaea_caseD_97;
  case 0x98:
    cVar3 = '\x01';
switchD_004efaea_caseD_97:
    iVar6 = FUN_004f15f0(param_3,local_84);
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = FUN_004f57b0(param_1,param_2,param_3,&local_b4,6);
    if (iVar6 == 0) {
      return 0;
    }
    if (cVar3 != '\0') {
      iVar6 = FUN_005304f0();
      if (iVar6 != 0) {
        uVar8 = FUN_004f58f0(iVar6,param_3);
        return uVar8;
      }
      FUN_00515e50(local_84);
      FUN_004f3c40(0);
      return 1;
    }
    iVar6 = FUN_00530470(local_b4,local_84);
    if (iVar6 == 0) {
      return 1;
    }
    uVar8 = FUN_004f58f0(iVar6,param_3);
    return uVar8;
  case 0xb2:
    uVar8 = CONCAT31(uVar9,(char)local_b0 + '\x01');
    uVar11 = 0x2f;
    goto LAB_004efb4f;
  case 0xb3:
    uVar8 = CONCAT31(uVar9,(char)local_b0 + '\x02');
    uVar11 = 0x2f;
    goto LAB_004efb4f;
  case 0xb4:
    uVar8 = CONCAT31(uVar9,(char)local_b0 + '\x03');
    uVar11 = 0x2f;
    goto LAB_004efb4f;
  case 0xb5:
    uVar8 = CONCAT31(uVar9,(char)local_b0 + '\x04');
    uVar11 = 0x2f;
    goto LAB_004efb4f;
  case 0xb6:
    uVar8 = CONCAT31(uVar9,(char)local_b0 + '\x05');
    uVar11 = 0x2f;
    goto LAB_004efb4f;
  case 0xb7:
    uVar8 = CONCAT31(uVar9,6);
    uVar11 = 0x2f;
    goto LAB_004efb4f;
  case 0xb8:
    FUN_00526070(0x2e,CONCAT31(uVar9,(char)local_b0 + '\x01'));
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xb9:
    FUN_00526070(0x2e,CONCAT31(uVar9,(char)local_b0 + '\x02'));
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xba:
    FUN_00526070(0x2e,CONCAT31(uVar9,(char)local_b0 + '\x03'));
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xbb:
    FUN_00526070(0x2e,CONCAT31(uVar9,(char)local_b0 + '\x04'));
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xbc:
    FUN_00526070(0x2e,CONCAT31(uVar9,(char)local_b0 + '\x05'));
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xbd:
    FUN_00526070(0x2e,CONCAT31(uVar9,6));
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xbe:
    uVar10 = 0;
    uVar8 = 0x55;
    break;
  case 0xbf:
    uVar10 = 1;
    uVar8 = 0x55;
    break;
  case 0xc0:
    uVar10 = 0;
    uVar8 = 0x21;
    break;
  case 0xc1:
    uVar10 = 0;
    uVar8 = 0x23;
    break;
  case 0xc2:
    uVar8 = 0;
    goto LAB_004efb94;
  case 0xc3:
    uVar10 = 0;
    uVar8 = 0x1b;
    break;
  case 0xc4:
    uVar10 = 0;
    uVar8 = 0x1e;
    break;
  case 0xc5:
    uVar8 = 0;
    goto LAB_004efb4d;
  case 0xc6:
    uVar10 = 0;
    uVar8 = 0x54;
    break;
  case 199:
    FUN_00526070(0x25,0);
    uVar8 = 0x24;
    goto LAB_004efb56;
  case 200:
  case 0xc9:
  case 0xca:
    local_ac = CONCAT31(local_ac._1_3_,1);
  case 0xd8:
  case 0xd9:
  case 0xda:
    if ((bVar2 == 200) || (bVar2 == 0xd8)) {
      local_b0 = CONCAT31(local_b0._1_3_,0x80);
    }
    else if ((bVar2 == 0xca) || (bVar2 == 0xda)) {
      local_b0 = CONCAT31(local_b0._1_3_,0x10);
    }
    else {
      local_b0 = CONCAT31(local_b0._1_3_,0x20);
    }
    *param_2 = *(byte *)*param_1;
    iVar6 = FUN_004f9b40(param_2);
    uVar1 = local_ac;
    uVar10 = local_b0;
    if (iVar6 == 0) {
      iVar6 = FUN_004f57b0(param_1,param_2,param_3,&local_b4,0x14);
      if (iVar6 == 0) {
        return 0;
      }
      FUN_004f3db0(local_b4,local_ac,local_b0);
      FUN_004fe3e0(param_2,param_1);
    }
    else {
      iVar6 = 1;
      do {
        FUN_004f3db0(iVar6,uVar1,uVar10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x15);
    }
    goto switchD_004efaea_caseD_20;
  case 0xcb:
    local_ac = CONCAT31(local_ac._1_3_,1);
  case 0xdb:
    *param_2 = *(byte *)*param_1;
    iVar6 = FUN_004f9b40(param_2);
    uVar10 = local_ac;
    if (iVar6 != 0) {
      iVar6 = 1;
      do {
        iVar7 = FUN_005182f0(iVar6,uVar10);
        if (iVar7 != 0) {
          uVar8 = FUN_004f58f0(4,param_3);
          return uVar8;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      goto switchD_004efaea_caseD_20;
    }
    FUN_004fe330(param_2,param_1);
    if (*param_2 == 0x7f) {
      switch(param_2[1]) {
      case 0xa0:
      case 0xa1:
      case 0xa2:
        local_b4 = 1;
        break;
      default:
        goto LAB_004ef628;
      case 0xa7:
      case 0xa8:
      case 0xa9:
        local_b4 = 2;
      }
LAB_004eff3d:
      iVar6 = FUN_005182f0(local_b4,local_ac);
      if (iVar6 != 0) {
LAB_004eff57:
        uVar8 = FUN_004f58f0(4,param_3);
        return uVar8;
      }
      goto switchD_004efaea_caseD_20;
    }
    if (*param_2 != 0xf9) goto switchD_004efaad_caseD_b8;
    if ((0x11 < param_2[1]) && (param_2[1] < 0x15)) {
      local_b4 = 3;
      goto LAB_004eff3d;
    }
    goto switchD_004efaea_caseD_30;
  case 0xcd:
    uVar10 = 1;
    uVar8 = 0x57;
    break;
  case 0xce:
    uVar10 = 0;
    uVar8 = 0x57;
    break;
  case 0xd0:
    uVar10 = 1;
    uVar8 = 0x21;
    break;
  case 0xd1:
    uVar10 = 1;
    uVar8 = 0x23;
    break;
  case 0xd2:
    uVar8 = 1;
LAB_004efb94:
    FUN_00526070(0x1d,uVar8);
    FUN_004f3c40(1);
    goto switchD_004efaea_caseD_20;
  case 0xd3:
    uVar10 = 1;
    uVar8 = 0x1b;
    break;
  case 0xd4:
    uVar10 = 1;
    uVar8 = 0x1e;
    break;
  case 0xd5:
    uVar8 = 1;
LAB_004efb4d:
    uVar11 = 0x1a;
LAB_004efb4f:
    FUN_00526070(uVar11,uVar8);
    uVar8 = 0x23;
LAB_004efb56:
    FUN_00529950(uVar8);
    FUN_00518190();
    iVar7 = FUN_00517c00();
    if (iVar7 == 0) {
LAB_004efb6c:
      if (iVar6 != 0) {
        FUN_00517ac0(0xb);
      }
    }
    goto switchD_004efaea_caseD_20;
  case 0xd6:
    uVar10 = 1;
    uVar8 = 0x54;
    break;
  case 0xd7:
    FUN_00526070(0x25,1);
    uVar8 = 0x24;
    goto LAB_004efb56;
  }
LAB_004efaf5:
  FUN_00526070(uVar8,uVar10);
switchD_004efaea_caseD_20:
  FUN_004fe330(param_2,param_1);
  return 1;
}

