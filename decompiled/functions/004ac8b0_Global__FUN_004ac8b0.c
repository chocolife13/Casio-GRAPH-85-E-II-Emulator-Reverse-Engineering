// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ac8b0
// entry: 004ac8b0  size: 436


char FUN_004ac8b0(undefined4 param_1,char *param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_11;
  uint local_10;
  int local_c;
  char *local_8;
  undefined1 local_4 [4];
  
  pcVar4 = (char *)FUN_004ab740(param_1);
  cVar2 = (char)param_1;
  if (cVar2 == '\0') {
    return 'V';
  }
  local_8 = pcVar4;
  DAT_005d6048 = FUN_004105d0(pcVar4,param_2,&local_11,local_4,&local_c,&local_10);
  if (DAT_005d6048 != 0) {
    cVar2 = FUN_004ab770(DAT_005d6048);
    return cVar2;
  }
  DAT_005d6048 = FUN_004115f0(pcVar4,param_2,param_4,param_3 & 0xfffffffc);
  if (DAT_005d6048 != 0) {
    cVar2 = FUN_004ab770(DAT_005d6048);
    return cVar2;
  }
  DAT_005d6048 = 0;
  if (param_4 < local_10 - param_3) {
    iVar5 = (param_3 & 3) + param_4;
    uVar7 = param_4;
    do {
      uVar6 = uVar7 + 1;
      puVar1 = (undefined1 *)(iVar5 + local_c);
      iVar5 = iVar5 + 1;
      *(undefined1 *)(uVar7 + local_c) = *puVar1;
      uVar7 = uVar6;
      pcVar4 = local_8;
    } while (uVar6 < local_10 - param_3);
  }
  if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
    FUN_004105d0(pcVar4,param_2,&local_11,local_4,&local_c,&local_10);
    iVar5 = FUN_004b7550(local_c + 10);
    local_10 = local_10 - (iVar5 + 0xb);
    if ((3 < local_10) &&
       (DAT_005d6048 = FUN_004115f0(pcVar4,param_2,iVar5 + 0xb,local_10 & 0xfffffffc),
       DAT_005d6048 != 0)) {
      cVar2 = FUN_004ab770(DAT_005d6048);
      return cVar2;
    }
  }
  else if (((param_4 == 0) && (param_3 == local_10)) &&
          (cVar3 = FUN_004aba60(param_1,param_2,4,&DAT_005d0200), cVar3 != '\0')) {
    return cVar3;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar8 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar8 = pcVar4 + 1;
    cVar3 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar3 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar8 + -uVar7;
  pcVar8 = &DAT_005d5870;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar4 = param_2 + 1;
    cVar3 = *param_2;
    param_2 = pcVar4;
  } while (cVar3 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar4 + -uVar7;
  pcVar8 = &DAT_005d5760;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  DAT_005d5b70 = cVar2;
  return '\0';
}

