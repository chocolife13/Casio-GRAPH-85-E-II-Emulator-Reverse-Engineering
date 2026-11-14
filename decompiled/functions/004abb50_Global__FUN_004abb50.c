// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004abb50
// entry: 004abb50  size: 225


undefined4 FUN_004abb50(char *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  pcVar8 = param_2;
  pcVar6 = param_1;
  if (param_1 == (char *)0x0) {
    return 0x11;
  }
  if (param_2 == (char *)0x0) {
    return 0x12;
  }
  iVar2 = FUN_004105d0(param_1,param_2,&param_1,local_4,local_8,&param_2);
  if (iVar2 == 0) {
    return 0x25;
  }
  iVar2 = param_4;
  if (param_4 == 0) {
    iVar2 = DAT_005d67e8;
  }
  uVar3 = FUN_004ab920(0xfffffffe,param_3 + 3U & 0xfffffffc,iVar2);
  iVar2 = FUN_004106b0(pcVar6,pcVar8,uVar3);
  DAT_005d6048 = iVar2;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = &DAT_005d5870;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    pcVar8 = &DAT_005d5760;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    DAT_005d5b70 = 0xfe;
  }
  uVar3 = FUN_004ab770(iVar2);
  return uVar3;
}

