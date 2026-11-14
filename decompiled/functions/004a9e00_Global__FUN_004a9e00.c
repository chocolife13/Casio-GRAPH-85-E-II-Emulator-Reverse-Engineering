// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9e00
// entry: 004a9e00  size: 528


void FUN_004a9e00(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  int local_444;
  int local_440;
  undefined1 local_43a [2];
  char local_438 [28];
  char local_41c [28];
  undefined4 local_400 [256];
  
  cVar1 = FUN_004aa070();
  if (cVar1 != '\0') {
    DAT_005d6c29 = 3;
    puVar2 = (undefined4 *)FUN_004138b0();
    puVar8 = puVar2;
    puVar9 = local_400;
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    iVar4 = FUN_004aa030(0);
    iVar3 = FUN_004aa030(1);
    FUN_00414240();
    FUN_00413a10(0,0);
    FUN_00413da0(s___DEBUG_DISPLAY___005c0618,0);
    FUN_00413a10(2,1);
    FUN_0055c2fe(0x8000 - iVar4,local_41c,10);
    uVar5 = 0xffffffff;
    pcVar7 = s_MAIN_32___005c060c;
    do {
      pcVar11 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar11 + -uVar5;
    pcVar11 = local_438;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar7 = local_41c;
    do {
      pcVar11 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar4 = -1;
    pcVar7 = local_438;
    do {
      pcVar10 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    pcVar7 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00413da0(local_438,0);
    FUN_00413a10(2,2);
    FUN_0055c2fe(0x8000 - iVar3,local_41c,10);
    uVar5 = 0xffffffff;
    pcVar7 = s_CHLD_32___005c0600;
    do {
      pcVar11 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar11 + -uVar5;
    pcVar11 = local_438;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar7 = local_41c;
    do {
      pcVar11 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar4 = -1;
    pcVar7 = local_438;
    do {
      pcVar10 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    pcVar7 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00413da0(local_438,0);
    FUN_00413a10(2,3);
    uVar5 = 0xffffffff;
    pcVar7 = s_HEAP______005c05f0;
    do {
      pcVar11 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar11 + -uVar5;
    pcVar11 = local_438;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00413da0(local_438,0);
    FUN_00413a10(3,6);
    FUN_00413da0(s_PUSH_MENU_to_EXIT_005c05dc,0);
    FUN_0040ae30();
    do {
      do {
        FUN_0042fd50(&local_440,&local_444,0,500,0,local_43a);
      } while (local_440 != 4);
    } while (local_444 != 9);
    puVar8 = local_400;
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_0040ae30();
    DAT_005d6c29 = DAT_005d6806;
  }
  return;
}

