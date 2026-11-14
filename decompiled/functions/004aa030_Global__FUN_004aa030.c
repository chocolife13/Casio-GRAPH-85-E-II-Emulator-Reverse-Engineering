// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aa030
// entry: 004aa030  size: 52


int FUN_004aa030(uint param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1 == 0xffffffff) {
    param_1 = (uint)DAT_005d6c32;
  }
  pcVar4 = DAT_005d6cc4;
  if (param_1 != 0) {
    pcVar4 = DAT_005d6808;
  }
  iVar3 = 0;
  cVar2 = *pcVar4;
  while (cVar2 == 'U') {
    pcVar1 = pcVar4 + 1;
    iVar3 = iVar3 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  return iVar3;
}

