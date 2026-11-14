// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b0880
// entry: 004b0880  size: 327


undefined4 FUN_004b0880(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char local_440 [12];
  undefined4 local_434;
  char local_430 [1072];
  
  FUN_004af610(param_1,local_430,0);
  FUN_0040ad00();
  iVar6 = 0;
  if (local_430[0] != '\0') {
    pcVar2 = local_430;
    do {
      pcVar1 = pcVar2 + 0x15;
      pcVar2 = pcVar2 + 0x15;
      iVar6 = iVar6 + 1;
    } while (*pcVar1 != '\0');
  }
  iVar7 = iVar6 + -1;
  FUN_005262e0(0x84);
  iVar8 = 0;
  iVar9 = 0;
  do {
    do {
      FUN_00538b30();
      iVar3 = FUN_004af6f0(iVar9,iVar8,local_430,"Val        Type  Size");
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = FUN_00526620(&local_434);
    } while (iVar4 != 0);
    switch(local_434) {
    case 0x7532:
    case 0x753f:
    case 0x754d:
      return 0;
    case 0x7534:
      local_440[8] = 0;
      FUN_004b71f0(local_440,iVar3,8);
      uVar5 = 0;
      do {
        if (local_440[uVar5] == ' ') {
          local_440[uVar5] = '\0';
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 9);
      FUN_004b0720(param_1,local_440,0);
      break;
    case 0x7542:
      if (iVar8 == iVar9) {
        if (iVar9 < 1) {
          iVar8 = iVar7;
          iVar9 = iVar7;
          if (6 < iVar7) {
            iVar9 = iVar6 + -6;
          }
          break;
        }
        iVar9 = iVar9 + -1;
      }
      iVar8 = iVar8 + -1;
      break;
    case 0x7547:
      if (iVar8 == iVar9 + 5) {
        if (iVar8 < iVar7) {
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 1;
        }
        else {
          iVar8 = 0;
          iVar9 = 0;
        }
      }
      else if (iVar8 < iVar7) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar8 = 0;
        iVar9 = 0;
      }
    }
  } while( true );
}

