// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00533080
// entry: 00533080  size: 28


char FUN_00533080(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00532fb0(param_1);
  if ((cVar1 == '\x03') && (*(char *)(param_1 + 1) == '\x1a')) {
    cVar1 = '\x04';
  }
  return cVar1;
}

