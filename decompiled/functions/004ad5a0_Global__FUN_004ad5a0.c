// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad5a0
// entry: 004ad5a0  size: 77


uint FUN_004ad5a0(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_005d5870 = DAT_005cd010;
  DAT_005d5760 = DAT_005cd010;
  DAT_005d5b70 = 0x80;
  FUN_004ad5f0();
  iVar2 = 0;
  do {
    FUN_004e5780(PTR_DAT_005c421c + iVar2);
    iVar2 = iVar2 + 0x18;
  } while (iVar2 < 0x2b8);
  FUN_00410260();
  uVar1 = FUN_004add50(0);
  return uVar1 & 0xffffff00;
}

