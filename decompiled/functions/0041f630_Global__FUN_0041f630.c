// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f630
// entry: 0041f630  size: 46


void FUN_0041f630(int param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar2 = cVar1 + 'A';
  }
  else {
    cVar2 = cVar1 + 'S';
  }
  *(char *)(param_1 + 0xe) = cVar2;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(char *)(param_1 + 0x14) = cVar1 + '.';
    return;
  }
  *(char *)(param_1 + 0x14) = cVar1 + -0x48;
  return;
}

