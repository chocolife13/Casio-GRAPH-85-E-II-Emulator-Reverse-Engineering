// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f4200
// entry: 004f4200  size: 3417


int FUN_004f4200(undefined4 *param_1,byte *param_2,byte *param_3,int param_4,uint *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140 [6];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_d8 [12];
  undefined1 local_cc [72];
  undefined1 local_84 [132];
  
  local_168 = 0;
  FUN_004fe330(param_2,param_1);
  if (*param_2 != 0x7f) {
    if (*param_2 == 0xf9) {
      iVar5 = FUN_004f5370();
      if (iVar5 == 0) goto LAB_004f4e57;
      bVar1 = param_2[1];
      if ((0x14 < bVar1) && (bVar1 < 0x19)) {
        iVar5 = FUN_004f54a0(param_2,param_3);
        if (iVar5 == 0) {
          return 0;
        }
        goto LAB_004f4f29;
      }
      if (bVar1 == 0x21) {
        iVar5 = FUN_00516d00(param_3,3);
        if (iVar5 != 0) {
          iVar5 = FUN_004f58f0(iVar5,param_3);
          return iVar5;
        }
        goto LAB_004f4f29;
      }
      if (bVar1 == 0x22) {
        iVar5 = FUN_00516d20(param_3,10);
        if (iVar5 != 0) {
          iVar5 = FUN_004f58f0(iVar5,param_3);
          return iVar5;
        }
        goto LAB_004f4f29;
      }
    }
    else {
      iVar5 = FUN_004f5240(param_2,param_3,1);
      if (iVar5 != 0) {
        uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),*param_3) & 0xffffff60;
        if ((char)uVar4 == ' ') goto LAB_004f4e4c;
        if (*(char *)*param_1 != '~') {
          FUN_0052f780(CONCAT31((int3)(uVar4 >> 8),*param_2),param_3);
          goto LAB_004f4f29;
        }
        iVar5 = FUN_004f9a00(param_2);
        if (iVar5 == 0) {
          bVar1 = *param_2;
          FUN_004fe330(param_2,param_1);
          FUN_004fe330(param_2,param_1);
          iVar5 = FUN_004f5240(param_2,param_3,0);
          if (iVar5 != 0) {
            iVar5 = (uint)*param_2 - (uint)bVar1;
            if (-1 < iVar5) {
              local_164 = local_164 & 0xffffff00;
              if (-1 < iVar5) {
                do {
                  uVar9 = FUN_0052f780(CONCAT31((int3)((uint)iVar5 >> 8),(char)local_164 + bVar1),
                                       param_3);
                  bVar3 = (char)local_164 + 1;
                  iVar5 = CONCAT31((int3)((uint)uVar9 >> 8),bVar3);
                  local_164 = CONCAT31(local_164._1_3_,bVar3);
                } while ((int)(uint)bVar3 <= (int)((uint)*param_2 - (uint)bVar1));
                FUN_004fe330(param_2,param_1);
                return 1;
              }
              goto LAB_004f4f29;
            }
          }
        }
      }
    }
