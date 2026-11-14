// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7490
// entry: 004b7490  size: 56


int FUN_004b7490(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    switch(cVar2) {
    case '\x7f':
    case -0x1b:
    case -0x1a:
    case -0x19:
    case -9:
    case -7:
      param_1 = param_1 + 1;
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    cVar2 = *pcVar1;
  }
  return iVar3;
}

