// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00477d00
// entry: 00477d00  size: 110


undefined4 FUN_00477d00(short *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_10 [16];
  
  *param_2 = '\0';
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    return 0;
  }
  *param_2 = (char)*param_1 + '@';
  FUN_0055c2fe((int)param_1[1],local_10,10);
  uVar2 = 0xffffffff;
  pcVar4 = local_10;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_2 + 1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return 1;
}

