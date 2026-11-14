// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fc120
// entry: 004fc120  size: 168


bool FUN_004fc120(char *param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  
  cVar3 = '\0';
  if (param_2[1] != 0) {
    cVar3 = -param_2[1];
    bVar2 = cVar3 + 0x9a;
    param_2[1] = bVar2;
    if (9 < (bVar2 & 0xf)) {
      param_2[1] = cVar3 + 0xa0;
    }
    if (0x9f < (param_2[1] & 0xf0)) {
      param_2[1] = param_2[1] + 0x60;
    }
    cVar3 = '\x01';
  }
  if ((*param_2 != 0) || (cVar3 != '\0')) {
    bVar2 = (-0x66 - *param_2) - cVar3;
    *param_2 = bVar2;
    if (9 < (bVar2 & 0xf)) {
      *param_2 = bVar2 + 6;
    }
    if (0x9f < (*param_2 & 0xf0)) {
      *param_2 = *param_2 + 0x60;
    }
  }
  iVar1 = FUN_004fc1d0(param_1,param_2);
  if ((param_1[1] & 0xf0U) == 0 && *param_1 == '\0') {
    return false;
  }
  return iVar1 == 0;
}