switchD_004f4253_caseD_3:
LAB_004f4f44:
    iVar5 = FUN_004f58f0(2,param_3);
    return iVar5;
  }
  switch((uint)param_2[1]) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
    local_168 = local_168 + 1;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
    iVar5 = FUN_004f5370(param_3,1);
    if (iVar5 != 0) {
      switch(param_2[1]) {
      case 2:
      case 6:
      case 0x12:
      case 0x16:
        uVar9 = FUN_004e5780(local_d8);
        iVar5 = FUN_004e7250(param_3,uVar9);
        if (iVar5 != 0) {
          iVar5 = FUN_004f58f0(0x1c,param_3);
          return iVar5;
        }
      }
      FUN_004f53d0(param_2,&local_164);
      if (local_168 == 0) {
        iVar5 = FUN_00516d20(param_3,local_164 & 0xff);
        if (iVar5 != 0) {
          iVar5 = FUN_004f58f0(iVar5,param_3);
          return iVar5;
        }
      }
      else {
        iVar5 = FUN_00516d00(param_3,local_164 & 0xff);
        if (iVar5 != 0) {
          iVar5 = FUN_004f58f0(iVar5,param_3);
          return iVar5;
        }
      }
      FUN_004f3c40(0);
      FUN_004fe330(param_2,param_1);
      return 1;
    }
    break;
  default:
    goto switchD_004f4253_caseD_3;
  case 0xc:
    local_168 = local_168 + 1;
  case 0xb:
    iVar5 = FUN_004f15f0(param_3,local_84);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = FUN_004f5370(param_3,1);
    if (iVar5 != 0) {
      iVar5 = FUN_005168d0(local_168,param_3);
      if (iVar5 != 0) {
        iVar5 = FUN_004f58f0(iVar5,param_3);
        return iVar5;
      }
LAB_004f4f29:
      FUN_004fe330(param_2,param_1);
      return 1;
    }
    break;
  case 0xd:
  case 0xe:
  case 0xf:
    iVar5 = FUN_004f1640(param_3,&local_104);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = FUN_004f5370(param_3,1);
    if (iVar5 != 0) {
      bVar1 = param_2[1];
      if (bVar1 == 0xd) {
        local_104 = *(undefined4 *)param_3;
        local_100 = *(undefined4 *)(param_3 + 4);
        local_fc = *(undefined4 *)(param_3 + 8);
      }
      else if (bVar1 == 0xe) {
        local_f8 = *(undefined4 *)param_3;
        local_f4 = *(undefined4 *)(param_3 + 4);
        local_f0 = *(undefined4 *)(param_3 + 8);
      }
      else if (bVar1 == 0xf) {
        local_ec = *(undefined4 *)param_3;
        local_e8 = *(undefined4 *)(param_3 + 4);
        local_e4 = *(undefined4 *)(param_3 + 8);
      }
      iVar5 = FUN_005302a0(&local_104);
      if (iVar5 != 0) {
        iVar5 = FUN_004f58f0(iVar5,param_3);
        return iVar5;
      }
      goto LAB_004f4f29;
    }
    break;
  case 0x40:
    FUN_004fe330(param_2,param_1);
    iVar5 = FUN_004f5240(param_2,param_3,0);
    if (iVar5 == 0) {
      return 0;
    }
    *param_5 = *param_2 - 0x40;
    uVar2 = FUN_004f7100(param_1);
    FUN_004fe330(param_2,param_1);
    switch(uVar2) {
    case 2:
      bVar1 = *param_3;
      if ((bVar1 & 0x60) != 0x20) {
        if (((bVar1 & 0x80) == 0) || ((bVar1 & 0xf0) == 0xf0)) {
          pbVar7 = param_3;
          puVar8 = local_140;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *(undefined4 *)pbVar7;
            pbVar7 = pbVar7 + 4;
            puVar8 = puVar8 + 1;
          }
          iVar5 = FUN_004f52c0(param_1,param_2,param_3,1);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = FUN_004f57b0(param_1,param_2,param_3,&local_160,0xff);
          uVar4 = local_160;
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = FUN_004f5290(param_2,param_3,1);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = FUN_004f57b0(param_1,param_2,param_3,&local_160,0xff);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = FUN_004f52c0(param_1,param_2,param_3,0);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = FUN_00528bf0((char)*param_5,uVar4 & 0xffff,local_160 & 0xffff,local_140);
          if (iVar5 != 0) {
            iVar5 = FUN_004f58f0(9,param_3);
            return iVar5;
          }
          if (*param_2 == 0x5d) {
            FUN_004fe330(param_2,param_1);
          }
          puVar8 = local_140;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)param_3 = *puVar8;
            puVar8 = puVar8 + 1;
            param_3 = param_3 + 4;
          }
          return 1;
        }
        uVar9 = 3;
        goto LAB_004f4e4f;
      }
      break;
    default:
      goto switchD_004f4253_caseD_3;
    case 0xb:
    case 0xc:
    case 99:
      if ((*param_3 & 0x70) != 0x30) goto LAB_004f4e4c;
      if ((((*(ushort *)(param_3 + 2) != 0) && (*(ushort *)(param_3 + 2) < 0x100)) &&
          (*(ushort *)(param_3 + 4) != 0)) && (*(ushort *)(param_3 + 4) < 0x100)) {
        *(undefined4 *)(param_4 + 0x138) = 3;
        iVar5 = FUN_004f5cd0(param_3,param_5);
        return iVar5;
      }
    }
