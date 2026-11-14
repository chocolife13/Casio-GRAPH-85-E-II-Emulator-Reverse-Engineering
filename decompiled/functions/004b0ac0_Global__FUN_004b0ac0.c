// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b0ac0
// entry: 004b0ac0  size: 328


undefined4 FUN_004b0ac0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char local_8ec [12];
  uint local_8e0;
  char local_8dc [2268];
  
  FUN_004af270(local_8dc,0);
  iVar6 = 0;
  if (local_8dc[0] != '\0') {
    pcVar2 = local_8dc;
    do {
      pcVar1 = pcVar2 + 0x15;
      pcVar2 = pcVar2 + 0x15;
      iVar6 = iVar6 + 1;
    } while (*pcVar1 != '\0');
  }
  iVar7 = iVar6 + -1;
  do {
    iVar9 = 0;
    iVar8 = 0;
switchD_004b0b37_default:
    while( true ) {
      do {
        uVar3 = FUN_004af6f0(iVar9,iVar8,local_8dc,"Folder     Size   val");
        FUN_00538b30();
        iVar4 = FUN_00526620(&local_8e0);
      } while (iVar4 != 0);
      if (0x7532 < local_8e0) break;
      if (local_8e0 == 0x7532) {
        return 0;
      }
      switch(local_8e0) {
      case 1:
        FUN_004af7d0();
        break;
      case 2:
        FUN_004b0a00();
        break;
      case 3:
        FUN_004b0210();
        break;
      case 4:
        FUN_004b0220();
        break;
      case 5:
        FUN_004b0250();
        break;
      case 6:
        FUN_004b05f0();
      }
    }
    switch(local_8e0) {
    case 0x7534:
      local_8ec[8] = 0;
      FUN_004b71f0(local_8ec,uVar3,8);
      uVar5 = 0;
      do {
        if (local_8ec[uVar5] == ' ') {
          local_8ec[uVar5] = '\0';
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 9);
      FUN_004b0880(local_8ec,0);
    default:
      goto switchD_004b0b37_default;
    case 0x753f:
    case 0x754d:
      return 0;
    case 0x7542:
      if (iVar8 == iVar9) {
        if (iVar9 < 1) {
          iVar9 = iVar6 + -6;
          iVar8 = iVar7;
          goto switchD_004b0b37_default;
        }
        iVar9 = iVar9 + -1;
      }
      iVar8 = iVar8 + -1;
      goto switchD_004b0b37_default;
    case 0x7547:
      if (iVar8 != iVar9 + 5) {
        if (iVar7 <= iVar8) break;
        iVar8 = iVar8 + 1;
        goto switchD_004b0b37_default;
      }
      if (iVar8 < iVar7) {
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 1;
        goto switchD_004b0b37_default;
      }
    }
  } while( true );
}

