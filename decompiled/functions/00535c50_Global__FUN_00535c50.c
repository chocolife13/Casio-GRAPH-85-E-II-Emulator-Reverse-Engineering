// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535c50
// entry: 00535c50  size: 653


void FUN_00535c50(char *param_1,char *param_2,byte param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  char *pcVar8;
  char *pcVar9;
  ushort uVar10;
  char *pcVar11;
  ushort uVar12;
  ushort uVar13;
  
  uVar12 = 0;
  uVar10 = 0;
  bVar1 = false;
  DAT_005d5720 = param_1;
  pcVar9 = param_1;
  pcVar11 = param_2;
  if (((param_4 == '\x02') && (sVar3 = FUN_004b7550(param_1), sVar3 == 1)) && (*param_1 == -0x28)) {
    *param_2 = '\0';
    return;
  }
  do {
    uVar4 = FUN_00533080(pcVar9);
    pcVar8 = pcVar9;
    uVar13 = uVar12;
    switch((uVar4 & 0xff) - 1) {
    case 0:
      uVar4 = FUN_00533160(pcVar9);
      switch((uVar4 & 0xff) - 1) {
      case 0:
        *pcVar11 = '(';
        bVar1 = true;
        pcVar11[1] = *pcVar9;
        pcVar11 = pcVar11 + 2;
        uVar13 = uVar12 + 1;
        uVar10 = uVar12;
        break;
      default:
        *pcVar11 = *pcVar9;
        goto LAB_00535dd9;
      case 4:
        pcVar9 = pcVar9 + 2;
      case 2:
        uVar10 = uVar12;
        break;
      case 7:
        pcVar9 = pcVar9 + 1;
        uVar10 = uVar12;
      }
      goto LAB_00535ddd;
    case 1:
      uVar5 = FUN_004b7780(param_2,pcVar11);
      cVar2 = FUN_00533130(uVar5);
      if ((cVar2 == '\x02') || (cVar2 == '\x04')) goto LAB_00535ddd;
      if ((param_4 == '\x02') && (cVar2 = FUN_00535a90(pcVar9,0), cVar2 != '\0')) goto LAB_00535df0;
      *pcVar11 = '(';
      break;
    case 2:
      if ((param_4 != '\x02') || (cVar2 = FUN_00535b10(pcVar9), cVar2 == '\0'))
      goto switchD_00535cb1_caseD_6;
      goto LAB_00535df0;
    case 3:
      if ((param_4 != '\x02') || (cVar2 = FUN_00535b10(pcVar9), cVar2 == '\0')) {
        *pcVar11 = ')';
        pcVar11 = pcVar11 + 1;
        uVar13 = uVar12 + 1;
        uVar10 = uVar12;
      }
      cVar2 = FUN_00535bb0(pcVar9);
      *pcVar11 = cVar2;
      pcVar11 = pcVar11 + 1;
      uVar12 = uVar13 + 1;
      if (param_4 != '\0') goto LAB_00535df0;
      if ((uint)param_3 != uVar10 + 1) goto LAB_00535de5;
      goto LAB_00535ecc;
    case 4:
      *pcVar11 = ',';
      break;
    case 5:
      if (!bVar1) {
        *pcVar11 = '(';
        break;
      }
      goto LAB_00535dda;
    case 6:
switchD_00535cb1_caseD_6:
      *pcVar11 = ')';
      break;
    default:
      *pcVar11 = *pcVar9;
      break;
    case 0xe:
      *pcVar11 = '{';
      break;
    case 0xf:
      *pcVar11 = '}';
      break;
    case 0x10:
      *pcVar11 = '[';
      break;
    case 0x11:
      *pcVar11 = ']';
    }
LAB_00535dd9:
    pcVar11 = pcVar11 + 1;
LAB_00535dda:
    uVar13 = uVar12 + 1;
    uVar10 = uVar12;
LAB_00535ddd:
    uVar12 = uVar13;
    pcVar8 = pcVar9;
    if (param_4 == '\0') {
LAB_00535de5:
      pcVar8 = pcVar9;
      if (param_3 == uVar10) {
        cVar2 = *pcVar9;
        bVar7 = (char)pcVar9 - (char)param_1;
        if (((cVar2 != '\x1e') && (cVar2 != '\x1a')) && (cVar2 != -0x5c)) {
          if (cVar2 == -0x4c) {
            pcVar9 = (char *)FUN_004b7780(param_1,pcVar9);
            if (*pcVar9 == -0x4c) {
              bVar7 = bVar7 + 1;
            }
          }
          else {
            if ((bVar1) && (cVar2 == '\x1d')) {
              DAT_005d5728 = (ushort)(byte)(bVar7 - 1);
              return;
            }
            if (cVar2 == '\x1f') {
              DAT_005d5728 = (ushort)(byte)(bVar7 - 2);
              return;
            }
          }
          DAT_005d5728 = (ushort)bVar7;
          return;
        }
        DAT_005d5728 = (ushort)(byte)(bVar7 + 1);
        return;
      }
    }
LAB_00535df0:
    if (*pcVar8 == '\x1d') {
      bVar1 = false;
    }
    pcVar9 = pcVar8 + 1;
    iVar6 = FUN_004b7370(*pcVar8);
    uVar13 = uVar12;
    if (iVar6 != 0) {
      *pcVar11 = *pcVar9;
      pcVar11 = pcVar11 + 1;
      pcVar9 = pcVar8 + 2;
      uVar13 = uVar12 + 1;
      uVar10 = uVar12;
    }
    uVar12 = uVar13;
  } while (*pcVar9 != '\0');
  *pcVar11 = '\0';
  if ((param_4 == '\0') && (uVar13 <= param_3)) {
LAB_00535ecc:
    DAT_005d5728 = (short)pcVar9 - (short)param_1;
  }
  return;
}

