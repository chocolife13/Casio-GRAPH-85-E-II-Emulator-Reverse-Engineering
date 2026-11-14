// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f3e10
// entry: 004f3e10  size: 158


undefined4 FUN_004f3e10(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = FUN_004f9a20(param_1);
  if (iVar3 != 0) {
    return 1;
  }
  cVar1 = *param_1;
  if ((cVar1 == -7) && (param_1[1] == '\x1b')) {
    return 1;
  }
  if (cVar1 == '\x7f') {
    bVar2 = param_1[1];
    if ((0xef < bVar2) && (bVar2 < 0xf5)) {
      return 1;
    }
    if (bVar2 == 0xa7) {
      return 1;
    }
    if (bVar2 == 0xa8) {
      return 1;
    }
    if (bVar2 == 0xa9) {
      return 1;
    }
    if (bVar2 == 0xa0) {
      return 1;
    }
    if (bVar2 == 0xa1) {
      return 1;
    }
    if (bVar2 == 0xa2) {
      return 1;
    }
  }
  else if (((cVar1 == -7) && (0x11 < (byte)param_1[1])) && ((byte)param_1[1] < 0x15)) {
    return 1;
  }
  return 0;
}

