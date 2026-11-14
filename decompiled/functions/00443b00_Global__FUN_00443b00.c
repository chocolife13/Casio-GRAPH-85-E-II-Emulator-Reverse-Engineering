// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443b00
// entry: 00443b00  size: 91


void FUN_00443b00(short param_1,short param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char local_10 [16];
  
  uVar2 = 0xffffffff;
  pcVar4 = "";
  do {
    pcVar6 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar6 + -uVar2;
  pcVar6 = local_10;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  }
  for (iVar5 = (int)param_1; iVar5 <= param_2; iVar5 = iVar5 + 1) {
    FUN_005232d0(1,iVar5);
    FUN_00523470(local_10,0x15);
  }
  return;
}

