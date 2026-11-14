// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aba60
// entry: 004aba60  size: 239


undefined4 FUN_004aba60(undefined4 param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar4 = param_1;
  pcVar2 = (char *)FUN_004ab740(param_1);
  pcVar8 = param_2;
  cVar7 = (char)uVar4;
  if (cVar7 == '\0') {
    return 0x10;
  }
  if (param_2 == (char *)0x0) {
    return 0x12;
  }
  iVar3 = FUN_004105d0(pcVar2,param_2,&param_1,local_4,local_8,local_c);
  if (iVar3 == 0) {
    return 0x24;
  }
  iVar3 = param_4;
  if (param_4 == 0) {
    iVar3 = DAT_005d67e8;
  }
  uVar4 = FUN_004ab920(uVar4,param_3 + 3U & 0xfffffffc,iVar3);
  iVar3 = FUN_004106b0(pcVar2,pcVar8,uVar4);
  DAT_005d6048 = iVar3;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
    do {
      pcVar9 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar2 = pcVar9 + -uVar5;
    pcVar9 = &DAT_005d5870;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar5 = 0xffffffff;
    do {
      pcVar2 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar2 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar2;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar2 + -uVar5;
    pcVar2 = &DAT_005d5760;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar5 = uVar5 & 3; DAT_005d5b70 = cVar7, uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  uVar4 = FUN_004ab770(iVar3);
  return uVar4;
}

