// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004075c0
// entry: 004075c0  size: 63


int FUN_004075c0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (('/' < cVar1) && (cVar1 < ':')) {
    return cVar1 + -0x30;
  }
  if (('`' < cVar1) && (cVar1 < 'g')) {
    return cVar1 + -0x57;
  }
  if (('@' < cVar1) && (cVar1 < 'G')) {
    return cVar1 + -0x37;
  }
  return -1;
}

