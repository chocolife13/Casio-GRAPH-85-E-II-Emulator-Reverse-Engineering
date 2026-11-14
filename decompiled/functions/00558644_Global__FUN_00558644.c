// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00558644
// entry: 00558644  size: 43


uint FUN_00558644(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_005d96b8;
  while( true ) {
    if (DAT_005d96b8 + DAT_005d96b4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

