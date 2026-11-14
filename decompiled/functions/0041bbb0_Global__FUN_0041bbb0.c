// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041bbb0
// entry: 0041bbb0  size: 462


int FUN_0041bbb0(uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  uint local_4;
  
  iVar4 = param_1 * 0x28;
  puVar1 = &DAT_005d8744 + param_1 * 10;
  if ((((&DAT_005d8744)[param_1 * 10] & 0x80000000) == 0) ||
     (((&DAT_005d8744)[param_1 * 10] & 0xfff0000) != 0x1200000)) {
    return 0;
  }
  iVar2 = FUN_00418e50(*(ushort *)(&DAT_005d8740 + iVar4) + 1);
  if (iVar2 < 0) {
    return iVar2;
  }
  FUN_00419650(0);
  FUN_00419220(&param_1,4);
  if ((param_1 & 0xfff0000) == 0x1300000) {
    FUN_00419650(4);
    FUN_00419220(&local_8,4);
    if ((*puVar1 & 0xfffffff) == local_8) {
      FUN_00419650(10);
      FUN_00419220(&local_4,2);
      FUN_00418f90();
      uVar3 = (local_4 & 0xffff) + (uint)*(ushort *)(&DAT_005d8740 + iVar4);
      if (*(ushort *)(&DAT_005d8740 + iVar4) < uVar3) {
        do {
          iVar2 = FUN_00418e50(uVar3);
          if (iVar2 < 0) {
            return iVar2;
          }
          FUN_00419650(0);
          FUN_00419220(&param_1,4);
          FUN_00419650(4);
          FUN_00419220(&local_8,4);
          if ((param_1 & 0xfff0000) != 0x1300000) {
            return -6;
          }
          if ((*puVar1 & 0xfffffff) != local_8) {
            return -6;
          }
          param_1 = param_1 & 0x7fffffff;
          FUN_00419700(0);
          FUN_004193e0(&param_1,4);
          FUN_00419120();
          FUN_00418f90();
          uVar3 = uVar3 - 1;
        } while ((int)(uint)*(ushort *)(&DAT_005d8740 + iVar4) < (int)uVar3);
      }
      *puVar1 = *puVar1 & 0x7fffffff;
      iVar4 = FUN_00418e50(*(undefined2 *)(&DAT_005d8740 + iVar4));
      if (-1 < iVar4) {
        FUN_00419700(0);
        FUN_004193e0(puVar1,4);
        FUN_00419120();
        FUN_00418f90();
        return 0;
      }
      return iVar4;
    }
  }
  FUN_00418f90();
  return -6;
}

