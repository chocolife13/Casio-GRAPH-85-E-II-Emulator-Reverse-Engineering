// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051ea40
// entry: 0051ea40  size: 83


void FUN_0051ea40(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = FUN_004b6ab0(*param_1);
    if (iVar2 != 0) {
      param_1 = param_1 + 1;
    }
    pcVar6 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar5 = iVar5 + 1;
    cVar1 = *pcVar6;
  }
  if (iVar5 < param_2) {
    uVar3 = param_2 - iVar5;
    uVar4 = uVar3 >> 2;
    pcVar6 = param_1;
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      builtin_strncpy(pcVar6,"    ",4);
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = ' ';
      pcVar6 = pcVar6 + 1;
    }
    param_1[uVar3] = '\0';
  }
  return;
}

