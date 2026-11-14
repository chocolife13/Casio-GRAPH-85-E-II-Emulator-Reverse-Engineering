// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048d360
// entry: 0048d360  size: 137


byte FUN_0048d360(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = '\0';
  cVar3 = '\0';
  bVar1 = *(byte *)(param_1 + 0xc) & 0xf0;
  if ((bVar1 != 0x50) && (bVar1 != 0x60)) {
    if ((*(byte *)(param_1 + 0x24) == 0) && (*(char *)(param_1 + 0x25) == '\0')) {
      cVar3 = 'P';
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x24) & 0xf0;
      if ((bVar1 == 0x50) || (bVar1 == 0x60)) {
        cVar2 = 'P';
      }
    }
    if ((*(byte *)(param_1 + 0x30) == 0) && (*(char *)(param_1 + 0x31) == '\0')) {
      cVar3 = cVar3 + 'P';
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x30) & 0xf0;
      if ((bVar1 == 0x50) || (bVar1 == 0x60)) {
        cVar2 = cVar2 + 'P';
      }
    }
    if ((*(byte *)(param_1 + 0x3c) == 0) && (*(char *)(param_1 + 0x3d) == '\0')) {
      cVar3 = cVar3 + 'P';
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x3c) & 0xf0;
      if ((bVar1 == 0x50) || (bVar1 == 0x60)) {
        cVar2 = cVar2 + 'P';
      }
    }
    bVar1 = cVar2 + 0x10;
    if (0x40 < bVar1) {
      bVar1 = bVar1 + cVar3;
    }
    return -(bVar1 < 0x50) & 3;
  }
  return 3;
}

