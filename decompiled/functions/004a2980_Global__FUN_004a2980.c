// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2980
// entry: 004a2980  size: 32


undefined4 FUN_004a2980(void)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  psVar2 = DAT_005d6060;
  do {
    if (*psVar2 == 0x37) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    psVar2 = psVar2 + 4;
  } while (iVar1 < 6);
  return 0;
}

