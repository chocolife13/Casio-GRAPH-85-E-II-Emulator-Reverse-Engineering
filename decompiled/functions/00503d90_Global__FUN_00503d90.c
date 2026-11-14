// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00503d90
// entry: 00503d90  size: 56


char FUN_00503d90(uint param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
    if (((param_1 & 0x400) == 0) || (cVar1 = '\x02', (param_1 & 1) == 0)) {
      cVar1 = '\x01';
    }
    return cVar1;
  }
  if ((param_1 & 0x400) != 0) {
    return (-((param_1 & 1) != 0) & 2U) + 3;
  }
  return '\x02';
}

