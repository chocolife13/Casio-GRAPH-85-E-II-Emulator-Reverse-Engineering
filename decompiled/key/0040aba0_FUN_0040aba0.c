// decompiled from GRAPH85emulator.exe
// function: FUN_0040aba0 @ 0040aba0


int FUN_0040aba0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  CHAR local_108 [264];
  
  puVar2 = (undefined4 *)_malloc(100);
  puVar8 = puVar2;
  for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  GetTempPathA(0x104,local_108);
  uVar5 = 0xffffffff;
  pcVar7 = s_gy363_fls_005a9200;
  do {
    pcVar10 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar7 = local_108;
  do {
    pcVar9 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar4 = FUN_005542d3(local_108,0x8002);
  if (iVar4 < 0) {
    piVar3 = (int *)FUN_005542c1();
    if (*piVar3 == 2) {
      iVar4 = FUN_005542d3(local_108,0x8102,0x180);
      iVar11 = 0;
      DAT_005d8948 = iVar4;
      do {
        FUN_0041c2f0(iVar11);
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x19);
      FUN_0041c520(puVar2);
    }
  }
  FUN_00553b50(puVar2);
  if (iVar4 == -1) {
    FUN_0055415b(0xffffffff);
  }
  return iVar4;
}

