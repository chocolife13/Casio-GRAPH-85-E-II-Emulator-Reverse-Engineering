// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049b6a0
// entry: 0049b6a0  size: 2586


/* WARNING: Removing unreachable block (ram,0x0049b857) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0049b6a0(uint param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  uint *puVar13;
  undefined1 uStack_5d;
  undefined4 local_5c;
  int local_58;
  uint uStack_54;
  uint auStack_50 [3];
  uint auStack_44 [2];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  uint auStack_24 [3];
  undefined2 uStack_18;
  undefined2 uStack_16;
  ushort uStack_14;
  undefined2 uStack_12;
  char *pcStack_10;
  
  bVar3 = false;
  iVar11 = 0;
  local_58 = 1;
  local_5c = 0;
  FUN_0049b570();
  FUN_00496700(DAT_005d6d88,auStack_44);
switchD_0049b802_default:
  FUN_00497260();
  iVar5 = DAT_005d6d88;
  if (auStack_44[0] == 0x7000000) {
    DAT_005d6d88 = DAT_005d6d88 + 1;
    iVar5 = FUN_00495970(iVar5);
    DAT_005d6d90 = DAT_005d6d90 + iVar5;
    goto switchD_0049b802_caseD_17;
  }
  if (local_58 == 0) {
    local_58 = 1;
  }
  else {
    FUN_004971d0(1);
  }
  FUN_00496700(DAT_005d6d88,auStack_44);
  FUN_0049a130(auStack_44[0],param_2);
  FUN_00538b30();
  if (bVar3) {
    iVar11 = FUN_0040ad00();
    if (iVar11 == 2) {
      FUN_00496e10(DAT_005d6d88,DAT_005d6d90 & 0xffff,1);
      FUN_00413ac0(1);
      FUN_00538b30();
    }
    DAT_005d6d7c = FUN_0040ad00();
    iVar11 = FUN_00526620(&param_1);
    if ((((DAT_005d6d7c == 2) && (iVar5 = FUN_0040ad00(), iVar5 != 2)) &&
        ((auStack_44[0] & 0x80000000) != 0)) && (param_1 != 0x7553)) {
      param_1 = 0x7593;
    }
  }
  else {
    bVar3 = true;
  }
  iVar5 = DAT_005d6d88;
  if (iVar11 != 0) goto switchD_0049bc6d_caseD_753f;
  if (param_1 < 0x7532) {
    if (param_1 == 0x7531) {
      param_1 = FUN_00526040();
      bVar3 = false;
      iVar11 = 1;
      goto switchD_0049b802_default;
    }
    switch(param_1) {
    case 1:
      iVar5 = FUN_0049a720(param_1);
      if (iVar5 == 0x7534) {
        FUN_00496210(DAT_005d6d88);
        FUN_0049b570();
      }
      break;
    case 2:
    case 3:
    case 4:
      if (auStack_44[0] == 0x4000000) {
        DAT_005d6d88 = DAT_005d6d88 + -1;
        iVar5 = FUN_00495970(DAT_005d6d88);
        DAT_005d6d90 = DAT_005d6d90 - iVar5;
      }
      auStack_44[0] = 0;
      auStack_44[1] = 0x80006;
      FUN_0049b570();
      if (param_1 == 2) {
        auStack_44[0] = 0x81000000;
      }
      else if (param_1 == 3) {
        auStack_44[0] = 0x3000000;
      }
      else if (param_1 == 4) {
        auStack_44[0] = 0x5000000;
      }
      iVar5 = FUN_00495b10(DAT_005d6d88,auStack_44,&DAT_005cd010);
      if (iVar5 == 0) {
        FUN_0052b240(4);
      }
      break;
    case 5:
      iVar5 = FUN_004955f0(0x1c);
      if (iVar5 == 0) {
        FUN_0052b240(4);
      }
      else {
        iVar5 = FUN_00499d60(&uStack_14);
        if (iVar5 != 0) {
          if (auStack_44[0] == 0x4000000) {
            DAT_005d6d88 = DAT_005d6d88 + -1;
            iVar5 = FUN_00495970(DAT_005d6d88);
            DAT_005d6d90 = DAT_005d6d90 - iVar5;
          }
          auStack_24[0] = 0;
          auStack_24[1] = 0;
          auStack_24[2] = 0;
          auStack_44[1] = 0xc0080;
          uVar9 = 0xffffffff;
          auStack_44[0] = 0x6000000;
          pcVar8 = pcStack_10;
          do {
            pcVar12 = pcVar8;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar12 = pcVar8 + 1;
            cVar4 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar4 != '\0');
          uVar9 = ~uVar9;
          _uStack_18 = (uint)uStack_14;
          puVar7 = (uint *)(pcVar12 + -uVar9);
          puVar13 = auStack_24;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(char *)puVar13 = (char)*puVar7;
            puVar7 = (uint *)((int)puVar7 + 1);
            puVar13 = (uint *)((int)puVar13 + 1);
          }
          _uStack_18 = CONCAT22(uStack_12,uStack_18);
          iVar5 = FUN_00495b10(DAT_005d6d88,auStack_44,&DAT_005cd010);
          if (iVar5 == 0) {
            FUN_0052b240(4);
          }
          puVar7 = (uint *)FUN_00495720(DAT_005d6d88);
          *puVar7 = auStack_24[0];
          puVar7[1] = auStack_24[1];
          puVar7[2] = auStack_24[2];
          puVar7[3] = _uStack_18;
          FUN_0049b570();
          goto switchD_0049b802_default;
        }
      }
      break;
    case 6:
      DAT_005d6d80 = 1;
      if (auStack_44[0] == 0x3000000) {
        iVar5 = FUN_004956d0(DAT_005d6d88 + 1);
        if (iVar5 == 0x4000000) {
          FUN_004958b0(DAT_005d6d88 + 1);
        }
        uVar6 = FUN_00495770(DAT_005d6d88);
        iVar5 = FUN_00495a60(uVar6);
        auStack_44[0] = (-(uint)(iVar5 != 0) & 0xff000000) + 0x82000000;
      }
      else {
        if ((auStack_44[0] & 0x80000000) == 0) goto switchD_0049b802_default;
        auStack_44[0] = 0x3000000;
        FUN_0049b570();
      }
      FUN_004968b0(DAT_005d6d88,auStack_44);
      param_1 = 0x7593;
      bVar3 = false;
      goto switchD_0049b802_default;
    case 7:
    case 8:
    case 0x18:
    case 0x19:
      goto switchD_0049b802_caseD_7;
    case 9:
      iVar5 = FUN_0049a720(param_1);
      if (iVar5 == 0x7534) {
        FUN_004ac750(DAT_005d6dc0,DAT_005d6d84);
        uVar6 = FUN_004e5780(auStack_30);
        FUN_0052f780(0xc0,uVar6);
        uVar6 = FUN_0052fbc0(0,0,auStack_3c);
        FUN_004ac5a0(5,uVar6);
        uVar6 = FUN_0052f8a0(0,auStack_3c);
        FUN_004ac5a0(6,uVar6);
        FUN_00495fe0(DAT_005d6d84);
        FUN_005382b0();
        FUN_0049b570();
      }
      break;
    case 10:
      DAT_005d574f = 2;
      _DAT_005d5750 = CONCAT31(_DAT_005d5751,2);
      param_1 = 0x7f5d;
      bVar3 = false;
      iVar11 = 1;
      goto switchD_0049b802_default;
    case 0xb:
      DAT_005d574f = 3;
      _DAT_005d5750 = CONCAT31(_DAT_005d5751,3);
      param_1 = 0x7f5d;
      bVar3 = false;
      iVar11 = 1;
      goto switchD_0049b802_default;
    case 0xc:
      uStack_54 = (uint)DAT_005d574f;
      auStack_50[0] = _DAT_005d5750 & 0xff;
      iVar5 = FUN_004978b0(&uStack_54,auStack_50);
      if (iVar5 != 0) {
        DAT_005d574f = (byte)uStack_54;
        _DAT_005d5750 = CONCAT31(_DAT_005d5751,(undefined1)auStack_50[0]);
        param_1 = 0x7f5d;
        bVar3 = false;
        iVar11 = 1;
      }
      goto switchD_0049b802_default;
    case 0xd:
    case 0xe:
      FUN_0049b3e0(param_1);
      FUN_005382b0();
      break;
    case 0xf:
switchD_0049b802_caseD_f:
      if (auStack_44[0] == 0x3000000) {
        local_5c = FUN_00499920(&param_1);
        FUN_0049b570();
        bVar3 = false;
      }
      else if (auStack_44[0] == 0x4000000) {
        param_1 = FUN_0049a2a0();
        bVar3 = false;
      }
      else if (auStack_44[0] == 0x6000000) {
        DAT_005d6d80 = 1;
        DAT_005d6d78 = DAT_005d6d88;
        pcStack_10 = (char *)FUN_00495720(DAT_005d6d88);
        uStack_14 = *(ushort *)(pcStack_10 + 0xc);
        uStack_12 = *(undefined2 *)(pcStack_10 + 0xe);
        FUN_004a98c0(&uStack_14);
      }
      goto switchD_0049b802_default;
    case 0x10:
      FUN_0049b590();
      param_1 = 0x7593;
      bVar3 = false;
      goto switchD_0049b802_default;
    case 0x11:
    case 0x12:
      FUN_00497ff0(param_1);
      goto switchD_0049b802_default;
    case 0x13:
      param_1 = FUN_00522bb0(1);
      if (param_1 != 0) {
        bVar3 = false;
        iVar11 = 1;
        goto switchD_0049b802_default;
      }
      break;
    case 0x14:
    case 0x16:
      FUN_0049ae40(param_1);
      break;
    case 0x15:
      FUN_0049aab0();
      break;
    case 0x17:
      break;
    default:
      goto switchD_0049b802_default;
    }
  }
  else {
    if (0x7553 < param_1) {
      if (0x7565 < param_1) {
        if (param_1 < 0x7594) {
          if (param_1 == 0x7593) goto switchD_0049bc6d_caseD_753f;
          if (param_1 == 0x7566) {
            param_1 = 0x7f5f;
            bVar3 = false;
            iVar11 = 1;
          }
        }
        else if ((0x7949 < param_1) && (param_1 < 0x794d)) {
switchD_0049bc6d_caseD_754a:
          iVar5 = FUN_0049a320(param_1);
          if (iVar5 != 0) {
            param_1 = 0x7593;
            bVar3 = false;
          }
        }
        goto switchD_0049b802_default;
      }
      if (0x7563 < param_1) {
switchD_0049b802_caseD_7:
        FUN_00497360(param_1,&local_5c);
        goto switchD_0049b802_caseD_17;
      }
      switch(param_1) {
      case 0x7554:
        goto switchD_0049bc6d_caseD_753f;
      case 0x7555:
        iVar5 = FUN_00502180();
        if (iVar5 != 0) {
          DAT_005d6d80 = 1;
        }
        iVar5 = FUN_0055b770(DAT_005d6d84,s_RUN2D1_005be2c4);
        if (iVar5 == 0) {
          cVar4 = FUN_00526090(0x53);
          if (cVar4 == '\x01') {
            return param_1;
          }
          cVar4 = FUN_00526090(0x17);
          if (cVar4 != '\0') {
            return param_1;
          }
        }
        goto switchD_0049b802_caseD_17;
      default:
        goto switchD_0049b802_default;
      case 0x755e:
        goto switchD_0049bc6d_caseD_754a;
      case 0x7562:
        if (((auStack_44[0] == 0x3000000) || (auStack_44[0] == 0x81000000)) ||
           (auStack_44[0] == 0x82000000)) {
          auStack_50[1] = 0;
          uVar6 = FUN_00495770(DAT_005d6d88);
          FUN_00533be0(uVar6,auStack_50 + 1,0,
                       CONCAT22((short)((uint)&uStack_5d >> 0x10),(undefined2)DAT_005d6d90),1,1,1,
                       auStack_50 + 2,&uStack_5d);
          FUN_00498110(auStack_50[2]);
          FUN_005262e0(2);
          FUN_005263f0();
          FUN_00527030();
        }
        goto switchD_0049b802_default;
      }
    }
    if (param_1 == 0x7553) {
      FUN_0049a680();
    }
    else {
      switch(param_1) {
      case 0x7532:
      case 0x754d:
        iVar5 = FUN_0055b770(DAT_005d6d84,s_EACT1_005bfd10);
        if (iVar5 == 0) {
          if ((DAT_005d6d80 == 0) ||
             ((iVar5 = FUN_0049a720(param_1), iVar5 != 0x753f &&
              ((iVar5 != 0x7534 || (iVar5 = FUN_0049b3e0(param_1), iVar5 != 0)))))) {
            return param_1;
          }
          break;
        }
        if (param_1 == 0x754d) {
          FUN_005382b0();
          iVar5 = FUN_0055b770(DAT_005d6d84,s_RUN2D1_005be2c4);
          iVar11 = 0;
          param_1 = 8 - (iVar5 != 0);
          bVar3 = false;
          goto switchD_0049b802_default;
        }
        break;
      default:
        goto switchD_0049b802_default;
      case 0x7534:
        goto switchD_0049b802_caseD_f;
      case 0x7542:
      case 0x7547:
        goto switchD_0049b802_caseD_7;
      case 0x7544:
      case 0x7545:
        if (auStack_44[0] == 0x4000000) {
          iVar5 = FUN_00495720(DAT_005d6d88);
          sVar1 = *(short *)(iVar5 + 0x1c);
          if (sVar1 != 0) {
            if (param_1 == 0x7544) {
              if (sVar1 < 2) goto switchD_0049bc6d_caseD_753f;
              sVar2 = -1;
            }
            else {
              sVar2 = 1;
            }
            *(short *)(iVar5 + 0x1c) = sVar1 + sVar2;
          }
        }
        else if ((auStack_44[0] & 0x80000000) != 0) {
          if (param_1 == 0x7544) {
            if (DAT_005d6d88 != 0) {
              DAT_005d6d88 = DAT_005d6d88 + -1;
              iVar5 = FUN_00495970(DAT_005d6d88);
              DAT_005d6d90 = DAT_005d6d90 - iVar5;
            }
          }
          else if (DAT_005d6d88 < DAT_005d6dbc + -1) {
            DAT_005d6d88 = DAT_005d6d88 + 1;
            iVar5 = FUN_00495970(iVar5);
            DAT_005d6d90 = DAT_005d6d90 + iVar5;
          }
          FUN_00497260();
          FUN_004971d0(1);
        }
      case 0x753f:
switchD_0049bc6d_caseD_753f:
        if (auStack_44[0] < 0x81000001) {
          if ((auStack_44[0] != 0x81000000) && (auStack_44[0] != 0x3000000)) {
            if (auStack_44[0] == 0x6000000) {
              param_1 = FUN_00498cd0(param_1,iVar11,param_2);
              iVar11 = 0;
              local_58 = 0;
              bVar3 = false;
            }
            goto switchD_0049b802_default;
          }
        }
        else if (auStack_44[0] != 0x82000000) goto switchD_0049b802_default;
        param_1 = FUN_004981d0(param_1,iVar11,&local_5c);
        iVar11 = 0;
        local_58 = 0;
        bVar3 = false;
        goto switchD_0049b802_default;
      case 0x754a:
        goto switchD_0049bc6d_caseD_754a;
      }
    }
  }
switchD_0049b802_caseD_17:
  FUN_00496700(DAT_005d6d88,auStack_44);
  if (((auStack_44[0] & 0x80000000) != 0) ||
     (((auStack_44[0] == 0x3000000 && (iVar5 = FUN_00495770(DAT_005d6d88), iVar5 != 0)) &&
      (pcVar8 = (char *)FUN_00495770(DAT_005d6d88), *pcVar8 == '\0')))) {
    iVar11 = 0;
    param_1 = 0x7593;
    bVar3 = false;
  }
  goto switchD_0049b802_default;
}

