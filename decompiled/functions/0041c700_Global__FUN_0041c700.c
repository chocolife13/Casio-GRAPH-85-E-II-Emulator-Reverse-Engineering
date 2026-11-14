// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c700
// entry: 0041c700  size: 228


int FUN_0041c700(uint param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  uint local_4;
  
  uVar2 = 0;
  local_4 = 0xffffffff;
  iVar1 = FUN_00418e50(0);
  if (iVar1 < 0) {
    return iVar1;
  }
  while( true ) {
    FUN_00419650(0);
    FUN_00419220(&local_4,4);
    if ((local_4 & 0xfff0000) != 0x2000000) break;
    FUN_00419650(0xc);
    FUN_00419220(&local_4,4);
    if (local_4 == ((param_1 ^ param_2) & 0xffff ^ param_1)) {
      FUN_00419650(4);
      FUN_00419220(&local_4,4);
      iVar1 = FUN_0041c4f0(local_4);
      if (-1 < iVar1) goto LAB_0041c7ce;
    }
    FUN_00418f90();
    uVar2 = uVar2 + 1;
    if (0x18 < uVar2) {
      return -0x1a;
    }
    iVar1 = FUN_00418e50(uVar2);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  iVar1 = -6;
LAB_0041c7ce:
  FUN_00418f90();
  return iVar1;
}

