// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005545e3
// entry: 005545e3  size: 93


undefined4 FUN_005545e3(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_005d96a0) &&
     ((*(byte *)((&DAT_005d95a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_00559eb8(param_1);
    uVar1 = FUN_00554640(param_1);
    FUN_00559f17(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_005542c1();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_005542ca();
  *puVar2 = 0;
  return 0xffffffff;
}

