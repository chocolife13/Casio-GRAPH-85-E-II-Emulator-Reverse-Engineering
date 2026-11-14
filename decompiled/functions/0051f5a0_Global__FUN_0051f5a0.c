// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051f5a0
// entry: 0051f5a0  size: 51


void FUN_0051f5a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1 + 1;
  cVar1 = *param_1;
  pcVar2 = pcVar3;
  while (cVar1 == ' ') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  }
  cVar1 = pcVar2[-1];
  pcVar2 = pcVar2 + -1;
  *param_1 = cVar1;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  return;
}

