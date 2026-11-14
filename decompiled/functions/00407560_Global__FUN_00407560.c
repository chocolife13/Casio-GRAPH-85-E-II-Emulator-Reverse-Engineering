// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407560
// entry: 00407560  size: 31


void FUN_00407560(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}

