// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ac130
// entry: 004ac130  size: 309


uint FUN_004ac130(char *param_1,char *param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar3 = param_3;
  pcVar8 = param_2;
  pcVar6 = param_1;
  param_3 = param_3 & 0xffffff00;
  DAT_005d6048 = FUN_004105d0(param_1,param_2,&param_2,local_4,local_8,&param_1);
  if (DAT_005d6048 != 0) {
    uVar3 = FUN_004ab770(DAT_005d6048);
    return uVar3;
  }
  uVar4 = (int)param_1 - param_5;
  uVar5 = uVar3;
  if (uVar4 == uVar3) {
    param_3 = CONCAT31(param_3._1_3_,1);
  }
  else if (uVar4 < uVar3) {
    param_3 = CONCAT31(param_3._1_3_,2);
    uVar5 = uVar4;
  }
  iVar2 = 0;
  if (uVar5 != 0) {
    DAT_005d6048 = FUN_00411520(pcVar6,pcVar8,param_5,uVar5,param_4);
    iVar2 = DAT_005d6048;
    if (DAT_005d6048 != 0) {
      uVar3 = FUN_004ab770(DAT_005d6048);
      return uVar3;
    }
  }
  DAT_005d6048 = iVar2;
  if ((char)param_3 == '\x02') {
    DAT_005d6048 = FUN_00411350(pcVar6,pcVar8,param_1,(uVar3 - uVar5) + 3 & 0xfffffffc,
                                param_4 + uVar5);
    if (DAT_005d6048 != 0) {
      uVar3 = FUN_004ab770(DAT_005d6048);
      return uVar3;
    }
  }
  uVar3 = 0xffffffff;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = &DAT_005d5870;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar6 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar6 + -uVar3;
  pcVar8 = &DAT_005d5760;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  DAT_005d5b70 = 0xfe;
  return param_3 & 0xff;
}

