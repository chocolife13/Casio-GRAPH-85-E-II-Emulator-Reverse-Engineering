// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041ccb0
// entry: 0041ccb0  size: 412


int FUN_0041ccb0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint local_8;
  undefined4 local_4;
  
  uVar4 = 0x18;
  uVar2 = 0xffffffff;
  local_4 = 0xffff;
  local_8 = 0xffffffff;
  uVar3 = 0xffffffff;
  iVar1 = FUN_00418e50(0x18);
  if (-1 < iVar1) {
    while( true ) {
      FUN_00419650(0);
      FUN_00419220(&local_8,4);
      if ((local_8 & 0xfff0000) != 0x2000000) {
        FUN_00418f90();
        return -6;
      }
      FUN_00419650(8);
      FUN_00419220(&local_8,4);
      FUN_00419650(0x14);
      FUN_00419220(&local_4,2);
      if (((local_8 & 0xffff0000) == 0xffff0000) || ((short)local_4 == 0xf)) {
        FUN_00419650(0xc);
        FUN_00419220(&local_8,4);
        if (0xffffffe < local_8) {
          FUN_00419650(0x10);
          FUN_00419220(&local_8,4);
          if (local_8 < uVar3) {
            uVar2 = (uint)uVar4;
            uVar3 = local_8;
          }
        }
      }
      FUN_00418f90();
      uVar4 = uVar4 - 1;
      if (0x18 < uVar4) break;
      iVar1 = FUN_00418e50(uVar4);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    if (uVar2 != 0xffffffff) {
      iVar1 = FUN_00418e50(uVar2);
      if (iVar1 < 0) {
        return iVar1;
      }
      local_8 = 0xfffffff;
      FUN_00419700(0xc);
      FUN_004193e0(&local_8,4);
      FUN_00419120();
      FUN_00419650(4);
      FUN_00419220(&local_8,4);
      iVar1 = FUN_0041c4f0(local_8);
      if (-1 < iVar1) {
        FUN_00418f90();
      }
    }
    FUN_00418f90();
  }
  return iVar1;
}

