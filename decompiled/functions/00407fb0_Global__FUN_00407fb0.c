// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407fb0
// entry: 00407fb0  size: 45


void FUN_00407fb0(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~uVar2 - 2;
  if (-1 < iVar3) {
    while (param_1[iVar3] != '\\') {
      if (param_1[iVar3] == '.') {
        param_1[iVar3] = '\0';
        return;
      }
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return;
      }
    }
  }
  return;
}

