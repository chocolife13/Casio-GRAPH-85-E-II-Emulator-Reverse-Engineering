// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00536df0
// entry: 00536df0  size: 2005


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00536df0(int param_1)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 uVar12;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  char *pcVar13;
  char *pcVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  uint local_14;
  uint local_10;
  char *local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  cVar2 = FUN_005380e0();
  puVar15 = DAT_005d5724;
  local_4 = DAT_005d5724;
  pcVar14 = DAT_005d5724 + (_DAT_005d5728 & 0xffff);
  iVar6 = FUN_005262f0();
  if (cVar2 != '\0') {
    FUN_00526300(2);
  }
  sVar1 = (short)puVar15;
  switch(param_1 + -0x753f) {
  case 0:
switchD_00536e3d_caseD_0:
    _DAT_005d5728 = _DAT_005d5728 & 0xffff0000;
    *puVar15 = 0;
    return 1;
  default:
    return 1;
  case 3:
    local_c = pcVar14;
    if (cVar2 == '\0') {
      return 4;
    }
switchD_00537316_caseD_2:
    do {
      cVar2 = FUN_00535f50(&local_c,&local_10,&local_14);
      if (local_c == (char *)0x0) {
        return 4;
      }
    } while (cVar2 == '\0');
    uVar10 = FUN_005330a0(local_c);
    switch(uVar10 & 0xff) {
    case 1:
      if ((byte)local_10 == '\x02') goto switchD_00537316_caseD_2;
      local_14 = CONCAT31(local_14._1_3_,2);
      break;
    default:
      goto switchD_00537316_caseD_2;
    case 7:
      if ((byte)local_10 == '\x01') {
        local_14 = (uint)local_14._1_3_ << 8;
        goto LAB_00537377;
      }
      goto switchD_00537316_caseD_2;
    case 10:
      if ((byte)local_10 == '\x03') goto switchD_00537316_caseD_2;
      local_14 = CONCAT31(local_14._1_3_,3);
      break;
    case 0xc:
      if ((byte)local_10 != '\0') {
        bVar4 = FUN_00533550(local_c,CONCAT31((int3)((uVar10 & 0xff) - 1 >> 8),(byte)local_10 + -1),
                             local_14);
        local_10 = CONCAT31(local_10._1_3_,bVar4);
        if (bVar4 != 0) {
          bVar4 = FUN_005332e0(local_c + bVar4);
          local_14 = CONCAT31(local_14._1_3_,bVar4);
          uVar5 = (ushort)bVar4 + (short)local_c + ((ushort)(byte)local_10 - sVar1);
          _DAT_005d5728 = CONCAT22(_DAT_005d572a,uVar5);
          pcVar14 = (char *)FUN_004b7780(puVar15,puVar15 + uVar5);
          goto LAB_00537584;
        }
      }
      goto switchD_00537316_caseD_2;
    case 0xd:
      goto switchD_00537316_caseD_d;
    }
    bVar4 = FUN_00533380(local_c,local_14);
    _DAT_005d5728 = CONCAT22(_DAT_005d572a,((ushort)bVar4 - sVar1) + (short)local_c);
    return 1;
  case 5:
    FUN_00414db0();
    if ((_DAT_005d5728 & 0xffff) == 0) {
      FUN_00414db0();
      return 3;
    }
    if ((_DAT_005d5728 & 0xffff) == 1) {
      _DAT_005d5728 = _DAT_005d5728 & 0xffff0000;
      return 1;
    }
    uVar9 = FUN_00536cf0(0);
    pcVar14 = (char *)FUN_004b7780(puVar15,uVar9);
    break;
  case 6:
    if ((0xfe < DAT_005d5728) || (FUN_00414db0(), *pcVar14 == '\0')) {
      FUN_00414db0();
      return 2;
    }
    uVar9 = FUN_00536cf0(1);
    pcVar14 = (char *)FUN_004b7780(puVar15,uVar9);
    if (pcVar14 == (char *)0x0) {
      return 1;
    }
    if (*pcVar14 != -0x28) {
      return 1;
    }
    FUN_00536cf0(1);
    return 1;
  case 8:
    local_c = pcVar14;
    if (cVar2 == '\0') {
      return 5;
    }
switchD_0053747f_caseD_2:
    do {
      cVar2 = FUN_00535f50(&local_c,&local_10,&local_14);
      if (local_c == (char *)0x0) {
        return 5;
      }
    } while (cVar2 == '\0');
    uVar3 = FUN_005330a0(local_c);
    switch(uVar3) {
    case 1:
      if ((byte)local_10 == '\x01') goto switchD_0053747f_caseD_2;
      local_14 = CONCAT31(local_14._1_3_,1);
      break;
    default:
      goto switchD_0053747f_caseD_2;
    case 7:
      if ((byte)local_10 == '\0') {
        local_14 = CONCAT31(local_14._1_3_,1);
        goto LAB_005374e6;
      }
      goto switchD_0053747f_caseD_2;
    case 10:
      if (((byte)local_10 == '\x01') || ((byte)local_10 == '\x02')) goto switchD_0053747f_caseD_2;
      local_14 = CONCAT31(local_14._1_3_,2);
      break;
    case 0xc:
      bVar4 = FUN_00533550(local_c,(byte)local_10 + '\x01',local_14);
      local_10 = CONCAT31(local_10._1_3_,bVar4);
      if (bVar4 != 0) {
        _DAT_005d5728 = CONCAT22(_DAT_005d572a,((ushort)bVar4 - sVar1) + (short)local_c);
        return 1;
      }
      goto switchD_0053747f_caseD_2;
    case 0xd:
      goto switchD_0053747f_caseD_d;
    }
    bVar4 = FUN_00533380(local_c,local_14);
    local_10 = CONCAT31(local_10._1_3_,bVar4);
    pcVar14 = local_c + bVar4;
    goto LAB_00537549;
  case 10:
    if (*pcVar14 != '\0') {
      if ((DAT_005d5728 != 0) && ((cVar2 == '\x01' || (iVar6 == 2)))) {
        pcVar14 = (char *)FUN_00536cf0(0);
      }
      if (cVar2 != '\x01') {
LAB_005371cf:
        uVar16 = FUN_004b7370(*pcVar14);
        uVar9 = (undefined4)((ulonglong)uVar16 >> 0x20);
        pcVar13 = pcVar14 + 2;
        if ((int)uVar16 == 0) {
          pcVar13 = pcVar14 + 1;
        }
        do {
          do {
            pcVar7 = pcVar14;
            *pcVar7 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar14 = pcVar7 + 1;
          } while (*pcVar7 != '\0');
          uVar16 = FUN_004b7370(CONCAT31((int3)((uint)uVar9 >> 8),pcVar7[-1]));
          uVar9 = (undefined4)((ulonglong)uVar16 >> 0x20);
        } while ((int)uVar16 != 0);
        return 1;
      }
      uVar3 = FUN_00532fb0(pcVar14);
      local_14 = CONCAT31(local_14._1_3_,uVar3);
      if ((*pcVar14 == -0x28) && (DAT_005d5728 != 0)) {
        return 1;
      }
      cVar2 = FUN_00532a70(local_14);
      if (cVar2 != '\0') {
        return 1;
      }
      cVar2 = FUN_00532fb0(pcVar14);
      if (cVar2 != '\x01') {
        iVar6 = FUN_004b7780(puVar15,pcVar14);
        if (iVar6 != 0) {
          iVar8 = FUN_004b7370(*pcVar14);
          if (iVar8 == 0) {
            uVar3 = FUN_00532fb0(iVar6);
            local_10 = CONCAT31(local_10._1_3_,uVar3);
            uVar3 = FUN_00532fb0(pcVar14 + 1);
            local_14 = CONCAT31(local_14._1_3_,uVar3);
            cVar2 = FUN_00532a50(local_10);
            if ((cVar2 != '\0') && (cVar2 = FUN_00532a70(local_14), cVar2 != '\0')) {
              *pcVar14 = -0x28;
              return 1;
            }
          }
          else {
            uVar3 = FUN_00532fb0(iVar6);
            local_10 = CONCAT31(local_10._1_3_,uVar3);
            uVar3 = FUN_00532fb0(pcVar14 + 2);
            local_14 = CONCAT31(local_14._1_3_,uVar3);
            cVar2 = FUN_00532a50(local_10);
            if (cVar2 != '\0') {
              uVar16 = FUN_00532a70(local_14);
              uVar9 = (undefined4)((ulonglong)uVar16 >> 0x20);
              if ((char)uVar16 != '\0') {
                *pcVar14 = -0x28;
                pcVar13 = pcVar14 + 2;
                pcVar14 = pcVar14 + 1;
                do {
                  do {
                    pcVar7 = pcVar14;
                    *pcVar7 = *pcVar13;
                    pcVar13 = pcVar13 + 1;
                    pcVar14 = pcVar7 + 1;
                  } while (*pcVar7 != '\0');
                  uVar16 = FUN_004b7370(CONCAT31((int3)((uint)uVar9 >> 8),pcVar7[-1]));
                  uVar9 = (undefined4)((ulonglong)uVar16 >> 0x20);
                } while ((int)uVar16 != 0);
                return 1;
              }
            }
          }
        }
        goto LAB_005371cf;
      }
      uVar5 = FUN_00533620(pcVar14);
      uVar3 = FUN_00533160(pcVar14);
      local_14 = CONCAT31(local_14._1_3_,uVar3);
      bVar4 = FUN_00533380(pcVar14,0);
      iVar6 = param_1;
      param_1 = CONCAT31(param_1._1_3_,bVar4);
      if ((char)local_14 == '\x04') {
        param_1._2_2_ = SUB42(iVar6,2);
        param_1._0_2_ = (ushort)bVar4;
        uVar12 = extraout_var;
      }
      else {
        uVar3 = FUN_00533380(pcVar14,1);
        param_1._0_2_ = CONCAT11(uVar3,(undefined1)param_1);
        uVar12 = extraout_var_00;
        if ((char)local_14 == '\x05') {
          uVar3 = FUN_00533380(pcVar14,2);
          param_1._0_3_ = CONCAT12(uVar3,(ushort)param_1);
          uVar12 = extraout_var_01;
          goto LAB_00536f95;
        }
      }
      param_1._0_3_ = (uint3)(ushort)param_1;
LAB_00536f95:
      pcVar13 = pcVar14;
      if (((*pcVar14 == -0x58) && (DAT_005d5728 != 0)) &&
         (pcVar7 = (char *)FUN_004b7780(puVar15,pcVar14), uVar12 = extraout_var_02, *pcVar7 == -0x28
         )) {
        DAT_005d5728 = DAT_005d5728 + -1;
        pcVar13 = pcVar14 + -1;
      }
      local_14 = local_14 & 0xffffff00;
      do {
        bVar4 = *(byte *)((int)&param_1 + (local_14 & 0xff));
        local_8 = CONCAT31(local_8._1_3_,bVar4);
        if (bVar4 == 0) break;
        pcVar7 = pcVar14 + bVar4;
        uVar3 = FUN_00532fb0(pcVar7 + 1);
        local_8 = CONCAT31(local_8._1_3_,uVar3);
        if ((*pcVar7 == -0x28) && (cVar2 = FUN_00532a70(local_8), cVar2 != '\0')) {
          bVar4 = 0;
          uVar12 = extraout_var_03;
        }
        else {
          bVar4 = FUN_005332e0(pcVar7);
          uVar12 = extraout_var_04;
        }
        local_8 = CONCAT31(local_8._1_3_,bVar4);
        local_10 = local_10 & 0xffffff00;
        if (bVar4 != 0) {
          do {
            pcVar13[local_10 & 0xff] = pcVar7[local_10 & 0xff];
            bVar11 = (byte)local_10 + 1;
            local_10 = CONCAT31(local_10._1_3_,bVar11);
          } while (bVar11 < bVar4);
        }
        pcVar13 = pcVar13 + bVar4;
        bVar4 = (char)local_14 + 1;
        local_14 = CONCAT31(local_14._1_3_,bVar4);
        puVar15 = local_4;
      } while (bVar4 < 3);
      pcVar14 = pcVar14 + (uVar5 + 1 & 0xffff);
      if ((pcVar13 == puVar15 + (_DAT_005d5728 & 0xffff)) &&
         (iVar6 = FUN_004b7780(puVar15,pcVar13), uVar12 = extraout_var_05, iVar6 != 0)) {
        uVar3 = FUN_00532fb0(iVar6);
        local_10 = CONCAT31(local_10._1_3_,uVar3);
        uVar3 = FUN_00532fb0(pcVar14);
        local_14 = CONCAT31(local_14._1_3_,uVar3);
        cVar2 = FUN_00532a50(local_10);
        uVar12 = extraout_var_06;
        if ((cVar2 != '\0') &&
           (cVar2 = FUN_00532a70(local_14), uVar12 = extraout_var_07, cVar2 != '\0')) {
          *pcVar13 = -0x28;
          pcVar13 = pcVar13 + 1;
        }
      }
      do {
        do {
          pcVar7 = pcVar13;
          *pcVar7 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar13 = pcVar7 + 1;
        } while (*pcVar7 != '\0');
        iVar6 = FUN_004b7370(CONCAT31(uVar12,pcVar7[-1]));
        uVar12 = extraout_var_08;
      } while (iVar6 != 0);
      return 1;
    }
    if ((_DAT_005d5728 & 0xffff) < 2) goto switchD_00536e3d_caseD_0;
    pcVar13 = pcVar14 + -1;
    iVar6 = FUN_004b73a0(pcVar13);
    if (iVar6 != 0) {
      pcVar14[-2] = '\0';
      DAT_005d5728 = DAT_005d5728 + -2;
      return 1;
    }
    cVar2 = FUN_00536cb0(*pcVar13);
    if (cVar2 == '\0') {
      *pcVar13 = '\0';
      DAT_005d5728 = DAT_005d5728 + -1;
      return 1;
    }
    goto LAB_0053758d;
  }
  goto LAB_00537584;
