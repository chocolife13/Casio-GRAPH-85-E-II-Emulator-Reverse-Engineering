// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041b710
// entry: 0041b710  size: 191


int FUN_0041b710(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int local_8;
  int local_4;
  
  DAT_005d8730 = 0;
  uVar3 = 0;
  while( true ) {
    uVar2 = (uint)uVar3;
    if ((uVar2 % 0x7ff == 0) && (uVar3 != 0)) {
      iVar1 = FUN_00418cd0((int)(uVar2 - 1) / 0x7ff + 1);
      if (iVar1 < 0) {
        return iVar1;
      }
      FUN_00419650(4);
      FUN_00419220(&local_8,4);
      FUN_00418f90();
      if (local_8 == -1) {
        DAT_005d8730 = uVar3;
        return 0;
      }
    }
    iVar1 = FUN_00418e50(uVar2);
    if (iVar1 < 0) {
      return iVar1;
    }
    FUN_00419650(0);
    FUN_00419220(&local_4,4);
    FUN_00418f90();
    if (local_4 == -1) break;
    uVar3 = uVar3 + 1;
    if (0xffd < uVar3) {
      DAT_005d8730 = uVar3;
      return 0;
    }
  }
  DAT_005d8730 = uVar3;
  return 0;
}

