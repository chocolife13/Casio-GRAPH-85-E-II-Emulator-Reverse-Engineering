// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00487bf0
// entry: 00487bf0  size: 81


int FUN_00487bf0(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0x7c;
  do {
    if (*(char *)(iVar3 + param_1) != '\0') break;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar1 = 7;
  bVar2 = 0;
  do {
    if ((*(byte *)(iVar3 + param_1) >> (bVar2 & 0x1f) & 1) != 0) {
      if (iVar1 < 0) {
        return 0;
      }
      return iVar1 + 1 + iVar3 * 8;
    }
    iVar1 = iVar1 + -1;
    bVar2 = bVar2 + 1;
  } while (-1 < iVar1);
  return 0;
}

