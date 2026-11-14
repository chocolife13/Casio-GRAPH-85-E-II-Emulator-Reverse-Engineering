// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004869c0
// entry: 004869c0  size: 198


char * FUN_004869c0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_10 [4];
  char local_c [12];
  
  pcVar1 = param_1;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    FUN_00485e40(local_c);
    uVar4 = 0xffffffff;
    pcVar6 = local_c;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = pcVar1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  cVar2 = FUN_004ad800(s__SSHEET_005be210,pcVar1,local_10,&param_1);
  if (cVar2 != '\0') {
    iVar3 = FUN_00485d90(pcVar1);
    if (iVar3 == 0) {
      return (char *)0x0;
    }
    cVar2 = FUN_004ad800(s__SSHEET_005be210,pcVar1,local_10,&param_1);
    if (cVar2 != '\0') {
      return (char *)0x0;
    }
    FUN_00485ef0(pcVar1);
    cVar2 = FUN_004ad800(s__SSHEET_005be210,pcVar1,local_10,&param_1);
    if (cVar2 != '\0') {
      return (char *)0x0;
    }
  }
  return param_1;
}

