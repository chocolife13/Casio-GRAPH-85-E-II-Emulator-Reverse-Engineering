// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00533380
// entry: 00533380  size: 323


ushort FUN_00533380(undefined1 *param_1,char param_2)

{
  char *pcVar1;
  ushort uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  char *pcVar9;
  
  cVar3 = FUN_00533160(param_1);
  cVar4 = FUN_005330a0(param_1);
  if (((cVar3 == '\a') || (cVar3 == '\b')) ||
     ((param_2 != '\0' && ((cVar3 == '\x01' || (cVar3 == '\x06')))))) {
    return 0;
  }
  if (param_2 == '\x02') {
    if ((cVar3 != '\x04') && (cVar3 != '\x05')) {
      return 0;
    }
  }
  else if ((param_2 == '\x03') && (cVar4 != '\n')) {
    return 0;
  }
  if (((cVar3 == '\x06') || (cVar3 == '\x02')) || (cVar3 == '\x04')) {
    uVar7 = 2;
  }
  else if ((cVar3 == '\x03') || (cVar3 == '\x01')) {
    uVar7 = 3;
  }
  else {
    if (cVar3 != '\x05') {
      return 0;
    }
    uVar7 = 4;
  }
  iVar5 = FUN_004b7370(*param_1);
  if (iVar5 != 0) {
    uVar7 = uVar7 + 1;
  }
  if (param_2 == '\0') {
    return uVar7;
  }
  bVar6 = 1;
  pcVar9 = param_1 + uVar7;
  do {
    sVar8 = 1;
    cVar3 = *pcVar9;
    pcVar1 = pcVar9;
    uVar2 = uVar7;
    while (cVar3 != '\0') {
      if (cVar3 == '\x1a') {
LAB_00533475:
        sVar8 = sVar8 + 1;
      }
      else if (cVar3 == '\x1b') {
        sVar8 = sVar8 + -1;
        if (sVar8 == 0) break;
      }
      else if (cVar3 == '\x1c') {
        if (sVar8 == 1) break;
      }
      else {
        if ((cVar3 == -0x7c) || (cVar3 == -0x5c)) goto LAB_00533475;
        if ((cVar3 == -0x6c) || (cVar3 == -0x4c)) {
          sVar8 = sVar8 + -1;
        }
      }
      uVar7 = uVar2 + 1;
      pcVar9 = pcVar1 + 1;
      iVar5 = FUN_004b7370(cVar3);
      if (iVar5 != 0) {
        pcVar9 = pcVar1 + 2;
        uVar7 = uVar2 + 2;
      }
      pcVar1 = pcVar9;
      uVar2 = uVar7;
      cVar3 = *pcVar9;
    }
    uVar7 = uVar2 + 1;
    pcVar9 = pcVar1 + 1;
    if (pcVar1[1] == '\x1a') {
      pcVar9 = pcVar1 + 2;
      uVar7 = uVar2 + 2;
    }
    if (bVar6 == 1) {
      if (param_2 == '\x01') {
        return uVar7;
      }
    }
    else if ((bVar6 == 2) && (param_2 == '\x02')) {
      return uVar7;
    }
    bVar6 = bVar6 + 1;
    if (3 < bVar6) {
      return uVar7;
    }
  } while( true );
}