LAB_004f4505:
    uVar9 = 8;
    goto LAB_004f4e4f;
  case 0x46:
    *(undefined4 *)(param_4 + 0x138) = 1;
    FUN_004fe330(param_2,param_1);
    if (*param_2 != 0x7f) goto LAB_004f4f44;
    switch(param_2[1]) {
    case 0x40:
      if ((*param_3 & 0x70) == 0x20) {
        if (*(short *)(param_3 + 2) == 2) {
          uVar9 = CONCAT31((int3)(param_2[1] - 0x40 >> 8),1);
          local_164 = CONCAT31(local_164._1_3_,1);
          uVar4 = local_15c;
          while (iVar5 = FUN_004fdce0(CONCAT22((short)((uint)uVar9 >> 0x10),(ushort)(byte)uVar9),
                                      param_3,local_140), iVar5 != 0) {
            iVar5 = FUN_004f5330(param_1,param_2,local_140,&local_168,0xff);
            if (iVar5 == 0) goto LAB_004f4505;
            uVar6 = local_168;
            if ((char)local_164 == '\x01') {
              local_15c = local_168;
              uVar6 = uVar4;
            }
            bVar1 = (char)local_164 + 1;
            uVar9 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
            local_164 = CONCAT31(local_164._1_3_,bVar1);
            uVar4 = uVar6;
            if (2 < bVar1) {
              FUN_004fd9e0(param_3);
              FUN_004fe330(param_2,param_1);
              iVar5 = FUN_004f5240(param_2,param_3,0);
              if (iVar5 == 0) {
                return 0;
              }
              uVar4 = *param_2 - 0x40;
              *param_5 = uVar4;
              local_16c = uVar4 & 0xff;
              iVar5 = FUN_00529980(local_16c,local_15c & 0xffff,uVar6 & 0xffff);
              if (iVar5 != 0) {
                iVar5 = FUN_004f58f0(4);
                return iVar5;
              }
              FUN_004d92b0(param_2,param_3);
              param_3[1] = (byte)uVar4;
              *(undefined4 *)(param_4 + 0x138) = 3;
              FUN_004fe330(param_2,param_1);
              return 1;
            }
          }
          goto LAB_004f498e;
        }
        uVar9 = 8;
        goto LAB_004f4e4f;
      }
      break;
    default:
      goto LAB_004f4f44;
    case 0x51:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      if ((*param_3 & 0x60) != 0x20) {
        iVar5 = FUN_004f5330(param_1,param_2,param_3,&local_168,999);
        if (iVar5 == 0) goto LAB_004f4e57;
        if (param_2[1] == 0x51) {
          iVar5 = FUN_004f56b0(param_1,param_2,param_3,param_5,0x1a);
          if (iVar5 == 0) {
            return 0;
          }
        }
        else {
          *param_5 = param_2[1] - 0x69;
          FUN_004fe330(param_2,param_1);
        }
        iVar5 = FUN_005284b0(0,(char)*param_5,local_168);
        if (iVar5 == 0) goto LAB_004f4911;
        goto LAB_004f48e3;
      }
    }
LAB_004f4e4c:
    uVar9 = 2;
LAB_004f4e4f:
    FUN_004f58f0(uVar9,param_3);
    break;
  case 0x51:
    iVar5 = FUN_004f56b0(param_1,param_2,param_3,param_5,0x1a);
    if (iVar5 == 0) {
      return 0;
    }
    goto LAB_004f46d7;
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
    *param_5 = param_2[1] - 0x69;
    FUN_004fe330(param_2,param_1);
