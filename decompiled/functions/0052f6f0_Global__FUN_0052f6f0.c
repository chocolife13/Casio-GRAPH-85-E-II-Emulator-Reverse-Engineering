// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052f6f0
// entry: 0052f6f0  size: 108


char * FUN_0052f6f0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = FUN_00414a00(param_1,&param_1);
  if (iVar2 == 0) {
    return (char *)0x0;
  }
  uVar3 = FUN_004b6ca0(param_1);
  if (0x30 < uVar3) {
    pcVar5 = s_____message_error_____005c4200;
    pcVar6 = param_2;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    *(undefined2 *)pcVar6 = *(undefined2 *)pcVar5;
    return param_2;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = param_2;
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
  return param_2;
}

