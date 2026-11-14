// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055424e
// entry: 0055424e  size: 115


void FUN_0055424e(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_005542ca();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_005cbdf0;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_005542c1();
      *puVar2 = (&DAT_005cbdf4)[iVar3 * 2];
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar1 < 0x5cbf58);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_005542c1();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_005542c1();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_005542c1();
  *puVar2 = 0x16;
  return;
}

