// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9b40
// entry: 004f9b40  size: 46


bool FUN_004f9b40(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == ':') {
    return true;
  }
  if (cVar1 == '\r') {
    return true;
  }
  if (cVar1 == '\f') {
    return true;
  }
  return cVar1 == '\0';
}

