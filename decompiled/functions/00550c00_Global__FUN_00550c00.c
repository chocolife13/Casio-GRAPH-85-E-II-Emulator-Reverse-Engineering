// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00550c00
// entry: 00550c00  size: 119


void FUN_00550c00(int param_1,int param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_2 + 2);
  *param_3 = '\0';
  if (1 < param_1) {
    param_1 = param_1 + -1;
    do {
      cVar2 = *pcVar4;
      while ((cVar2 != ',' && (cVar2 != '\0'))) {
        iVar3 = FUN_004b7370(cVar2);
        if (iVar3 != 0) {
          pcVar4 = pcVar4 + 1;
        }
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        cVar2 = *pcVar1;
      }
      if (*pcVar4 != '\0') {
        pcVar4 = pcVar4 + 1;
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  cVar2 = *pcVar4;
  while ((cVar2 != ',' && (cVar2 != '\0'))) {
    iVar3 = FUN_004b7370(cVar2);
    if (iVar3 != 0) {
      *param_3 = *pcVar4;
      param_3 = param_3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    *param_3 = *pcVar4;
    pcVar1 = pcVar4 + 1;
    param_3 = param_3 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  *param_3 = '\0';
  return;
}

