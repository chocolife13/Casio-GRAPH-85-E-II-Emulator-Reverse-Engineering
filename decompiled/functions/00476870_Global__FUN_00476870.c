// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00476870
// entry: 00476870  size: 118


void FUN_00476870(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_34 [52];
  
  FUN_004b7b40(param_1,local_34,0x15);
  iVar5 = 0;
  iVar2 = FUN_004b6ca0(local_34);
  while ((-1 < iVar2 + -1 && (local_34[iVar2 + -1] == ' '))) {
    local_34[iVar2 + -1] = '\0';
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + -1;
  }
  *param_2 = '\0';
  if (0 < iVar5) {
    do {
      *param_2 = ' ';
      param_2 = param_2 + 1;
      iVar5 = iVar5 + -1;
      *param_2 = '\0';
    } while (iVar5 != 0);
  }
  uVar3 = 0xffffffff;
  pcVar6 = local_34;
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
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

