// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051e2a0
// entry: 0051e2a0  size: 44


void FUN_0051e2a0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x1c;
  iVar3 = 0;
  cVar2 = *(char *)(param_1 + 0x1c);
  while (cVar2 != '\0') {
    FUN_0051e2d0(param_1,iVar3);
    pcVar1 = (char *)(iVar4 + 0x20);
    iVar4 = iVar4 + 0x20;
    iVar3 = iVar3 + 1;
    cVar2 = *pcVar1;
  }
  return;
}

