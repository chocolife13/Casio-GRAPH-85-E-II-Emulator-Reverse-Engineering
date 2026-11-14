// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00477d70
// entry: 00477d70  size: 244


undefined4 FUN_00477d70(short *param_1,short *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_20 [32];
  
  *param_3 = '\0';
  if ((((*param_1 == 0) || (param_1[1] == 0)) || (*param_2 == 0)) || (param_2[1] == 0)) {
    *(undefined2 *)param_3 = DAT_005a91bc;
    return 1;
  }
  iVar2 = FUN_00477d00(param_1,local_20);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_005be9dc;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  pcVar5 = local_20;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_00477d00(param_2,local_20 + (~uVar3 - 1));
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pcVar5 = local_20;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_3 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_3 = param_3 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_3 = param_3 + 1;
  }
  return 1;
}

