// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004abff0
// entry: 004abff0  size: 319


uint FUN_004abff0(undefined4 param_1,char *param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_d;
  int local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  bVar2 = 0;
  pcVar4 = (char *)FUN_004ab740(param_1);
  DAT_005d6048 = FUN_004105d0(pcVar4,param_2,&local_d,local_4,local_8,&local_c);
  if (DAT_005d6048 != 0) {
    uVar5 = FUN_004ab770(DAT_005d6048);
    return uVar5;
  }
  uVar6 = local_c - param_5;
  uVar5 = param_3;
  if (uVar6 == param_3) {
    bVar2 = 1;
  }
  else if (uVar6 < param_3) {
    bVar2 = 2;
    uVar5 = uVar6;
  }
  iVar3 = 0;
  if (uVar5 != 0) {
    DAT_005d6048 = FUN_00411520(pcVar4,param_2,param_5,uVar5,param_4);
    iVar3 = DAT_005d6048;
    if (DAT_005d6048 != 0) {
      uVar5 = FUN_004ab770(DAT_005d6048);
      return uVar5;
    }
  }
  DAT_005d6048 = iVar3;
  if (bVar2 == 2) {
    DAT_005d6048 = FUN_00411350(pcVar4,param_2,local_c,(param_3 - uVar5) + 3 & 0xfffffffc,
                                param_4 + uVar5);
    if (DAT_005d6048 != 0) {
      uVar5 = FUN_004ab770(DAT_005d6048);
      return uVar5;
    }
  }
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar7 + -uVar5;
  pcVar7 = &DAT_005d5870;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar4 + -uVar5;
  pcVar7 = &DAT_005d5760;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
  }
  DAT_005d5b70 = (undefined1)param_1;
  return (uint)bVar2;
}

