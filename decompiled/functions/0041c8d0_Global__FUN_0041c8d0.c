// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c8d0
// entry: 0041c8d0  size: 211


int FUN_0041c8d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint local_4;
  
  uVar4 = 0;
  local_4 = 0xffffffff;
  iVar2 = FUN_00418e50(0);
  iVar1 = 0;
  if (-1 < iVar2) {
    while( true ) {
      iVar2 = iVar1;
      FUN_00419650(0);
      FUN_00419220(&local_4,4);
      if ((local_4 & 0xfff0000) != 0x2000000) {
        FUN_00418f90();
        return -6;
      }
      FUN_00419650(8);
      FUN_00419220(&local_4,4);
      if ((local_4 & 0xffff0000) == 0xffff0000) {
        FUN_00419650(0xc);
        FUN_00419220(&local_4,4);
        if ((local_4 & 0xffff0000) == 0xffff0000) {
          iVar2 = iVar2 + 1;
        }
      }
      FUN_00418f90();
      uVar4 = uVar4 + 1;
      if (0x18 < uVar4) break;
      iVar3 = FUN_00418e50(uVar4);
      iVar1 = iVar2;
      if (iVar3 < 0) {
        return iVar3;
      }
    }
  }
  return iVar2;
}

