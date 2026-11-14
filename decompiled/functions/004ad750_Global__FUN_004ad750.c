// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad750
// entry: 004ad750  size: 170


undefined4 FUN_004ad750(undefined4 param_1,char *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  uVar3 = param_1;
  pcVar2 = (char *)FUN_004ab740(param_1);
  pcVar6 = param_2;
  DAT_005d6048 = FUN_004105d0(pcVar2,param_2,&param_1,local_4,param_4,&local_8);
  if (DAT_005d6048 != 0) {
    uVar3 = FUN_004ab770(DAT_005d6048);
    return uVar3;
  }
  *param_3 = local_8;
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar7 + -uVar4;
  pcVar7 = &DAT_005d5870;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar2 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar2;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar2 + -uVar4;
  pcVar2 = &DAT_005d5760;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  DAT_005d5b70 = (char)uVar3;
  return 0;
}

