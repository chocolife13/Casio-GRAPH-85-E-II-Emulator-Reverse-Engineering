// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8730
// entry: 004a8730  size: 58


void FUN_004a8730(uint param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 4 & 0xf;
  cVar1 = (char)uVar2;
  if (uVar2 < 10) {
    cVar1 = cVar1 + '0';
  }
  else {
    cVar1 = cVar1 + '7';
  }
  *param_2 = cVar1;
  cVar1 = (char)(param_1 & 0xf);
  if (9 < (param_1 & 0xf)) {
    param_2[1] = cVar1 + '7';
    param_2[2] = '\0';
    return;
  }
  param_2[1] = cVar1 + '0';
  param_2[2] = '\0';
  return;
}

