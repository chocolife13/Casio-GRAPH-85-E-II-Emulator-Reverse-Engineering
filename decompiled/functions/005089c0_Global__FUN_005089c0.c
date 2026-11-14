// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005089c0
// entry: 005089c0  size: 2886


undefined4 FUN_005089c0(int *param_1,byte *param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  uint local_dec;
  byte *local_de8;
  byte local_de2;
  byte local_de1;
  int local_de0;
  undefined4 local_ddc;
  undefined4 local_dd8;
  undefined4 local_dd4;
  undefined4 local_dd0;
  undefined4 local_dcc;
  undefined4 local_dc8;
  undefined4 local_dc4;
  undefined4 local_dc0;
  undefined4 local_dbc;
  uint local_dac;
  uint local_da8;
  int local_da4;
  byte local_da0;
  byte local_d9f;
  undefined1 local_d9e;
  undefined1 local_d9d;
  undefined1 local_d9c;
  undefined1 local_d74 [24];
  undefined1 local_d5c [132];
  code *local_cd8;
  undefined4 *local_cd4;
  undefined4 local_cd0;
  uint local_cc0;
  char local_cbc;
  undefined1 local_cbb;
  undefined1 local_c9c;
  undefined1 local_8f8 [2268];
  code **local_1c;
  byte local_18;
  
  local_de0 = 0;
  if (param_3 == '\0') {
    param_3 = '\x02';
  }
  local_de2 = *param_2;
  local_de1 = param_2[1];
  pbVar8 = (byte *)*param_1;
  local_de8 = pbVar8;
  switch(*param_2) {
  case 0xee:
    local_dec = 0x10c;
    uVar7 = local_dec;
    if ((0xfa < *pbVar8) && (*pbVar8 < 0xfe)) {
      FUN_004fe330(param_2,param_1);
      local_da8 = CONCAT31(local_da8._1_3_,*param_2);
      iVar5 = FUN_00513f50(param_1,&local_da4);
      if (iVar5 != 0) {
        uVar6 = FUN_005064b0(iVar5,param_4);
        return uVar6;
      }
      *param_1 = *param_1 + -1;
      FUN_004fe330(param_2,param_1);
      if (*param_2 == 0x29) {
        FUN_004fe330(param_2,param_1);
      }
      iVar5 = FUN_004f9b40(param_2);
      pbVar8 = local_de8;
      if (iVar5 != 0) {
        local_de0 = 1;
        *param_1 = (int)(local_de8 + 1);
        uVar3 = FUN_0052f6b0(0x4a);
        local_dac = CONCAT31(local_dac._1_3_,uVar3) | 1;
        FUN_0052f6c0(0x4a,local_dac);
        local_dac = FUN_00501ca0(param_1,param_2,&local_dc4,1,0xc100);
        FUN_0052f6c0(0x4a,CONCAT31(1,uVar3) & 0xffffffe0);
        if (local_dac == 0) {
          uVar6 = FUN_004e4020(&local_dc4,param_4);
          uVar6 = FUN_005064b0(uVar6);
          return uVar6;
        }
        uVar7 = local_da8 & 0xff;
        if (uVar7 == 0xfb) {
          local_da0 = 0x50;
          local_dec = 0x1144;
          local_ddc = local_dc4;
          local_dd8 = local_dc0;
          local_dd4 = local_dbc;
        }
        else if (uVar7 == 0xfc) {
          local_da0 = 0x51;
          local_dec = 0x1164;
          bVar4 = (byte)local_dc4 & 0xf0;
          if ((bVar4 == 0x50) || (bVar4 == 0x60)) {
            local_ddc = local_dc4;
            local_dd8 = local_dc0;
            local_dd4 = local_dbc;
            FUN_004e5780(&local_dd0);
          }
          else {
            FUN_004e5780(&local_ddc);
            local_dd0 = local_dc4;
            local_dcc = local_dc0;
            local_dc8 = local_dbc;
          }
        }
        else if (uVar7 == 0xfd) {
          local_da0 = 0x52;
          local_dec = 0x1154;
          local_ddc = local_dc4;
          local_dd8 = local_dc0;
          local_dd4 = local_dbc;
        }
        local_d9f = 0x28;
        local_d9e = 0x74;
        local_d9d = 0x29;
        local_d9c = 0x3d;
        *param_1 = (int)local_de8;
        iVar5 = FUN_00501ca0(param_1,param_2,&local_dc4,1,0x8100);
        uVar7 = 0x1104;
        pbVar8 = (byte *)0x16b;
        if (iVar5 == 0) {
          uVar6 = FUN_004e4020(&local_dc4,param_4);
          uVar6 = FUN_005064b0(uVar6);
          return uVar6;
        }
      }
    }
    break;
  case 0xef:
    local_dec = 0x16d;
    uVar7 = 0x10d;
    iVar5 = FUN_00513f70(param_1,&local_da4,1);
    if (iVar5 != 0) {
      uVar6 = FUN_005064b0(iVar5,param_4);
      return uVar6;
    }
    if (local_da4 != 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    *param_1 = *param_1 + -1;
    FUN_004fe330(param_2,param_1);
    if (*param_2 != 0x2c) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    FUN_004fe330(param_2,param_1);
    iVar5 = FUN_00501ca0(param_1,param_2,&local_dc4,0,0x8104);
    if (iVar5 == 0) {
      uVar6 = FUN_004e4020(&local_dc4,param_4);
      uVar6 = FUN_005064b0(uVar6);
      return uVar6;
    }
    local_dd8 = local_dc0;
    local_ddc = local_dc4;
    local_dd4 = local_dbc;
    if (*param_2 != 0x2c) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    FUN_004fe330(param_2,param_1);
    iVar5 = FUN_00501ca0(param_1,param_2,&local_dc4,0,0x8104);
    if (iVar5 == 0) {
LAB_005090be:
      uVar6 = FUN_004e4020(&local_dc4,param_4);
      uVar6 = FUN_005064b0(uVar6);
      return uVar6;
    }
    local_dd0 = local_dc4;
    local_dcc = local_dc0;
    local_dc8 = local_dbc;
    iVar5 = FUN_004e7290(&local_ddc,&local_dd0);
    uVar2 = local_dd4;
    uVar1 = local_dd8;
    uVar6 = local_ddc;
    if (iVar5 != 0) {
      local_ddc = local_dd0;
      local_dd8 = local_dcc;
      local_dc4 = uVar6;
      local_dc0 = uVar1;
      local_dbc = local_dd4;
      local_dd4 = local_dc8;
      local_dd0 = uVar6;
      local_dcc = uVar1;
      local_dc8 = uVar2;
    }
    if (*param_2 == 0x2c) {
      FUN_004fe330(param_2,param_1);
      iVar5 = FUN_00501ca0(param_1,param_2,&local_dc4,0,0x8104);
      if (iVar5 == 0) goto LAB_005090be;
    }
    else {
      FUN_004e5780(&local_dc4);
    }
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      uVar6 = FUN_00501f30(param_4);
      return uVar6;
    }
    goto switchD_00508dbe_caseD_84;
  case 0xf0:
    uVar7 = 0x19c;
    local_dec = uVar7;
    break;
  case 0xf1:
    uVar7 = 0x18c;
    local_dec = uVar7;
    break;
  case 0xf2:
    uVar7 = 0x1bc;
    local_dec = uVar7;
    break;
  case 0xf3:
    uVar7 = 0x1ac;
    local_dec = uVar7;
    break;
  case 0xf4:
    uVar7 = 0x40e;
    local_dec = 0x40e;
    switch(*pbVar8) {
    case 0x81:
      pbVar8 = (byte *)0x144;
      break;
    case 0x82:
      pbVar8 = (byte *)0x145;
      break;
    case 0x83:
      pbVar8 = (byte *)0x146;
      break;
    default:
      goto switchD_00508dbe_caseD_84;
    case 0x85:
      pbVar8 = (byte *)0x155;
      break;
    case 0x86:
      pbVar8 = (byte *)0x156;
      break;
    case 0x8b:
      pbVar8 = (byte *)0x153;
      break;
    case 0x91:
      pbVar8 = (byte *)0x147;
      break;
    case 0x92:
      pbVar8 = (byte *)0x148;
      break;
    case 0x93:
      pbVar8 = (byte *)0x149;
      break;
    case 0x95:
      pbVar8 = (byte *)0x150;
      break;
    case 0x96:
      pbVar8 = (byte *)0x157;
      break;
    case 0x9b:
      pbVar8 = (byte *)0x154;
      break;
    case 0xa1:
      pbVar8 = (byte *)0x14a;
      break;
    case 0xa2:
      pbVar8 = (byte *)0x14b;
      break;
    case 0xa3:
      pbVar8 = (byte *)0x14c;
      break;
    case 0xa5:
      pbVar8 = (byte *)0x151;
      break;
    case 0xb1:
      pbVar8 = (byte *)0x14d;
      break;
    case 0xb2:
      pbVar8 = (byte *)0x14e;
      break;
    case 0xb3:
      pbVar8 = (byte *)0x14f;
      break;
    case 0xb5:
      pbVar8 = (byte *)0x152;
    }
    FUN_004fe330(param_2,param_1);
    local_da0 = *param_2;
    FUN_004fe330(param_2,param_1);
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) goto switchD_00508dbe_caseD_84;
    local_de0 = 2;
    if ((local_da0 == 0x8b) || (local_da0 == 0x9b)) {
      local_d9f = local_da0;
      local_da0 = 0xce;
      local_d9e = 0;
    }
    else {
      local_d9f = 0xce;
      local_d9e = 0;
    }
    goto LAB_005090ef;
  case 0xf5:
    uVar7 = 0x40d;
    local_dec = 0x40d;
    goto switchD_00508dbe_caseD_84;
  default:
    uVar7 = local_dac;
    goto switchD_00508dbe_caseD_84;
  case 0xf7:
    uVar7 = 0x20d;
    local_dec = 0x20d;
    goto switchD_00508dbe_caseD_84;
  }
  switch(*(undefined1 *)*param_1) {
  case 0x81:
  case 0x82:
    pbVar8 = (byte *)0x131;
    break;
  case 0x83:
    pbVar8 = (byte *)0x132;
    break;
  default:
    goto switchD_00508cb4_caseD_84;
  case 0x85:
    pbVar8 = (byte *)0x141;
    break;
  case 0x86:
    pbVar8 = (byte *)0x142;
    break;
  case 0x8b:
    pbVar8 = (byte *)0x13f;
    break;
  case 0x91:
    pbVar8 = (byte *)0x133;
    break;
  case 0x92:
    pbVar8 = (byte *)0x134;
    break;
  case 0x93:
    pbVar8 = (byte *)0x135;
    break;
  case 0x95:
    pbVar8 = (byte *)0x13c;
    break;
  case 0x96:
    pbVar8 = (byte *)0x143;
    break;
  case 0x9b:
    pbVar8 = (byte *)0x140;
    break;
  case 0xa1:
    pbVar8 = (byte *)0x136;
    break;
  case 0xa2:
    pbVar8 = (byte *)0x137;
    break;
  case 0xa3:
    pbVar8 = (byte *)0x138;
    break;
  case 0xa5:
    pbVar8 = (byte *)0x13d;
    break;
  case 0xb1:
    pbVar8 = (byte *)0x139;
    break;
  case 0xb2:
    pbVar8 = (byte *)0x13a;
    break;
  case 0xb3:
    pbVar8 = (byte *)0x13b;
    break;
  case 0xb5:
    pbVar8 = (byte *)0x13e;
  }
  FUN_004fe330(param_2,param_1);
  local_da0 = *param_2;
  FUN_004fe330(param_2,param_1);
  iVar5 = FUN_004f9b40(param_2);
  if (iVar5 == 0) {
switchD_00508cb4_caseD_84:
    if (local_de0 != 0) goto LAB_005090ef;
  }
  else {
    local_de0 = 2;
    if ((local_da0 == 0x8b) || (local_da0 == 0x9b)) {
      local_d9f = local_da0;
      local_da0 = 0x58;
      local_d9e = 0;
    }
    else {
      local_d9f = 0x58;
      local_d9e = 0;
    }
LAB_005090ef:
    iVar5 = FUN_00515e10(local_d5c);
    if (iVar5 != 0) {
      iVar5 = FUN_00514940(local_8f8,1);
      if (iVar5 != 0) goto LAB_005094ea;
      FUN_00515e10(local_d5c);
    }
    FUN_00516080(local_d5c,pbVar8);
    FUN_00515e50(local_d5c);
    FUN_00515dd0();
  }