switchD_0053747f_caseD_d:
  if ((byte)local_10 == '\x01') {
    local_14 = CONCAT31(local_14._1_3_,2);
LAB_005374e6:
    bVar4 = FUN_00533380(local_c,local_14);
    _DAT_005d5728 = CONCAT22(_DAT_005d572a,((ushort)bVar4 - sVar1) + (short)local_c);
    return 1;
  }
  goto switchD_0053747f_caseD_2;
switchD_00537316_caseD_d:
  if ((byte)local_10 == '\x02') goto LAB_00537372;
  goto switchD_00537316_caseD_2;
LAB_00537372:
  local_14 = CONCAT31(local_14._1_3_,1);
LAB_00537377:
  bVar4 = FUN_00533380(local_c,local_14);
  local_10 = CONCAT31(local_10._1_3_,bVar4);
  pcVar14 = local_c + bVar4;
LAB_00537549:
  bVar4 = FUN_005332e0(pcVar14);
  local_14 = CONCAT31(local_14._1_3_,bVar4);
  uVar5 = (ushort)bVar4 + (short)local_c + ((ushort)(byte)local_10 - sVar1);
  _DAT_005d5728 = CONCAT22(_DAT_005d572a,uVar5);
  pcVar14 = (char *)FUN_004b7780(puVar15,puVar15 + uVar5);
LAB_00537584:
  if ((pcVar14 == (char *)0x0) || (*pcVar14 != -0x28)) {
    return 1;
  }
LAB_0053758d:
  FUN_00536cf0(0);
  return 1;
}

