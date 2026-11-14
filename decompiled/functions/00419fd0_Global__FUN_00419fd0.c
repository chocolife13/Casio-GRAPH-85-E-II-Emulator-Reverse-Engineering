// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00419fd0
// entry: 00419fd0  size: 61


int FUN_00419fd0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = &DAT_005d8ba4;
  do {
    if (*pcVar2 == -1) {
      if (0xb < iVar1) {
        return -8;
      }
      (&DAT_005d8ba0)[iVar1 * 2] = 0xffffffff;
      (&DAT_005d8ba4)[iVar1 * 8] = 0;
      return iVar1;
    }
    pcVar2 = pcVar2 + 8;
    iVar1 = iVar1 + 1;
  } while ((int)pcVar2 < 0x5d8c04);
  return -8;
}

