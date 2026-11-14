// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad8f0
// entry: 004ad8f0  size: 291


undefined4
FUN_004ad8f0(undefined4 param_1,char *param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  pcVar2 = (char *)FUN_004ab740(param_1);
  iVar3 = FUN_004ad610(*param_3);
  if (param_4 == 0) {
    uVar4 = FUN_004ab920(param_1,(ushort)(&DAT_005d5880)[iVar3] + 3 & 0xfffffffc,*param_3);
    DAT_005d6048 = FUN_004106b0(pcVar2,param_2,uVar4);
  }
  else {
    uVar4 = FUN_004ab920(param_1,param_4 + 3U & 0xfffffffc,param_5);
    DAT_005d6048 = FUN_004106b0(pcVar2,param_2,uVar4);
    DAT_005d6048 = FUN_00411350(pcVar2,param_2,param_4,
                                ((ushort)(&DAT_005d5880)[iVar3] + 3 + param_4 & 0xfffffffc) -
                                param_4,*param_3);
  }
  FUN_004ad6d0(param_3);
  if (DAT_005d6048 != 0) {
    uVar4 = FUN_004ab770(DAT_005d6048);
    return uVar4;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar7 + -uVar5;
  pcVar7 = &DAT_005d5870;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar2 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar2 + -uVar5;
  pcVar7 = &DAT_005d5760;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  DAT_005d5b70 = (char)param_1;
  return 0;
}

