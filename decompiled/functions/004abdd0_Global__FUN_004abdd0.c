// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004abdd0
// entry: 004abdd0  size: 220


undefined4 FUN_004abdd0(char *param_1,char *param_2,uint param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar2 = param_5;
  uVar4 = param_3;
  pcVar7 = param_2;
  DAT_005d6048 = FUN_00411350(param_1,param_2,param_5,param_3 + 3 & 0xfffffffc,param_4);
  if (DAT_005d6048 != 0) {
    uVar3 = FUN_004ab770(DAT_005d6048);
    return uVar3;
  }
  if ((uVar4 & 3) != 0) {
    FUN_004105d0(param_1,pcVar7,&param_4,&param_2,&param_5,&param_3);
    uVar5 = iVar2 + uVar4;
    if (uVar5 < param_3) {
      do {
        uVar5 = uVar5 + 1;
        *(undefined1 *)(param_5 + -1 + uVar5) = *(undefined1 *)((-uVar4 & 3) + param_5 + -1 + uVar5)
        ;
      } while (uVar5 < param_3);
    }
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar8 = &DAT_005d5870;
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
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar6 + -uVar4;
  pcVar6 = &DAT_005d5760;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  DAT_005d5b70 = 0xfe;
  return 0;
}

