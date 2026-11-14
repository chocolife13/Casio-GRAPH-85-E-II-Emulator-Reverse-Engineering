// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a28b0
// entry: 004a28b0  size: 69


void FUN_004a28b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_005d6060;
  do {
    if ((*(short *)(iVar1 + iVar2) == 0x38e) || (*(short *)(iVar1 + iVar2) == 0x3b0)) {
      *(undefined2 *)(iVar1 + iVar2) = 0;
      *(undefined2 *)(iVar1 + 2 + DAT_005d6060) = 0;
      *(undefined4 *)(iVar1 + 4 + DAT_005d6060) = 0;
      iVar2 = DAT_005d6060;
    }
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x30);
  return;
}

