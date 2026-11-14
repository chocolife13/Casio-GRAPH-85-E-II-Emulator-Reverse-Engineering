// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040b0c0
// entry: 0040b0c0  size: 151


void FUN_0040b0c0(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a8c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040b9b0(&local_10);
  local_4 = 0;
  pcVar2 = (char *)FUN_00566937(*(int *)(local_10 + -8) + 1);
  uVar3 = 0xffffffff;
  pcVar5 = local_10;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_004b7dd0(pcVar2,*(int *)(local_10 + -8) + 1);
  FUN_00566960(pcVar2);
  local_4 = 0xffffffff;
  FUN_00567398();
  ExceptionList = local_c;
  return;
}

