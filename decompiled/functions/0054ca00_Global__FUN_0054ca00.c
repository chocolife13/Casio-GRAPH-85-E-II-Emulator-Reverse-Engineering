// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054ca00
// entry: 0054ca00  size: 31


char FUN_0054ca00(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 != '\"') && (cVar1 != '\'')) {
    return (cVar1 == '=') + '\x01';
  }
  return '\x03';
}

