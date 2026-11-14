// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005336e0
// entry: 005336e0  size: 355


short FUN_005336e0(undefined1 *param_1,char param_2)

{
  undefined1 *puVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  short sVar7;
  char *pcVar8;
  char *pcVar9;
  short sVar10;
  byte local_9;
  byte local_8;
  
  puVar1 = param_1;
  sVar10 = 1;
  sVar7 = 1;
  local_9 = FUN_00532fb0(param_1);
  if ((param_2 != '\0') && (local_9 != 8)) {
switchD_00533724_caseD_9:
    return 0;
  }
  local_8 = local_9;
  switch(local_9) {
  default:
    goto switchD_00533724_caseD_9;
  case 10:
    local_8 = 8;
  case 8:
    local_9 = 10;
    param_1._0_1_ = 9;
    break;
  case 0xb:
    param_1._0_1_ = 0xc;
    break;
  case 0xd:
    param_1._0_1_ = 0xe;
    break;
  case 0xf:
    param_1._0_1_ = 0x10;
    break;
  case 0x11:
    param_1._0_1_ = 0x12;
  }
  pcVar8 = puVar1 + 1;
  iVar6 = FUN_004b7370(*puVar1);
  if (iVar6 != 0) {
    pcVar8 = puVar1 + 2;
    sVar10 = 2;
  }
  cVar3 = FUN_00538220(*pcVar8);
  do {
    if (cVar3 != '\0') {
      return sVar10;
    }
    bVar4 = FUN_00532fb0(pcVar8);
    if (bVar4 == (byte)param_1) {
      sVar7 = sVar7 + -1;
      if (sVar7 == 0) {
        return sVar10;
      }
    }
    else if ((bVar4 == local_8) || (bVar4 == local_9)) {
      sVar7 = sVar7 + 1;
    }
    else if (bVar4 == 1) {
      uVar5 = FUN_00533620(pcVar8);
      pcVar8 = pcVar8 + uVar5;
      sVar10 = sVar10 + uVar5;
    }
    else {
      cVar3 = FUN_00532a30(bVar4);
      if (cVar3 != '\0') {
        return sVar10;
      }
      if ((local_8 < 0xf) && (bVar4 == 5)) {
        return sVar10;
      }
      if ((*pcVar8 == ',') && (param_2 == '\x01')) {
        return sVar10;
      }
    }
    pcVar9 = pcVar8 + 1;
    iVar6 = FUN_004b7370(*pcVar8);
    sVar2 = sVar10 + 1;
    if (iVar6 != 0) {
      pcVar9 = pcVar8 + 2;
      sVar2 = sVar10 + 2;
    }
    sVar10 = sVar2;
    cVar3 = FUN_00538220(*pcVar9);
    pcVar8 = pcVar9;
  } while( true );
}

