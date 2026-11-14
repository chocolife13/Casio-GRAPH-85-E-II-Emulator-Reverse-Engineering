// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00555613
// entry: 00555613  size: 138


int FUN_00555613(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_1 < DAT_005d96a0) &&
     ((*(byte *)((&DAT_005d95a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_00559eb8(param_1);
    iVar1 = FUN_005550ba(param_1,0,1);
    iVar3 = -1;
    if (iVar1 != -1) {
      iVar3 = FUN_005550ba(param_1,0,2);
      if (iVar1 != iVar3) {
        FUN_005550ba(param_1,iVar1,0);
      }
    }
    FUN_00559f17(param_1);
    return iVar3;
  }
  puVar2 = (undefined4 *)FUN_005542c1();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_005542ca();
  *puVar2 = 0;
  return -1;
}

