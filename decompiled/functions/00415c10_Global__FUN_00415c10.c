// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00415c10
// entry: 00415c10  size: 381


void FUN_00415c10(int *param_1)

{
  int iVar1;
  int iVar2;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined1 local_24 [8];
  uint local_1c;
  
  local_30 = 0;
  local_28 = 1;
  local_2c = 0xffffffff;
  if (DAT_005d8730 < 0x19) {
    *param_1 = 0x7ff;
    return;
  }
  *param_1 = 0;
  iVar1 = FUN_00418e50(0);
  if (iVar1 < 0) {
    return;
  }
  while( true ) {
    FUN_00419650(0);
    FUN_00419220(&local_2c,4);
    if (((local_2c & 0xffff) == 0) && (*param_1 = 1, (local_2c & 0xfffffff) == 0x1300000)) break;
    FUN_00418f90();
    local_30 = local_30 + 1;
    if (DAT_005d8730 <= (ushort)local_30) goto LAB_00415d72;
    iVar1 = FUN_00418e50(local_30 & 0xffff);
    if (iVar1 < 0) {
      return;
    }
  }
  FUN_00419650(0xe);
  FUN_00419220(&local_28,2);
  FUN_00418f90();
  local_30 = 0;
  if (DAT_005d8730 != 0) {
    do {
      iVar1 = FUN_0041c7f0(0,local_28 & 0xffff);
      if (iVar1 < 0) break;
      iVar2 = FUN_0041a570(&local_30,local_24);
      if ((-1 < iVar2) && (iVar2 == iVar1)) goto LAB_00415d3e;
      local_30 = local_30 + 1;
    } while ((ushort)local_30 < DAT_005d8730);
  }
LAB_00415d72:
  if (*param_1 != 0) {
    *param_1 = (uint)(DAT_005d8730 >> 1) + *param_1;
  }
  return;
LAB_00415d3e:
  do {
    iVar1 = FUN_0041a570(&local_30,local_24);
    if ((-1 < iVar1) && ((local_1c & 0xffff) != 0)) {
      *param_1 = *param_1 + 1;
    }
    local_30 = local_30 + 1;
  } while ((ushort)local_30 < DAT_005d8730);
  goto LAB_00415d72;
}

