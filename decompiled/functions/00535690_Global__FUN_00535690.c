// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535690
// entry: 00535690  size: 353


undefined1 FUN_00535690(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  short sVar9;
  undefined1 local_6;
  byte local_5;
  undefined4 local_4;
  
  uVar1 = *param_1;
  sVar9 = 1;
  uVar8 = 0;
  cVar2 = FUN_00532fb0(uVar1);
  if (cVar2 != '\n') {
    return 0;
  }
  bVar3 = FUN_005354d0(uVar1);
  local_4 = CONCAT31(local_4._1_3_,bVar3);
  local_6 = 1;
  local_5 = (&DAT_005997d0)[bVar3];
  bVar3 = (&DAT_005997f8)[bVar3];
  pcVar5 = (char *)FUN_004b7840(uVar1);
  cVar2 = *pcVar5;
  do {
    if (cVar2 == '\0') {
LAB_005357cf:
      if (uVar8 < local_5) {
        local_6 = 0;
      }
      *param_1 = pcVar5;
      return local_6;
    }
    cVar2 = FUN_00532fb0(pcVar5);
    local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
    local_4 = CONCAT31(local_4._1_3_,cVar2);
    if (cVar2 == '\t') {
      sVar9 = sVar9 + -1;
      if (sVar9 == 0) goto LAB_005357cf;
    }
    else if (cVar2 == '\n') {
      sVar9 = sVar9 + 1;
    }
    else if (cVar2 == '\b') {
      uVar6 = FUN_005336e0(pcVar5,1);
      pcVar5 = pcVar5 + (uVar6 & 0xffff);
      if (*pcVar5 == ',') {
        pcVar5 = pcVar5 + -1;
      }
      iVar7 = FUN_004b7610(pcVar5,0);
      if (iVar7 == 2) {
        pcVar5 = pcVar5 + -1;
      }
    }
    else if (cVar2 == '\x01') {
      uVar6 = FUN_00533620(pcVar5);
      pcVar5 = pcVar5 + (uVar6 & 0xffff);
    }
    else {
      cVar2 = FUN_00532a70(local_4);
      if ((cVar2 != '\0') ||
         (((*pcVar5 == ',' && (sVar9 == 1)) && (uVar8 = uVar8 + 1, bVar3 < uVar8)))) {
        local_6 = 0;
        goto LAB_005357cf;
      }
    }
    bVar4 = FUN_00535660(pcVar5);
    if (bVar4 != 0) {
      local_5 = local_5 + (&DAT_00599820)[bVar4];
      bVar3 = bVar3 + (&DAT_00599820)[bVar4];
    }
    pcVar5 = (char *)FUN_004b7840(pcVar5);
    cVar2 = *pcVar5;
  } while( true );
}

