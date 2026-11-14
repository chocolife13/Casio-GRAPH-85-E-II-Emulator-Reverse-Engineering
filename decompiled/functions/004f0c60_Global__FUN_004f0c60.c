// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f0c60
// entry: 004f0c60  size: 1185


undefined4 FUN_004f0c60(undefined4 param_1,char *param_2,undefined4 param_3)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte local_5c [20];
  short local_48 [7];
  short asStack_3a [29];
  
  pcVar5 = param_2;
  cVar2 = param_2[1];
  local_5c[0] = 0;
  local_5c[1] = 1;
  local_5c[2] = 1;
  local_5c[3] = 3;
  local_5c[4] = 2;
  local_5c[5] = 2;
  local_5c[6] = 2;
  local_5c[7] = 2;
  local_5c[8] = 2;
  local_5c[9] = 4;
  local_5c[10] = 4;
  local_5c[0xb] = 4;
  local_5c[0xc] = 4;
  local_5c[0xd] = 4;
  local_5c[0xe] = 4;
  local_5c[0xf] = 4;
  local_5c[0x10] = 4;
  local_5c[0x11] = 5;
  local_5c[0x12] = 5;
  if (cVar2 == 'J') {
    iVar8 = 1;
  }
  else if (cVar2 == 'K') {
    iVar8 = 2;
  }
  else {
    if (cVar2 != 'L') goto switchD_004f0df9_caseD_34;
    iVar8 = 3;
  }
  iVar6 = FUN_00530de0(local_48);
  if (iVar6 != 0) {
    iVar6 = FUN_00530d40();
    if (iVar6 != 0) {
      uVar7 = FUN_004f58f0(4,param_3);
      return uVar7;
    }
    FUN_00530de0(local_48);
  }
  sVar4 = local_48[iVar8 * 7 + 1];
  psVar1 = local_48 + iVar8 * 7 + 1;
  FUN_004fe330(pcVar5,param_1);
  if (*pcVar5 != -9) goto switchD_004f0df9_caseD_34;
  if (pcVar5[1] == -0x34) {
    local_48[iVar8 * 7] = 1;
  }
  else {
    if (pcVar5[1] != -0x24) goto switchD_004f0df9_caseD_34;
    local_48[iVar8 * 7] = 0;
  }
  FUN_004fe330(pcVar5,param_1);
  iVar6 = FUN_004f9b40(pcVar5);
  if (iVar6 != 0) goto LAB_004f109f;
  if (*pcVar5 != ',') goto switchD_004f0df9_caseD_34;
  FUN_004fe330(pcVar5,param_1);
  cVar2 = *pcVar5;
  if (cVar2 == ',') goto switchD_004f0df9_caseD_34;
  if ((cVar2 == -7) && (pcVar5[1] == '#')) {
    *psVar1 = 6;
  }
  else {
    if (cVar2 != -9) goto switchD_004f0df9_caseD_34;
    switch(pcVar5[1]) {
    case '2':
      *psVar1 = 3;
      break;
    case '3':
      *psVar1 = 0x11;
      break;
    default:
      goto switchD_004f0df9_caseD_34;
    case '5':
      *psVar1 = 0x12;
      break;
    case 'P':
      *psVar1 = 1;
      break;
    case 'Q':
      *psVar1 = 2;
      break;
    case 'R':
      *psVar1 = 4;
      break;
    case 'S':
      *psVar1 = 5;
      break;
    case 'U':
      *psVar1 = 7;
      break;
    case 'V':
      *psVar1 = 8;
      break;
    case 'W':
      *psVar1 = 9;
      break;
    case 'X':
      *psVar1 = 10;
      break;
    case 'Y':
      *psVar1 = 0xb;
      break;
    case 'Z':
      *psVar1 = 0xc;
      break;
    case '[':
      *psVar1 = 0xd;
      break;
    case '\\':
      *psVar1 = 0xe;
      break;
    case ']':
      *psVar1 = 0xf;
      break;
    case '^':
      *psVar1 = 0x10;
    }
  }
  FUN_004fe330(pcVar5,param_1);
  iVar6 = FUN_004f9b40(pcVar5);
  if (iVar6 == 0) {
    if (*pcVar5 != ',') goto switchD_004f0df9_caseD_34;
    bVar3 = local_5c[*psVar1];
    FUN_004fe330(pcVar5,param_1);
    iVar6 = FUN_004f5290(pcVar5,param_3,0);
    if (iVar6 == 0) {
      iVar6 = FUN_004f5d60(param_1,pcVar5,param_3,&param_2);
      if (iVar6 == 0) {
        return 0;
      }
      local_48[iVar8 * 7 + 2] = (short)param_2;
      iVar6 = FUN_004f9b40(pcVar5);
      if (iVar6 != 0) goto LAB_004f109f;
      if (*pcVar5 != ',') goto switchD_004f0df9_caseD_34;
    }
    if (((bVar3 == 1) || ((3 < bVar3 && (bVar3 < 6)))) &&
       (FUN_004fe330(pcVar5,param_1), *pcVar5 != ',')) {
      iVar6 = FUN_004f5d60(param_1,pcVar5,param_3,&param_2);
      if (iVar6 == 0) {
        return 0;
      }
      local_48[iVar8 * 7 + 3] = (short)param_2;
      iVar6 = FUN_004f9b40(pcVar5);
      if (iVar6 != 0) goto LAB_004f109f;
      if (*pcVar5 != ',') goto switchD_004f0df9_caseD_34;
    }
    if ((bVar3 != 0) && ((bVar3 < 3 || (bVar3 == 4)))) {
      FUN_004fe330(pcVar5,param_1);
      if (*pcVar5 != ',') {
        if (*pcVar5 == '1') {
          local_48[iVar8 * 7 + 4] = 0;
          FUN_004fe330(pcVar5,param_1);
        }
        else {
          iVar6 = FUN_004f5d60(param_1,pcVar5,param_3,&param_2);
          if (iVar6 == 0) {
            return 0;
          }
          local_48[iVar8 * 7 + 4] = (short)param_2;
        }
        iVar6 = FUN_004f9b40(pcVar5);
        if (iVar6 != 0) goto LAB_004f109f;
        if (*pcVar5 != ',') goto switchD_004f0df9_caseD_34;
      }
    }
    if ((bVar3 == 1) || (bVar3 == 3)) {
      FUN_004fe330(pcVar5,param_1);
      if (*pcVar5 != ',') {
        if (*pcVar5 != -9) goto switchD_004f0df9_caseD_34;
        cVar2 = pcVar5[1];
        if (cVar2 == 'M') {
          local_48[iVar8 * 7 + 5] = 2;
        }
        else if (cVar2 == 'N') {
          local_48[iVar8 * 7 + 5] = 1;
        }
        else {
          if (cVar2 != 'O') goto switchD_004f0df9_caseD_34;
          local_48[iVar8 * 7 + 5] = 0;
        }
        FUN_004fe330(pcVar5,param_1);
      }
    }
    if (*pcVar5 == ',') {
      FUN_004fe330(pcVar5,param_1);
      cVar2 = *pcVar5;
      if (cVar2 == '\x7f') {
        cVar2 = pcVar5[1];
        if (((cVar2 != '4') && (cVar2 != '5')) && (cVar2 != '6')) goto switchD_004f0df9_caseD_34;
      }
      else {
        if (*psVar1 != 5) goto switchD_004f0df9_caseD_34;
        if (cVar2 == '1') {
          *psVar1 = 6;
        }
        else {
          if (cVar2 != '0') goto switchD_004f0df9_caseD_34;
          sVar4 = 5;
        }
      }
      FUN_004fe330(pcVar5,param_1);
    }
  }
LAB_004f109f:
  iVar8 = FUN_004f9b40(pcVar5);
  if (iVar8 != 0) {
    if ((*psVar1 == 5) && (sVar4 == 6)) {
      *psVar1 = 6;
    }
    FUN_00530eb0(local_48);
    FUN_004f3c40(1);
    FUN_004fe3e0(pcVar5,param_1);
    return 1;
  }
switchD_004f0df9_caseD_34:
  uVar7 = FUN_004f58f0(2,param_3);
  return uVar7;
}

