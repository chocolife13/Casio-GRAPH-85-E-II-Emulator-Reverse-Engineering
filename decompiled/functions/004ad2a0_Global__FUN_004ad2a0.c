// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad2a0
// entry: 004ad2a0  size: 175


uint FUN_004ad2a0(undefined4 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar2 = param_1;
  pcVar4 = (char *)FUN_004ab740(param_1);
  puVar3 = param_3;
  pcVar7 = param_2;
  *param_3 = 0;
  DAT_005d6048 = FUN_004105d0(pcVar4,param_2,&param_1,local_4,local_8,&local_c);
  if (DAT_005d6048 != 0) {
    uVar5 = FUN_004ab770(DAT_005d6048);
    return uVar5;
  }
  *puVar3 = local_c;
  uVar5 = 0xffffffff;
  do {
    pcVar8 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar8 + -uVar5;
  pcVar8 = &DAT_005d5870;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar4 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar4 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar4;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar4 + -uVar5;
  pcVar4 = &DAT_005d5760;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar4 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
  DAT_005d5b70 = (char)uVar2;
  return uVar5 & 0xffffff00;
}

