// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041a810
// entry: 0041a810  size: 226


int FUN_0041a810(undefined4 param_1,short param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  uint local_c;
  uint local_8;
  int local_4;
  
  uVar2 = 0;
  local_c = 0;
  local_4 = 0;
  local_8 = 0;
  iVar1 = FUN_00418e50(0);
  if (-1 < iVar1) {
    while( true ) {
      FUN_00419650(0);
      FUN_00419220(&local_c,4);
      if ((local_c & 0xfff0000) != 0x2000000) {
        FUN_00418f90();
        return -6;
      }
      FUN_00419650(4);
      FUN_00419220(&local_4,4);
      FUN_00419650(8);
      FUN_00419220(&local_8,4);
      if (((local_8 & 0xffff0000) == 0) && ((short)local_8 == param_2)) break;
      uVar2 = uVar2 + 1;
      if (0x18 < uVar2) goto LAB_0041a8e4;
      iVar1 = FUN_00418e50(uVar2);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    iVar1 = (param_3 & 0xffff) + local_4;
LAB_0041a8e4:
    FUN_00418f90();
  }
  return iVar1;
}

