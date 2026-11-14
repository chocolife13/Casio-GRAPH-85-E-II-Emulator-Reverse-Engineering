// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00437840
// entry: 00437840  size: 98


void FUN_00437840(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_2 [2];
  
  uVar3 = 0xffffffff;
  pcVar5 = " ";
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
  pcVar7 = local_2;
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
  iVar2 = FUN_004b6bd0(param_1);
  iVar6 = 0x14;
  do {
    if (iVar6 < iVar2) break;
    FUN_00523420(local_2);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_00523470(param_1,0x15);
  return;
}

