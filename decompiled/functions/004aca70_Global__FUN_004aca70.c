// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aca70
// entry: 004aca70  size: 286


undefined4 FUN_004aca70(char *param_1,char *param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint local_c;
  int local_8;
  undefined1 local_4 [4];
  
  pcVar10 = param_2;
  DAT_005d6048 = FUN_004105d0(param_1,param_2,&param_2,local_4,&local_8,&local_c);
  uVar8 = param_4;
  uVar7 = param_3;
  if (DAT_005d6048 != 0) {
    uVar3 = FUN_004ab770(DAT_005d6048);
    return uVar3;
  }
  DAT_005d6048 = FUN_004115f0(param_1,pcVar10,param_4,param_3 & 0xfffffffc);
  if (DAT_005d6048 != 0) {
    uVar3 = FUN_004ab770(DAT_005d6048);
    return uVar3;
  }
  DAT_005d6048 = 0;
  if (uVar8 < local_c - uVar7) {
    iVar4 = (uVar7 & 3) + uVar8;
    uVar5 = uVar8;
    do {
      uVar6 = uVar5 + 1;
      puVar1 = (undefined1 *)(iVar4 + local_8);
      iVar4 = iVar4 + 1;
      *(undefined1 *)(uVar5 + local_8) = *puVar1;
      uVar5 = uVar6;
    } while (uVar6 < local_c - uVar7);
  }
  if (((uVar8 != 0) || (uVar7 != local_c)) ||
     (uVar3 = FUN_004abb50(param_1,pcVar10,4,&DAT_005d0200), (char)uVar3 == '\0')) {
    uVar7 = 0xffffffff;
    do {
      pcVar9 = param_1;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar9 = param_1 + 1;
      cVar2 = *param_1;
      param_1 = pcVar9;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar9 + -uVar7;
    pcVar11 = &DAT_005d5870;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar9 = pcVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar9 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar9;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar10 = pcVar9 + -uVar7;
    pcVar9 = &DAT_005d5760;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar9 = pcVar9 + 4;
    }
    uVar3 = 0;
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar9 = pcVar9 + 1;
    }
    DAT_005d5b70 = 0xfe;
  }
  return uVar3;
}