switchD_00508dbe_caseD_84:
  iVar5 = FUN_00517c00();
  if ((iVar5 != 1) && ((iVar5 < 0xf || (0x12 < iVar5)))) {
    FUN_00518100();
  }
  pbVar8 = &local_da0;
  if (local_de0 != 2) {
    pbVar8 = local_de8;
  }
  iVar5 = FUN_00517920(pbVar8,uVar7,param_3);
  if (iVar5 == 0) {
    local_1c = &local_cd8;
    FUN_00503490(local_8f8);
    local_18 = local_18 & 0xcf;
    iVar5 = FUN_00514940(local_8f8,1);
    if ((iVar5 == 0) && (iVar5 = FUN_00516800(local_8f8), iVar5 == 0)) {
      iVar5 = FUN_00517c00();
      if (iVar5 == 0) {
        iVar5 = FUN_00517ac0(0);
        if (iVar5 != 0) {
          uVar6 = FUN_00501ef0(param_4);
          return uVar6;
        }
        iVar5 = FUN_00516b30();
        if (iVar5 != 0) {
          uVar6 = FUN_005064b0(iVar5,param_4);
          return uVar6;
        }
        iVar5 = FUN_00514820(local_8f8);
        if (iVar5 != 0) {
          FUN_00515dd0();
          uVar6 = FUN_005064b0(iVar5,param_4);
          return uVar6;
        }
      }
      else {
        FUN_00516760(local_8f8);
      }
      FUN_0050acb0(local_8f8);
      iVar5 = local_de0;
      local_cc0 = local_dec & 0xffff;
      local_cbb = 0;
      local_cbc = param_3;
      if (local_de0 == 1) {
        local_cd8 = FUN_00509650;
      }
      else {
        FUN_00517ff0(0,&local_cd8);
      }
      local_cd4 = &local_ddc;
      local_cd0 = 0;
      local_c9c = 0;
      bVar4 = FUN_00517c40();
      local_18 = local_18 ^ (bVar4 ^ local_18) & 3;
      uVar9 = FUN_00510270(local_8f8);
      if ((int)uVar9 != 0) {
        FUN_00515dd0();
        FUN_00518100();
        uVar6 = FUN_005064b0((int)uVar9,param_4);
        return uVar6;
      }
      FUN_00517b40(CONCAT31((int3)((ulonglong)uVar9 >> 0x28),local_18) & 0xffffff03);
      FUN_0050acb0(local_8f8);
      *param_1 = (int)local_de8;
      *param_2 = local_de2;
      param_2[1] = local_de1;
      if (local_de2 == 0xef) {
        FUN_0052f760(0x58,local_d74);
        iVar5 = FUN_0051ab30(local_8f8,&local_ddc,&local_dd0,&local_dc4,&local_de8,&local_dc4);
        FUN_0052f780(0x58,local_d74);
        if (iVar5 != 0) {
          uVar6 = FUN_005064b0(iVar5,param_4);
          return uVar6;
        }
        iVar5 = FUN_005185a0(&local_dc4,0);
        if (iVar5 != 0) {
LAB_00509465:
          FUN_00515dd0();
          FUN_00518100();
          uVar6 = FUN_00501ef0(param_4);
          return uVar6;
        }
        FUN_005185a0(&local_ddc,1);
        FUN_005185a0(&local_dd0,2);
        FUN_00517ac0(0xf);
      }
      else {
        if (iVar5 == 1) {
          iVar5 = FUN_005185a0(&local_dc4,0);
          if (iVar5 != 0) goto LAB_00509465;
          uVar7 = local_da8 & 0xff;
          if (uVar7 == 0xfb) {
            uVar6 = 0x10;
          }
          else if (uVar7 == 0xfc) {
            uVar6 = 0x11;
          }
          else {
            if (uVar7 != 0xfd) goto LAB_005094b6;
            uVar6 = 0x12;
          }
        }
        else {
          uVar6 = 1;
        }
        FUN_00517ac0(uVar6);
      }
LAB_005094b6:
      do {
        FUN_004fe330(param_2,param_1);
        iVar5 = FUN_004f9b40(param_2);
      } while (iVar5 == 0);
      FUN_005167a0(local_8f8);
      return 1;
    }
  }
LAB_005094ea:
  uVar6 = FUN_005064b0(iVar5,param_4);
  return uVar6;
}

