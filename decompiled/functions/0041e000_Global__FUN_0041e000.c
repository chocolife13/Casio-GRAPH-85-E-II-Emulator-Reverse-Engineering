// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041e000
// entry: 0041e000  size: 53


void FUN_0041e000(void)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  psVar2 = &DAT_005d86a0;
  do {
    if (*psVar2 == 0xffe) {
      if (3 < iVar1) {
        FUN_00419fc0(0xffffffe2);
      }
      return;
    }
    psVar2 = psVar2 + 0x12;
    iVar1 = iVar1 + 1;
  } while ((int)psVar2 < 0x5d8730);
  FUN_00419fc0(0xffffffe2);
  return;
}