LAB_004f46d7:
    iVar5 = FUN_004f9b40(param_2);
    if (iVar5 == 0) {
      uVar2 = (undefined1)*param_5;
      if ((*param_3 & 0x60) != 0x20) {
        pbVar7 = param_3;
        puVar8 = local_140;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *(undefined4 *)pbVar7;
          pbVar7 = pbVar7 + 4;
          puVar8 = puVar8 + 1;
        }
        iVar5 = FUN_004f52c0(param_1,param_2,param_3,1);
        if (iVar5 == 0) {
          return 0;
        }
        iVar5 = FUN_004f57b0(param_1,param_2,param_3,&local_160,999);
        if (iVar5 == 0) {
          return 0;
        }
        iVar5 = FUN_004f52c0(param_1,param_2,param_3,0);
        if (iVar5 == 0) {
          return 0;
        }
        uVar4 = FUN_00527440(0,uVar2);
        if (uVar4 == 0) {
          if ((short)local_160 != 1) {
LAB_004f4831:
            local_160 = uVar4;
            iVar5 = FUN_004f58f0(9,param_3);
            return iVar5;
          }
          local_160 = uVar4;
          iVar5 = FUN_005281a0(0,uVar2,1);
          if (iVar5 != 0) {
            iVar5 = FUN_004f58f0(4,param_3);
            return iVar5;
          }
          iVar5 = FUN_005278d0(0,uVar2,1,local_140);
          if (iVar5 != 0) {
            FUN_00528480(0,uVar2);
            iVar5 = FUN_004f58f0(4,param_3);
            return iVar5;
          }
        }
        else {
          uVar6 = local_160 & 0xffff;
          if (uVar4 + 1 < uVar6) goto LAB_004f4831;
          local_160 = uVar4;
          iVar5 = FUN_005278d0(0,uVar2,uVar6,local_140);
          if (iVar5 != 0) {
            iVar5 = FUN_004f58f0(4,param_3);
            return iVar5;
          }
        }
        if (*param_2 == 0x5d) {
          FUN_004fe330(param_2,param_1);
        }
        puVar8 = local_140;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)param_3 = *puVar8;
          puVar8 = puVar8 + 1;
          param_3 = param_3 + 4;
        }
        FUN_004f3c40(1);
        return 1;
      }
      FUN_004fe3e0(param_2,param_1);
      FUN_004f58f0(8,param_3);
    }
    else {
      if ((*param_3 & 0x70) == 0x20) {
        iVar5 = FUN_00528550(0,*param_5,param_3);
        if (iVar5 == 0) {
          *(undefined4 *)(param_4 + 0x138) = 1;
LAB_004f4911:
          FUN_004f3c40(1);
          return 1;
        }
LAB_004f48e3:
        FUN_004fe3e0(param_2,param_1);
        iVar5 = FUN_004f58f0(4,param_3);
        return iVar5;
      }
      FUN_004fe3e0(param_2,param_1);
      FUN_004f58f0(2,param_3);
    }
    break;
  case 0x91:
  case 0x92:
  case 0x93:
    iVar5 = FUN_004b89d0(&local_128);
    if (iVar5 != 0) {
      iVar5 = FUN_005303a0();
      if (iVar5 != 0) {
        iVar5 = FUN_004f58f0(4,param_3);
        return iVar5;
      }
      FUN_004b89d0(&local_128);
    }
    iVar5 = FUN_004f5370(param_3,1);
    if (iVar5 != 0) {
      bVar1 = param_2[1];
      if (bVar1 == 0x91) {
        local_128 = *(undefined4 *)param_3;
        local_124 = *(undefined4 *)(param_3 + 4);
        local_120 = *(undefined4 *)(param_3 + 8);
      }
      else if (bVar1 == 0x92) {
        local_11c = *(undefined4 *)param_3;
        local_118 = *(undefined4 *)(param_3 + 4);
        local_114 = *(undefined4 *)(param_3 + 8);
      }
      else if (bVar1 == 0x93) {
        local_110 = *(undefined4 *)param_3;
        local_10c = *(undefined4 *)(param_3 + 4);
        local_108 = *(undefined4 *)(param_3 + 8);
      }
      iVar5 = FUN_004b8a80(&local_128);
      if (iVar5 != 0) {
        iVar5 = FUN_004f58f0(iVar5,param_3);
        return iVar5;
      }
      goto LAB_004f4f29;
    }
    break;
  case 0x95:
  case 0x96:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
    iVar5 = FUN_004f5370(param_3,1);
    if (iVar5 != 0) {
      if ((param_2[1] == 0x96) || (param_2[1] == 0x95)) {
        FUN_004e7620(param_3,param_3);
        FUN_004e76a0(param_3,param_3);
      }
      iVar5 = FUN_004f54a0(param_2,param_3);
      if (iVar5 == 0) {
        return 0;
      }
      goto LAB_004f4f29;
    }
    break;
  case 0x97:
  case 0x98:
    iVar5 = FUN_004f5370(param_3,1);
    if (iVar5 != 0) {
      iVar5 = FUN_00530de0(local_cc);
      if ((iVar5 != 0) && (iVar5 = FUN_00530d40(), iVar5 != 0)) {
        iVar5 = FUN_004f58f0(4,param_3);
        return iVar5;
      }
      iVar5 = FUN_00530e20(&local_158,&local_14c);
      if (iVar5 == 0) {
        if (param_2[1] == 0x97) {
          local_158 = *(undefined4 *)param_3;
          local_154 = *(undefined4 *)(param_3 + 4);
          local_150 = *(undefined4 *)(param_3 + 8);
        }
        else {
          local_14c = *(undefined4 *)param_3;
          local_148 = *(undefined4 *)(param_3 + 4);
          local_144 = *(undefined4 *)(param_3 + 8);
        }
        iVar5 = FUN_00530f80(&local_158,&local_14c);
        if (iVar5 != 0) {
          iVar5 = FUN_004f58f0(iVar5,param_3);
          return iVar5;
        }
        FUN_004f3c40(1);
        FUN_004fe330(param_2,param_1);
        return 1;
      }
LAB_004f498e:
      iVar5 = FUN_004f58f0(4,param_3);
      return iVar5;
    }
  }
LAB_004f4e57:
  iVar5 = FUN_004e4020(param_3);
  return -(uint)(iVar5 != 4);
}

