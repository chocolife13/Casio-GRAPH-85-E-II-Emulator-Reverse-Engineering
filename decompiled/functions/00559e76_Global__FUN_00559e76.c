// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00559e76
// entry: 00559e76  size: 66


undefined4 FUN_00559e76(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_005d96a0) &&
     ((*(byte *)((&DAT_005d95a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_005d95a0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_005542c1();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_005542ca();
  *puVar1 = 0;
  return 0xffffffff;
}

